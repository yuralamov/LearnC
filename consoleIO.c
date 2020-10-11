/*Ввод-вывод основных типов переменных в консоли*/

#include <stdio.h> //Операции ввода-вывода
#include <locale.h> //Для кодировок, отличных от UTF
#include <limits.h> //Работа с диапазоними для типов

void type_integer()
{
    printf("Целочисленное значение int\n");
    printf("Размер типа int\t: %d байт\t", sizeof(int));
    printf("от %d до %d\n", INT_MAX, INT_MIN);
    int a = 1;
    printf("В программе  переменной a присвоено значение \"%d\"\n", a);
    int b;
    printf("Введите целое число для переменной b\t");
    scanf("%d", &b);
    printf("Введеное значение: \"%d\"\n", b);
    int c = a+b;
    printf("Сумма %d + %d = %d\n",a,b,c);
}

int main()
{
    setlocale(LC_ALL, "rus");

    type_integer();

    return 0;
}

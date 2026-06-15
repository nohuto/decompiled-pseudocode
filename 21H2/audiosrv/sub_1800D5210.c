/*
 * XREFs of sub_1800D5210 @ 0x1800D5210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800036C4 @ 0x1800036C4 (sub_1800036C4.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

void *__fastcall sub_1800D5210(void *a1, char a2)
{
  sub_1800036C4((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}

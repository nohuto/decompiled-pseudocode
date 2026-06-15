/*
 * XREFs of sub_1800D0E70 @ 0x1800D0E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800D0D94 @ 0x1800D0D94 (sub_1800D0D94.c)
 */

void *__fastcall sub_1800D0E70(void *a1, char a2)
{
  sub_1800D0D94((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}

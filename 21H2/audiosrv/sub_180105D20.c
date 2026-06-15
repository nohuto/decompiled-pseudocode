/*
 * XREFs of sub_180105D20 @ 0x180105D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1801059D0 @ 0x1801059D0 (sub_1801059D0.c)
 */

void *__fastcall sub_180105D20(void *a1, char a2)
{
  sub_1801059D0((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}

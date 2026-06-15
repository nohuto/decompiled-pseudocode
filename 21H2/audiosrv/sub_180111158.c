/*
 * XREFs of sub_180111158 @ 0x180111158
 * Callers:
 *     sub_180074C80 @ 0x180074C80 (sub_180074C80.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_180111158(_QWORD *a1, char a2)
{
  *a1 = off_180148F88;
  a1[1] = &off_180147338;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}

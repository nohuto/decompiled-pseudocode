/*
 * XREFs of sub_180134870 @ 0x180134870
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180134610 @ 0x180134610 (sub_180134610.c)
 */

_QWORD *__fastcall sub_180134870(_QWORD *a1, char a2)
{
  sub_180134610(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}

/*
 * XREFs of sub_1801268C0 @ 0x1801268C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180126830 @ 0x180126830 (sub_180126830.c)
 */

_QWORD *__fastcall sub_1801268C0(_QWORD *a1, char a2)
{
  sub_180126830(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}

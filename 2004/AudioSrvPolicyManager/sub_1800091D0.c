/*
 * XREFs of sub_1800091D0 @ 0x1800091D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_DWORD *__fastcall sub_1800091D0(_DWORD *a1, char a2)
{
  a1[7] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

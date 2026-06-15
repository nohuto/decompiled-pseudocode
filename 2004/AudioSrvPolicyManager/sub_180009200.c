/*
 * XREFs of sub_180009200 @ 0x180009200
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_DWORD *__fastcall sub_180009200(_DWORD *a1, char a2)
{
  a1[5] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

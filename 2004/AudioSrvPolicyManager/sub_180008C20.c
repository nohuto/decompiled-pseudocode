/*
 * XREFs of sub_180008C20 @ 0x180008C20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_DWORD *__fastcall sub_180008C20(_DWORD *a1, char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

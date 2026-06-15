/*
 * XREFs of sub_18000D4B0 @ 0x18000D4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

_DWORD *__fastcall sub_18000D4B0(_DWORD *a1, char a2)
{
  a1[13] = -1073741823;
  *(_QWORD *)a1 = &off_18003ED50;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

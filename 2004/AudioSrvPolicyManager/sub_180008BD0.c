/*
 * XREFs of sub_180008BD0 @ 0x180008BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A300 @ 0x18000A300 (sub_18000A300.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

__int64 __fastcall sub_180008BD0(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
    sub_18000A300(v4);
  *(_DWORD *)(a1 + 28) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98((void *)a1);
  return a1;
}

/*
 * XREFs of sub_18006C574 @ 0x18006C574
 * Callers:
 *     sub_18006CD70 @ 0x18006CD70 (sub_18006CD70.c)
 *     sub_18006CED4 @ 0x18006CED4 (sub_18006CED4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18006C574(_DWORD *a1, unsigned __int64 a2, char a3)
{
  bool v3; // zf
  __int64 v4; // rax

  if ( a3 )
    v3 = !_BitScanForward64((unsigned __int64 *)&v4, a2);
  else
    v3 = !_BitScanReverse64((unsigned __int64 *)&v4, a2);
  *a1 = v4;
  return !v3;
}

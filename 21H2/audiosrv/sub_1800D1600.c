/*
 * XREFs of sub_1800D1600 @ 0x1800D1600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_1800D0FCC @ 0x1800D0FCC (sub_1800D0FCC.c)
 */

__int64 __fastcall sub_1800D1600(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v4 = sub_1800D0FCC(a2, a4);
  v5 = v4;
  if ( v4 < 0 )
    sub_18006D26C(
      (int)retaddr,
      98,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      v4);
  return v5;
}

/*
 * XREFs of sub_18006B8A0 @ 0x18006B8A0
 * Callers:
 *     sub_18000DA20 @ 0x18000DA20 (sub_18000DA20.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 * Callees:
 *     sub_18002A490 @ 0x18002A490 (sub_18002A490.c)
 */

__int64 __fastcall sub_18006B8A0(__int64 a1, int a2)
{
  int v3; // edx
  __int64 result; // rax
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  sub_18002A490(a1, 0x2001u, 1, (__int64 (__fastcall *)(__int64, HANDLE, _QWORD, __int64))sub_18006ACE0, (__int64)&v5);
  v3 = v5;
  result = (*(_DWORD *)(a1 + 1244) ^ (16 * v5)) & 0x10;
  *(_DWORD *)(a1 + 1244) ^= result;
  if ( !v3 )
    *(_DWORD *)(a1 + 1240) &= ~8u;
  return result;
}

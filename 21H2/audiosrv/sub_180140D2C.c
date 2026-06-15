/*
 * XREFs of sub_180140D2C @ 0x180140D2C
 * Callers:
 *     sub_180141124 @ 0x180141124 (sub_180141124.c)
 * Callees:
 *     sub_180055E9C @ 0x180055E9C (sub_180055E9C.c)
 */

__int64 __fastcall sub_180140D2C(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 result; // rax

  *(_QWORD *)a1 = off_180156400;
  *(_QWORD *)(a1 + 8) = off_180156468;
  *(_DWORD *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 64) = 10;
  *(_DWORD *)(a1 + 112) = 10;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  sub_180055E9C(a1 + 120, a2, 0.75, 0.25, 1074790400);
  *(_QWORD *)(v2 + 192) = v3;
  *(_DWORD *)(v2 + 216) = v3;
  result = v2;
  *(_OWORD *)(v2 + 200) = 0LL;
  return result;
}

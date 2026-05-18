/*
 * XREFs of sub_180043DD8 @ 0x180043DD8
 * Callers:
 *     sub_180043F74 @ 0x180043F74 (sub_180043F74.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180043DD8(__int64 a1, __int128 *a2, int a3, int a4)
{
  __int128 v4; // xmm0
  __int64 result; // rax

  v4 = *a2;
  *(_DWORD *)(a1 + 16) = a3;
  result = a1;
  *(_DWORD *)(a1 + 20) = a4;
  *(_OWORD *)a1 = v4;
  return result;
}

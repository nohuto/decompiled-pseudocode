/*
 * XREFs of sub_180001664 @ 0x180001664
 * Callers:
 *     sub_1800014F0 @ 0x1800014F0 (sub_1800014F0.c)
 *     sub_1800767F0 @ 0x1800767F0 (sub_1800767F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001664(__int64 a1)
{
  int v2; // r8d
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  RtlQueryUnbiasedInterruptTime(&v5);
  v2 = *(_DWORD *)(a1 + 64);
  result = 3000LL;
  v4 = v5 / 0x2710 - *(_DWORD *)(a1 + 8);
  if ( v4 >= 0xBB8 )
  {
    *(_DWORD *)(a1 + 64) = v2 & 0xFFFFFFFE;
  }
  else
  {
    *(_DWORD *)(a1 + 64) = v2 | 1;
    v6 = -10000LL * (3000 - v4);
    return TpSetTimer(*(_QWORD *)(a1 + 24), &v6, 0LL, 0LL);
  }
  return result;
}

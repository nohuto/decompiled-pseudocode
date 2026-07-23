/*
 * XREFs of HsaFlushDomainTb @ 0x1404E2F90
 * Callers:
 *     <none>
 * Callees:
 *     HsaFlushTbInternal @ 0x1404E303C (HsaFlushTbInternal.c)
 */

__int64 __fastcall HsaFlushDomainTb(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r8d
  _QWORD v7[3]; // [rsp+50h] [rbp-18h] BYREF

  v5 = *(_DWORD *)(a2 + 24);
  v7[1] = v7;
  v7[0] = v7;
  return HsaFlushTbInternal(a1, 0, v5, 0, 1, 0, (__int64)v7, a4, a5);
}

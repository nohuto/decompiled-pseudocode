/*
 * XREFs of HsaFlushTb @ 0x1404E2FF0
 * Callers:
 *     <none>
 * Callees:
 *     HsaFlushTbInternal @ 0x1404E303C (HsaFlushTbInternal.c)
 */

__int64 __fastcall HsaFlushTb(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r10

  v6 = a4;
  LOBYTE(a4) = a2 == -1;
  return HsaFlushTbInternal(a1, a2, 0, a4, 0, a3, v6, a5, a6);
}

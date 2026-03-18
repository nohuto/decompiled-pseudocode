/*
 * XREFs of CcFlushCacheToLsn @ 0x140387830
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 */

void __fastcall CcFlushCacheToLsn(__int64 a1, signed __int64 *a2, int *a3)
{
  CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3);
}

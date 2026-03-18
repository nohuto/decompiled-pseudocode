/*
 * XREFs of CcFlushCacheToLsn @ 0x14031D240
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14022C120 (CcFlushCachePriv.c)
 */

__int64 __fastcall CcFlushCacheToLsn(__int64 a1, __int64 a2, unsigned int *a3)
{
  return CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3);
}

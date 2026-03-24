/*
 * XREFs of CcFlushCacheToLsn @ 0x1402CCE90
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 */

void __fastcall CcFlushCacheToLsn(__int64 a1, __int64 a2, __int128 *a3)
{
  CcFlushCachePriv(a1, 0LL, 0, a2, 0, a3);
}

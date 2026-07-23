/*
 * XREFs of CcFlushCacheToLsn @ 0x14024B390
 * Callers:
 *     <none>
 * Callees:
 *     CcFlushCachePriv @ 0x1402D13F0 (CcFlushCachePriv.c)
 */

__int64 __fastcall CcFlushCacheToLsn(int a1, int a2, __int64 a3)
{
  return CcFlushCachePriv(a1, 0, 0, a2, 0, a3);
}

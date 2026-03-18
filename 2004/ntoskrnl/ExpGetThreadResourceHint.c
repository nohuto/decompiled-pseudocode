/*
 * XREFs of ExpGetThreadResourceHint @ 0x14022A080
 * Callers:
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14022CBA0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405AF810 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpGetThreadResourceHint(__int64 a1)
{
  if ( (a1 & 3) != 0 )
    return 0LL;
  else
    return *(unsigned __int8 *)(a1 + 649);
}

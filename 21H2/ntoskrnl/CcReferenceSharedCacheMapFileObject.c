/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1402F57D0
 * Callers:
 *     CcWriteBehindInternal @ 0x14022DA70 (CcWriteBehindInternal.c)
 *     CcIsFatalWriteError @ 0x1402C1E0C (CcIsFatalWriteError.c)
 *     CcPurgeAndClearCacheSection @ 0x1402EF194 (CcPurgeAndClearCacheSection.c)
 *     CcUnmapAndPurge @ 0x1402F4070 (CcUnmapAndPurge.c)
 *     CcGetDirtyPagesHelper @ 0x1402F4200 (CcGetDirtyPagesHelper.c)
 *     CcPerfLogFlushCache @ 0x1403BD098 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BD19C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BD5AC (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA760 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1406EA378 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1402F5800 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}

/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x1402C5484
 * Callers:
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x1402C2FD0 (CcGetDirtyPagesHelper.c)
 *     CcUnmapAndPurge @ 0x1402C67F0 (CcUnmapAndPurge.c)
 *     CcPurgeAndClearCacheSection @ 0x1403203EC (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14034FA44 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1403BA108 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BA20C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BA61C (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5640 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1406973FC (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140299120 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1402C54B4 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}

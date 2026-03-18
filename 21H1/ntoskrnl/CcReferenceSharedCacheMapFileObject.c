/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x140232654
 * Callers:
 *     CcWriteBehindInternal @ 0x14022CE40 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x1402301A0 (CcGetDirtyPagesHelper.c)
 *     CcUnmapAndPurge @ 0x1402339C0 (CcUnmapAndPurge.c)
 *     CcPurgeAndClearCacheSection @ 0x1402CDFA8 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x140312254 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1403B8D98 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403B8E9C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403B92AC (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5090 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1405EDEFC (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140206610 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140232684 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}

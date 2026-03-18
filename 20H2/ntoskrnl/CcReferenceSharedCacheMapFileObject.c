/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x140247FF4
 * Callers:
 *     CcUnmapAndPurge @ 0x140247F2C (CcUnmapAndPurge.c)
 *     CcWriteBehindInternal @ 0x140295920 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x14029CC30 (CcGetDirtyPagesHelper.c)
 *     CcPurgeAndClearCacheSection @ 0x140316714 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x1403206AC (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1403BC588 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BC68C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BCA9C (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1404E8BD0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x14067DAE8 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x140210F10 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140248024 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}

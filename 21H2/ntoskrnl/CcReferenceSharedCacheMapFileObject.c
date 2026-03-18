/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x14027A1B4
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14023C1EC (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x140248C10 (CcIsFatalWriteError.c)
 *     CcUnmapAndPurge @ 0x140276BF8 (CcUnmapAndPurge.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x140289D20 (CcGetDirtyPagesHelper.c)
 *     CcPerfLogFlushSection @ 0x1403AE0B0 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403AE198 (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AE50C (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1406FAEA0 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14027A950 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14027B4B8 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

__int64 __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 result; // rax

  result = ObFastReferenceObject(a1 + 96, 1666409283LL);
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}

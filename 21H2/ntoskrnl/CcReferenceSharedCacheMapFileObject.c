/*
 * XREFs of CcReferenceSharedCacheMapFileObject @ 0x140300520
 * Callers:
 *     CcIsFatalWriteError @ 0x1402402AC (CcIsFatalWriteError.c)
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcPurgeAndClearCacheSection @ 0x1402F9EE4 (CcPurgeAndClearCacheSection.c)
 *     CcUnmapAndPurge @ 0x1402FEDC0 (CcUnmapAndPurge.c)
 *     CcGetDirtyPagesHelper @ 0x1402FEF50 (CcGetDirtyPagesHelper.c)
 *     CcPerfLogFlushCache @ 0x1403BD208 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BD30C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BD71C (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA9A0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x140701758 (CcUnmapVacb.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140300550 (CcSlowReferenceSharedCacheMapFileObject.c)
 */

ULONG_PTR __fastcall CcReferenceSharedCacheMapFileObject(__int64 a1)
{
  ULONG_PTR result; // rax

  result = ObFastReferenceObject((signed __int64 *)(a1 + 96));
  if ( !result )
    return CcSlowReferenceSharedCacheMapFileObject(a1);
  return result;
}

/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x1402C5438
 * Callers:
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x1402C2FD0 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 *     CcUnmapAndPurge @ 0x1402C67F0 (CcUnmapAndPurge.c)
 *     CcPurgeAndClearCacheSection @ 0x1403203EC (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14034FA44 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1403BA108 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BA20C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BA61C (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5640 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1406973FC (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140289860 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall CcDereferenceSharedCacheMapFileObject(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 96);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, 0x746C6644u);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}

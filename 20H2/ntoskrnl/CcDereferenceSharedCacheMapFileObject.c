/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x140247FA8
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140247C98 (CcDeleteSharedCacheMap.c)
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
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140217F10 (ObDereferenceObjectDeferDeleteWithTag.c)
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

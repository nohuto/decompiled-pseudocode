/*
 * XREFs of ObFastDereferenceObjectDeferDelete @ 0x140230680
 * Callers:
 *     CcPurgeAndClearCacheSection @ 0x14023C1EC (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x140248C10 (CcIsFatalWriteError.c)
 *     MiDeprioritizeVad @ 0x1402598CC (MiDeprioritizeVad.c)
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     CcUnmapAndPurge @ 0x140276BF8 (CcUnmapAndPurge.c)
 *     MmFlushSection @ 0x140283C50 (MmFlushSection.c)
 *     CcWriteBehindInternal @ 0x140288760 (CcWriteBehindInternal.c)
 *     CcGetDirtyPagesHelper @ 0x140289D20 (CcGetDirtyPagesHelper.c)
 *     MiGatherMappedPages @ 0x14028B330 (MiGatherMappedPages.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiCompleteRestrictedImageFault @ 0x1402CB710 (MiCompleteRestrictedImageFault.c)
 *     MiCreateSystemSection @ 0x1402D9E3C (MiCreateSystemSection.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiMakeSystemCachePteValid @ 0x140367828 (MiMakeSystemCachePteValid.c)
 *     CcPerfLogFlushSection @ 0x1403AE0B0 (CcPerfLogFlushSection.c)
 *     CcPerfLogFlushCache @ 0x1403AE198 (CcPerfLogFlushCache.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403AE50C (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     CcUnmapVacb @ 0x1406FAEA0 (CcUnmapVacb.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall ObFastDereferenceObjectDeferDelete(signed __int64 *a1, unsigned __int64 a2, ULONG a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  _m_prefetchw(a1);
  v3 = *a1;
  if ( (a2 ^ *a1) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)a2, a3);
  }
  else
  {
    while ( 1 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange64(a1, v3 + 1, v3);
      if ( v4 == v3 )
        break;
      if ( (a2 ^ v3) >= 0xF )
        goto LABEL_4;
    }
    ObpTraceObjectDereferenceIfActive(a2 - 48, 1LL);
  }
}

/*
 * XREFs of RtlpInterlockedFlushSList @ 0x140405340
 * Callers:
 *     RtlpHpVsContextFree @ 0x140215910 (RtlpHpVsContextFree.c)
 *     ExpHpCompactionRoutine @ 0x140237CC0 (ExpHpCompactionRoutine.c)
 *     RtlpHpHeapCompact @ 0x14023AF04 (RtlpHpHeapCompact.c)
 *     PfFbBufferListFlushStandby @ 0x1402441B8 (PfFbBufferListFlushStandby.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14025DA54 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiFreePageFileHashPfns @ 0x140265F8C (MiFreePageFileHashPfns.c)
 *     MiDrainZeroLookasides @ 0x140315D30 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x14031CFC0 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x14031D050 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14032AAF4 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14032D340 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405585F0 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x14055D310 (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405AD6D0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405AD96C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfpFlushEventBuffers @ 0x14064B4D0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x14064B810 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x14086BFE0 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1408E11B0 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1408E1C24 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408E2BFC (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x140944618 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140945138 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x1409452F0 (EtwpCovSampCaptureWorkerThread.c)
 *     PfTAccessTracingCleanup @ 0x14099D47C (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409E3350 (ViPoolDelayFreeTrimThreadRoutine.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedFlushSList(PSLIST_HEADER ListHead)
{
  _SLIST_HEADER v1; // rax
  signed __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0
  unsigned __int8 v4; // tt

  _m_prefetchw(ListHead);
  v1 = *ListHead;
  do
  {
    Alignment = v1.Alignment;
    LOWORD(Alignment) = 0;
    v3 = v1;
    v4 = _InterlockedCompareExchange128((volatile signed __int64 *)ListHead, 0LL, Alignment, (signed __int64 *)&v3);
    v1 = v3;
  }
  while ( !v4 );
  v1.Alignment = v1.Region;
  LOBYTE(v1.Alignment) = *((_BYTE *)&v1.HeaderX64 + 8) & 0xF0;
  return (PSLIST_ENTRY)v1.Alignment;
}

/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1403FF070
 * Callers:
 *     ExpHpCompactionRoutine @ 0x140253400 (ExpHpCompactionRoutine.c)
 *     RtlpHpVsContextFree @ 0x14028A9F0 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapCompact @ 0x1402DB5C4 (RtlpHpHeapCompact.c)
 *     MiFreePageFileHashPfns @ 0x1402F35EC (MiFreePageFileHashPfns.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403027A8 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PfFbBufferListFlushStandby @ 0x1403051BC (PfFbBufferListFlushStandby.c)
 *     MiDrainZeroLookasides @ 0x140344FD0 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x14034C0A0 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x14034C130 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14035A1F4 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14035C97C (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x140554C20 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x140559940 (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405A9B70 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405A9E0C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfpFlushEventBuffers @ 0x1406CE510 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1406CE830 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x1408665C0 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1408DB370 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1408DBDE4 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408DCDBC (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x14093E858 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x14093F378 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093F530 (EtwpCovSampCaptureWorkerThread.c)
 *     PfTAccessTracingCleanup @ 0x14099743C (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409DD330 (ViPoolDelayFreeTrimThreadRoutine.c)
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

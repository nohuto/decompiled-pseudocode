/*
 * XREFs of RtlpInterlockedFlushSList @ 0x1403FDDE0
 * Callers:
 *     MiFreePageFileHashPfns @ 0x1402402EC (MiFreePageFileHashPfns.c)
 *     RtlpHpVsContextFree @ 0x14024E150 (RtlpHpVsContextFree.c)
 *     ExpHpCompactionRoutine @ 0x1402AC430 (ExpHpCompactionRoutine.c)
 *     PfFbBufferListFlushStandby @ 0x1402C2F04 (PfFbBufferListFlushStandby.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402D2268 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     MiDrainZeroLookasides @ 0x1403071D0 (MiDrainZeroLookasides.c)
 *     ExpFlushGeneralLookaside @ 0x14030EBC0 (ExpFlushGeneralLookaside.c)
 *     ExFlushLookasideListEx @ 0x14030EC50 (ExFlushLookasideListEx.c)
 *     ExpWorkerFactoryDeferredThreadCreation @ 0x14031C624 (ExpWorkerFactoryDeferredThreadCreation.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14031EE6C (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     RtlpHpHeapCompact @ 0x14035DBEC (RtlpHpHeapCompact.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1405545D0 (MiDeleteDeferredCloneDescriptors.c)
 *     MiInsertPteTracker @ 0x1405592F0 (MiInsertPteTracker.c)
 *     EtwpCovSampCaptureQueueDpc @ 0x1405A9480 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1405A971C (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 *     PfpFlushEventBuffers @ 0x140653EB0 (PfpFlushEventBuffers.c)
 *     PfpFlushBuffers @ 0x1406541D0 (PfpFlushBuffers.c)
 *     CmUnRegisterCallback @ 0x1408652A0 (CmUnRegisterCallback.c)
 *     ObpInitStackAndObjectTables @ 0x1408DA000 (ObpInitStackAndObjectTables.c)
 *     ObpStopRuntimeStackTrace @ 0x1408DAA74 (ObpStopRuntimeStackTrace.c)
 *     PfTCleanup @ 0x1408DBA4C (PfTCleanup.c)
 *     EtwpFreeStackCache @ 0x14093D5D8 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x14093E0F8 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampCaptureWorkerThread @ 0x14093E2B0 (EtwpCovSampCaptureWorkerThread.c)
 *     PfTAccessTracingCleanup @ 0x14099606C (PfTAccessTracingCleanup.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1409DD2D0 (ViPoolDelayFreeTrimThreadRoutine.c)
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

/*
 * XREFs of PsGetIoPriorityThread @ 0x1402B8E80
 * Callers:
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     MiFinishMdlForMappedFileFault @ 0x14025F04C (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x1402B84F0 (ExpWorkerThread.c)
 *     IoRetrievePriorityInfo @ 0x1402BC880 (IoRetrievePriorityInfo.c)
 *     CcScheduleReadAheadEx @ 0x1402C8600 (CcScheduleReadAheadEx.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402D0858 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiIssueFlowThroughFault @ 0x1403125E8 (MiIssueFlowThroughFault.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1403216F0 (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlpWaitForIoAtEof @ 0x1403248CC (FsRtlpWaitForIoAtEof.c)
 *     PfSnCheckLoggingForThread @ 0x140329450 (PfSnCheckLoggingForThread.c)
 *     KiAbSetMinimumThreadPriority @ 0x14032A364 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x14032A734 (KiAbTryIncrementIoWaiterCounts.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14033D220 (IopBuildAsynchronousFsdRequest.c)
 *     ExpApplyPrewaitBoost @ 0x1403431A0 (ExpApplyPrewaitBoost.c)
 *     CcForceWriteThrough @ 0x14035A9BC (CcForceWriteThrough.c)
 *     EtwpTraceThreadRundown @ 0x1403A65C0 (EtwpTraceThreadRundown.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053AC64 (MiCopyImageExtentContents.c)
 *     NtSetInformationVirtualMemory @ 0x140606910 (NtSetInformationVirtualMemory.c)
 *     EtwTraceThread @ 0x14064E3B4 (EtwTraceThread.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406579D0 (PspBoostJobIoPriorityCallback.c)
 *     PfSnBeginScenario @ 0x1406B81CC (PfSnBeginScenario.c)
 *     MmPrefetchVirtualAddresses @ 0x1406D0330 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x1406D6974 (MiLogRelocationRva.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetIoPriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1296) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 )
    result = 0LL;
  if ( (unsigned int)result < 2 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(a1 + 1360) )
      return 2LL;
  }
  return result;
}

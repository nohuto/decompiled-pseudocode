/*
 * XREFs of PsGetIoPriorityThread @ 0x140226200
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x140225870 (ExpWorkerThread.c)
 *     IoRetrievePriorityInfo @ 0x140229C00 (IoRetrievePriorityInfo.c)
 *     CcScheduleReadAheadEx @ 0x1402357D0 (CcScheduleReadAheadEx.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x14023DA28 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402B807C (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1402D0704 (CcBoostLowPriorityWorkerThread.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402DD594 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x1402DD964 (KiAbTryIncrementIoWaiterCounts.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402EAF9C (FsRtlpWaitForIoAtEof.c)
 *     ExpApplyPrewaitBoost @ 0x140305750 (ExpApplyPrewaitBoost.c)
 *     CcForceWriteThrough @ 0x14031CDDC (CcForceWriteThrough.c)
 *     PfSnCheckLoggingForThread @ 0x140324330 (PfSnCheckLoggingForThread.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403401B0 (IopBuildAsynchronousFsdRequest.c)
 *     MiIssueFlowThroughFault @ 0x140341920 (MiIssueFlowThroughFault.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     EtwpTraceThreadRundown @ 0x1403AA290 (EtwpTraceThreadRundown.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A258 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053A614 (MiCopyImageExtentContents.c)
 *     NtSetInformationVirtualMemory @ 0x14063BA60 (NtSetInformationVirtualMemory.c)
 *     PfSnBeginScenario @ 0x14065003C (PfSnBeginScenario.c)
 *     MmPrefetchVirtualAddresses @ 0x140655CD0 (MmPrefetchVirtualAddresses.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406754D0 (PspBoostJobIoPriorityCallback.c)
 *     MiLogRelocationRva @ 0x1406EED64 (MiLogRelocationRva.c)
 *     EtwTraceThread @ 0x140700C44 (EtwTraceThread.c)
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

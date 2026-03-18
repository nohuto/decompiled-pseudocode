/*
 * XREFs of PsGetIoPriorityThread @ 0x14028EE50
 * Callers:
 *     MiIssueFlowThroughFault @ 0x140201C48 (MiIssueFlowThroughFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x1402326FC (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     KiAbSetMinimumThreadPriority @ 0x140243354 (KiAbSetMinimumThreadPriority.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140243D08 (KiAbTryIncrementIoWaiterCounts.c)
 *     CcScheduleReadAheadEx @ 0x140248720 (CcScheduleReadAheadEx.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     IoPageReadEx @ 0x14024E230 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x14024E538 (IoSynchronousPageWriteEx.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140256AB0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     ExpWorkerThread @ 0x14028E4C0 (ExpWorkerThread.c)
 *     IoRetrievePriorityInfo @ 0x1402D8E90 (IoRetrievePriorityInfo.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402F488C (FsRtlpWaitForIoAtEof.c)
 *     ExpApplyPrewaitBoost @ 0x140314650 (ExpApplyPrewaitBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140316460 (CcBoostLowPriorityWorkerThread.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140318510 (IopBuildAsynchronousFsdRequest.c)
 *     CcForceWriteThrough @ 0x14032B52C (CcForceWriteThrough.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     PfSnCheckLoggingForThread @ 0x140356D4C (PfSnCheckLoggingForThread.c)
 *     EtwpTraceThreadRundown @ 0x1403A907C (EtwpTraceThreadRundown.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053E278 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053E634 (MiCopyImageExtentContents.c)
 *     NtSetInformationVirtualMemory @ 0x14062AB80 (NtSetInformationVirtualMemory.c)
 *     EtwTraceThread @ 0x14063BD44 (EtwTraceThread.c)
 *     PfSnBeginScenario @ 0x14064CAE8 (PfSnBeginScenario.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406996F0 (PspBoostJobIoPriorityCallback.c)
 *     MmPrefetchVirtualAddresses @ 0x1406F0920 (MmPrefetchVirtualAddresses.c)
 *     MiLogRelocationRva @ 0x14070D70C (MiLogRelocationRva.c)
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

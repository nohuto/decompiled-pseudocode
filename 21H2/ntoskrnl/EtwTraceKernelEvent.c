/*
 * XREFs of EtwTraceKernelEvent @ 0x14029BFE0
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140211280 (KePrepareClockTimerForIdle.c)
 *     KiEventClockStateChange @ 0x1402116E8 (KiEventClockStateChange.c)
 *     PpmEventIdleStateChange @ 0x14022E7D0 (PpmEventIdleStateChange.c)
 *     EtwpTraceImageUnload @ 0x14027BC2C (EtwpTraceImageUnload.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     EtwTraceProcessTerminate @ 0x14029BF70 (EtwTraceProcessTerminate.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     KiCheckForTimerExpiration @ 0x1402C90F0 (KiCheckForTimerExpiration.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C94E0 (KeResumeClockTimerFromIdle.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     KiRetireDpcList @ 0x1402EAF00 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x1402EBB00 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x1402EC2F0 (KiProcessExpiredTimerList.c)
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402FE5F0 (CcCachemapUninitWorkerThread.c)
 *     CcPerformReadAhead @ 0x140304B40 (CcPerformReadAhead.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiDeleteSystemPagableVm @ 0x1403107D0 (MiDeleteSystemPagableVm.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     MiMakePageAvoidRead @ 0x14032EDC0 (MiMakePageAvoidRead.c)
 *     KiCancelTimer @ 0x140353020 (KiCancelTimer.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     KiTimerExpirationDpc @ 0x140389320 (KiTimerExpirationDpc.c)
 *     KiTimerExpiration @ 0x140389440 (KiTimerExpiration.c)
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x140399184 (PpmEventLegacyProcessorPerfStateChange.c)
 *     PoSetUserPresent @ 0x1403A5FA0 (PoSetUserPresent.c)
 *     CcPerfLogScheduleReadAhead @ 0x1403BC3CC (CcPerfLogScheduleReadAhead.c)
 *     CcPerfLogFlushCache @ 0x1403BD208 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BD30C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BD71C (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x1403C43C4 (CcPerfLogVolumeLogHandleInfo.c)
 *     CcPerfLogLazyWriteScan @ 0x1403C5D50 (CcPerfLogLazyWriteScan.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1404EC760 (CcPerfLogExtraWBThreadAction.c)
 *     IopPerfCompleteRequest @ 0x140508014 (IopPerfCompleteRequest.c)
 *     IopPerfCompletionRoutine @ 0x140508240 (IopPerfCompletionRoutine.c)
 *     IopPerfLogCallEvent @ 0x140508398 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x14050846C (IopPerfLogCallReturnEvent.c)
 *     KiTraceCancelTimer2 @ 0x140523D04 (KiTraceCancelTimer2.c)
 *     KiTraceSetTimer @ 0x140523D9C (KiTraceSetTimer.c)
 *     KiTraceSetTimer2 @ 0x140523ED0 (KiTraceSetTimer2.c)
 *     KiParkUmsThread @ 0x140526160 (KiParkUmsThread.c)
 *     MiLogAllocateWsleEvent @ 0x140530778 (MiLogAllocateWsleEvent.c)
 *     MiLogPerfMemoryEvent @ 0x140530840 (MiLogPerfMemoryEvent.c)
 *     MiLogRemoveWsleEvent @ 0x1405308A4 (MiLogRemoveWsleEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053185C (MiLogPerfMemoryRangeEvent.c)
 *     MiLogMdlRangeEvent @ 0x1405342D8 (MiLogMdlRangeEvent.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140544E68 (MiLogNonPagedPoolReleaseEvent.c)
 *     MiLogKernelStackEvent @ 0x140546D80 (MiLogKernelStackEvent.c)
 *     MiLogCombinedPteDelete @ 0x14055D314 (MiLogCombinedPteDelete.c)
 *     PpmTraceExitLatency @ 0x140567E20 (PpmTraceExitLatency.c)
 *     PopLogNotifyDevice @ 0x140576D0C (PopLogNotifyDevice.c)
 *     PpmTracePerfIdleRundown @ 0x1405773F0 (PpmTracePerfIdleRundown.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1405795B0 (PpmEventCoordinatedIdleTransition.c)
 *     PpmEventEnterPlatformIdleState @ 0x14057996C (PpmEventEnterPlatformIdleState.c)
 *     PpmEventThermalCapChange @ 0x14057A878 (PpmEventThermalCapChange.c)
 *     EtwTraceAntiStarvationBoost @ 0x1405A760C (EtwTraceAntiStarvationBoost.c)
 *     EtwTraceDebuggerEvent @ 0x1405A784C (EtwTraceDebuggerEvent.c)
 *     EtwTraceDequeueWork @ 0x1405A78CC (EtwTraceDequeueWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405A7954 (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 *     EtwTraceInswapProcess @ 0x1405A7AF0 (EtwTraceInswapProcess.c)
 *     EtwTraceIoTimerEvent @ 0x1405A7B74 (EtwTraceIoTimerEvent.c)
 *     EtwTracePriority @ 0x1405A80D4 (EtwTracePriority.c)
 *     EtwTraceRetpolineExit @ 0x1405A82E0 (EtwTraceRetpolineExit.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A834C (EtwTraceShouldYieldProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A8570 (EtwTraceThreadAffinity.c)
 *     EtwTraceThreadWorkItem @ 0x1405A85F0 (EtwTraceThreadWorkItem.c)
 *     EtwpLogMemInfo @ 0x1405A8DE8 (EtwpLogMemInfo.c)
 *     EtwpPmcInterrupt @ 0x1405A9330 (EtwpPmcInterrupt.c)
 *     EtwpSystemTraceWdf @ 0x1405A9900 (EtwpSystemTraceWdf.c)
 *     EtwpTraceALPC @ 0x1405A9960 (EtwpTraceALPC.c)
 *     EtwpTraceDebugPrint @ 0x1405A9A60 (EtwpTraceDebugPrint.c)
 *     EtwpTraceFltIo @ 0x1405A9BC0 (EtwpTraceFltIo.c)
 *     EtwpTraceNetwork @ 0x1405A9DC0 (EtwpTraceNetwork.c)
 *     EtwpTraceOpticalIo @ 0x1405A9E50 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x1405AA100 (EtwpTraceOpticalIoInit.c)
 *     EtwpTraceSplitIo @ 0x1405AA2A0 (EtwpTraceSplitIo.c)
 *     EtwpTraceWdf @ 0x1405AA310 (EtwpTraceWdf.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405AA670 (PerfInfoLogUnexpectedInterrupt.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405AB0D0 (PerfLogExecutiveResourceInitialize.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405AB178 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405AB36C (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB488 (PerfLogExecutiveResourceWait.c)
 *     PerfLogSpinLockRelease @ 0x1405AB678 (PerfLogSpinLockRelease.c)
 *     CmpNotifyChangeKey @ 0x1406588C0 (CmpNotifyChangeKey.c)
 *     PopDispatchStateCallout @ 0x140672878 (PopDispatchStateCallout.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14067BC6C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     EtwpEnumerateAddressSpace @ 0x1406840BC (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageLoad @ 0x1406845D8 (PerfLogImageLoad.c)
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 *     EtwTraceThreadSetName @ 0x1406B157C (EtwTraceThreadSetName.c)
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 *     KeSetIntervalProfile @ 0x1407345E4 (KeSetIntervalProfile.c)
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140775A30 (PopPolicyWorkerAction.c)
 *     MiSessionCreateInternal @ 0x140786DD0 (MiSessionCreateInternal.c)
 *     CmpLogHiveDestroyEvent @ 0x14086A8DC (CmpLogHiveDestroyEvent.c)
 *     CmpLogHiveInitializeEvent @ 0x14086A9D0 (CmpLogHiveInitializeEvent.c)
 *     CmpLogHiveLinkEvent @ 0x14086AAB8 (CmpLogHiveLinkEvent.c)
 *     KiSwapToUmsThread @ 0x1408BDA80 (KiSwapToUmsThread.c)
 *     MiLogSectionCreate @ 0x1408C79B0 (MiLogSectionCreate.c)
 *     MmLogQueryCombineStats @ 0x1408D9D60 (MmLogQueryCombineStats.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E9A4 (PspDisassociateUmsThreadFromPrimary.c)
 *     EtwTraceFreezeThawProcess @ 0x140935E3C (EtwTraceFreezeThawProcess.c)
 *     EtwTraceJob @ 0x140935F18 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140935FF8 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1409360A8 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x14093614C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409362AC (EtwTraceJobSetQuery.c)
 *     EtwTraceWakeCounter @ 0x140936A78 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x140936B34 (EtwTraceWakeEvent.c)
 *     EtwpLogMemInfoWsHelper @ 0x140936F00 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1409371D4 (EtwpLogSessionWorkingSetInfo.c)
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140995B90 (KiCalibrateTimeAdjustment.c)
 *     PopSystemIrpCompletion @ 0x140998040 (PopSystemIrpCompletion.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 */

__int64 __fastcall EtwTraceKernelEvent(int a1, int a2, unsigned int a3, __int16 a4, int a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rsi
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  __int64 v13; // rcx

  result = EtwpHostSiloState;
  v7 = a3;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4224);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    result = 32LL * (unsigned int)v12;
    v13 = result + EtwpHostSiloState + 4260;
    if ( v13 )
    {
      result = v7 >> 29;
      if ( ((unsigned int)v7 & *(_DWORD *)(v13 + 4 * (v7 >> 29)) & 0x1FFFFFFF) != 0 )
        result = EtwpLogKernelEvent(
                   a1,
                   EtwpHostSiloState,
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4208),
                   a2,
                   a4,
                   a5);
    }
  }
  return result;
}

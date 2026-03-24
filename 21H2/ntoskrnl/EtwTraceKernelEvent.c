/*
 * XREFs of EtwTraceKernelEvent @ 0x1402EAC90
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     KiCheckForTimerExpiration @ 0x1402247F0 (KiCheckForTimerExpiration.c)
 *     KeResumeClockTimerFromIdle @ 0x140224BE0 (KeResumeClockTimerFromIdle.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     KiRetireDpcList @ 0x1402466B0 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x1402472B0 (KiExecuteAllDpcs.c)
 *     KiProcessExpiredTimerList @ 0x140247AA0 (KiProcessExpiredTimerList.c)
 *     KiTimer2Expiration @ 0x1402487E0 (KiTimer2Expiration.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     EtwpTraceImageUnload @ 0x14025A6BC (EtwpTraceImageUnload.c)
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     KePrepareClockTimerForIdle @ 0x140293310 (KePrepareClockTimerForIdle.c)
 *     KiEventClockStateChange @ 0x140293778 (KiEventClockStateChange.c)
 *     PpmEventIdleStateChange @ 0x1402B0470 (PpmEventIdleStateChange.c)
 *     EtwTraceProcessTerminate @ 0x1402EAC20 (EtwTraceProcessTerminate.c)
 *     CcWorkerThread @ 0x1402F31F0 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402F38A0 (CcCachemapUninitWorkerThread.c)
 *     CcPerformReadAhead @ 0x1402F9DF0 (CcPerformReadAhead.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiDeleteSystemPagableVm @ 0x140305A80 (MiDeleteSystemPagableVm.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     KiCancelTimer @ 0x1403482D0 (KiCancelTimer.c)
 *     MiDemoteCombinedPte @ 0x14036B260 (MiDemoteCombinedPte.c)
 *     KiTimerExpirationDpc @ 0x1403891D0 (KiTimerExpirationDpc.c)
 *     KiTimerExpiration @ 0x1403892F0 (KiTimerExpiration.c)
 *     PpmIdleSelectStates @ 0x140395580 (PpmIdleSelectStates.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x140399034 (PpmEventLegacyProcessorPerfStateChange.c)
 *     PoSetUserPresent @ 0x1403A5E50 (PoSetUserPresent.c)
 *     CcPerfLogScheduleReadAhead @ 0x1403BC25C (CcPerfLogScheduleReadAhead.c)
 *     CcPerfLogFlushCache @ 0x1403BD098 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BD19C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BD5AC (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x1403C3F94 (CcPerfLogVolumeLogHandleInfo.c)
 *     CcPerfLogLazyWriteScan @ 0x1403C5920 (CcPerfLogLazyWriteScan.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1404EC520 (CcPerfLogExtraWBThreadAction.c)
 *     IopPerfCompleteRequest @ 0x140508094 (IopPerfCompleteRequest.c)
 *     IopPerfCompletionRoutine @ 0x1405082C0 (IopPerfCompletionRoutine.c)
 *     IopPerfLogCallEvent @ 0x140508418 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1405084EC (IopPerfLogCallReturnEvent.c)
 *     KiTraceCancelTimer2 @ 0x140523AC4 (KiTraceCancelTimer2.c)
 *     KiTraceSetTimer @ 0x140523B5C (KiTraceSetTimer.c)
 *     KiTraceSetTimer2 @ 0x140523C90 (KiTraceSetTimer2.c)
 *     KiParkUmsThread @ 0x140525F20 (KiParkUmsThread.c)
 *     MiLogAllocateWsleEvent @ 0x140530538 (MiLogAllocateWsleEvent.c)
 *     MiLogPerfMemoryEvent @ 0x140530600 (MiLogPerfMemoryEvent.c)
 *     MiLogRemoveWsleEvent @ 0x140530664 (MiLogRemoveWsleEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053161C (MiLogPerfMemoryRangeEvent.c)
 *     MiLogMdlRangeEvent @ 0x140534098 (MiLogMdlRangeEvent.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x140544C28 (MiLogNonPagedPoolReleaseEvent.c)
 *     MiLogKernelStackEvent @ 0x140546B40 (MiLogKernelStackEvent.c)
 *     MiLogCombinedPteDelete @ 0x14055D0D4 (MiLogCombinedPteDelete.c)
 *     PpmTraceExitLatency @ 0x140567BE0 (PpmTraceExitLatency.c)
 *     PopLogNotifyDevice @ 0x140576ACC (PopLogNotifyDevice.c)
 *     PpmTracePerfIdleRundown @ 0x1405771B0 (PpmTracePerfIdleRundown.c)
 *     PpmEventCoordinatedIdleTransition @ 0x140579370 (PpmEventCoordinatedIdleTransition.c)
 *     PpmEventEnterPlatformIdleState @ 0x14057972C (PpmEventEnterPlatformIdleState.c)
 *     PpmEventThermalCapChange @ 0x14057A638 (PpmEventThermalCapChange.c)
 *     EtwTraceAntiStarvationBoost @ 0x1405A73DC (EtwTraceAntiStarvationBoost.c)
 *     EtwTraceDebuggerEvent @ 0x1405A761C (EtwTraceDebuggerEvent.c)
 *     EtwTraceDequeueWork @ 0x1405A769C (EtwTraceDequeueWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405A7724 (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
 *     EtwTraceIdealProcessor @ 0x1405A7844 (EtwTraceIdealProcessor.c)
 *     EtwTraceInswapProcess @ 0x1405A78C0 (EtwTraceInswapProcess.c)
 *     EtwTraceIoTimerEvent @ 0x1405A7944 (EtwTraceIoTimerEvent.c)
 *     EtwTracePriority @ 0x1405A7EA4 (EtwTracePriority.c)
 *     EtwTraceRetpolineExit @ 0x1405A80B0 (EtwTraceRetpolineExit.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A811C (EtwTraceShouldYieldProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A8340 (EtwTraceThreadAffinity.c)
 *     EtwTraceThreadWorkItem @ 0x1405A83C0 (EtwTraceThreadWorkItem.c)
 *     EtwpLogMemInfo @ 0x1405A8BB8 (EtwpLogMemInfo.c)
 *     EtwpPmcInterrupt @ 0x1405A9100 (EtwpPmcInterrupt.c)
 *     EtwpSystemTraceWdf @ 0x1405A96D0 (EtwpSystemTraceWdf.c)
 *     EtwpTraceALPC @ 0x1405A9730 (EtwpTraceALPC.c)
 *     EtwpTraceDebugPrint @ 0x1405A9830 (EtwpTraceDebugPrint.c)
 *     EtwpTraceFltIo @ 0x1405A9990 (EtwpTraceFltIo.c)
 *     EtwpTraceNetwork @ 0x1405A9B90 (EtwpTraceNetwork.c)
 *     EtwpTraceOpticalIo @ 0x1405A9C20 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x1405A9ED0 (EtwpTraceOpticalIoInit.c)
 *     EtwpTraceSplitIo @ 0x1405AA070 (EtwpTraceSplitIo.c)
 *     EtwpTraceWdf @ 0x1405AA0E0 (EtwpTraceWdf.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405AA440 (PerfInfoLogUnexpectedInterrupt.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405AAEA0 (PerfLogExecutiveResourceInitialize.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405AAF48 (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405AB13C (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x1405AB258 (PerfLogExecutiveResourceWait.c)
 *     PerfLogSpinLockRelease @ 0x1405AB448 (PerfLogSpinLockRelease.c)
 *     EtwpEnumerateAddressSpace @ 0x14061A45C (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageLoad @ 0x14061A978 (PerfLogImageLoad.c)
 *     CmpNotifyChangeKey @ 0x140663AA0 (CmpNotifyChangeKey.c)
 *     PopDispatchStateCallout @ 0x14067E9C8 (PopDispatchStateCallout.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140682FC4 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     EtwTraceThreadSetName @ 0x1406DA29C (EtwTraceThreadSetName.c)
 *     HvpMarkDirty @ 0x140708560 (HvpMarkDirty.c)
 *     KeSetIntervalProfile @ 0x140734424 (KeSetIntervalProfile.c)
 *     PopExecutePowerAction @ 0x1407751C8 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x140775870 (PopPolicyWorkerAction.c)
 *     MiSessionCreateInternal @ 0x140786C10 (MiSessionCreateInternal.c)
 *     CmpLogHiveDestroyEvent @ 0x14086A77C (CmpLogHiveDestroyEvent.c)
 *     CmpLogHiveInitializeEvent @ 0x14086A870 (CmpLogHiveInitializeEvent.c)
 *     CmpLogHiveLinkEvent @ 0x14086A958 (CmpLogHiveLinkEvent.c)
 *     KiSwapToUmsThread @ 0x1408BD920 (KiSwapToUmsThread.c)
 *     MiLogSectionCreate @ 0x1408C7850 (MiLogSectionCreate.c)
 *     MmLogQueryCombineStats @ 0x1408D9C00 (MmLogQueryCombineStats.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090E844 (PspDisassociateUmsThreadFromPrimary.c)
 *     EtwTraceFreezeThawProcess @ 0x140935C6C (EtwTraceFreezeThawProcess.c)
 *     EtwTraceJob @ 0x140935D48 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140935E28 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x140935ED8 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x140935F7C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1409360DC (EtwTraceJobSetQuery.c)
 *     EtwTraceWakeCounter @ 0x1409368A8 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x140936964 (EtwTraceWakeEvent.c)
 *     EtwpLogMemInfoWsHelper @ 0x140936D30 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x140937004 (EtwpLogSessionWorkingSetInfo.c)
 *     PoBroadcastSystemState @ 0x1409922E0 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140994B90 (KiCalibrateTimeAdjustment.c)
 *     PopSystemIrpCompletion @ 0x140997040 (PopSystemIrpCompletion.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140350000 (EtwpLogKernelEvent.c)
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

/*
 * XREFs of EtwTraceKernelEvent @ 0x140250918
 * Callers:
 *     KiCancelTimer @ 0x14020DF00 (KiCancelTimer.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     KiCheckForTimerExpiration @ 0x140219590 (KiCheckForTimerExpiration.c)
 *     KeResumeClockTimerFromIdle @ 0x140219980 (KeResumeClockTimerFromIdle.c)
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     EtwpTraceImageUnload @ 0x14024FD38 (EtwpTraceImageUnload.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     KiEventClockStateChange @ 0x14027E614 (KiEventClockStateChange.c)
 *     KePrepareClockTimerForIdle @ 0x14027E8E0 (KePrepareClockTimerForIdle.c)
 *     KiTimer2Expiration @ 0x14027F560 (KiTimer2Expiration.c)
 *     KiProcessExpiredTimerList @ 0x140281580 (KiProcessExpiredTimerList.c)
 *     KiRetireDpcList @ 0x140299420 (KiRetireDpcList.c)
 *     KiExecuteAllDpcs @ 0x14029A020 (KiExecuteAllDpcs.c)
 *     CcCanIWrite @ 0x1402C0F70 (CcCanIWrite.c)
 *     CcWorkerThread @ 0x1402C6C30 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402C72E0 (CcCachemapUninitWorkerThread.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     EtwTraceProcessTerminate @ 0x1402FD76C (EtwTraceProcessTerminate.c)
 *     PpmEventIdleStateChange @ 0x14033CC38 (PpmEventIdleStateChange.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     KiTimerExpirationDpc @ 0x1403868D0 (KiTimerExpirationDpc.c)
 *     KiTimerExpiration @ 0x1403869F0 (KiTimerExpiration.c)
 *     PpmIdleSelectStates @ 0x140392C50 (PpmIdleSelectStates.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x140396704 (PpmEventLegacyProcessorPerfStateChange.c)
 *     PoSetUserPresent @ 0x1403A31D0 (PoSetUserPresent.c)
 *     CcPerfLogScheduleReadAhead @ 0x1403B8DBC (CcPerfLogScheduleReadAhead.c)
 *     CcPerfLogFlushCache @ 0x1403BA108 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1403BA20C (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x1403BA61C (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x1403C10C4 (CcPerfLogVolumeLogHandleInfo.c)
 *     CcPerfLogLazyWriteScan @ 0x1403C2A50 (CcPerfLogLazyWriteScan.c)
 *     CcPerfLogExtraWBThreadAction @ 0x1404E7400 (CcPerfLogExtraWBThreadAction.c)
 *     IopPerfCompleteRequest @ 0x140502B4C (IopPerfCompleteRequest.c)
 *     IopPerfCompletionRoutine @ 0x140502D80 (IopPerfCompletionRoutine.c)
 *     IopPerfLogCallEvent @ 0x140502ED8 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x140502FAC (IopPerfLogCallReturnEvent.c)
 *     KiTraceCancelTimer2 @ 0x14051E614 (KiTraceCancelTimer2.c)
 *     KiTraceSetTimer @ 0x14051E6AC (KiTraceSetTimer.c)
 *     KiTraceSetTimer2 @ 0x14051E7E0 (KiTraceSetTimer2.c)
 *     KiParkUmsThread @ 0x140520A70 (KiParkUmsThread.c)
 *     MiLogAllocateWsleEvent @ 0x14052B068 (MiLogAllocateWsleEvent.c)
 *     MiLogPerfMemoryEvent @ 0x14052B130 (MiLogPerfMemoryEvent.c)
 *     MiLogRemoveWsleEvent @ 0x14052B194 (MiLogRemoveWsleEvent.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052C14C (MiLogPerfMemoryRangeEvent.c)
 *     MiLogMdlRangeEvent @ 0x14052EBC8 (MiLogMdlRangeEvent.c)
 *     MiLogNonPagedPoolReleaseEvent @ 0x14053F754 (MiLogNonPagedPoolReleaseEvent.c)
 *     MiLogKernelStackEvent @ 0x140541670 (MiLogKernelStackEvent.c)
 *     MiLogCombinedPteDelete @ 0x140557C34 (MiLogCombinedPteDelete.c)
 *     PpmTraceExitLatency @ 0x140562730 (PpmTraceExitLatency.c)
 *     PopLogNotifyDevice @ 0x14057168C (PopLogNotifyDevice.c)
 *     PpmTracePerfIdleRundown @ 0x140571D70 (PpmTracePerfIdleRundown.c)
 *     PpmEventCoordinatedIdleTransition @ 0x140573F30 (PpmEventCoordinatedIdleTransition.c)
 *     PpmEventEnterPlatformIdleState @ 0x1405742EC (PpmEventEnterPlatformIdleState.c)
 *     PpmEventThermalCapChange @ 0x1405751F8 (PpmEventThermalCapChange.c)
 *     EtwTraceAntiStarvationBoost @ 0x1405A1F0C (EtwTraceAntiStarvationBoost.c)
 *     EtwTraceDebuggerEvent @ 0x1405A214C (EtwTraceDebuggerEvent.c)
 *     EtwTraceDequeueWork @ 0x1405A21CC (EtwTraceDequeueWork.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405A2254 (EtwTraceDpcEnqueueEvent.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 *     EtwTraceIdealProcessor @ 0x1405A2374 (EtwTraceIdealProcessor.c)
 *     EtwTraceInswapProcess @ 0x1405A23F0 (EtwTraceInswapProcess.c)
 *     EtwTraceIoTimerEvent @ 0x1405A2474 (EtwTraceIoTimerEvent.c)
 *     EtwTracePriority @ 0x1405A29D4 (EtwTracePriority.c)
 *     EtwTraceRetpolineExit @ 0x1405A2BE0 (EtwTraceRetpolineExit.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A2C4C (EtwTraceShouldYieldProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A2E70 (EtwTraceThreadAffinity.c)
 *     EtwTraceThreadWorkItem @ 0x1405A2EF0 (EtwTraceThreadWorkItem.c)
 *     EtwpLogMemInfo @ 0x1405A36E8 (EtwpLogMemInfo.c)
 *     EtwpPmcInterrupt @ 0x1405A3C30 (EtwpPmcInterrupt.c)
 *     EtwpSystemTraceWdf @ 0x1405A4200 (EtwpSystemTraceWdf.c)
 *     EtwpTraceALPC @ 0x1405A4260 (EtwpTraceALPC.c)
 *     EtwpTraceDebugPrint @ 0x1405A4360 (EtwpTraceDebugPrint.c)
 *     EtwpTraceFltIo @ 0x1405A44C0 (EtwpTraceFltIo.c)
 *     EtwpTraceNetwork @ 0x1405A46C0 (EtwpTraceNetwork.c)
 *     EtwpTraceOpticalIo @ 0x1405A4750 (EtwpTraceOpticalIo.c)
 *     EtwpTraceOpticalIoInit @ 0x1405A4A00 (EtwpTraceOpticalIoInit.c)
 *     EtwpTraceSplitIo @ 0x1405A4BA0 (EtwpTraceSplitIo.c)
 *     EtwpTraceWdf @ 0x1405A4C10 (EtwpTraceWdf.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405A4F70 (PerfInfoLogUnexpectedInterrupt.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405A59F4 (PerfLogExecutiveResourceInitialize.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405A5A9C (PerfLogExecutiveResourceRelease.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405A5C90 (PerfLogExecutiveResourceSetOwnerPointer.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A5DAC (PerfLogExecutiveResourceWait.c)
 *     PerfLogSpinLockRelease @ 0x1405A5F9C (PerfLogSpinLockRelease.c)
 *     CmpNotifyChangeKey @ 0x1405E2980 (CmpNotifyChangeKey.c)
 *     PerfLogImageLoad @ 0x14060377C (PerfLogImageLoad.c)
 *     EtwpEnumerateAddressSpace @ 0x140603964 (EtwpEnumerateAddressSpace.c)
 *     EtwTraceThreadSetName @ 0x140605388 (EtwTraceThreadSetName.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     HvpMarkDirty @ 0x14069FD40 (HvpMarkDirty.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1407066D8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
 *     KeSetIntervalProfile @ 0x1407222E4 (KeSetIntervalProfile.c)
 *     PopExecutePowerAction @ 0x140762C18 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1407632B0 (PopPolicyWorkerAction.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     CmpLogHiveDestroyEvent @ 0x14086712C (CmpLogHiveDestroyEvent.c)
 *     CmpLogHiveInitializeEvent @ 0x140867220 (CmpLogHiveInitializeEvent.c)
 *     CmpLogHiveLinkEvent @ 0x140867308 (CmpLogHiveLinkEvent.c)
 *     KiSwapToUmsThread @ 0x1408BA400 (KiSwapToUmsThread.c)
 *     MiLogSectionCreate @ 0x1408C4250 (MiLogSectionCreate.c)
 *     MmLogQueryCombineStats @ 0x1408D6600 (MmLogQueryCombineStats.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x14090B458 (PspDisassociateUmsThreadFromPrimary.c)
 *     EtwTraceFreezeThawProcess @ 0x14093266C (EtwTraceFreezeThawProcess.c)
 *     EtwTraceJob @ 0x140932748 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140932828 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1409328D8 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x14093297C (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x140932ADC (EtwTraceJobSetQuery.c)
 *     EtwTraceWakeCounter @ 0x1409332A8 (EtwTraceWakeCounter.c)
 *     EtwTraceWakeEvent @ 0x140933364 (EtwTraceWakeEvent.c)
 *     EtwpLogMemInfoWsHelper @ 0x140933730 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x140933A04 (EtwpLogSessionWorkingSetInfo.c)
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140991B20 (KiCalibrateTimeAdjustment.c)
 *     PopSystemIrpCompletion @ 0x140993CF0 (PopSystemIrpCompletion.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
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

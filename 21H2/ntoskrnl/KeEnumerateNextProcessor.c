/*
 * XREFs of KeEnumerateNextProcessor @ 0x140229400
 * Callers:
 *     PpmIdlePrepare @ 0x140224F90 (PpmIdlePrepare.c)
 *     PpmParkSteerInterrupts @ 0x140228E60 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140229480 (KeIntSteerPeriodic.c)
 *     PpmParkDistributeUtility @ 0x14022AB40 (PpmParkDistributeUtility.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x14027B394 (KiIpiEnlightenedGuestPriorityKick.c)
 *     PopQueueTargetDpc @ 0x14027B910 (PopQueueTargetDpc.c)
 *     PopCheckForIdleness @ 0x140280EE0 (PopCheckForIdleness.c)
 *     PpmParkReportParkedCores @ 0x1402AAAE0 (PpmParkReportParkedCores.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1402AE280 (PpmCheckMakeupSkippedChecks.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1402AE4A0 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x1402B04B0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x1402B0500 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x1402C0E20 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeRemoveQueueDpcEx @ 0x1402C8000 (KeRemoveQueueDpcEx.c)
 *     KeFlushQueuedDpcs @ 0x1402EC6E0 (KeFlushQueuedDpcs.c)
 *     HalGetMessageRoutingInfo @ 0x140377380 (HalGetMessageRoutingInfo.c)
 *     PpmPerfApplyProcessorStates @ 0x140398950 (PpmPerfApplyProcessorStates.c)
 *     PpmParkRegisterParking @ 0x1403C1460 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x1403C1C84 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x1403C2138 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C2194 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonAllocateResources @ 0x1404D31B8 (EmonAllocateResources.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404FAB30 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14050B798 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x14051C0A0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x14051C360 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x14051D6F0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14051E180 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x14051E250 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14052281C (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405234B0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmEstimateIdleDuration @ 0x1405659D4 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140566140 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140567184 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x140567CF8 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x140576C1C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x140577C10 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x140577F40 (PpmHeteroDistributeUtility.c)
 *     PopEtIsrDpcQuery @ 0x1406A1A10 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x140780E7C (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x1407B9B18 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407BAC0C (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x1407BB9A4 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x1407D53F0 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BAFB0 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E620C (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E63A4 (PpmPerfResizeHistoryAll.c)
 *     PopEndMirroring @ 0x140996250 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x14099FD80 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ABCA0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409ACA58 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409ACDEC (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1409AE774 (PnprQuiesceProcessors.c)
 *     VslConnectSwInterrupt @ 0x140A5F044 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned int v3; // r8d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  v4 = (unsigned __int64)a2[1];
  if ( v4 )
  {
LABEL_4:
    _BitScanForward64(&v5, v4);
    a2[1] = (unsigned __int16 *)(v4 & ~(1LL << v5));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v5];
    return 0LL;
  }
  else
  {
    while ( (unsigned __int16)++*((_WORD *)a2 + 8) < v3 )
    {
      v4 = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
      a2[1] = (unsigned __int16 *)v4;
      if ( v4 )
        goto LABEL_4;
    }
    return 3221226021LL;
  }
}

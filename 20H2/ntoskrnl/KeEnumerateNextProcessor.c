/*
 * XREFs of KeEnumerateNextProcessor @ 0x140287E80
 * Callers:
 *     PpmIdlePrepare @ 0x1402847A0 (PpmIdlePrepare.c)
 *     PpmParkSteerInterrupts @ 0x1402878E0 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140287F00 (KeIntSteerPeriodic.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x1402EAC74 (KiIpiEnlightenedGuestPriorityKick.c)
 *     PpmParkDistributeUtility @ 0x1402EFD70 (PpmParkDistributeUtility.c)
 *     PpmParkReportParkedCores @ 0x14030C580 (PpmParkReportParkedCores.c)
 *     KeFlushQueuedDpcs @ 0x14030D5C0 (KeFlushQueuedDpcs.c)
 *     PpmParkCalculateCoreParkingMask @ 0x14030E010 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x14030F820 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14030F870 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14031F8BC (KiIntSteerUpdateDeviceInterruptMask.c)
 *     PpmCheckMakeupSkippedChecks @ 0x14033DB10 (PpmCheckMakeupSkippedChecks.c)
 *     PopQueueTargetDpc @ 0x14033E800 (PopQueueTargetDpc.c)
 *     PopCheckForIdleness @ 0x140340000 (PopCheckForIdleness.c)
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 *     HalGetMessageRoutingInfo @ 0x140376EF0 (HalGetMessageRoutingInfo.c)
 *     PpmPerfApplyProcessorStates @ 0x1403984E0 (PpmPerfApplyProcessorStates.c)
 *     PpmParkRegisterParking @ 0x1403C0C10 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x1403C1434 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x1403C18E8 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C1944 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonAllocateResources @ 0x1404D17E8 (EmonAllocateResources.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404F8F90 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x140509C68 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x14051A5C0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x14051A880 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x14051BC10 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14051C6A0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x14051C770 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x140520D3C (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405219D0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmEstimateIdleDuration @ 0x140563F04 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140564670 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1405656B4 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x140566228 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x14057520C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x140576200 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x140576530 (PpmHeteroDistributeUtility.c)
 *     PopEtIsrDpcQuery @ 0x1406C5A30 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14077D09C (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407B5FAC (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x1407B6D44 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x1407D0F70 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408BDAD0 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E8A0C (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E8BA4 (PpmPerfResizeHistoryAll.c)
 *     PopEndMirroring @ 0x140999250 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x1409A255C (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1409AEDA0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409AFB58 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409AFEEC (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1409B1874 (PnprQuiesceProcessors.c)
 *     VslConnectSwInterrupt @ 0x140A5E4D8 (VslConnectSwInterrupt.c)
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

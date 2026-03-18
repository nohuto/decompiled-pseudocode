/*
 * XREFs of KeEnumerateNextProcessor @ 0x1402771F0
 * Callers:
 *     PopQueueTargetDpc @ 0x140205060 (PopQueueTargetDpc.c)
 *     PpmIdlePrepare @ 0x140272D80 (PpmIdlePrepare.c)
 *     PpmParkSteerInterrupts @ 0x140276C50 (PpmParkSteerInterrupts.c)
 *     KeIntSteerPeriodic @ 0x140277270 (KeIntSteerPeriodic.c)
 *     PpmParkDistributeUtility @ 0x1402786C0 (PpmParkDistributeUtility.c)
 *     PpmParkReportParkedCores @ 0x1402FCA20 (PpmParkReportParkedCores.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1402FE920 (PpmCheckMakeupSkippedChecks.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1402FEB40 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkUnblockIdle @ 0x140300380 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x1403003D0 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x1403110AC (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KeFlushQueuedDpcs @ 0x1403267C0 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140359624 (KiIpiEnlightenedGuestPriorityKick.c)
 *     PopCheckForIdleness @ 0x14035C8C0 (PopCheckForIdleness.c)
 *     HalGetMessageRoutingInfo @ 0x140374150 (HalGetMessageRoutingInfo.c)
 *     PpmPerfApplyProcessorStates @ 0x140395450 (PpmPerfApplyProcessorStates.c)
 *     PpmParkRegisterParking @ 0x1403BE600 (PpmParkRegisterParking.c)
 *     PpmParkApplyPolicy @ 0x1403BEE24 (PpmParkApplyPolicy.c)
 *     PpmHeteroDetectHgsCores @ 0x1403BF2D8 (PpmHeteroDetectHgsCores.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403BF334 (PpmHeteroUpdateHgsConfiguration.c)
 *     EmonAllocateResources @ 0x1404CDD98 (EmonAllocateResources.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404F50B0 (HvlpAffinityToHvProcessorSet.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x140505CE8 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KiStartProfileTarget @ 0x1405165A0 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x140516860 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x140517BF0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140518680 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140518750 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x14051CD1C (KiIntSteerLogStatus.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14051D9B0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmEstimateIdleDuration @ 0x14055FED4 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x140560640 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140561684 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1405621F8 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x14057118C (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x140572180 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1405724B0 (PpmHeteroDistributeUtility.c)
 *     PopEtIsrDpcQuery @ 0x1406D16D0 (PopEtIsrDpcQuery.c)
 *     PopProcessorInformation @ 0x14076BECC (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x1407A5838 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x1407A6274 (PpmPerfResetHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x1407BF270 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x1408B6B90 (KiSynchNumaCounterSetCallback.c)
 *     PpmPerfGetBrandedFrequency @ 0x1408E194C (PpmPerfGetBrandedFrequency.c)
 *     PpmPerfResizeHistoryAll @ 0x1408E1AE4 (PpmPerfResizeHistoryAll.c)
 *     PopEndMirroring @ 0x140991AB0 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x14099ACBC (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A7FD0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1409A8D88 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1409A911C (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1409AAAA4 (PnprQuiesceProcessors.c)
 *     VslConnectSwInterrupt @ 0x140A580D8 (VslConnectSwInterrupt.c)
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

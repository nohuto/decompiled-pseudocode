/*
 * XREFs of HalpTimerGetInternalData @ 0x140288EA0
 * Callers:
 *     HalpSetTimer @ 0x14022B444 (HalpSetTimer.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KiUpdateTime @ 0x14027DA20 (KiUpdateTime.c)
 *     PpmSnapPerformanceAccumulation @ 0x140280AC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     HalpTimerClockInterrupt @ 0x140288A00 (HalpTimerClockInterrupt.c)
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     KiRetireDpcList @ 0x14028A670 (KiRetireDpcList.c)
 *     HalpTimerClockStop @ 0x1403295C0 (HalpTimerClockStop.c)
 *     HalpTimerClockInitialize @ 0x14032B170 (HalpTimerClockInitialize.c)
 *     HalpTimerDpcRoutine @ 0x14032F600 (HalpTimerDpcRoutine.c)
 *     HalpInterruptRestoreClock @ 0x140385AD8 (HalpInterruptRestoreClock.c)
 *     HalpTimerSavePerformanceCounter @ 0x140385E04 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerSwitchStallSource @ 0x140385E90 (HalpTimerSwitchStallSource.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140385EE8 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerClockActivate @ 0x1403A1BB0 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A1CC4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A53A4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitializeProfiling @ 0x1403AE8A0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403AEA60 (HalpTimerInitializeClockPn.c)
 *     HalpInitializePnTimers @ 0x1403AEB00 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1403AF688 (HalpInitializeTimers.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AF928 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AFC28 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AFD0C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerInitialize @ 0x1403B0084 (HalpTimerInitialize.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B0328 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerClockInterruptStub @ 0x1403C5280 (HalpTimerClockInterruptStub.c)
 *     HalpTimerQueryCycleCounter @ 0x1403CE450 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B4ADC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B4B90 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerClockPowerChange @ 0x1404BDB40 (HalpTimerClockPowerChange.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BDCA8 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BE120 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BE2D0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x1404BEA80 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerStallCounterPowerChange @ 0x1404BEAF0 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BED40 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404BF0D4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404BF1C0 (HalpVpptStop.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404BF484 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerProfilePowerChange @ 0x1404BFE78 (HalpTimerProfilePowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1404BFEE8 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x1404C010C (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x1404C0CA0 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x1404C0D30 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D2E00 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerHypervisorInterruptStub @ 0x1404D2F70 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x1404D2FC0 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404D3000 (HalpTimerWatchdogPreResetInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpTimerGetInternalData(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 224) & 0x10000) != 0 )
    return *(_QWORD *)(a1 + 72) + *(_DWORD *)(a1 + 80) * KeGetPcr()->Prcb.Number;
  else
    return *(_QWORD *)(a1 + 72);
}

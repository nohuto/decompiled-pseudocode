/*
 * XREFs of HalpTimerGetInternalData @ 0x1402CF2E0
 * Callers:
 *     HalpTimerClockStop @ 0x140249460 (HalpTimerClockStop.c)
 *     HalpTimerClockInitialize @ 0x14024AC80 (HalpTimerClockInitialize.c)
 *     HalpTimerDpcRoutine @ 0x14024FA40 (HalpTimerDpcRoutine.c)
 *     PpmSnapPerformanceAccumulation @ 0x1402C5A90 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x1402CC030 (KiUpdateTime.c)
 *     HalpTimerClockInterrupt @ 0x1402CEE40 (HalpTimerClockInterrupt.c)
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     KiRetireDpcList @ 0x1402EAF00 (KiRetireDpcList.c)
 *     HalpSetTimer @ 0x1402F2BCC (HalpSetTimer.c)
 *     HalpInterruptRestoreClock @ 0x140386A18 (HalpInterruptRestoreClock.c)
 *     HalpTimerSavePerformanceCounter @ 0x140386D44 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerSwitchStallSource @ 0x140386DD0 (HalpTimerSwitchStallSource.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140386E28 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerClockActivate @ 0x1403A25C0 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A26D4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A5DB4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitializeProfiling @ 0x1403A95E0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403A97A0 (HalpTimerInitializeClockPn.c)
 *     HalpInitializePnTimers @ 0x1403A9840 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1403AA3C8 (HalpInitializeTimers.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AA668 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AA968 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AAA4C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerInitialize @ 0x1403AADC4 (HalpTimerInitialize.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AB068 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerClockInterruptStub @ 0x1403C5E10 (HalpTimerClockInterruptStub.c)
 *     HalpTimerQueryCycleCounter @ 0x1403CEFB0 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B66DC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B6790 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerClockPowerChange @ 0x1404BF750 (HalpTimerClockPowerChange.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BF8B8 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BFD30 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BFEE0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x1404C0690 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerStallCounterPowerChange @ 0x1404C0700 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0950 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404C0CE4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404C0DD0 (HalpVpptStop.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C1094 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerProfilePowerChange @ 0x1404C1A88 (HalpTimerProfilePowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1404C1AF8 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x1404C1D1C (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x1404C28B0 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x1404C2940 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D4A10 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerHypervisorInterruptStub @ 0x1404D4B80 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x1404D4BD0 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404D4C10 (HalpTimerWatchdogPreResetInterrupt.c)
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

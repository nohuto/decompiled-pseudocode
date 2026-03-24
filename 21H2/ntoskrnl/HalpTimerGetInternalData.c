/*
 * XREFs of HalpTimerGetInternalData @ 0x14022AA30
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140221190 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x140227730 (KiUpdateTime.c)
 *     HalpTimerClockInterrupt @ 0x14022A590 (HalpTimerClockInterrupt.c)
 *     KeStallExecutionProcessor @ 0x14022A880 (KeStallExecutionProcessor.c)
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 *     KiRetireDpcList @ 0x1402466B0 (KiRetireDpcList.c)
 *     HalpSetTimer @ 0x14024E37C (HalpSetTimer.c)
 *     HalpTimerClockStop @ 0x1402CAB70 (HalpTimerClockStop.c)
 *     HalpTimerClockInitialize @ 0x1402CC620 (HalpTimerClockInitialize.c)
 *     HalpTimerDpcRoutine @ 0x1402D15B0 (HalpTimerDpcRoutine.c)
 *     HalpInterruptRestoreClock @ 0x1403868C8 (HalpInterruptRestoreClock.c)
 *     HalpTimerSavePerformanceCounter @ 0x140386BF4 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerSwitchStallSource @ 0x140386C80 (HalpTimerSwitchStallSource.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140386CD8 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerClockActivate @ 0x1403A2470 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x1403A2584 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A5C64 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitializeProfiling @ 0x1403A8850 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403A8A10 (HalpTimerInitializeClockPn.c)
 *     HalpInitializePnTimers @ 0x1403A8AB0 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1403A9638 (HalpInitializeTimers.c)
 *     HalpTimerMeasureFrequencies @ 0x1403A98D8 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403A9BD8 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403A9CBC (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerInitialize @ 0x1403AA034 (HalpTimerInitialize.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AA2D8 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerClockInterruptStub @ 0x1403C59E0 (HalpTimerClockInterruptStub.c)
 *     HalpTimerQueryCycleCounter @ 0x1403CEE40 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B649C (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B6550 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerClockPowerChange @ 0x1404BF510 (HalpTimerClockPowerChange.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BF678 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BFAF0 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BFCA0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x1404C0450 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerStallCounterPowerChange @ 0x1404C04C0 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404C0710 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404C0AA4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404C0B90 (HalpVpptStop.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404C0E54 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerProfilePowerChange @ 0x1404C1848 (HalpTimerProfilePowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1404C18B8 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x1404C1ADC (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x1404C2670 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x1404C2700 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404D47D0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerHypervisorInterruptStub @ 0x1404D4940 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x1404D4990 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404D49D0 (HalpTimerWatchdogPreResetInterrupt.c)
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

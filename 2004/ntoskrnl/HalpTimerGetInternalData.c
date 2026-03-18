/*
 * XREFs of HalpTimerGetInternalData @ 0x14021F560
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x140216050 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x14021C4D0 (KiUpdateTime.c)
 *     HalpTimerClockInterrupt @ 0x14021F0C0 (HalpTimerClockInterrupt.c)
 *     KeStallExecutionProcessor @ 0x14021F3B0 (KeStallExecutionProcessor.c)
 *     KiRetireDpcList @ 0x140299420 (KiRetireDpcList.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     HalpSetTimer @ 0x1402FE504 (HalpSetTimer.c)
 *     HalpTimerClockStop @ 0x140358FF0 (HalpTimerClockStop.c)
 *     HalpTimerClockInitialize @ 0x14035A600 (HalpTimerClockInitialize.c)
 *     HalpTimerDpcRoutine @ 0x14035E910 (HalpTimerDpcRoutine.c)
 *     HalpInterruptRestoreClock @ 0x1403839AC (HalpInterruptRestoreClock.c)
 *     HalpTimerSavePerformanceCounter @ 0x140383CD4 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerSwitchStallSource @ 0x140383D60 (HalpTimerSwitchStallSource.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140383DB8 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerClockActivate @ 0x14039F6E0 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F7F4 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A2FE4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitializeProfiling @ 0x1403AC2B0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403AC470 (HalpTimerInitializeClockPn.c)
 *     HalpInitializePnTimers @ 0x1403AC510 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1403AD0A0 (HalpInitializeTimers.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AD338 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403AD638 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403AD71C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerInitialize @ 0x1403ADA94 (HalpTimerInitialize.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403ADD38 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerClockInterruptStub @ 0x1403C2B10 (HalpTimerClockInterruptStub.c)
 *     HalpTimerQueryCycleCounter @ 0x1403CB830 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B15B8 (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B166C (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerClockPowerChange @ 0x1404BA620 (HalpTimerClockPowerChange.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BA788 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BAC00 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BADB0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x1404BB560 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerStallCounterPowerChange @ 0x1404BB5D0 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BB820 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404BBBB4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404BBCA0 (HalpVpptStop.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404BBF64 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerProfilePowerChange @ 0x1404BC958 (HalpTimerProfilePowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1404BC9C8 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x1404BCBEC (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x1404BD780 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x1404BD810 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404CF860 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerHypervisorInterruptStub @ 0x1404CF9D0 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x1404CFA20 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404CFA60 (HalpTimerWatchdogPreResetInterrupt.c)
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

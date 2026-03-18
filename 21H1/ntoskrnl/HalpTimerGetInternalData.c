/*
 * XREFs of HalpTimerGetInternalData @ 0x1402785B0
 * Callers:
 *     KiRetireDpcList @ 0x140206910 (KiRetireDpcList.c)
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     PpmSnapPerformanceAccumulation @ 0x14026F0A0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     KiUpdateTime @ 0x140275520 (KiUpdateTime.c)
 *     HalpTimerClockInterrupt @ 0x140278110 (HalpTimerClockInterrupt.c)
 *     KeStallExecutionProcessor @ 0x140278400 (KeStallExecutionProcessor.c)
 *     HalpSetTimer @ 0x1402C1A24 (HalpSetTimer.c)
 *     HalpTimerClockStop @ 0x14031B420 (HalpTimerClockStop.c)
 *     HalpTimerClockInitialize @ 0x14031CA20 (HalpTimerClockInitialize.c)
 *     HalpTimerDpcRoutine @ 0x140320E50 (HalpTimerDpcRoutine.c)
 *     HalpInterruptRestoreClock @ 0x14038305C (HalpInterruptRestoreClock.c)
 *     HalpTimerSavePerformanceCounter @ 0x140383384 (HalpTimerSavePerformanceCounter.c)
 *     HalpTimerSwitchStallSource @ 0x140383410 (HalpTimerSwitchStallSource.c)
 *     HalpTimerRestorePerformanceCounter @ 0x140383468 (HalpTimerRestorePerformanceCounter.c)
 *     HalpTimerClockActivate @ 0x14039EF50 (HalpTimerClockActivate.c)
 *     HalpTimerConfigureInterrupt @ 0x14039F064 (HalpTimerConfigureInterrupt.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A2854 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitializeProfiling @ 0x1403A51F0 (HalpTimerInitializeProfiling.c)
 *     HalpTimerInitializeClockPn @ 0x1403A53B0 (HalpTimerInitializeClockPn.c)
 *     HalpInitializePnTimers @ 0x1403A5450 (HalpInitializePnTimers.c)
 *     HalpInitializeTimers @ 0x1403A5FE0 (HalpInitializeTimers.c)
 *     HalpTimerMeasureFrequencies @ 0x1403A6278 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerReadTimerPairWithLatencyLimit @ 0x1403A6578 (HalpTimerReadTimerPairWithLatencyLimit.c)
 *     HalpTimerDetermineValidTimerPairReadLatency @ 0x1403A665C (HalpTimerDetermineValidTimerPairReadLatency.c)
 *     HalpTimerInitialize @ 0x1403A69D4 (HalpTimerInitialize.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403A6C78 (HalpTimerStallExecutionProcessor.c)
 *     HalpTimerClockInterruptStub @ 0x1403C1C50 (HalpTimerClockInterruptStub.c)
 *     HalpTimerQueryCycleCounter @ 0x1403CAA50 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerCaptureCloestAuxiliaryQpcPair @ 0x1404B0EFC (HalpTimerCaptureCloestAuxiliaryQpcPair.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404B0FB0 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerClockPowerChange @ 0x1404B9F40 (HalpTimerClockPowerChange.c)
 *     HalpTimerSwitchToNormalClock @ 0x1404BA0A8 (HalpTimerSwitchToNormalClock.c)
 *     HalpTimerDelayedQueryCounter @ 0x1404BA520 (HalpTimerDelayedQueryCounter.c)
 *     HalpTimerPerformanceCounterPowerChange @ 0x1404BA6D0 (HalpTimerPerformanceCounterPowerChange.c)
 *     HalpTimerSetupMessageInterruptRouting @ 0x1404BAE80 (HalpTimerSetupMessageInterruptRouting.c)
 *     HalpTimerStallCounterPowerChange @ 0x1404BAEF0 (HalpTimerStallCounterPowerChange.c)
 *     HalpVpptAcknowledgeInterrupt @ 0x1404BB140 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptInitializePhysicalTimer @ 0x1404BB4D4 (HalpVpptInitializePhysicalTimer.c)
 *     HalpVpptStop @ 0x1404BB5C0 (HalpVpptStop.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x1404BB884 (HalpVpptUpdatePhysicalTimer.c)
 *     HalpTimerProfilePowerChange @ 0x1404BC278 (HalpTimerProfilePowerChange.c)
 *     HalpTimerRestartProfileInterrupt @ 0x1404BC2E8 (HalpTimerRestartProfileInterrupt.c)
 *     HalpTimerStopProfileInterrupt @ 0x1404BC50C (HalpTimerStopProfileInterrupt.c)
 *     HalpTimerWatchdogStart @ 0x1404BD0A0 (HalpTimerWatchdogStart.c)
 *     HalpTimerWatchdogStop @ 0x1404BD130 (HalpTimerWatchdogStop.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x1404CF3B0 (HalpTimerAlwaysOnClockInterrupt.c)
 *     HalpTimerHypervisorInterruptStub @ 0x1404CF520 (HalpTimerHypervisorInterruptStub.c)
 *     HalpTimerProfileInterrupt @ 0x1404CF570 (HalpTimerProfileInterrupt.c)
 *     HalpTimerWatchdogPreResetInterrupt @ 0x1404CF5B0 (HalpTimerWatchdogPreResetInterrupt.c)
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

/*
 * XREFs of KeAddProcessorAffinityEx @ 0x14021E120
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402150D0 (HalpInterruptSendIpi.c)
 *     PoIdle @ 0x140216D90 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x140219D30 (PpmIdlePrepare.c)
 *     PoExecuteIdleCheck @ 0x14021CBF0 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x14021DC00 (PpmParkSteerInterrupts.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KeDisableTimer2 @ 0x1402755A0 (KeDisableTimer2.c)
 *     KeQueryTotalCycleTimeThread @ 0x140296BE0 (KeQueryTotalCycleTimeThread.c)
 *     PoGetIdleTimes @ 0x140298098 (PoGetIdleTimes.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1402DE348 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFlushQueuedDpcs @ 0x1402E16C0 (KeFlushQueuedDpcs.c)
 *     ExpUpdateTimerConfiguration @ 0x1402E2FF0 (ExpUpdateTimerConfiguration.c)
 *     KiCheckKeepAlive @ 0x140345200 (KiCheckKeepAlive.c)
 *     KiSendClockInterruptToClockOwner @ 0x14034B9F4 (KiSendClockInterruptToClockOwner.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140351CB8 (PoGetPerfStateAndParkingInfo.c)
 *     KeUpdateThreadTag @ 0x140369C50 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x140392C50 (PpmIdleSelectStates.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A0F7C (HalpInterruptInitializeLocalUnit.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C02C4 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x1403C1340 (PpmInstallNewIdleStates.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404BD870 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSynchronizeStibpPairing @ 0x140516338 (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x140516EB0 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x140518DA0 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14051D038 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmRemoveIdleStates @ 0x140562040 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x14056257C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140562848 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140562D80 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140562FF0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x1405717DC (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1405769D4 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmUpdateIdleStates @ 0x14077EAA0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x140860C60 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x1408B7258 (KeConfigureHeteroProcessors.c)
 *     KiInitializeBootStructures @ 0x140998800 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x1409999E0 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x14099BBB0 (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x14099CDA0 (EmonInitializeProfiling.c)
 *     DefaultInitializeProfiling @ 0x1409A4220 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409A68E0 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AC520 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140A4598C (KiIntSteerInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(_WORD *a1, int a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( (unsigned __int16)*a1 <= (unsigned int)v4 )
    *a1 = v4 + 1;
  v5 = *(_QWORD *)&a1[4 * v4 + 4];
  v6 = &a1[4 * v4];
  result = v3;
  _bittestandset64(&v5, v3);
  *((_QWORD *)v6 + 1) = v5;
  return result;
}

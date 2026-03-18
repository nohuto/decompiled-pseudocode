/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140287E00
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140208B30 (KeQueryTotalCycleTimeThread.c)
 *     PoExecuteIdleCheck @ 0x14027D7F0 (PoExecuteIdleCheck.c)
 *     HalpInterruptSendIpi @ 0x14027FB40 (HalpInterruptSendIpi.c)
 *     PoIdle @ 0x140281800 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1402847A0 (PpmIdlePrepare.c)
 *     PpmParkSteerInterrupts @ 0x1402878E0 (PpmParkSteerInterrupts.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KeFlushQueuedDpcs @ 0x14030D5C0 (KeFlushQueuedDpcs.c)
 *     KiCheckKeepAlive @ 0x140316044 (KiCheckKeepAlive.c)
 *     KiSendClockInterruptToClockOwner @ 0x14031C9B4 (KiSendClockInterruptToClockOwner.c)
 *     KeDisableTimer2 @ 0x14033C330 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14033CBB8 (ExpUpdateTimerConfiguration.c)
 *     PoGetIdleTimes @ 0x14033E060 (PoGetIdleTimes.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14033EB78 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140340624 (PoGetPerfStateAndParkingInfo.c)
 *     KeUpdateThreadTag @ 0x14036BC30 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x140395110 (PpmIdleSelectStates.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A344C (HalpInterruptInitializeLocalUnit.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C1944 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x1403C3AB0 (PpmInstallNewIdleStates.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404C0D90 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSynchronizeStibpPairing @ 0x140519CB8 (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x14051A880 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x14051C770 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140520A08 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmRemoveIdleStates @ 0x140565A20 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140565F5C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140566228 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140566760 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405669D0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14057520C (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14057A404 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmUpdateIdleStates @ 0x14078C040 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x140866680 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x1408BCE78 (KeConfigureHeteroProcessors.c)
 *     KiInitializeBootStructures @ 0x14099E840 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x14099FB00 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x1409A1CB0 (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x1409A2EA0 (EmonInitializeProfiling.c)
 *     DefaultInitializeProfiling @ 0x1409AA180 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409AC850 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409B2490 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140A4BC2C (KiIntSteerInit.c)
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

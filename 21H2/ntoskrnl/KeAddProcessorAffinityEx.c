/*
 * XREFs of KeAddProcessorAffinityEx @ 0x1402CDC80
 * Callers:
 *     KiSendClockInterruptToClockOwner @ 0x140210A74 (KiSendClockInterruptToClockOwner.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiCheckKeepAlive @ 0x140237860 (KiCheckKeepAlive.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140241CF4 (PoGetPerfStateAndParkingInfo.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140268C08 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoGetIdleTimes @ 0x140269CDC (PoGetIdleTimes.c)
 *     KeDisableTimer2 @ 0x14026DE70 (KeDisableTimer2.c)
 *     ExpUpdateTimerConfiguration @ 0x14029C250 (ExpUpdateTimerConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x14029DA30 (KeFlushQueuedDpcs.c)
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 *     PoIdle @ 0x1402C67D0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1402C9890 (PpmIdlePrepare.c)
 *     PoExecuteIdleCheck @ 0x1402CC750 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x1402CD760 (PpmParkSteerInterrupts.c)
 *     KeQueryTotalCycleTimeThread @ 0x1402D3740 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x14036C100 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3E5C (HalpInterruptInitializeLocalUnit.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C25C4 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x1403C4640 (PpmInstallNewIdleStates.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404C29A0 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSynchronizeStibpPairing @ 0x14051B918 (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x14051C5A0 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x14051E490 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140522728 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmRemoveIdleStates @ 0x140567730 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140567C6C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140567F38 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140568470 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405686E0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x140576E5C (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14057C054 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmUpdateIdleStates @ 0x140796760 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1407BA470 (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x1408643E0 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA4B8 (KeConfigureHeteroProcessors.c)
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x1409A04B4 (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x1409A15F0 (EmonInitializeProfiling.c)
 *     DefaultInitializeProfiling @ 0x1409A7F80 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409AA650 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409B02C0 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140A4E1CC (KiIntSteerInit.c)
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

/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140229380
 * Callers:
 *     HalpInterruptSendIpi @ 0x140220210 (HalpInterruptSendIpi.c)
 *     PoIdle @ 0x140221ED0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x140224F90 (PpmIdlePrepare.c)
 *     PoExecuteIdleCheck @ 0x140227E50 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x140228E60 (PpmParkSteerInterrupts.c)
 *     KeQueryTotalCycleTimeThread @ 0x14022EEF0 (KeQueryTotalCycleTimeThread.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14027AC68 (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoGetIdleTimes @ 0x14027BD3C (PoGetIdleTimes.c)
 *     KeDisableTimer2 @ 0x14027FC30 (KeDisableTimer2.c)
 *     KiSendClockInterruptToClockOwner @ 0x140292B04 (KiSendClockInterruptToClockOwner.c)
 *     HalRequestSoftwareInterrupt @ 0x140293E90 (HalRequestSoftwareInterrupt.c)
 *     KiCheckKeepAlive @ 0x1402B9650 (KiCheckKeepAlive.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402C3774 (PoGetPerfStateAndParkingInfo.c)
 *     ExpUpdateTimerConfiguration @ 0x1402EAF00 (ExpUpdateTimerConfiguration.c)
 *     KeFlushQueuedDpcs @ 0x1402EC6E0 (KeFlushQueuedDpcs.c)
 *     KeUpdateThreadTag @ 0x14036BF50 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x140395580 (PpmIdleSelectStates.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3D0C (HalpInterruptInitializeLocalUnit.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C2194 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x1403C4210 (PpmInstallNewIdleStates.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404C2760 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSynchronizeStibpPairing @ 0x14051B6D8 (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x14051C360 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x14051E250 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1405224E8 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmRemoveIdleStates @ 0x1405674F0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140567A2C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140567CF8 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140568230 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405684A0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x140576C1C (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x14057BE14 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmUpdateIdleStates @ 0x140796560 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1407B9CE0 (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x140864280 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA358 (KeConfigureHeteroProcessors.c)
 *     KiInitializeBootStructures @ 0x14099C160 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x14099D7C0 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x14099F584 (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x1409A06C0 (EmonInitializeProfiling.c)
 *     DefaultInitializeProfiling @ 0x1409A7050 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409A9720 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AF390 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140A4D1CC (KiIntSteerInit.c)
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

/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140277170
 * Callers:
 *     PoGetIdleTimes @ 0x1402056D8 (PoGetIdleTimes.c)
 *     KeQueryTotalCycleTimeThread @ 0x14025A360 (KeQueryTotalCycleTimeThread.c)
 *     HalpInterruptSendIpi @ 0x14026E120 (HalpInterruptSendIpi.c)
 *     PoIdle @ 0x14026FDE0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x140272D80 (PpmIdlePrepare.c)
 *     PoExecuteIdleCheck @ 0x140275C40 (PoExecuteIdleCheck.c)
 *     PpmParkSteerInterrupts @ 0x140276C50 (PpmParkSteerInterrupts.c)
 *     KiCheckKeepAlive @ 0x140307400 (KiCheckKeepAlive.c)
 *     KiSendClockInterruptToClockOwner @ 0x14030E514 (KiSendClockInterruptToClockOwner.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140313E68 (PoGetPerfStateAndParkingInfo.c)
 *     KeFlushQueuedDpcs @ 0x1403267C0 (KeFlushQueuedDpcs.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140328168 (KiIntRedirectQueueRequestOnProcessor.c)
 *     ExpUpdateTimerConfiguration @ 0x140337EB8 (ExpUpdateTimerConfiguration.c)
 *     HalRequestSoftwareInterrupt @ 0x140359A80 (HalRequestSoftwareInterrupt.c)
 *     KeDisableTimer2 @ 0x14035B750 (KeDisableTimer2.c)
 *     KeUpdateThreadTag @ 0x140369290 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x140392080 (PpmIdleSelectStates.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A07EC (HalpInterruptInitializeLocalUnit.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403BF334 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x1403C0480 (PpmInstallNewIdleStates.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x1404BD190 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiSynchronizeStibpPairing @ 0x140515CE8 (KiSynchronizeStibpPairing.c)
 *     KiStopProfileTarget @ 0x140516860 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x140518750 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x14051C9E8 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmRemoveIdleStates @ 0x1405619F0 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140561F2C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1405621F8 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140562730 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405629A0 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x14057118C (PpmCapturePerformanceDistribution.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x140576384 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmUpdateIdleStates @ 0x14077F2B0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x14085F910 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x1408B5F38 (KeConfigureHeteroProcessors.c)
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x14099A414 (KiUpdateProcessorCount.c)
 *     EmonInitializeProfiling @ 0x14099B600 (EmonInitializeProfiling.c)
 *     DefaultInitializeProfiling @ 0x1409A33E0 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x1409A5AA0 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1409AB6C0 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140A40168 (KiIntSteerInit.c)
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

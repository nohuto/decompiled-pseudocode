/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140294460
 * Callers:
 *     KiSendClockInterruptToClockOwner @ 0x14022F244 (KiSendClockInterruptToClockOwner.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1402485E0 (PoGetPerfStateAndParkingInfo.c)
 *     PoGetIdleTimes @ 0x140293444 (PoGetIdleTimes.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1402943C0 (KiIntRedirectQueueRequestOnProcessor.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KeDisableTimer2 @ 0x1402D40E4 (KeDisableTimer2.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     KiSendThawExecution @ 0x1402DA5B0 (KiSendThawExecution.c)
 *     KiCheckKeepAlive @ 0x1402F36BC (KiCheckKeepAlive.c)
 *     PpmParkSteerInterrupts @ 0x1402FF620 (PpmParkSteerInterrupts.c)
 *     KiForwardTick @ 0x140303740 (KiForwardTick.c)
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     PoIdle @ 0x140305BD0 (PoIdle.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1403086B0 (PpmIdlePrepare.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     ExpUpdateTimerConfiguration @ 0x14035C7A4 (ExpUpdateTimerConfiguration.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x140398BE0 (PopIdleWakeStopActiveIntervalAccounting.c)
 *     PpmIdleSelectStates @ 0x1403A1620 (PpmIdleSelectStates.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403B0A04 (HalpInterruptInitializeLocalUnit.c)
 *     KiInitializePrcbThread @ 0x1403C1454 (KiInitializePrcbThread.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403CF26C (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmInstallNewIdleStates @ 0x1403D1870 (PpmInstallNewIdleStates.c)
 *     KiSynchronizeStibpPairing @ 0x14045A748 (KiSynchronizeStibpPairing.c)
 *     HalpTimerWatchdogTriggerSystemReset @ 0x14050EB80 (HalpTimerWatchdogTriggerSystemReset.c)
 *     KiStopProfileTarget @ 0x140571D50 (KiStopProfileTarget.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140574B54 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x140577F60 (KeGetAffinitizedInterruptsInfo.c)
 *     PoExecuteIdleCheck @ 0x1405C6C1C (PoExecuteIdleCheck.c)
 *     PpmRemoveIdleStates @ 0x1405C8980 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1405C8D78 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1405C8FE4 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1405C94E0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405C9740 (PpmUpdateProcessorIdleVeto.c)
 *     PpmCapturePerformanceDistribution @ 0x1405D6FBC (PpmCapturePerformanceDistribution.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PpmUpdateIdleStates @ 0x140829930 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     HalAllocateHardwareCounters @ 0x1409084C0 (HalAllocateHardwareCounters.c)
 *     KeConfigureHeteroProcessors @ 0x14095FD08 (KeConfigureHeteroProcessors.c)
 *     EmonInitializeProfiling @ 0x140A557A0 (EmonInitializeProfiling.c)
 *     KiInitializeBootStructures @ 0x140A57680 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x140A580F0 (KiInitializeKernel.c)
 *     KiUpdateProcessorCount @ 0x140A59C88 (KiUpdateProcessorCount.c)
 *     DefaultInitializeProfiling @ 0x140A61A60 (DefaultInitializeProfiling.c)
 *     Amd64InitializeProfiling @ 0x140A63680 (Amd64InitializeProfiling.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A69470 (KiInitializeDynamicProcessorDpc.c)
 *     KiIntSteerInit @ 0x140B036D4 (KiIntSteerInit.c)
 *     KiInitializeIdleProcess @ 0x140B1B59C (KiInitializeIdleProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( *a1 > (unsigned int)v4 )
    goto LABEL_2;
  result = a1[1];
  if ( (unsigned int)result > (unsigned int)v4 )
  {
    *a1 = v4 + 1;
LABEL_2:
    v5 = (unsigned int)v4;
    v6 = *(_QWORD *)&a1[4 * v4 + 4];
    result = v3;
    _bittestandset64(&v6, v3);
    *(_QWORD *)&a1[4 * v5 + 4] = v6;
  }
  return result;
}

/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1402F1C40
 * Callers:
 *     KeStallExecutionProcessor @ 0x14021F3B0 (KeStallExecutionProcessor.c)
 *     PnpSetDeviceAffinityThread @ 0x140271698 (PnpSetDeviceAffinityThread.c)
 *     MiSetIdealProcessorThread @ 0x1402DF534 (MiSetIdealProcessorThread.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     KiAcquireInterruptConnectLock @ 0x1403756A0 (KiAcquireInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038F428 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTimeSingleLargePageZero @ 0x1403A7C20 (MiTimeSingleLargePageZero.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403ADD38 (HalpTimerStallExecutionProcessor.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403B1A04 (KiSetSystemAffinityThreadToProcessor.c)
 *     MakeGdtReadOnly @ 0x1403B26CC (MakeGdtReadOnly.c)
 *     HalGetEnvironmentVariableEx @ 0x1403B77B0 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403BF3A8 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C4F40 (ExAllocateCacheAwarePushLock.c)
 *     KeSetSystemAffinityThreadEx @ 0x1403CC190 (KeSetSystemAffinityThreadEx.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B4C10 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404B6CD0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404B6EB0 (HalSetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404B7040 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalpAllocatePmcCounterSet @ 0x1404B9980 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404B9D70 (HalpFreePmcCounterSet.c)
 *     EmonMarkCountersReserved @ 0x1404CE764 (EmonMarkCountersReserved.c)
 *     EmonReleaseReservedCounters @ 0x1404CF328 (EmonReleaseReservedCounters.c)
 *     HalpQueryCapsuleCapabilities @ 0x1404D2660 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1404D2740 (HalpUpdateCapsule.c)
 *     IopPassiveInterruptWorker @ 0x140508150 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14050CFDC (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x14051BF78 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x14051F8D4 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x14056039C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405622F4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x140715860 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x1407A7EA4 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140860E20 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x1408629F0 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x14087003C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x1409930F0 (PopEndMirroring.c)
 *     HalpInitializeMce @ 0x14099D4FC (HalpInitializeMce.c)
 *     HalpMceInit @ 0x14099D5FC (HalpMceInit.c)
 *     HalpCmciInit @ 0x14099D924 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A3E88 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A8E30 (IopLiveDumpCorralProcessors.c)
 *     ViIsBTSSupported @ 0x1409D5618 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1409D574C (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140A45AA0 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A56F60 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiSetSystemAffinityThread @ 0x1402F0A5C (KiSetSystemAffinityThread.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A2374 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A2E70 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 Group; // rcx
  PGROUP_AFFINITY v6; // r13
  char v7; // r12
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbx
  _DWORD *v11; // rcx
  int MiscFlags; // eax
  unsigned int IdealProcessor; // ebp
  unsigned int v14; // edi
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  _GROUP_AFFINITY v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  Group = Affinity->Group;
  v20 = 0LL;
  v6 = PreviousAffinity;
  v18 = 0LL;
  if ( (unsigned __int16)Group >= (unsigned int)KeActiveProcessors[0]
    || (PreviousAffinity = (PGROUP_AFFINITY)KeActiveProcessors,
        (*(_QWORD *)&KeActiveProcessors[4 * Group + 4] & Affinity->Mask) == 0)
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[4 * Affinity->Group + 4];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    PreviousAffinity = (PGROUP_AFFINITY)((-1LL << (CurrentIrql + 1)) & 4);
    v2 = (unsigned int)PreviousAffinity | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v11[6];
        v11[6] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      break;
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v16[6] - 1;
        v16[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v19, (__int64)PreviousAffinity, v2, (__int64)SchedulerAssist);
    while ( CurrentThread->ThreadLock );
  }
  MiscFlags = CurrentThread->MiscFlags;
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( (MiscFlags & 8) != 0 )
  {
    v18.Group = CurrentThread->Affinity.Group;
    v18.Mask = CurrentThread->Affinity.Mask;
  }
  else
  {
    CurrentThread->MiscFlags = MiscFlags | 8;
  }
  if ( v7 )
    KiSetSystemAffinityThread((__int64)CurrentPrcb, (__int64)Affinity, 0x500u, (__int64)&v20);
  v14 = CurrentThread->IdealProcessor;
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v14);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v20, CurrentIrql);
  if ( v6 )
    *v6 = v18;
}

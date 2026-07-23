/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x140336D80
 * Callers:
 *     KeStallExecutionProcessor @ 0x140278400 (KeStallExecutionProcessor.c)
 *     PnpSetDeviceAffinityThread @ 0x1402E0D28 (PnpSetDeviceAffinityThread.c)
 *     MiSetIdealProcessorThread @ 0x1403269D0 (MiSetIdealProcessorThread.c)
 *     KeGenericProcessorCallback @ 0x140337898 (KeGenericProcessorCallback.c)
 *     KiAcquireInterruptConnectLock @ 0x140374890 (KiAcquireInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403A6C78 (HalpTimerStallExecutionProcessor.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403ABD84 (KiSetSystemAffinityThreadToProcessor.c)
 *     MakeGdtReadOnly @ 0x1403ACA4C (MakeGdtReadOnly.c)
 *     MiTimeSingleLargePageZero @ 0x1403AE040 (MiTimeSingleLargePageZero.c)
 *     HalGetEnvironmentVariableEx @ 0x1403B6980 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403BE418 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C3FD0 (ExAllocateCacheAwarePushLock.c)
 *     KeSetSystemAffinityThreadEx @ 0x1403CB3D0 (KeSetSystemAffinityThreadEx.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B4530 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404B65F0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404B67D0 (HalSetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404B6960 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalpAllocatePmcCounterSet @ 0x1404B92A0 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404B9690 (HalpFreePmcCounterSet.c)
 *     EmonMarkCountersReserved @ 0x1404CE2B4 (EmonMarkCountersReserved.c)
 *     EmonReleaseReservedCounters @ 0x1404CEE78 (EmonReleaseReservedCounters.c)
 *     HalpQueryCapsuleCapabilities @ 0x1404D21B0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1404D2290 (HalpUpdateCapsule.c)
 *     IopPassiveInterruptWorker @ 0x140507B00 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14050C98C (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x14051B928 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x14051F284 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x14055FD4C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140561CA4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x1407134D0 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x1407A5754 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x14085FAD0 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x1408616D0 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x14086E54C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140991AB0 (PopEndMirroring.c)
 *     HalpInitializeMce @ 0x14099BD5C (HalpInitializeMce.c)
 *     HalpMceInit @ 0x14099BE5C (HalpMceInit.c)
 *     HalpCmciInit @ 0x14099C184 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A3048 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A7FD0 (IopLiveDumpCorralProcessors.c)
 *     ViIsBTSSupported @ 0x1409D55B8 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1409D56EC (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140A4027C (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A51260 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiSetSystemAffinityThread @ 0x140335B9C (KiSetSystemAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A1C84 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A2780 (EtwTraceThreadAffinity.c)
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
  __int64 CurrentThread; // rbx
  _DWORD *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebp
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
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
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
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
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
    while ( *(_QWORD *)(CurrentThread + 64) );
  }
  v12 = *(_DWORD *)(CurrentThread + 116);
  v13 = *(_DWORD *)(CurrentThread + 588);
  if ( (v12 & 8) != 0 )
  {
    v18.Group = *(_WORD *)(CurrentThread + 584);
    v18.Mask = *(_QWORD *)(CurrentThread + 576);
  }
  else
  {
    *(_DWORD *)(CurrentThread + 116) = v12 | 8;
  }
  if ( v7 )
    KiSetSystemAffinityThread((__int64)CurrentPrcb, (__int64)Affinity, 0x500u, (__int64)&v20);
  v14 = *(_DWORD *)(CurrentThread + 588);
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, v13, v14);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v20, CurrentIrql);
  if ( v6 )
    *v6 = v18;
}

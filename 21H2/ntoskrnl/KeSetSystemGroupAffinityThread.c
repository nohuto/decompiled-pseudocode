/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x1402EB4F0
 * Callers:
 *     KeStallExecutionProcessor @ 0x14022A880 (KeStallExecutionProcessor.c)
 *     KeGenericProcessorCallback @ 0x1402EB178 (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x1402ECE20 (MiSetIdealProcessorThread.c)
 *     PnpSetDeviceAffinityThread @ 0x140361E70 (PnpSetDeviceAffinityThread.c)
 *     KiAcquireInterruptConnectLock @ 0x140377AC0 (KiAcquireInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AA2D8 (HalpTimerStallExecutionProcessor.c)
 *     MiTimeSingleLargePageZero @ 0x1403B0510 (MiTimeSingleLargePageZero.c)
 *     MakeGdtReadOnly @ 0x1403B4F30 (MakeGdtReadOnly.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403B59F4 (KiSetSystemAffinityThreadToProcessor.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BAC50 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403C1278 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C86C0 (ExAllocateCacheAwarePushLock.c)
 *     KeSetSystemAffinityThreadEx @ 0x1403CF720 (KeSetSystemAffinityThreadEx.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B9AF0 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404BBBB0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BBD90 (HalSetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404BBF20 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalpAllocatePmcCounterSet @ 0x1404BE870 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404BEC60 (HalpFreePmcCounterSet.c)
 *     EmonMarkCountersReserved @ 0x1404D36D4 (EmonMarkCountersReserved.c)
 *     EmonReleaseReservedCounters @ 0x1404D4298 (EmonReleaseReservedCounters.c)
 *     HalpQueryCapsuleCapabilities @ 0x1404D75C0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1404D76A0 (HalpUpdateCapsule.c)
 *     IopPassiveInterruptWorker @ 0x14050D5B0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14051243C (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x140521428 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x140524D84 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x14056584C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405677A4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x1407272B0 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x1407BAB28 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140864440 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140866020 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x140873470 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140996250 (PopEndMirroring.c)
 *     HalpInitializeMce @ 0x1409A0E1C (HalpInitializeMce.c)
 *     HalpMceInit @ 0x1409A0F1C (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A1244 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A6CB0 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ABCA0 (IopLiveDumpCorralProcessors.c)
 *     ViIsBTSSupported @ 0x1409D8628 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1409D875C (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140A4D2E0 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A58C04 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140230BD0 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiSetSystemAffinityThread @ 0x1402EB8C4 (KiSetSystemAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7844 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A8340 (EtwTraceThreadAffinity.c)
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
  struct _GROUP_AFFINITY v18; // [rsp+20h] [rbp-48h]
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
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 1280LL, &v20);
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

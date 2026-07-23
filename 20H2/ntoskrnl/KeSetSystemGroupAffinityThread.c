/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x14033D060
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x1402045F8 (PnpSetDeviceAffinityThread.c)
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     MiSetIdealProcessorThread @ 0x140333A84 (MiSetIdealProcessorThread.c)
 *     KeGenericProcessorCallback @ 0x14033CC78 (KeGenericProcessorCallback.c)
 *     KiAcquireInterruptConnectLock @ 0x140377630 (KiAcquireInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTimeSingleLargePageZero @ 0x1403AA610 (MiTimeSingleLargePageZero.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B0328 (HalpTimerStallExecutionProcessor.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403B4374 (KiSetSystemAffinityThreadToProcessor.c)
 *     MakeGdtReadOnly @ 0x1403B503C (MakeGdtReadOnly.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BA250 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0A28 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C7930 (ExAllocateCacheAwarePushLock.c)
 *     KeSetSystemAffinityThreadEx @ 0x1403CEDB0 (KeSetSystemAffinityThreadEx.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B8130 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404BA1F0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BA3D0 (HalSetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404BA560 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalpAllocatePmcCounterSet @ 0x1404BCEA0 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404BD290 (HalpFreePmcCounterSet.c)
 *     EmonMarkCountersReserved @ 0x1404D1D04 (EmonMarkCountersReserved.c)
 *     EmonReleaseReservedCounters @ 0x1404D28C8 (EmonReleaseReservedCounters.c)
 *     HalpQueryCapsuleCapabilities @ 0x1404D5BF0 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1404D5CD0 (HalpUpdateCapsule.c)
 *     IopPassiveInterruptWorker @ 0x14050BA80 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14051090C (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x14051F948 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x1405232A4 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x140563D7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140565CD4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x140723820 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x1407B5EC8 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140866840 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140868410 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x140875B8C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140999250 (PopEndMirroring.c)
 *     HalpInitializeMce @ 0x1409A35FC (HalpInitializeMce.c)
 *     HalpMceInit @ 0x1409A36FC (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A3A24 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A9DE4 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x1409AEDA0 (IopLiveDumpCorralProcessors.c)
 *     ViIsBTSSupported @ 0x1409DB638 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1409DB76C (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140A4BD40 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A575E0 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiSetSystemAffinityThread @ 0x14033D1E8 (KiSetSystemAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A5E14 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A6910 (EtwTraceThreadAffinity.c)
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

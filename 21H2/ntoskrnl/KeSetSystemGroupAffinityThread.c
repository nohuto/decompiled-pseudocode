/*
 * XREFs of KeSetSystemGroupAffinityThread @ 0x14029C840
 * Callers:
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x14029E170 (MiSetIdealProcessorThread.c)
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     PnpSetDeviceAffinityThread @ 0x1402F7538 (PnpSetDeviceAffinityThread.c)
 *     KiAcquireInterruptConnectLock @ 0x140377610 (KiAcquireInterruptConnectLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AB068 (HalpTimerStallExecutionProcessor.c)
 *     MiTimeSingleLargePageZero @ 0x1403B0680 (MiTimeSingleLargePageZero.c)
 *     MakeGdtReadOnly @ 0x1403B50A0 (MakeGdtReadOnly.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403B5B64 (KiSetSystemAffinityThreadToProcessor.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BADC0 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403C16A8 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C8860 (ExAllocateCacheAwarePushLock.c)
 *     KeSetSystemAffinityThreadEx @ 0x1403CF890 (KeSetSystemAffinityThreadEx.c)
 *     HalpCreateMachineCheckErrorRecord @ 0x1404B9D30 (HalpCreateMachineCheckErrorRecord.c)
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404BBDF0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BBFD0 (HalSetEnvironmentVariableEx.c)
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x1404BC160 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 *     HalpAllocatePmcCounterSet @ 0x1404BEAB0 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404BEEA0 (HalpFreePmcCounterSet.c)
 *     EmonMarkCountersReserved @ 0x1404D3914 (EmonMarkCountersReserved.c)
 *     EmonReleaseReservedCounters @ 0x1404D44D8 (EmonReleaseReservedCounters.c)
 *     HalpQueryCapsuleCapabilities @ 0x1404D7800 (HalpQueryCapsuleCapabilities.c)
 *     HalpUpdateCapsule @ 0x1404D78E0 (HalpUpdateCapsule.c)
 *     IopPassiveInterruptWorker @ 0x14050D7F0 (IopPassiveInterruptWorker.c)
 *     KiDynamicProcessorInitialization @ 0x14051267C (KiDynamicProcessorInitialization.c)
 *     KiInterruptDispatchCommon @ 0x140521668 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x140524FC4 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x140565A8C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405679E4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 *     PpmIdleInitializeConcurrency @ 0x1407BB2B8 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x1408645A0 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140866180 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x1408735D0 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 *     HalpInitializeMce @ 0x1409A1D4C (HalpInitializeMce.c)
 *     HalpMceInit @ 0x1409A1E4C (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A2174 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A7BE0 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ACBD0 (IopLiveDumpCorralProcessors.c)
 *     ViIsBTSSupported @ 0x1409D9628 (ViIsBTSSupported.c)
 *     ViSetupBTSPerProcNoEnable @ 0x1409D975C (ViSetupBTSPerProcNoEnable.c)
 *     KiComputeNumaCosts @ 0x140A4E2E0 (KiComputeNumaCosts.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140A59C04 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSetSystemAffinityThread @ 0x14029CC14 (KiSetSystemAffinityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x1405A8570 (EtwTraceThreadAffinity.c)
 */

void __stdcall KeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  __int64 Group; // rcx
  char v5; // r12
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  __int64 CurrentThread; // rbx
  _DWORD *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // edi
  __int64 v13; // r8
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  _GROUP_AFFINITY v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  Group = Affinity->Group;
  v20 = 0LL;
  v18 = 0LL;
  if ( (unsigned __int16)Group >= (unsigned int)KeActiveProcessors[0]
    || (*(_QWORD *)&KeActiveProcessors[4 * Group + 4] & Affinity->Mask) == 0
    || Affinity->Reserved[0] | (unsigned __int16)(Affinity->Reserved[1] | Affinity->Reserved[2]) )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    Affinity->Mask &= *(_QWORD *)&KeActiveProcessors[4 * Affinity->Group + 4];
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0;
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  while ( 1 )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v9[6];
        v9[6] = v15 + 1;
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
      KeYieldProcessorEx(&v19);
    while ( *(_QWORD *)(CurrentThread + 64) );
  }
  v10 = *(_DWORD *)(CurrentThread + 116);
  v11 = *(_DWORD *)(CurrentThread + 588);
  if ( (v10 & 8) != 0 )
  {
    v18.Group = *(_WORD *)(CurrentThread + 584);
    v18.Mask = *(_QWORD *)(CurrentThread + 576);
  }
  else
  {
    *(_DWORD *)(CurrentThread + 116) = v10 | 8;
  }
  if ( v5 )
    KiSetSystemAffinityThread(CurrentPrcb, Affinity, 1280LL, &v20);
  v12 = *(_DWORD *)(CurrentThread + 588);
  KiReleaseThreadLockSafe(CurrentThread);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, v11, v12);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
    EtwTraceThreadAffinity(CurrentThread, Affinity);
  LOBYTE(v13) = CurrentIrql;
  KiProcessDeferredReadyList(CurrentPrcb, &v20, v13);
  if ( PreviousAffinity )
    *PreviousAffinity = v18;
}

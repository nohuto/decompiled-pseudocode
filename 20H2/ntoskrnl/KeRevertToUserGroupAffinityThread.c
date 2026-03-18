/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x14033CF00
 * Callers:
 *     PnpSendIrp @ 0x140204550 (PnpSendIrp.c)
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x14028E4C0 (ExpWorkerThread.c)
 *     MiSetIdealProcessorThread @ 0x140333A84 (MiSetIdealProcessorThread.c)
 *     KeGenericProcessorCallback @ 0x14033CC78 (KeGenericProcessorCallback.c)
 *     KeMaskInterrupt @ 0x140376AB0 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140376C1C (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x1403774AC (KiConnectInterrupt.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTimeSingleLargePageZero @ 0x1403AA610 (MiTimeSingleLargePageZero.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403B0328 (HalpTimerStallExecutionProcessor.c)
 *     KiInitMachineDependent @ 0x1403B420C (KiInitMachineDependent.c)
 *     MakeGdtReadOnly @ 0x1403B503C (MakeGdtReadOnly.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BA250 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0A28 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C7930 (ExAllocateCacheAwarePushLock.c)
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
 *     KeRevertToUserAffinityThread @ 0x140511700 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x140511740 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x140512E24 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x14051F948 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x1405232A4 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x140563D7C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140565CD4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x140723820 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x1407394EC (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1407B5EC8 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140866840 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140868410 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x140875B8C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     HalpMceInit @ 0x1409A36FC (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A3A24 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A9DE4 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409B06E8 (IopLiveDumpUncorralProcessors.c)
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

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  PGROUP_AFFINITY p_UserAffinity; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v8; // rcx
  unsigned int IdealProcessor; // esi
  __int64 UserIdealProcessor; // r8
  unsigned int v11; // ebp
  int Group; // ecx
  __int64 v13; // rax
  bool v14; // zf
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  p_UserAffinity = PreviousAffinity;
  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 8) != 0 )
  {
    v5 = PreviousAffinity->Reserved[2];
    LOWORD(v5) = PreviousAffinity->Reserved[0] | PreviousAffinity->Reserved[1] | v5;
    if ( !(_WORD)v5 )
    {
      if ( !PreviousAffinity->Mask
        || (Group = PreviousAffinity->Group, (unsigned __int16)Group < (unsigned int)KeActiveProcessors[0])
        && (v13 = qword_140CFC848[Group], v14 = (v13 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v13, !v14) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v5 = (-1LL << (CurrentIrql + 1)) & 4;
          v1 = (unsigned int)v5 | SchedulerAssist[5];
          SchedulerAssist[5] = v1;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = 0;
        while ( 1 )
        {
          v8 = CurrentPrcb->SchedulerAssist;
          if ( v8 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v15 = v8[6];
              v8[6] = v15 + 1;
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
            KeYieldProcessorEx(&v18, v5, v1, (__int64)SchedulerAssist);
          while ( CurrentThread->ThreadLock );
        }
        IdealProcessor = CurrentThread->IdealProcessor;
        if ( p_UserAffinity->Mask )
        {
          UserIdealProcessor = 1280LL;
        }
        else
        {
          UserIdealProcessor = CurrentThread->UserIdealProcessor;
          p_UserAffinity = &CurrentThread->UserAffinity;
          CurrentThread->MiscFlags &= ~8u;
        }
        KiSetSystemAffinityThread(CurrentPrcb, p_UserAffinity, UserIdealProcessor, &v19);
        v11 = CurrentThread->IdealProcessor;
        KiReleaseThreadLockSafe((__int64)CurrentThread);
        if ( (xmmword_140CFC490 & 0x8000000) != 0 )
          EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v11);
        if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
          EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
        KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v19, CurrentIrql);
      }
    }
  }
}

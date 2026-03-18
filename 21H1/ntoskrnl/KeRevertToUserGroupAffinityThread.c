/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1403374F0
 * Callers:
 *     ExpWorkerThread @ 0x140225870 (ExpWorkerThread.c)
 *     KeStallExecutionProcessor @ 0x140278400 (KeStallExecutionProcessor.c)
 *     PnpSendIrp @ 0x1402E0C80 (PnpSendIrp.c)
 *     MiSetIdealProcessorThread @ 0x1403269D0 (MiSetIdealProcessorThread.c)
 *     KeGenericProcessorCallback @ 0x140337898 (KeGenericProcessorCallback.c)
 *     KeMaskInterrupt @ 0x140373D10 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140373E7C (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14037470C (KiConnectInterrupt.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403A6C78 (HalpTimerStallExecutionProcessor.c)
 *     KiInitMachineDependent @ 0x1403ABC1C (KiInitMachineDependent.c)
 *     MakeGdtReadOnly @ 0x1403ACA4C (MakeGdtReadOnly.c)
 *     MiTimeSingleLargePageZero @ 0x1403AE040 (MiTimeSingleLargePageZero.c)
 *     HalGetEnvironmentVariableEx @ 0x1403B6980 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403BE418 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C3FD0 (ExAllocateCacheAwarePushLock.c)
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
 *     KeRevertToUserAffinityThread @ 0x14050D780 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x14050D7C0 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x14050EEA4 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x14051B928 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x14051F284 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x14055FD4C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x140561CA4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x1407134D0 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x140723FC0 (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1407A5754 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x14085FAD0 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x1408616D0 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x14086E54C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     HalpMceInit @ 0x14099BE5C (HalpMceInit.c)
 *     HalpCmciInit @ 0x14099C184 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A3048 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409A9918 (IopLiveDumpUncorralProcessors.c)
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
  unsigned int UserIdealProcessor; // r8d
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
        && (v13 = qword_140CFC838[Group], v14 = (v13 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v13, !v14) )
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
          UserIdealProcessor = 1280;
        }
        else
        {
          UserIdealProcessor = CurrentThread->UserIdealProcessor;
          p_UserAffinity = &CurrentThread->UserAffinity;
          CurrentThread->MiscFlags &= ~8u;
        }
        KiSetSystemAffinityThread((__int64)CurrentPrcb, (__int64)p_UserAffinity, UserIdealProcessor, (__int64)&v19);
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

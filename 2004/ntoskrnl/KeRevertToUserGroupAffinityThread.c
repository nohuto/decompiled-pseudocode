/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1402E44A0
 * Callers:
 *     KeStallExecutionProcessor @ 0x14021F3B0 (KeStallExecutionProcessor.c)
 *     PnpSendIrp @ 0x1402715F0 (PnpSendIrp.c)
 *     ExpWorkerThread @ 0x1402B84F0 (ExpWorkerThread.c)
 *     MiSetIdealProcessorThread @ 0x1402DF534 (MiSetIdealProcessorThread.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     KeMaskInterrupt @ 0x140374B20 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140374C8C (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14037551C (KiConnectInterrupt.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038F428 (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTimeSingleLargePageZero @ 0x1403A7C20 (MiTimeSingleLargePageZero.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403ADD38 (HalpTimerStallExecutionProcessor.c)
 *     KiInitMachineDependent @ 0x1403B189C (KiInitMachineDependent.c)
 *     MakeGdtReadOnly @ 0x1403B26CC (MakeGdtReadOnly.c)
 *     HalGetEnvironmentVariableEx @ 0x1403B77B0 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403BF3A8 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C4F40 (ExAllocateCacheAwarePushLock.c)
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
 *     KeRevertToUserAffinityThread @ 0x14050DDD0 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x14050DE10 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x14050F4F4 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x14051BF78 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x14051F8D4 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x14056039C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405622F4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x140715860 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x14072AA5C (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1407A7EA4 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140860E20 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x1408629F0 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x14087003C (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     HalpMceInit @ 0x14099D5FC (HalpMceInit.c)
 *     HalpCmciInit @ 0x14099D924 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A3E88 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409AA778 (IopLiveDumpUncorralProcessors.c)
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
        KiReleaseThreadLockSafe(CurrentThread);
        if ( (xmmword_140CFC490 & 0x8000000) != 0 )
          EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v11);
        if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
          EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
        KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v19, CurrentIrql);
      }
    }
  }
}

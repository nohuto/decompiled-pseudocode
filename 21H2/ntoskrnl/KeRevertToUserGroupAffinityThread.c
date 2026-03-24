/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x1402EB390
 * Callers:
 *     KeStallExecutionProcessor @ 0x14022A880 (KeStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x140241E80 (ExpWorkerThread.c)
 *     KeGenericProcessorCallback @ 0x1402EB178 (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x1402ECE20 (MiSetIdealProcessorThread.c)
 *     PnpSendIrp @ 0x140361DC8 (PnpSendIrp.c)
 *     KeMaskInterrupt @ 0x140376F40 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x1403770AC (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14037793C (KiConnectInterrupt.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AA2D8 (HalpTimerStallExecutionProcessor.c)
 *     MiTimeSingleLargePageZero @ 0x1403B0510 (MiTimeSingleLargePageZero.c)
 *     MakeGdtReadOnly @ 0x1403B4F30 (MakeGdtReadOnly.c)
 *     KiInitMachineDependent @ 0x1403B588C (KiInitMachineDependent.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BAC50 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403C1278 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C86C0 (ExAllocateCacheAwarePushLock.c)
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
 *     KeRevertToUserAffinityThread @ 0x140513240 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x140513280 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x140514964 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x140521428 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x140524D84 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x14056584C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405677A4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x1407272B0 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x14073E92C (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1407BAB28 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x140864440 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140866020 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x140873470 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     HalpMceInit @ 0x1409A0F1C (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A1244 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A6CB0 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409AD5E8 (IopLiveDumpUncorralProcessors.c)
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

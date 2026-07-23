/*
 * XREFs of KeRevertToUserGroupAffinityThread @ 0x14029C6E0
 * Callers:
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x14029E170 (MiSetIdealProcessorThread.c)
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     ExpWorkerThread @ 0x1402E66D0 (ExpWorkerThread.c)
 *     PnpSendIrp @ 0x1402F7490 (PnpSendIrp.c)
 *     KeMaskInterrupt @ 0x140376A90 (KeMaskInterrupt.c)
 *     KiDisconnectInterruptCommon @ 0x140376BFC (KiDisconnectInterruptCommon.c)
 *     KiConnectInterrupt @ 0x14037748C (KiConnectInterrupt.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     HalpTimerStallExecutionProcessor @ 0x1403AB068 (HalpTimerStallExecutionProcessor.c)
 *     MiTimeSingleLargePageZero @ 0x1403B0680 (MiTimeSingleLargePageZero.c)
 *     MakeGdtReadOnly @ 0x1403B50A0 (MakeGdtReadOnly.c)
 *     KiInitMachineDependent @ 0x1403B59FC (KiInitMachineDependent.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BADC0 (HalGetEnvironmentVariableEx.c)
 *     PpmInstallFeedbackCounters @ 0x1403C16A8 (PpmInstallFeedbackCounters.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C8860 (ExAllocateCacheAwarePushLock.c)
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
 *     KeRevertToUserAffinityThread @ 0x140513480 (KeRevertToUserAffinityThread.c)
 *     KeRevertToUserAffinityThreadEx @ 0x1405134C0 (KeRevertToUserAffinityThreadEx.c)
 *     KiDeregisterNmiSxCallback @ 0x140514BA4 (KiDeregisterNmiSxCallback.c)
 *     KiInterruptDispatchCommon @ 0x140521668 (KiInterruptDispatchCommon.c)
 *     KiAttemptBugcheckRecovery @ 0x140524FC4 (KiAttemptBugcheckRecovery.c)
 *     PpmClearSimulatedIdle @ 0x140565A8C (PpmClearSimulatedIdle.c)
 *     PpmSetSimulatedIdle @ 0x1405679E4 (PpmSetSimulatedIdle.c)
 *     MiCombineAllPhysicalMemory @ 0x140727760 (MiCombineAllPhysicalMemory.c)
 *     PnpCallAddDevice @ 0x14073EAEC (PnpCallAddDevice.c)
 *     PpmIdleInitializeConcurrency @ 0x1407BB2B8 (PpmIdleInitializeConcurrency.c)
 *     HalpCmcWorkerRoutine @ 0x1408645A0 (HalpCmcWorkerRoutine.c)
 *     HalpLoadMicrocode @ 0x140866180 (HalpLoadMicrocode.c)
 *     CmInitializeProcessor @ 0x1408735D0 (CmInitializeProcessor.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     HalpMceInit @ 0x1409A1E4C (HalpMceInit.c)
 *     HalpCmciInit @ 0x1409A2174 (HalpCmciInit.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A7BE0 (HalpHandlePreviousMcaErrors.c)
 *     IopLiveDumpUncorralProcessors @ 0x1409AE518 (IopLiveDumpUncorralProcessors.c)
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

void __stdcall KeRevertToUserGroupAffinityThread(PGROUP_AFFINITY PreviousAffinity)
{
  PGROUP_AFFINITY p_UserAffinity; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *v5; // rcx
  unsigned int IdealProcessor; // esi
  __int64 UserIdealProcessor; // r8
  unsigned int v8; // ebp
  __int64 v9; // r8
  int Group; // ecx
  __int64 v11; // rax
  bool v12; // zf
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  p_UserAffinity = PreviousAffinity;
  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 8) != 0
    && !(PreviousAffinity->Reserved[0] | (unsigned __int16)(PreviousAffinity->Reserved[1] | PreviousAffinity->Reserved[2])) )
  {
    if ( !PreviousAffinity->Mask
      || (Group = PreviousAffinity->Group, (unsigned __int16)Group < (unsigned __int16)KeActiveProcessors)
      && (v11 = qword_140CFC848[Group], v12 = (v11 & p_UserAffinity->Mask) == 0, p_UserAffinity->Mask &= v11, !v12) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = 0;
      while ( 1 )
      {
        v5 = CurrentPrcb->SchedulerAssist;
        if ( v5 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v5[6];
            v5[6] = v14 + 1;
            if ( v14 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v15[6] - 1;
            v15[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v17);
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
      KiSetSystemAffinityThread(CurrentPrcb, p_UserAffinity, UserIdealProcessor, &v18);
      v8 = CurrentThread->IdealProcessor;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( (xmmword_140CFC490 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v8);
      if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
        EtwTraceThreadAffinity(CurrentThread, p_UserAffinity);
      LOBYTE(v9) = CurrentIrql;
      KiProcessDeferredReadyList(CurrentPrcb, &v18, v9);
    }
  }
}

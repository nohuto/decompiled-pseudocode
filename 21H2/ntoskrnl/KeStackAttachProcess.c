/*
 * XREFs of KeStackAttachProcess @ 0x14025C110
 * Callers:
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     NtGetWriteWatch @ 0x14032C650 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x14032DF30 (NtUnlockVirtualMemory.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405CEFB0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CF6F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     NtProtectVirtualMemory @ 0x1405F8E40 (NtProtectVirtualMemory.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x14062027C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1406A5F94 (PspSetQuotaLimits.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     NtResetWriteWatch @ 0x1406ED050 (NtResetWriteWatch.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     NtSetInformationVirtualMemory @ 0x14070F280 (NtSetInformationVirtualMemory.c)
 *     CmpStartCLFSLog @ 0x14077D984 (CmpStartCLFSLog.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884E94 (DbgkpPostFakeThreadMessages.c)
 *     NtInitializeEnclave @ 0x1408D4170 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D4450 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6800 (NtFreeUserPhysicalPages.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E08C0 (PfSnAppLaunchScenarioControl.c)
 *     PspApplyWorkingSetLimits @ 0x140908A84 (PspApplyWorkingSetLimits.c)
 *     PspCatchCriticalBreak @ 0x14090AEE4 (PspCatchCriticalBreak.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF40 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B09C0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiAttachProcess @ 0x140207340 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *CurrentThread; // rdi
  PRKAPC_STATE v5; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = ApcState;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&PROCESS->0 & 0x400) != 0 )
    KeBugCheckEx(
      5u,
      (ULONG_PTR)PROCESS,
      (ULONG_PTR)CurrentThread->ApcState.Process,
      CurrentThread->ApcStateIndex,
      KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    ApcState->Process = (_KPROCESS *)1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      ApcState = (PRKAPC_STATE)((-1LL << (CurrentIrql + 1)) & 4);
      v2 = (unsigned int)ApcState | SchedulerAssist[5];
      SchedulerAssist[5] = v2;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v15 = 0;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v9[6];
        v9[6] = v12 + 1;
        if ( v12 == -1 )
LABEL_20:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v10[6] - 1;
          v10[6] = v13;
          if ( !v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v15, (__int64)ApcState, v2, (__int64)SchedulerAssist);
      while ( CurrentThread->ThreadLock );
      v11 = CurrentPrcb->SchedulerAssist;
      if ( v11 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v11[6];
          v11[6] = v14 + 1;
          if ( v14 == -1 )
            goto LABEL_20;
        }
      }
    }
    if ( CurrentThread->ApcStateIndex )
    {
      KiAttachProcess((__int64)CurrentThread, (__int64)PROCESS, CurrentIrql, 0, (__int64)v5);
    }
    else
    {
      KiAttachProcess((__int64)CurrentThread, (__int64)PROCESS, CurrentIrql, 0, (__int64)&CurrentThread->600);
      v5->Process = 0LL;
    }
  }
}

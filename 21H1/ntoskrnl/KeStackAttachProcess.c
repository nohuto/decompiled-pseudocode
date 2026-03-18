/*
 * XREFs of KeStackAttachProcess @ 0x1402A51A0
 * Callers:
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405C6C90 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405C7284 (PspProcessDynamicEnforcedAddressRanges.c)
 *     PspQueryQuotaLimits @ 0x1405DA958 (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtProtectVirtualMemory @ 0x1405ED850 (NtProtectVirtualMemory.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     NtResetWriteWatch @ 0x14062DC10 (NtResetWriteWatch.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x14063BA60 (NtSetInformationVirtualMemory.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1406D3274 (PspSetQuotaLimits.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     CmpStartCLFSLog @ 0x14076C9D4 (CmpStartCLFSLog.c)
 *     PsCreateMinimalProcess @ 0x14078748C (PsCreateMinimalProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140880A84 (DbgkpPostFakeThreadMessages.c)
 *     NtInitializeEnclave @ 0x1408CF820 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408CFB00 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408DBF50 (PfSnAppLaunchScenarioControl.c)
 *     PspApplyWorkingSetLimits @ 0x1409043D4 (PspApplyWorkingSetLimits.c)
 *     PspCatchCriticalBreak @ 0x140906864 (PspCatchCriticalBreak.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140957230 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ACCF0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x14025E630 (KiAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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

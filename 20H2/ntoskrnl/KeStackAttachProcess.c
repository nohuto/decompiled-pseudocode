/*
 * XREFs of KeStackAttachProcess @ 0x14023EE20
 * Callers:
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405CCFB0 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CD684 (PspProcessDynamicEnforcedAddressRanges.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     NtResetWriteWatch @ 0x140624640 (NtResetWriteWatch.c)
 *     NtSetInformationVirtualMemory @ 0x14062AB80 (NtSetInformationVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x140635F3C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     NtProtectVirtualMemory @ 0x14067BA90 (NtProtectVirtualMemory.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1406C8ED4 (PspSetQuotaLimits.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     CmpStartCLFSLog @ 0x140779BA4 (CmpStartCLFSLog.c)
 *     PsCreateMinimalProcess @ 0x1407C1F84 (PsCreateMinimalProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x1408878F4 (DbgkpPostFakeThreadMessages.c)
 *     NtInitializeEnclave @ 0x1408D69B0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D6C90 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E3100 (PfSnAppLaunchScenarioControl.c)
 *     PspApplyWorkingSetLimits @ 0x14090B2D4 (PspApplyWorkingSetLimits.c)
 *     PspCatchCriticalBreak @ 0x14090D734 (PspCatchCriticalBreak.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095E6C0 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B3AC0 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiAttachProcess @ 0x140268660 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)PROCESS;
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
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = 0;
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v7[6];
        v7[6] = v11 + 1;
        if ( v11 == -1 )
LABEL_20:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v8[6] - 1;
          v8[6] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v14);
      while ( CurrentThread->ThreadLock );
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v9[6];
          v9[6] = v13 + 1;
          if ( v13 == -1 )
            goto LABEL_20;
        }
      }
    }
    if ( CurrentThread->ApcStateIndex )
    {
      KiAttachProcess((_DWORD)CurrentThread, v4, CurrentIrql, 0, (__int64)ApcState);
    }
    else
    {
      KiAttachProcess((_DWORD)CurrentThread, v4, CurrentIrql, 0, (__int64)&CurrentThread->600);
      ApcState->Process = 0LL;
    }
  }
}

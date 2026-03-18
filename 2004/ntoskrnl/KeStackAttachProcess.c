/*
 * XREFs of KeStackAttachProcess @ 0x14024C170
 * Callers:
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x1405C7C90 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405C8288 (PspProcessDynamicEnforcedAddressRanges.c)
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     NtResetWriteWatch @ 0x1405F8BD0 (NtResetWriteWatch.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     NtSetInformationVirtualMemory @ 0x140606910 (NtSetInformationVirtualMemory.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     PspQueryQuotaLimits @ 0x140660C58 (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     NtProtectVirtualMemory @ 0x140696D50 (NtProtectVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1406F5E44 (PspSetQuotaLimits.c)
 *     CmpStartCLFSLog @ 0x14076F174 (CmpStartCLFSLog.c)
 *     PsCreateMinimalProcess @ 0x140781A6C (PsCreateMinimalProcess.c)
 *     DbgkpPostFakeThreadMessages @ 0x140881DA4 (DbgkpPostFakeThreadMessages.c)
 *     NtInitializeEnclave @ 0x1408D0B70 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D0E50 (NtLoadEnclaveData.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408DD2C0 (PfSnAppLaunchScenarioControl.c)
 *     PspApplyWorkingSetLimits @ 0x1409056B4 (PspApplyWorkingSetLimits.c)
 *     PspCatchCriticalBreak @ 0x140907B14 (PspCatchCriticalBreak.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140958900 (NtPssCaptureVaSpaceBulk.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ADB50 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KiAttachProcess @ 0x140205710 (KiAttachProcess.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rdi
  PRKAPC_STATE v3; // rsi
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
  v3 = ApcState;
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
      SchedulerAssist[5] |= (unsigned int)ApcState;
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
        KeYieldProcessorEx(&v14, ApcState);
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
      KiAttachProcess((__int64)CurrentThread, (__int64)PROCESS, CurrentIrql, 0, (__int64)v3);
    }
    else
    {
      KiAttachProcess((__int64)CurrentThread, (__int64)PROCESS, CurrentIrql, 0, (__int64)&CurrentThread->600);
      v3->Process = 0LL;
    }
  }
}

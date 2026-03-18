/*
 * XREFs of KeStackAttachProcess @ 0x140203630
 * Callers:
 *     SepRmCallLsa @ 0x140203950 (SepRmCallLsa.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MiInSwapStoreWorker @ 0x1406EBDB0 (MiInSwapStoreWorker.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     PspAllocatePartition @ 0x14085BD34 (PspAllocatePartition.c)
 *     KiLogUserCetSetContextIpValidationFailureWorker @ 0x140960A90 (KiLogUserCetSetContextIpValidationFailureWorker.c)
 *     PfSnAppLaunchScenarioControl @ 0x140988EE4 (PfSnAppLaunchScenarioControl.c)
 *     PspCatchCriticalBreak @ 0x1409B1558 (PspCatchCriticalBreak.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x140346E50 (KiAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall KeStackAttachProcess(PRKPROCESS PROCESS, PRKAPC_STATE ApcState)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v7; // rcx
  _DWORD *SchedulerAssist; // r9
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (int)PROCESS;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 || (*(_DWORD *)&PROCESS->0 & 0x800) != 0 )
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
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v9[6] - 1;
          v9[6] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v14);
      while ( CurrentThread->ThreadLock );
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v10[6];
          v10[6] = v13 + 1;
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

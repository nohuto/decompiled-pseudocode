/*
 * XREFs of KeAttachProcess @ 0x140252530
 * Callers:
 *     KiExecuteDpcDelegate @ 0x1403C6DC0 (KiExecuteDpcDelegate.c)
 *     KiCompleteKernelInit @ 0x140A58CF8 (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x140346E50 (KiAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v2; // esi
  struct _KPROCESS *v3; // r8
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v6; // rcx
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (int)Process;
  v3 = CurrentThread->ApcState.Process;
  if ( v3 != Process )
  {
    if ( CurrentThread->ApcStateIndex
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
      || (*(_DWORD *)&Process->0 & 0x800) != 0 )
    {
      KeBugCheckEx(
        5u,
        (ULONG_PTR)Process,
        (ULONG_PTR)v3,
        CurrentThread->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v3) = (-1 << (CurrentIrql + 1)) & 4 | SchedulerAssist[5];
      SchedulerAssist[5] = (_DWORD)v3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 0;
    while ( 1 )
    {
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v8 = v6[6];
          v6[6] = v8 + 1;
          if ( v8 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v9[6] - 1;
          v9[6] = v10;
          if ( !v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v11);
      while ( CurrentThread->ThreadLock );
    }
    LOBYTE(v3) = CurrentIrql;
    KiAttachProcess((_DWORD)CurrentThread, v2, (_DWORD)v3, 0, (__int64)&CurrentThread->600);
  }
}

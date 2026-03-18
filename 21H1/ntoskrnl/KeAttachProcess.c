/*
 * XREFs of KeAttachProcess @ 0x140313250
 * Callers:
 *     KiCompleteKernelInit @ 0x1409992B4 (KiCompleteKernelInit.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAttachProcess @ 0x14025E630 (KiAttachProcess.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __stdcall KeAttachProcess(PRKPROCESS Process)
{
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v4; // r8
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( (PRKPROCESS)v4 != Process )
  {
    v5 = 65537LL;
    if ( CurrentThread->ApcStateIndex
      || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
      || (*(_DWORD *)&Process->0 & 0x400) != 0 )
    {
      KeBugCheckEx(
        5u,
        (ULONG_PTR)Process,
        v4,
        CurrentThread->ApcStateIndex,
        KeGetPcr()->Prcb.DpcRequestSummary & 0x10001);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
      v4 = (unsigned int)v5 | SchedulerAssist[5];
      SchedulerAssist[5] = v4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 0;
    while ( 1 )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v10 = v8[6];
          v8[6] = v10 + 1;
          if ( v10 == -1 )
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
          v11 = v9[6] - 1;
          v9[6] = v11;
          if ( !v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v12, v5, v4, (__int64)SchedulerAssist);
      while ( CurrentThread->ThreadLock );
    }
    KiAttachProcess((__int64)CurrentThread, (__int64)Process, CurrentIrql, 0, (__int64)&CurrentThread->600);
  }
}

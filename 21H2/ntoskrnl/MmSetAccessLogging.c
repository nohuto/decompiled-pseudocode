/*
 * XREFs of MmSetAccessLogging @ 0x140380B54
 * Callers:
 *     PfTAccessTracingStart @ 0x140990448 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099A9FC (PfTAccessTracingCleanup.c)
 *     PfTSetTracingPriority @ 0x1409B0E2C (PfTSetTracingPriority.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmSetAccessLogging(int a1, int a2)
{
  int v4; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v6; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v9; // zf
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E840, &LockHandle);
  dword_140C4E828 = a1;
  dword_140C4E82C = a2;
  if ( a1 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v4) = KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v4) = KeGetCurrentIrql();
        if ( (unsigned __int8)v4 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v4 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v4 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v4 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v4;
          if ( v9 )
            LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !P )
      LOBYTE(v4) = KeInsertQueueDpc(&Dpc, 0LL, 0LL);
  }
  else
  {
    if ( stru_140C4E808.Parameter )
    {
      if ( stru_140C4E808.Parameter == (void *)2 )
        stru_140C4E808.Parameter = (void *)3;
    }
    else
    {
      stru_140C4E808.List.Flink = 0LL;
      stru_140C4E808.WorkerRoutine = (void (__fastcall *)(void *))MiEmptyAccessLogs;
      stru_140C4E808.Parameter = (void *)1;
      ExQueueWorkItem(&stru_140C4E808, DelayedWorkQueue);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    LOBYTE(v4) = KiIrqlFlags;
    v6 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v4) = KeGetCurrentIrql();
        if ( (unsigned __int8)v4 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v4 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = v10->SchedulerAssist;
          v4 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v4 & v11[5]) == 0;
          v11[5] &= v4;
          if ( v9 )
            LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(v10);
        }
      }
    }
    __writecr8(v6);
  }
  return v4;
}

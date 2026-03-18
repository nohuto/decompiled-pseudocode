/*
 * XREFs of MiSignalNonPagedPoolWatchers @ 0x1403B4AF8
 * Callers:
 *     MiInitializeNonPagedPoolThresholds @ 0x1403B4A80 (MiInitializeNonPagedPoolThresholds.c)
 *     MiInitializeMemoryEvents @ 0x1407961B4 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiSignalNonPagedPoolWatchers()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rbx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v7; // eax
  bool v8; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C51F40, &LockHandle);
  if ( qword_140C50D10 )
  {
    v0 = MiState[0];
    v1 = qword_140C4C748;
    if ( qword_140C4C748 >= (unsigned __int64)(MiState[0] - 5120) )
    {
      if ( qword_140C50D10->Header.SignalState )
        KeResetEvent(qword_140C50D10);
    }
    else if ( !qword_140C50D10->Header.SignalState )
    {
      KeSetEvent(qword_140C50D10, 0, 0);
    }
    if ( v1 >= v0 - 2048 )
    {
      if ( !qword_140C50D08->Header.SignalState )
        KeSetEvent(qword_140C50D08, 0, 0);
    }
    else if ( qword_140C50D08->Header.SignalState )
    {
      KeResetEvent(qword_140C50D08);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v7 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}

/*
 * XREFs of MiSetZeroPageThreadPriority @ 0x14028F8E4
 * Callers:
 *     MiZeroLargePages @ 0x1402C41D0 (MiZeroLargePages.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiZeroPageMakeHot @ 0x1405B2968 (MiZeroPageMakeHot.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rbx
  unsigned int v3; // ebx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 232);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 24), &LockHandle);
  if ( *(_BYTE *)(v2 + 133) )
    v3 = 32;
  else
    v3 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread);
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
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v3;
}

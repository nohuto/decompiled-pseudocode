/*
 * XREFs of MiUpdateAvailableEvents @ 0x1403B6A44
 * Callers:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402363C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIncreaseAvailablePages @ 0x1402FEEE0 (MiIncreaseAvailablePages.c)
 *     MiDecreaseAvailablePages @ 0x140319380 (MiDecreaseAvailablePages.c)
 *     MiInsertPageInList @ 0x140326800 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x140329470 (MiInsertProtectedStandbyPage.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403B69D0 (MiUpdatePageThresholdsDpc.c)
 *     MiInitializeMemoryEvents @ 0x1407A06D4 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14027BC40 (KeResetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateAvailableEvents(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  struct _KEVENT *v3; // rcx
  struct _KEVENT *v4; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 616, &LockHandle);
  v2 = a1[888];
  v3 = (struct _KEVENT *)a1[35];
  if ( v2 <= a1[646] )
    KeSetEvent(v3, 0, 0);
  else
    KeResetEvent(v3);
  v4 = (struct _KEVENT *)a1[36];
  if ( v2 <= a1[647] )
    KeResetEvent(v4);
  else
    KeSetEvent(v4, 0, 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}

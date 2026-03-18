/*
 * XREFs of MiUpdateAvailableEvents @ 0x1403B5404
 * Callers:
 *     MiDecreaseAvailablePages @ 0x140231720 (MiDecreaseAvailablePages.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402ACBC0 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiIncreaseAvailablePages @ 0x1402F2250 (MiIncreaseAvailablePages.c)
 *     MiUpdatePageThresholdsDpc @ 0x1403B5390 (MiUpdatePageThresholdsDpc.c)
 *     MiInitializeMemoryEvents @ 0x1407961B4 (MiInitializeMemoryEvents.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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

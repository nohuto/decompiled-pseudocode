/*
 * XREFs of PnpUnlockDeviceActionQueue @ 0x140362BAC
 * Callers:
 *     IoControlPnpDeviceActionQueue @ 0x140361F20 (IoControlPnpDeviceActionQueue.c)
 *     IoFreePoDeviceNotifyList @ 0x14099A80C (IoFreePoDeviceNotifyList.c)
 *     PipInitializeCoreDriversByGroup @ 0x140A5C8C0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PpDevNodeUnlockTree @ 0x14071F9C0 (PpDevNodeUnlockTree.c)
 */

__int64 PnpUnlockDeviceActionQueue()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( (__int64 *)PnpEnumerationRequestList == &PnpEnumerationRequestList )
  {
    PnpEnumerationInProgress = 0;
    KeSetEvent(&PnpEnumerationLock, 0, 0);
  }
  else
  {
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v6 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v0);
  return PpDevNodeUnlockTree(1LL);
}

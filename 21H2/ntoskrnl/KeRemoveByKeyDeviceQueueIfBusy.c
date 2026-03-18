/*
 * XREFs of KeRemoveByKeyDeviceQueueIfBusy @ 0x1405708F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140257B30 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x140257B80 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueueIfBusy(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *Flink; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _LIST_ENTRY *v7; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Flink = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  if ( !DeviceQueue->Busy )
    goto LABEL_4;
  p_DeviceListHead = &DeviceQueue->DeviceListHead;
  if ( DeviceQueue->DeviceListHead.Flink == &DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
    goto LABEL_4;
  }
  Flink = (struct _KDEVICE_QUEUE_ENTRY *)DeviceQueue->DeviceListHead.Flink;
  do
  {
    if ( SortKey <= Flink->SortKey )
    {
      v8 = Flink->DeviceListEntry.Flink;
      if ( (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink->Blink == Flink )
      {
        Blink = Flink->DeviceListEntry.Blink;
        if ( (struct _KDEVICE_QUEUE_ENTRY *)Blink->Flink == Flink )
        {
          Blink->Flink = v8;
          v8->Blink = Blink;
          goto LABEL_14;
        }
      }
LABEL_16:
      __fastfail(3u);
    }
    Flink = (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink;
  }
  while ( Flink != (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead );
  Flink = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
  if ( p_DeviceListHead->Flink->Blink != p_DeviceListHead )
    goto LABEL_16;
  v7 = Flink->DeviceListEntry.Flink;
  if ( (struct _KDEVICE_QUEUE_ENTRY *)Flink->DeviceListEntry.Flink->Blink != Flink )
    goto LABEL_16;
  p_DeviceListHead->Flink = v7;
  v7->Blink = p_DeviceListHead;
LABEL_14:
  Flink->Inserted = 0;
  v10 = DeviceQueue->1;
  if ( Flink == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v10 >> 8) )
    DeviceQueue->1 = v10;
LABEL_4:
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return Flink;
}

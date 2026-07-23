/*
 * XREFs of KeRemoveByKeyDeviceQueueIfBusy @ 0x14051AD30
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140516890 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x140516920 (KeReleaseInStackQueuedSpinLockForDpc.c)
 */

PKDEVICE_QUEUE_ENTRY __stdcall KeRemoveByKeyDeviceQueueIfBusy(PKDEVICE_QUEUE DeviceQueue, ULONG SortKey)
{
  struct _KDEVICE_QUEUE_ENTRY *v4; // rbx
  LIST_ENTRY *p_DeviceListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v8; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v10; // rcx
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v11; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  KeAcquireInStackQueuedSpinLockForDpc(&DeviceQueue->Lock, &LockHandle);
  if ( !DeviceQueue->Busy )
    goto LABEL_4;
  p_DeviceListHead = &DeviceQueue->DeviceListHead;
  Flink = DeviceQueue->DeviceListHead.Flink;
  if ( Flink == &DeviceQueue->DeviceListHead )
  {
    DeviceQueue->Busy = 0;
    goto LABEL_4;
  }
  do
  {
    v4 = (struct _KDEVICE_QUEUE_ENTRY *)Flink;
    if ( SortKey <= LODWORD(Flink[1].Flink) )
      break;
    Flink = Flink->Flink;
  }
  while ( Flink != p_DeviceListHead );
  if ( Flink != p_DeviceListHead )
  {
    v8 = v4->DeviceListEntry.Flink;
    if ( (struct _KDEVICE_QUEUE_ENTRY *)v4->DeviceListEntry.Flink->Blink == v4 )
    {
      Blink = v4->DeviceListEntry.Blink;
      if ( (struct _KDEVICE_QUEUE_ENTRY *)Blink->Flink == v4 )
      {
        Blink->Flink = v8;
        v8->Blink = Blink;
        goto LABEL_14;
      }
    }
LABEL_16:
    __fastfail(3u);
  }
  v4 = (struct _KDEVICE_QUEUE_ENTRY *)p_DeviceListHead->Flink;
  if ( p_DeviceListHead->Flink->Blink != p_DeviceListHead )
    goto LABEL_16;
  v10 = v4->DeviceListEntry.Flink;
  if ( (struct _KDEVICE_QUEUE_ENTRY *)v4->DeviceListEntry.Flink->Blink != v4 )
    goto LABEL_16;
  p_DeviceListHead->Flink = v10;
  v10->Blink = p_DeviceListHead;
LABEL_14:
  v4->Inserted = 0;
  v11 = DeviceQueue->1;
  if ( v4 == (struct _KDEVICE_QUEUE_ENTRY *)(*(__int64 *)&v11 >> 8) )
    DeviceQueue->1 = v11;
LABEL_4:
  KeReleaseInStackQueuedSpinLockForDpc(&LockHandle);
  return v4;
}

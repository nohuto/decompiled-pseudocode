/*
 * XREFs of IoUnregisterFileSystem @ 0x140768940
 * Callers:
 *     RawShutdown @ 0x14090ABF0 (RawShutdown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14033FE5C (IopDecrementDeviceObjectRefCount.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

void __stdcall IoUnregisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rdx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall *v10)(PDEVICE_OBJECT, _QWORD); // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  p_Queue = &DeviceObject->Queue;
  Flink = DeviceObject->Queue.ListEntry.Flink;
  if ( Flink )
  {
    if ( (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Flink->Blink != p_Queue
      || (Blink = DeviceObject->Queue.ListEntry.Blink,
          (union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *)Blink->Flink != p_Queue) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  v6 = (__int64 *)IopFsNotifyChangeQueueHead;
  while ( v6 != &IopFsNotifyChangeQueueHead )
  {
    v10 = (void (__fastcall *)(PDEVICE_OBJECT, _QWORD))v6[3];
    v6 = (__int64 *)*v6;
    v10(DeviceObject, 0LL);
  }
  ++IopFsRegistrationOps;
  ExReleaseResourceLite(&IopDatabaseResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  IopDecrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1);
}

/*
 * XREFs of IoRegisterFileSystem @ 0x14076E0B0
 * Callers:
 *     RawInitialize @ 0x140A65130 (RawInitialize.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140292090 (IopIncrementDeviceObjectRefCount.c)
 *     IopSetFsRegistrationInProgress @ 0x140397774 (IopSetFsRegistrationInProgress.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     FsRtlSetDriverBacking @ 0x14076E250 (FsRtlSetDriverBacking.c)
 */

void __stdcall IoRegisterFileSystem(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rdx
  ULONG DeviceType; // eax
  __int64 *v5; // rcx
  ULONG Flags; // eax
  struct _LIST_ENTRY *v7; // r8
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // r8
  _DWORD *v11; // r9
  void (__fastcall *v12)(PDEVICE_OBJECT, struct _LIST_ENTRY *); // rax
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *p_Queue; // rax
  struct _LIST_ENTRY *Blink; // rcx
  union _DEVICE_OBJECT::$3ABEFC84562B0417329DFE2AD83813CB *v15; // rax

  FsRtlSetDriverBacking(DeviceObject->DriverObject, 1LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  IopSetFsRegistrationInProgress(1);
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  DeviceType = DeviceObject->DeviceType;
  if ( DeviceType == 20 )
  {
    v5 = &IopNetworkFileSystemQueueHead;
  }
  else
  {
    switch ( DeviceType )
    {
      case 3u:
        v5 = &IopCdRomFileSystemQueueHead;
        break;
      case 8u:
        v5 = &IopDiskFileSystemQueueHead;
        break;
      case 0x20u:
        v5 = &IopTapeFileSystemQueueHead;
        break;
      default:
        goto LABEL_13;
    }
    DeviceObject->DriverObject->Flags |= 0x80u;
  }
  Flags = DeviceObject->Flags;
  if ( (Flags & 0x10000) != 0 )
  {
    Flink = (struct _LIST_ENTRY *)v5[1];
    p_Queue = &DeviceObject->Queue;
    Blink = Flink->Blink;
    if ( Blink->Flink == Flink )
    {
      p_Queue->ListEntry.Flink = Flink;
      DeviceObject->Queue.ListEntry.Blink = Blink;
      Blink->Flink = &p_Queue->ListEntry;
      Flink->Blink = &p_Queue->ListEntry;
      goto LABEL_13;
    }
LABEL_26:
    __fastfail(3u);
  }
  Flink = (struct _LIST_ENTRY *)*v5;
  if ( (Flags & 0x200) != 0 )
  {
    v15 = &DeviceObject->Queue;
    if ( (__int64 *)Flink->Blink == v5 )
    {
      v15->ListEntry.Flink = Flink;
      DeviceObject->Queue.ListEntry.Blink = (struct _LIST_ENTRY *)v5;
      Flink->Blink = &v15->ListEntry;
      *v5 = (__int64)v15;
      goto LABEL_13;
    }
    goto LABEL_26;
  }
  v7 = (struct _LIST_ENTRY *)v5;
  while ( Flink != (struct _LIST_ENTRY *)v5 && ((__int64)Flink[-2].Flink & 0x200) != 0 )
  {
    v7 = Flink;
    Flink = Flink->Flink;
  }
  Flink = v7->Flink;
  v8 = &DeviceObject->Queue;
  if ( v7->Flink->Blink != v7 )
    goto LABEL_26;
  v8->ListEntry.Flink = Flink;
  DeviceObject->Queue.ListEntry.Blink = v7;
  Flink->Blink = &v8->ListEntry;
  v7->Flink = &v8->ListEntry;
LABEL_13:
  ++IopFsRegistrationOps;
  DeviceObject->Flags &= ~0x80u;
  v9 = (__int64 *)IopFsNotifyChangeQueueHead;
  while ( v9 != &IopFsNotifyChangeQueueHead )
  {
    v12 = (void (__fastcall *)(PDEVICE_OBJECT, struct _LIST_ENTRY *))v9[3];
    LOBYTE(Flink) = 1;
    v9 = (__int64 *)*v9;
    v12(DeviceObject, Flink);
  }
  IopSetFsRegistrationInProgress(0);
  ExReleaseResourceLite(&IopDatabaseResource);
  IopSetFsRegistrationInProgress(0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  IopIncrementDeviceObjectRefCount((ULONG_PTR)DeviceObject, 1, v10, v11);
}

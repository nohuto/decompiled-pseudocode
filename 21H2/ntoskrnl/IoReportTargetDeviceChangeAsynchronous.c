/*
 * XREFs of IoReportTargetDeviceChangeAsynchronous @ 0x1402F9330
 * Callers:
 *     PnpDeviceActionWorker @ 0x140381DA0 (PnpDeviceActionWorker.c)
 *     FsRtlNotifyVolumeEventEx @ 0x1406FCFD0 (FsRtlNotifyVolumeEventEx.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpSetCustomTargetEvent @ 0x1406FD2D4 (PnpSetCustomTargetEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoReportTargetDeviceChangeAsynchronous(
        PDEVICE_OBJECT PhysicalDeviceObject,
        PVOID NotificationStructure,
        PDEVICE_CHANGE_COMPLETE_CALLBACK Callback,
        PVOID Context)
{
  _DWORD *DeviceNode; // rcx
  GUID *v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v16; // rcx
  unsigned __int16 *v17; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v19; // rcx
  __int64 v20; // rcx
  _WORD *v21; // rcx
  __int64 v22; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_31;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)PhysicalDeviceObject, (PVOID)PhysicalDeviceObject->Size);
    DriverObject = PhysicalDeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v16 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v16 )
    {
      v17 = (unsigned __int16 *)(v16 + 40);
      IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)0x310);
      if ( *v17 )
      {
        IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v17 + 1), (PVOID)*v17);
      }
      DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      v19 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v19 )
      {
        IoAddTriageDumpDataBlock((ULONG)v19, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      }
      v20 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v20 )
      {
        v21 = (_WORD *)(v20 + 56);
        if ( *v21 )
        {
          IoAddTriageDumpDataBlock((ULONG)v21, (PVOID)2);
          v22 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v22 + 64), (PVOID)*(unsigned __int16 *)(v22 + 56));
        }
      }
    }
LABEL_31:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  v9 = (GUID *)((char *)NotificationStructure + 4);
  if ( (char *)NotificationStructure + 4 == (char *)&GUID_TARGET_DEVICE_QUERY_REMOVE )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16 )
    return -1073741808;
  if ( v9 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
    return -1073741808;
  if ( v9 == &GUID_TARGET_DEVICE_REMOVE_COMPLETE )
    return -1073741808;
  if ( RtlCompareMemory(v9, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10uLL) == 16 )
    return -1073741808;
  v10 = *((unsigned __int16 *)NotificationStructure + 1);
  if ( (unsigned __int16)v10 < 0x24u )
    return -1073741808;
  v11 = *((_DWORD *)NotificationStructure + 8);
  if ( v11 != -1 && v11 > (int)v10 - 36 )
    return -1073741808;
  if ( KeGetCurrentIrql() != 2 )
    return PnpSetCustomTargetEvent(PhysicalDeviceObject, (__int64)Context, NotificationStructure);
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 64, 0x38706E50u);
  if ( !PoolWithTag )
    return -1073741670;
  ObfReferenceObjectWithTag(PhysicalDeviceObject, 0x4E706E50u);
  PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)PhysicalDeviceObject;
  PoolWithTag[1].Parameter = &PoolWithTag[2];
  memmove(&PoolWithTag[2], NotificationStructure, *((unsigned __int16 *)NotificationStructure + 1));
  PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)Callback;
  PoolWithTag[1].WorkerRoutine = (void (__fastcall *)(void *))Context;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PnpReportTargetDeviceChangeAsyncWorker;
  PoolWithTag->Parameter = PoolWithTag;
  PoolWithTag->List.Flink = 0LL;
  ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  return 259;
}

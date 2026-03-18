/*
 * XREFs of IoRegisterShutdownNotification @ 0x1407AC110
 * Callers:
 *     RawInitialize @ 0x140A65130 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A65390 (WmipDriverEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x1403C2088 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x1407AC184 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  PoolWithTag[2] = DeviceObject;
  ObfReferenceObject(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION);
  return 0;
}

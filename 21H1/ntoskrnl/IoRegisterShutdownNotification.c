/*
 * XREFs of IoRegisterShutdownNotification @ 0x1407A8FB0
 * Callers:
 *     RawInitialize @ 0x140A65750 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A659B0 (WmipDriverEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x1403C11C8 (IopInterlockedInsertHeadList.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x1407A9024 (IopLogAuditIoRegisterNotificationEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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

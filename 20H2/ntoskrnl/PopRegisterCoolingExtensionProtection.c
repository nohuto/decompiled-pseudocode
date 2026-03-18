/*
 * XREFs of PopRegisterCoolingExtensionProtection @ 0x1408E57B0
 * Callers:
 *     PopAssociateThermalRequest @ 0x1407912B0 (PopAssociateThermalRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140361820 (IoGetDeviceAttachmentBaseRef.c)
 *     IoGetDeviceObjectPointer @ 0x1405DDA50 (IoGetDeviceObjectPointer.c)
 *     IoGetDeviceProperty @ 0x140668830 (IoGetDeviceProperty.c)
 *     IoRegisterPlugPlayNotification @ 0x1406ECA80 (IoRegisterPlugPlayNotification.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopRegisterCoolingExtensionProtection(char *Context)
{
  PVOID *NotificationEntry; // r12
  bool v3; // zf
  NTSTATUS DeviceProperty; // ebx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rdi
  PVOID PoolWithTag; // rsi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+30h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp+38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+40h] BYREF

  BufferLength = 0;
  NotificationEntry = (PVOID *)(Context + 56);
  DeviceObject = 0LL;
  FileObject = 0LL;
  v3 = *((_QWORD *)Context + 7) == 0LL;
  DestinationString = 0LL;
  if ( v3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*((PDEVICE_OBJECT *)Context + 6));
    if ( IoGetDeviceProperty(DeviceAttachmentBaseRef, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x6C6F4350u);
      if ( PoolWithTag )
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRef,
                           DevicePropertyPhysicalDeviceObjectName,
                           BufferLength,
                           PoolWithTag,
                           &BufferLength);
        if ( DeviceProperty >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
          DeviceProperty = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
          if ( DeviceProperty >= 0 )
            DeviceProperty = IoRegisterPlugPlayNotification(
                               EventCategoryTargetDeviceChange,
                               0,
                               FileObject,
                               DeviceObject->DriverObject,
                               (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopCoolingExtensionPnpNotification,
                               Context,
                               NotificationEntry);
          if ( FileObject )
            HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
        }
        ExFreePoolWithTag(PoolWithTag, 0x6C6F4350u);
      }
      else
      {
        DeviceProperty = -1073741670;
      }
    }
    else
    {
      DeviceProperty = -1073741823;
    }
    if ( DeviceAttachmentBaseRef )
      HalPutDmaAdapter((PADAPTER_OBJECT)DeviceAttachmentBaseRef);
  }
  else
  {
    return 0;
  }
  return (unsigned int)DeviceProperty;
}

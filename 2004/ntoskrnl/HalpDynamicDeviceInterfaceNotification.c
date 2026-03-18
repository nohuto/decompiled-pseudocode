/*
 * XREFs of HalpDynamicDeviceInterfaceNotification @ 0x140861290
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     IoGetDeviceObjectPointer @ 0x1406619A0 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall HalpDynamicDeviceInterfaceNotification(char *NotificationStructure, PVOID Context)
{
  int v2; // ebx
  __int64 v3; // rax
  struct _DMA_ADAPTER *v4; // rcx
  __int64 v5; // rax
  PDEVICE_OBJECT v6; // rbx
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp+8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  v2 = (int)Context;
  FileObject = 0LL;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  if ( v3 )
  {
    if ( IoGetDeviceObjectPointer(
           *((PUNICODE_STRING *)NotificationStructure + 5),
           0x100003u,
           &FileObject,
           &DeviceObject) >= 0 )
    {
      KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
      v5 = v2;
      v6 = DeviceObject;
      *(&HalpDynamicDevices + v5) = DeviceObject;
      KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
      ObfReferenceObject(v6);
      HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
    }
  }
  else
  {
    KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
    v4 = (struct _DMA_ADAPTER *)*(&HalpDynamicDevices + v2);
    if ( v4 )
    {
      HalPutDmaAdapter(v4);
      *(&HalpDynamicDevices + v2) = 0LL;
    }
    KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
  }
  return 0LL;
}

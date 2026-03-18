/*
 * XREFs of IoInvalidateDeviceRelations @ 0x14036BA20
 * Callers:
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1407209F0 (PiSwCloseDevice.c)
 *     IopPnPDispatch @ 0x140738100 (IopPnPDispatch.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessParentStartIrp @ 0x1407595D8 (PiSwProcessParentStartIrp.c)
 *     PiSwGetChildPdo @ 0x14075BACC (PiSwGetChildPdo.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408A6C60 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14036BAD4 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C8408 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __stdcall IoInvalidateDeviceRelations(PDEVICE_OBJECT DeviceObject, DEVICE_RELATION_TYPE Type)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v6; // rcx
  unsigned __int16 *v7; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v9; // rcx
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx

  if ( !DeviceObject )
    goto LABEL_21;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)DeviceObject, (PVOID)DeviceObject->Size);
    DriverObject = DeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &DeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)DeviceObject->DriverObject->DriverName.Buffer,
          (PVOID)DeviceObject->DriverObject->DriverName.Length);
      }
    }
    v6 = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v6 )
    {
      v7 = (unsigned __int16 *)(v6 + 40);
      IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)0x310);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((ULONG)v7, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v7 + 1), (PVOID)*v7);
      }
      DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
      v9 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
      }
      v10 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v10 )
      {
        v11 = (_WORD *)(v10 + 56);
        if ( *v11 )
        {
          IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
          v12 = *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v12 + 64), (PVOID)*(unsigned __int16 *)(v12 + 56));
        }
      }
    }
LABEL_21:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  }
  if ( (unsigned int)Type <= PowerRelations || Type == SingleBusRelations || Type == TransportRelations )
    PnpRequestDeviceAction(DeviceObject, 0LL, 0LL, 0LL);
}

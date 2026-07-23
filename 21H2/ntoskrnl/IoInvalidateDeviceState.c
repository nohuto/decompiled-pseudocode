/*
 * XREFs of IoInvalidateDeviceState @ 0x1403A5290
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void __stdcall IoInvalidateDeviceState(PDEVICE_OBJECT PhysicalDeviceObject)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v5; // rcx
  unsigned __int16 *v6; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rcx

  if ( !PhysicalDeviceObject )
    goto LABEL_18;
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
    v5 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v5 )
    {
      v6 = (unsigned __int16 *)(v5 + 40);
      IoAddTriageDumpDataBlock((ULONG)v5, (PVOID)0x310);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v6 + 1), (PVOID)*v6);
      }
      DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      v8 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = PhysicalDeviceObject->DeviceObjectExtension;
      }
      v9 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v9 )
      {
        v10 = (_WORD *)(v9 + 56);
        if ( *v10 )
        {
          IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
          v11 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v11 + 64), (PVOID)*(unsigned __int16 *)(v11 + 56));
        }
      }
    }
LABEL_18:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  if ( DeviceNode[75] == 776 )
    PnpRequestDeviceAction(PhysicalDeviceObject, 11, 0, 0LL, 0LL, 0LL, 0LL);
}

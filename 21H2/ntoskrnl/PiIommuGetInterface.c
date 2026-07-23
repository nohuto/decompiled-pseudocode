/*
 * XREFs of PiIommuGetInterface @ 0x140765838
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407657A0 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 *     PiIommuPutInterface @ 0x1407660B8 (PiIommuPutInterface.c)
 */

__int64 __fastcall PiIommuGetInterface(struct _DEVICE_OBJECT *MaxDataSize, _QWORD *a2)
{
  _DWORD *DeviceNode; // rcx
  __int64 result; // rax
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v8; // rcx
  unsigned __int16 *v9; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  _WORD *v13; // rcx
  __int64 v14; // rcx

  if ( !MaxDataSize )
    goto LABEL_22;
  DeviceNode = MaxDataSize->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)MaxDataSize->Size);
    DriverObject = MaxDataSize->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &MaxDataSize->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)MaxDataSize->DriverObject->DriverName.Buffer,
          (PVOID)MaxDataSize->DriverObject->DriverName.Length);
      }
    }
    v8 = (char *)MaxDataSize->DeviceObjectExtension->DeviceNode;
    if ( v8 )
    {
      v9 = (unsigned __int16 *)(v8 + 40);
      IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)0x310);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v9 + 1), (PVOID)*v9);
      }
      DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      v11 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)MaxDataSize->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      }
      v12 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v12 )
      {
        v13 = (_WORD *)(v12 + 56);
        if ( *v13 )
        {
          IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
          v14 = *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v14 + 64), (PVOID)*(unsigned __int16 *)(v14 + 56));
        }
      }
    }
LABEL_22:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)MaxDataSize, 0LL, 0LL);
  }
  result = PnpQueryInterface(MaxDataSize, (__int64)MaxDataSize, a2);
  if ( (int)result >= 0 )
  {
    if ( a2[2] && a2[3] && a2[8] && a2[7] )
    {
      return 0LL;
    }
    else
    {
      PiIommuPutInterface(a2);
      return 3221225659LL;
    }
  }
  return result;
}

/*
 * XREFs of IoSetDevicePropertyData @ 0x140746F40
 * Callers:
 *     HalpInterruptConnect @ 0x1404BB678 (HalpInterruptConnect.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PnpSetDevicePropertyData @ 0x140746D9C (PnpSetDevicePropertyData.c)
 */

NTSTATUS __stdcall IoSetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        DEVPROPTYPE Type,
        ULONG Size,
        PVOID Data)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v12; // rcx
  unsigned __int16 *v13; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v15; // rcx
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx

  if ( !Pdo )
    goto LABEL_16;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)Pdo, (PVOID)Pdo->Size);
    DriverObject = Pdo->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((ULONG)DriverObject, (PVOID)(unsigned int)DriverObject->Size);
      p_DriverName = &Pdo->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((ULONG)p_DriverName, (PVOID)2);
        IoAddTriageDumpDataBlock(
          (ULONG)Pdo->DriverObject->DriverName.Buffer,
          (PVOID)Pdo->DriverObject->DriverName.Length);
      }
    }
    v12 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v12 )
    {
      v13 = (unsigned __int16 *)(v12 + 40);
      IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)0x310);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), (PVOID)*v13);
      }
      DeviceObjectExtension = Pdo->DeviceObjectExtension;
      v15 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)Pdo->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = Pdo->DeviceObjectExtension;
      }
      v16 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v16 )
      {
        v17 = (_WORD *)(v16 + 56);
        if ( *v17 )
        {
          IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
          v18 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v18 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return PnpSetDevicePropertyData(
           (__int64)Pdo,
           (__int64)PropertyKey,
           Lcid,
           Lcid,
           Data != 0LL ? Type : 0,
           Data != 0LL ? Size : 0,
           (const wchar_t *)Data);
}

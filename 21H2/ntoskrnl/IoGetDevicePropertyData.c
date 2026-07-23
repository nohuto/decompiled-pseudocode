/*
 * XREFs of IoGetDevicePropertyData @ 0x14062EE90
 * Callers:
 *     PopFxQueryBiosDeviceName @ 0x14036F654 (PopFxQueryBiosDeviceName.c)
 *     HalpAreDriversDmarCompatible @ 0x1403791C4 (HalpAreDriversDmarCompatible.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1405698C4 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x14056B200 (PopFxIsDevicePotentialDripsConstraint.c)
 *     IopGetSessionIdFromPDO @ 0x14073E41C (IopGetSessionIdFromPDO.c)
 *     IopGetInterruptConnectionData @ 0x140762ABC (IopGetInterruptConnectionData.c)
 *     PnprIsMemoryDevice @ 0x1408ADD80 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x1408ADE38 (PnprIsProcessorDevice.c)
 *     VfGetDmaAdapter @ 0x1409CCE60 (VfGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PnpGetDevicePropertyData @ 0x14062EF28 (PnpGetDevicePropertyData.c)
 */

NTSTATUS __stdcall IoGetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        ULONG Size,
        PVOID Data,
        PULONG RequiredSize,
        PDEVPROPTYPE Type)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx

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
    v13 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)0x310);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
      }
      DeviceObjectExtension = Pdo->DeviceObjectExtension;
      v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)Pdo->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = Pdo->DeviceObjectExtension;
      }
      v17 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v17 )
      {
        v18 = (_WORD *)(v17 + 56);
        if ( *v18 )
        {
          IoAddTriageDumpDataBlock((ULONG)v18, (PVOID)2);
          v19 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), (PVOID)*(unsigned __int16 *)(v19 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return PnpGetDevicePropertyData(Pdo, PropertyKey, Lcid, Flags, Size, Data, RequiredSize, Type);
}

/*
 * XREFs of PiGetDmaAdapterFromBusInterface @ 0x140765058
 * Callers:
 *     IoGetDmaAdapter @ 0x140764F60 (IoGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpQueryInterface @ 0x140765F44 (PnpQueryInterface.c)
 */

__int64 __fastcall PiGetDmaAdapterFromBusInterface(struct _DEVICE_OBJECT *MaxDataSize, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v11; // rcx
  unsigned __int16 *v12; // rsi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rcx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _QWORD v18[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v18, 0, sizeof(v18));
  v6 = 0LL;
  if ( !MaxDataSize )
    goto LABEL_20;
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
    v11 = (char *)MaxDataSize->DeviceObjectExtension->DeviceNode;
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)0x310);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), (PVOID)*v12);
      }
      DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      v14 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 8),
          (PVOID)*((unsigned __int16 *)MaxDataSize->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = MaxDataSize->DeviceObjectExtension;
      }
      v15 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v15 )
      {
        v16 = (_WORD *)(v15 + 56);
        if ( *v16 )
        {
          IoAddTriageDumpDataBlock((ULONG)v16, (PVOID)2);
          v17 = *((_QWORD *)MaxDataSize->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
        }
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)MaxDataSize, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface(MaxDataSize, 0LL, v18) >= 0 )
  {
    if ( v18[5] )
      v6 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v18[5])(v18[1], a2, a3);
    ((void (__fastcall *)(_QWORD))v18[3])(v18[1]);
  }
  return v6;
}

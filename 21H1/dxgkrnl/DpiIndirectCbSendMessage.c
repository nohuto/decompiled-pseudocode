/*
 * XREFs of DpiIndirectCbSendMessage @ 0x1C02D0E90
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoGetDeviceFileObject @ 0x1C02C57CC (DpiFdoGetDeviceFileObject.c)
 *     ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C02D0798 (-DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU.c)
 */

__int64 __fastcall DpiIndirectCbSendMessage(
        __int64 a1,
        int a2,
        void *a3,
        unsigned int a4,
        void *a5,
        void (*a6)(void *, struct _IO_STATUS_BLOCK *),
        void *a7)
{
  __int64 v10; // rcx
  struct _FILE_OBJECT *DeviceFileObject; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _FILE_OBJECT *v14; // rdi
  __int64 v15; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax
  __int64 v18; // r8
  unsigned int v19; // ebx
  size_t Size; // [rsp+20h] [rbp-48h]
  bool *v21; // [rsp+48h] [rbp-20h]

  if ( !a1 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 || *(_DWORD *)(v10 + 16) != 1953656900 || *(_DWORD *)(v10 + 20) != 2 || !*(_BYTE *)(v10 + 1158) )
    return 3221225485LL;
  DeviceFileObject = (struct _FILE_OBJECT *)DpiFdoGetDeviceFileObject(v10);
  v14 = DeviceFileObject;
  if ( !DeviceFileObject )
  {
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(DeviceFileObject);
  LODWORD(Size) = a2;
  v19 = DpiIndirectSendAsyncUserModeRequest(v14, RelatedDeviceObject, v18, a3, Size, a5, a4, a6, a7, v21);
  ObfDereferenceObject(v14);
  return v19;
}

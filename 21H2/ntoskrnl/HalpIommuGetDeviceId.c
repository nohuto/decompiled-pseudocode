/*
 * XREFs of HalpIommuGetDeviceId @ 0x140379584
 * Callers:
 *     IommuDomainAttachDevice @ 0x1404DA620 (IommuDomainAttachDevice.c)
 *     HalpQueryIommuReservedRegionInformation @ 0x140765644 (HalpQueryIommuReservedRegionInformation.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140271700 (IoGetDeviceAttachmentBaseRef.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoQueryInterface @ 0x140765750 (IoQueryInterface.c)
 */

__int64 __fastcall HalpIommuGetDeviceId(PDEVICE_OBJECT DeviceObject, __int64 *a2)
{
  __int64 v4; // rsi
  struct _DMA_ADAPTER *DeviceAttachmentBaseRef; // rbx
  int Interface; // edi
  int v7; // eax
  __int64 v8; // rax
  _QWORD v10[10]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+6Fh] BYREF

  memset(v10, 0, sizeof(v10));
  v11 = 0LL;
  v4 = 0LL;
  DeviceAttachmentBaseRef = (struct _DMA_ADAPTER *)IoGetDeviceAttachmentBaseRef(DeviceObject);
  Interface = IoQueryInterface(
                (_DWORD)DeviceObject,
                0,
                (unsigned int)&GUID_IOMMU_BUS_INTERFACE,
                80,
                2,
                (__int64)DeviceAttachmentBaseRef,
                v10);
  HalPutDmaAdapter(DeviceAttachmentBaseRef);
  if ( Interface >= 0 )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))v10[8])(v10[1], 0LL, 0LL, &v11);
    Interface = v7;
    if ( v7 == -1073741789 )
    {
      if ( v11 )
      {
        v8 = HalpMmAllocCtxAlloc();
        v4 = v8;
        if ( v8 )
          Interface = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))v10[8])(v10[1], v11, v8, 0LL);
        else
          Interface = -1073741670;
        goto LABEL_6;
      }
    }
    else if ( v7 < 0 )
    {
LABEL_6:
      ((void (__fastcall *)(_QWORD))v10[3])(v10[1]);
      goto LABEL_7;
    }
    Interface = -1073741823;
    goto LABEL_6;
  }
LABEL_7:
  *a2 = v4;
  return (unsigned int)Interface;
}

/*
 * XREFs of IoWMIDeviceObjectToInstanceName @ 0x14077ADD0
 * Callers:
 *     IoWMIHandleToInstanceName @ 0x14077AD50 (IoWMIHandleToInstanceName.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140277450 (IoGetDeviceAttachmentBaseRef.c)
 *     RtlStringCbPrintfW @ 0x14027DBC4 (RtlStringCbPrintfW.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14077AEC4 (WmipGetGuidObjectInstanceInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIDeviceObjectToInstanceName(
        PVOID DataBlockObject,
        PDEVICE_OBJECT DeviceObject,
        PUNICODE_STRING InstanceName)
{
  struct _DMA_ADAPTER *DeviceAttachmentBaseRef; // rbp
  NTSTATUS GuidObjectInstanceInfo; // ebx
  SIZE_T v7; // rdx
  wchar_t *PoolWithTag; // rax
  __int64 v9; // rax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0;
  UnicodeString = 0LL;
  DeviceAttachmentBaseRef = (struct _DMA_ADAPTER *)IoGetDeviceAttachmentBaseRef(DeviceObject);
  GuidObjectInstanceInfo = WmipGetGuidObjectInstanceInfo(DataBlockObject, DeviceAttachmentBaseRef, &UnicodeString, &v12);
  if ( GuidObjectInstanceInfo >= 0 )
  {
    v7 = (unsigned __int16)(UnicodeString.Length + 32);
    InstanceName->MaximumLength = v7;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x49696D57u);
    InstanceName->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlStringCbPrintfW(PoolWithTag, InstanceName->MaximumLength, L"%ws_%d", UnicodeString.Buffer, v12);
      v9 = -1LL;
      do
        ++v9;
      while ( InstanceName->Buffer[v9] );
      GuidObjectInstanceInfo = 0;
      InstanceName->Length = 2 * v9;
    }
    else
    {
      GuidObjectInstanceInfo = -1073741670;
    }
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  HalPutDmaAdapter(DeviceAttachmentBaseRef);
  return GuidObjectInstanceInfo;
}

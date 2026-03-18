/*
 * XREFs of PipRecordOpenHandleVeto @ 0x1408B4CAC
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14071E660 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140254130 (RtlCopyUnicodeString.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x14033DE00 (IoGetDeviceAttachmentBaseRef.c)
 *     PnpCollectOpenHandles @ 0x1408A77E4 (PnpCollectOpenHandles.c)
 */

void __fastcall PipRecordOpenHandleVeto(unsigned int a1, PVOID **a2, struct _DEVICE_OBJECT *a3, __int64 a4, __int64 a5)
{
  char *DeviceNode; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DMA_ADAPTER *v8; // rbx

  *(_DWORD *)a5 = 5;
  PnpCollectOpenHandles(a2, a1, a4);
  DeviceNode = 0LL;
  if ( a3 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a3);
    v8 = (struct _DMA_ADAPTER *)DeviceAttachmentBaseRef;
    if ( DeviceAttachmentBaseRef )
      DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
    RtlCopyUnicodeString((PUNICODE_STRING)(a5 + 8), (PCUNICODE_STRING)(DeviceNode + 40));
    HalPutDmaAdapter(v8);
  }
  else
  {
    RtlInitUnicodeString((PUNICODE_STRING)(a5 + 8), 0LL);
  }
}

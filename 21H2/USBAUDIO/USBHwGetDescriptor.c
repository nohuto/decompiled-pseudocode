/*
 * XREFs of USBHwGetDescriptor @ 0x1C002D148
 * Callers:
 *     USBDeviceStart @ 0x1C002C080 (USBDeviceStart.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C002D224 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C002E678 (USBHwSyncGetStringDescriptor.c)
 * Callees:
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C002CC80 (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwGetDescriptor(__int64 a1, UCHAR a2, UCHAR a3, USHORT a4, ULONG *a5, void *a6)
{
  int v10; // edi
  struct _URB *PoolWithTag; // rax
  struct _URB *v12; // rbx

  v10 = -1073741670;
  PoolWithTag = (struct _URB *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x88uLL, 0x41627845u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->UrbSelectConfiguration.Interface.InterfaceHandle = 0LL;
    PoolWithTag->UrbControlTransfer.UrbLink = 0LL;
    *(_DWORD *)&PoolWithTag->UrbHeader.Length = 721032;
    PoolWithTag->UrbControlTransfer.SetupPacket[3] = a2;
    PoolWithTag->UrbControlTransfer.SetupPacket[2] = a3;
    PoolWithTag->UrbControlTransfer.TransferBufferLength = *a5;
    PoolWithTag->UrbSelectInterface.Interface.InterfaceHandle = a6;
    PoolWithTag->UrbControlDescriptorRequest.LanguageId = a4;
    v10 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), PoolWithTag, 0LL);
    if ( v10 >= 0 )
      *a5 = v12->UrbControlTransfer.TransferBufferLength;
    ExFreePool(v12);
  }
  return (unsigned int)v10;
}

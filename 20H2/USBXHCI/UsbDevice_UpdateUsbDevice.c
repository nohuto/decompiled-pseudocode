/*
 * XREFs of UsbDevice_UpdateUsbDevice @ 0x1C0018DDC
 * Callers:
 *     UsbDevice_UcxEvtUpdate @ 0x1C0018940 (UsbDevice_UcxEvtUpdate.c)
 *     UsbDevice_UpdateCompletion @ 0x1C0018CB0 (UsbDevice_UpdateCompletion.c)
 * Callees:
 *     Etw_DeviceUpdate @ 0x1C0018E54 (Etw_DeviceUpdate.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x1C0018F0C (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     RootHub_SetPortResumeTime @ 0x1C003E584 (RootHub_SetPortResumeTime.c)
 *     RootHub_Update20HardwareLpmParameters @ 0x1C003ED10 (RootHub_Update20HardwareLpmParameters.c)
 */

__int64 __fastcall UsbDevice_UpdateUsbDevice(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a2 + 24);
  if ( (v2 & 8) != 0 && *(_BYTE *)(a2 + 52) )
  {
    *(_BYTE *)(a1 + 136) = 1;
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 1) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 32);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)v5;
    *(_WORD *)(a1 + 132) = *(_WORD *)(v5 + 16);
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 0x20) != 0 )
  {
    *(_BYTE *)(a1 + 568) = *(_BYTE *)(a2 + 60) & 1;
    RootHub_Update20HardwareLpmParameters(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned int *)(a2 + 60),
      *(unsigned __int8 *)(a1 + 135));
    v2 = *(_DWORD *)(a2 + 24);
  }
  if ( (v2 & 0x40) != 0 )
  {
    RootHub_SetPortResumeTime(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL),
      *(unsigned int *)(a1 + 44),
      *(unsigned __int16 *)(a2 + 64));
    *(_BYTE *)(a1 + 569) = 1;
  }
  XilUsbDevice_QueryAttributesFromTrustlet(a1);
  return Etw_DeviceUpdate(v6, a1);
}

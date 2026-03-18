/*
 * XREFs of Etw_DeviceCreate @ 0x1C0019BE8
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0070310 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1C0049660 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_DeviceCreate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (WPP_MAIN_CB.AlignmentRequirement & 2) != 0 )
    return McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
             *(unsigned __int8 *)(a2 + 658),
             (unsigned int)&USBXHCI_ETW_EVENT_DEVICE_CREATE_V3,
             0,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             *(_QWORD *)(a2 + 24),
             *(_QWORD *)a2,
             *(_DWORD *)(a2 + 20),
             *(_DWORD *)(a2 + 36),
             a2 + 44,
             *(_BYTE *)(a2 + 135),
             *(_BYTE *)(a2 + 136) != 0,
             *(_DWORD *)(a2 + 140),
             *(_DWORD *)(a2 + 144));
  return result;
}

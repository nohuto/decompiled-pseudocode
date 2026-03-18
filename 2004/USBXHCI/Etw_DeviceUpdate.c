/*
 * XREFs of Etw_DeviceUpdate @ 0x1C0017B54
 * Callers:
 *     UsbDevice_UcxEvtHubInfo @ 0x1C00178C0 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C0017ADC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     XilUsbDevice_QueryAttributes @ 0x1C0044EBC (XilUsbDevice_QueryAttributes.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x1C004817C (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall Etw_DeviceUpdate(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  unsigned __int8 v4; // cl
  char v5; // [rsp+E8h] [rbp-80h] BYREF
  char v6; // [rsp+E9h] [rbp-7Fh] BYREF
  unsigned __int8 v7; // [rsp+EAh] [rbp-7Eh] BYREF
  _BYTE v8[5]; // [rsp+EBh] [rbp-7Dh] BYREF
  _OWORD v9[2]; // [rsp+F0h] [rbp-78h] BYREF
  _OWORD v10[2]; // [rsp+110h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+160h] [rbp-8h] BYREF

  result = &retaddr;
  v5 = 0;
  v4 = 0;
  v6 = 0;
  v7 = 0;
  v8[0] = 0;
  if ( *(_BYTE *)(a2 + 656) )
  {
    result = (_UNKNOWN **)XilUsbDevice_QueryAttributes(
                            a2,
                            (unsigned int)&v5,
                            (unsigned int)&v6,
                            (unsigned int)&v7,
                            (__int64)v10,
                            (__int64)v8,
                            (__int64)v9);
    v4 = v7;
  }
  else
  {
    memset(v10, 0, sizeof(v10));
    memset(v9, 0, sizeof(v9));
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return (_UNKNOWN **)McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
                          v4,
                          (unsigned int)&USBXHCI_ETW_EVENT_DEVICE_UPDATE_V3,
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

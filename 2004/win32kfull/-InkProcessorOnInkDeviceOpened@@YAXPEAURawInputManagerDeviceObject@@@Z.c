/*
 * XREFs of ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0221060
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00F7B50 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C0122730 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C02506A8 (-OnDeviceOpened@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceOpened(struct RawInputManagerDeviceObject *a1)
{
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::OnDeviceOpened(InkProcessor::s_pInstance, a1);
  }
  else if ( (unsigned int)dword_1C032B288 > 2 )
  {
    v1 = -1073741823;
    v3 = &v1;
    v5 &= (unsigned int)InkProcessor::s_pInstance;
    v4 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032B288, (unsigned __int8 *)dword_1C02F13FC, 0LL, 0LL, 3u, &v2);
  }
}

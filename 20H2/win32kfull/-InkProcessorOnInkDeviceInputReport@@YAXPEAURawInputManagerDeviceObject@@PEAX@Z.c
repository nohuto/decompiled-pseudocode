/*
 * XREFs of ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C0220140
 * Callers:
 *     EditionRimDeviceReadNotification @ 0x1C01D07E0 (EditionRimDeviceReadNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z @ 0x1C024F584 (-ProcessInput@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@PEBX@Z.c)
 */

void __fastcall InkProcessorOnInkDeviceInputReport(
        struct RawInputManagerDeviceObject *a1,
        struct RawInputManagerDeviceObject *a2,
        const void *a3)
{
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::ProcessInput(InkProcessor::s_pInstance, a2, a3);
  }
  else if ( (unsigned int)dword_1C032A288 > 2 )
  {
    v3 = -1073741823;
    v5 = &v3;
    v7 &= (unsigned int)InkProcessor::s_pInstance;
    v6 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032A288, (unsigned __int8 *)dword_1C02F0A0C, 0LL, 0LL, 3u, &v4);
  }
}

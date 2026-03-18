/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@@Z @ 0x1C01B0E44
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C01B11B0 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IV_FRAME_BUTTON_INFO *a2)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        12,
        86,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        12,
        87,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return 0LL;
}

/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_EXTENDED_PROPS@@TtagHPD_EXTENDED_PROPS@@_N@Z @ 0x1C01B15AC
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01B0E78 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall CIVSerializer::Serialize(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rdi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      56,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  *v4 = *a3;
  v4[1] = a3[1];
  v4[2] = a3[2];
  v4[3] = a3[3];
  v4[4] = a3[4];
  v4[5] = a3[5];
  v4[6] = a3[6];
  v4[7] = a3[7];
  v4[8] = a3[8];
  v4[9] = a3[9];
  v4[10] = a3[10];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      57,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return 0LL;
}

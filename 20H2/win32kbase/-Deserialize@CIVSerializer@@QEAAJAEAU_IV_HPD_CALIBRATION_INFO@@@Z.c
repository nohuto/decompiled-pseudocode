/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z @ 0x1C01AEF90
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AEE30 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01AF270 (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, unsigned __int16 **a2)
{
  unsigned __int16 **v2; // rdi
  int v4; // edx
  CIVSerializer *v5; // rcx
  int v6; // ebx
  CIVSerializer *v7; // rcx
  CIVSerializer *v8; // rcx
  CIVSerializer *v9; // rcx
  CIVSerializer *v10; // rcx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      80,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  v6 = CIVSerializer::Deserialize(this, v2);
  if ( v6 >= 0 )
  {
    v6 = CIVSerializer::Deserialize(v5, v2 + 2);
    if ( v6 >= 0 )
    {
      v6 = CIVSerializer::Deserialize(v7, v2 + 4);
      if ( v6 >= 0 )
      {
        v6 = CIVSerializer::Deserialize(v8, v2 + 6);
        if ( v6 >= 0 )
        {
          v6 = CIVSerializer::Deserialize(v9, v2 + 8);
          if ( v6 >= 0 )
            v6 = CIVSerializer::Deserialize(v10, v2 + 10);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      81,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
  return (unsigned int)v6;
}

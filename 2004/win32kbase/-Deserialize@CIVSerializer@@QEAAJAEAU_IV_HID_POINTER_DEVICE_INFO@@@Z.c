/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C01B11B0
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z @ 0x1C01B10C8 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_DEVICE_OUTPUT_CONFIG@@@Z @ 0x1C01B0DB4 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_DEVICE_OUTPUT_CONFIG@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@@Z @ 0x1C01B0E44 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z @ 0x1C01B1310 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_EXTENDED_PROPS@@@Z @ 0x1C01B1418 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_EXTENDED_PROPS@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@@Z @ 0x1C01B14A8 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z @ 0x1C01B1538 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01B15F0 (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IV_HID_POINTER_DEVICE_INFO *a2)
{
  struct _IV_HID_POINTER_DEVICE_INFO *v2; // rdi
  CIVSerializer *v3; // rsi
  struct _IV_HPD_EXTENDED_PROPS *v4; // rdx
  CIVSerializer *v5; // rcx
  int v6; // ebx
  CIVSerializer *v7; // rcx
  CIVSerializer *v8; // rcx

  v2 = a2;
  v3 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CIVSerializer *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        12,
        88,
        (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
    }
  }
  v6 = CIVSerializer::Deserialize(this, a2);
  if ( v6 >= 0 )
  {
    v6 = CIVSerializer::Deserialize(v5, v4);
    if ( v6 >= 0 )
    {
      *((_QWORD *)v2 + 45) = *((_QWORD *)v3 + 2) + (*((_QWORD *)v2 + 45) & 0xFFFFFFFFFFFFFFFEuLL);
      v6 = CIVSerializer::Deserialize(v3, (unsigned __int16 **)v2 + 47);
      if ( v6 >= 0 )
      {
        v6 = CIVSerializer::Deserialize(v3, (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)v2 + 856));
        if ( v6 >= 0 )
        {
          v6 = CIVSerializer::Deserialize(v3, (unsigned __int16 **)v2 + 116);
          if ( v6 >= 0 )
          {
            v6 = CIVSerializer::Deserialize(v7, v4);
            if ( v6 >= 0 )
            {
              *((_QWORD *)v2 + 127) = *((_QWORD *)v3 + 2) + (*((_QWORD *)v2 + 127) & 0xFFFFFFFFFFFFFFFEuLL);
              v6 = CIVSerializer::Deserialize(v8, v4);
              if ( v6 >= 0 )
                v6 = CIVSerializer::Deserialize(v3, (unsigned __int16 **)v2 + 132);
            }
          }
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      12,
      89,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v6;
}

/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C01B3744
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01B31E8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C01B42D4 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(CIVSerializer *this, void **a2, void **a3, bool a4)
{
  void **v6; // rdi
  int v8; // edx
  int v9; // esi
  void *v10; // rax
  void *v11; // rax

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      58,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v9 = CIVSerializer::Serialize(this, v6, *a3, *((unsigned int *)a3 + 2), a4);
  if ( v9 >= 0 )
  {
    *((_DWORD *)v6 + 2) = *((_DWORD *)a3 + 2);
    v9 = CIVSerializer::Serialize(this, v6 + 2, a3[2], *((unsigned int *)a3 + 6), a4);
    if ( v9 >= 0 )
    {
      *((_DWORD *)v6 + 6) = *((_DWORD *)a3 + 6);
      v9 = CIVSerializer::Serialize(this, v6 + 4, a3[4], *((unsigned int *)a3 + 10), a4);
      if ( v9 >= 0 )
      {
        *((_DWORD *)v6 + 10) = *((_DWORD *)a3 + 10);
        v9 = CIVSerializer::Serialize(this, v6 + 6, a3[6], *((unsigned int *)a3 + 14), a4);
        if ( v9 >= 0 )
        {
          *((_DWORD *)v6 + 14) = *((_DWORD *)a3 + 14);
          v9 = CIVSerializer::Serialize(this, v6 + 8, a3[8], *((unsigned int *)a3 + 18), a4);
          if ( v9 >= 0 )
          {
            *((_DWORD *)v6 + 18) = *((_DWORD *)a3 + 18);
            *((_DWORD *)v6 + 19) = *((_DWORD *)a3 + 19);
            v10 = a3[10];
            if ( v10 == a3[2] )
            {
              v11 = v6[2];
LABEL_11:
              v6[10] = v11;
              goto LABEL_12;
            }
            if ( v10 == a3[4] )
            {
              v11 = v6[4];
              goto LABEL_11;
            }
            if ( v10 == a3[6] )
            {
              v11 = v6[6];
              goto LABEL_11;
            }
            if ( v10 == a3[8] )
              v6[10] = v6[8];
          }
        }
      }
    }
  }
LABEL_12:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      12,
      59,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v9;
}

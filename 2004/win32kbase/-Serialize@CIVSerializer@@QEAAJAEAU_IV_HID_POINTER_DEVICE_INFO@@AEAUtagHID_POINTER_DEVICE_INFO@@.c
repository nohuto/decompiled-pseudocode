/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C01B31E8
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C01B30EC (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_DEVICE_OUTPUT_CONFIG@@AEAUDEVICE_OUTPUT_CONFIG@@_N@Z @ 0x1C01B2C34 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_DEVICE_OUTPUT_CONFIG@@AEAUDEVICE_OUTPUT_CONFIG@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@AEAUtagFRAME_BUTTON_INFO@@_N@Z @ 0x1C01B2D0C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@AEAUtagFRAME_BUTTON_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C01B3744 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_EXTENDED_PROPS@@TtagHPD_EXTENDED_PROPS@@_N@Z @ 0x1C01B391C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_EXTENDED_PROPS@@TtagHPD_EXTENDED_PROPS@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@AEAUtagHPD_FRAME_SCAN_TIME@@_N@Z @ 0x1C01B3A08 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@AEAUtagHPD_FRAME_SCAN_TIME@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@AEAUtagHPD_PARALLEL_INFO@@_N@Z @ 0x1C01B3AF8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@AEAUtagHPD_PARALLEL_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B3CB0 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z @ 0x1C01B4238 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C01B42D4 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HID_POINTER_DEVICE_INFO *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        bool a4)
{
  const union _LARGE_INTEGER *v8; // rdx
  CIVSerializer *v9; // rcx
  __int64 v10; // r15
  __int64 v11; // r8
  __int16 *v12; // rdx
  __int16 v13; // ax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // esi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  struct tagHPD_CALIBRATION_INFO *v19; // r8
  _DWORD *v20; // rcx
  _DWORD *v21; // rdx
  int v22; // eax
  struct tagHPD_PARALLEL_INFO *v23; // r8
  CIVSerializer *v24; // rcx
  bool v25; // r9
  CIVSerializer *v26; // rcx
  unsigned int v27; // r9d
  _OWORD v29[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+50h] [rbp-28h]
  int v31; // [rsp+58h] [rbp-20h]

  v8 = &WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v8,
      12,
      66,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  v9 = (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 8);
  v10 = 6LL;
  *(_DWORD *)a2 = *((_DWORD *)a3 + 6);
  v11 = 6LL;
  v12 = (__int16 *)((char *)a3 + 30);
  do
  {
    *((_WORD *)v9 - 2) = *(v12 - 1);
    v13 = *v12;
    v12 += 8;
    *(_WORD *)v9 = v13;
    v9 = (CIVSerializer *)((char *)v9 + 20);
    *((_DWORD *)v9 - 4) = *(_DWORD *)(v12 - 7);
    *((_DWORD *)v9 - 3) = *(_DWORD *)(v12 - 5);
    *((_DWORD *)v9 - 2) = *(_DWORD *)(v12 - 3);
    --v11;
  }
  while ( v11 );
  *(_OWORD *)((char *)a2 + 124) = *(_OWORD *)((char *)a3 + 124);
  *(_OWORD *)((char *)a2 + 140) = *(_OWORD *)((char *)a3 + 140);
  v16 = CIVSerializer::Serialize(
          v9,
          (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 156),
          (struct tagHID_POINTER_DEVICE_INFO *)((char *)a3 + 156));
  if ( v16 >= 0 )
  {
    v17 = *(_OWORD *)((char *)a3 + 268);
    v18 = *(_OWORD *)((char *)a3 + 284);
    v31 = *((_DWORD *)a3 + 77);
    v29[0] = v17;
    v30 = *(_QWORD *)((char *)a3 + 300);
    v29[1] = v18;
    v16 = CIVSerializer::Serialize(v15, (char *)a2 + 236, v29);
    if ( v16 >= 0 )
    {
      *((_DWORD *)a2 + 70) = *((_DWORD *)a3 + 78) & 1;
      *((_DWORD *)a2 + 71) = (*((_DWORD *)a3 + 78) & 2u) >> 1;
      *((_DWORD *)a2 + 72) = (*((_DWORD *)a3 + 78) & 4u) >> 2;
      *((_DWORD *)a2 + 73) = (*((_DWORD *)a3 + 78) & 8u) >> 3;
      *((_DWORD *)a2 + 74) = (*((_DWORD *)a3 + 78) & 0x10u) >> 4;
      *((_DWORD *)a2 + 75) = (*((_DWORD *)a3 + 78) & 0x20u) >> 5;
      *((_DWORD *)a2 + 76) = (*((_DWORD *)a3 + 78) & 0x40u) >> 6;
      *((_DWORD *)a2 + 77) = (*((_DWORD *)a3 + 78) & 0x80u) >> 7;
      *((_DWORD *)a2 + 78) = (*((_DWORD *)a3 + 78) & 0x100u) >> 8;
      *((_DWORD *)a2 + 79) = (*((_DWORD *)a3 + 78) & 0x200u) >> 9;
      *((_DWORD *)a2 + 80) = (*((_DWORD *)a3 + 78) & 0x400u) >> 10;
      *((_DWORD *)a2 + 81) = (*((_DWORD *)a3 + 78) & 0x800u) >> 11;
      *((_DWORD *)a2 + 82) = (*((_DWORD *)a3 + 78) & 0x1000u) >> 12;
      *((_DWORD *)a2 + 83) = (*((_DWORD *)a3 + 78) & 0x2000u) >> 13;
      *((_DWORD *)a2 + 84) = (*((_DWORD *)a3 + 78) & 0x4000u) >> 14;
      *((_DWORD *)a2 + 85) = (*((_DWORD *)a3 + 78) & 0x8000u) >> 15;
      *((_DWORD *)a2 + 86) = (*((_DWORD *)a3 + 78) & 0x10000u) >> 16;
      v16 = CIVSerializer::Serialize(
              this,
              (struct _UNICODE_STRING *)a2 + 22,
              (const struct _UNICODE_STRING *)a3 + 20,
              a4);
      if ( v16 >= 0 )
      {
        *((_QWORD *)a2 + 46) = *((unsigned int *)a3 + 84);
        v19 = (struct tagHPD_CALIBRATION_INFO *)*((_QWORD *)a3 + 43);
        if ( v19 )
        {
          v16 = CIVSerializer::Serialize(this, (void **)a2 + 47, v19, a4);
          if ( v16 < 0 )
            goto LABEL_26;
          *((_DWORD *)a2 + 93) = 1;
        }
        v20 = (_DWORD *)((char *)a2 + 468);
        v21 = (_DWORD *)((char *)a3 + 356);
        do
        {
          *((_WORD *)v20 - 2) = *((_WORD *)v21 - 2);
          v22 = *v21;
          v21 += 15;
          *v20 = v22;
          v20 += 16;
          *((_WORD *)v20 - 30) = *((_WORD *)v21 - 28);
          *((_WORD *)v20 - 28) = *((_WORD *)v21 - 27);
          *((_WORD *)v20 - 26) = *((_WORD *)v21 - 26);
          *(v20 - 12) = *(v21 - 12);
          *((_WORD *)v20 - 22) = *((_WORD *)v21 - 22);
          *(v20 - 10) = *(v21 - 10);
          *(v20 - 9) = *(v21 - 9);
          *(v20 - 8) = *(v21 - 8);
          *(v20 - 7) = *(v21 - 7);
          *(v20 - 6) = *(v21 - 6);
          *(v20 - 5) = *(v21 - 5);
          *(v20 - 4) = *(v21 - 4);
          *(v20 - 3) = *(v21 - 3);
          *((_WORD *)v20 - 4) = *((_WORD *)v21 - 4);
          --v10;
        }
        while ( v10 );
        *((_DWORD *)a2 + 212) = 0;
        v23 = (struct tagHPD_PARALLEL_INFO *)*((_QWORD *)a3 + 89);
        if ( v23 )
        {
          v16 = CIVSerializer::Serialize(this, (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 856), v23, a4);
          if ( v16 < 0 )
            goto LABEL_26;
          *((_DWORD *)a2 + 212) = 1;
        }
        *((_DWORD *)a2 + 224) = *((_DWORD *)a3 + 180);
        *((_DWORD *)a2 + 225) = *((_DWORD *)a3 + 181);
        *((_WORD *)a2 + 452) = *((_WORD *)a3 + 364);
        *((_DWORD *)a2 + 227) = *((_DWORD *)a3 + 186);
        *((_QWORD *)a2 + 114) = *((_QWORD *)a3 + 94);
        *((_DWORD *)a2 + 230) = *((_DWORD *)a3 + 190);
        v16 = CIVSerializer::Serialize(
                this,
                (void **)a2 + 116,
                *((void **)a3 + 96),
                2LL * *((unsigned int *)a3 + 246),
                a4);
        if ( v16 >= 0 )
        {
          *((_BYTE *)a2 + 936) = *((_BYTE *)a3 + 776);
          v16 = CIVSerializer::Serialize(
                  v24,
                  (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 944),
                  (struct tagHID_POINTER_DEVICE_INFO *)((char *)a3 + 784),
                  v25);
          if ( v16 >= 0 )
          {
            *((_DWORD *)a2 + 250) = *((_DWORD *)a3 + 210);
            v16 = CIVSerializer::Serialize(
                    this,
                    (struct _UNICODE_STRING *)a2 + 63,
                    (const struct _UNICODE_STRING *)a3 + 53,
                    a4);
            if ( v16 >= 0 )
            {
              v16 = CIVSerializer::Serialize(
                      v26,
                      (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 1032),
                      (struct tagHID_POINTER_DEVICE_INFO *)((char *)a3 + 888));
              if ( v16 >= 0 )
              {
                *((_QWORD *)a2 + 130) = *((_QWORD *)a3 + 112);
                *((_DWORD *)a2 + 262) = *((_DWORD *)a3 + 226);
                v27 = (unsigned int)(*((_DWORD *)a3 + 6) - 5) <= 1 ? *((_DWORD *)a3 + 246) : *((_DWORD *)a3 + 180);
                v16 = CIVSerializer::Serialize(
                        this,
                        (struct _IV_HPD_CURSOR **)a2 + 132,
                        *((struct tagHPD_CURSOR **)a3 + 121),
                        v27,
                        12LL * v27,
                        a4);
                if ( v16 >= 0 )
                  *((_DWORD *)a2 + 267) = *((_DWORD *)a3 + 246);
              }
            }
          }
        }
      }
    }
  }
LABEL_26:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v14) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      12,
      67,
      (__int64)&WPP_7263c2fdb9fa3c6006e7ed479d2d34ba_Traceguids);
  }
  return (unsigned int)v16;
}

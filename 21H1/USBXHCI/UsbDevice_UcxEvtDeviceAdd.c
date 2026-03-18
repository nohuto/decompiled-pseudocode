/*
 * XREFs of UsbDevice_UcxEvtDeviceAdd @ 0x1C006D000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     XilUsbDevice_Create @ 0x1C0014E2C (XilUsbDevice_Create.c)
 *     Controller_AddDeviceToControllerDeviceList @ 0x1C0016860 (Controller_AddDeviceToControllerDeviceList.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C001825C (WPP_RECORDER_SF_dqd.c)
 *     Etw_DeviceCreate @ 0x1C0018948 (Etw_DeviceCreate.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbDevice_UcxEvtDeviceAdd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS, __int64, void *); // rax
  __int64 v6; // r15
  int v7; // eax
  int v8; // edx
  int v9; // r12d
  __int64 v10; // rbx
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __int64 v13; // rcx
  int v14; // edx
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh]
  __int64 (__fastcall *v20)(__int64); // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+6Ch] [rbp-94h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  void *v25; // [rsp+80h] [rbp-80h]
  _QWORD v26[10]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v28)(__int64, __int64, _DWORD *); // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+100h] [rbp+0h] BYREF
  __int128 v30; // [rsp+104h] [rbp+4h]
  __int64 v31; // [rsp+114h] [rbp+14h]

  v19 = 0;
  v21 = 0LL;
  v16 = 0LL;
  v31 = 0LL;
  v17 = a3;
  v24 = 0LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616);
  v30 = 0LL;
  v6 = v5(WdfDriverGlobals, a1, off_1C0060428);
  v26[0] = 104LL;
  v26[1] = UsbDevice_UcxEvtEndpointsConfigure;
  v26[2] = UsbDevice_UcxEvtEnable;
  v26[3] = UsbDevice_UcxEvtDisable;
  v26[4] = UsbDevice_UcxEvtReset;
  v26[5] = UsbDevice_UcxEvtAddress;
  v26[6] = UsbDevice_UcxEvtUpdate;
  v26[7] = UsbDevice_UcxEvtHubInfo;
  v26[8] = Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd;
  v26[9] = Endpoint_UcxEvtUsbDeviceEndpointAdd;
  v28 = UsbDevice_UcxEvtUsbDeviceGetCharacteristic;
  v27 = 0LL;
  ((void (__fastcall *)(__int64, __int64, _QWORD *))qword_1C00616E0)(UcxDriverGlobals, v17, v26);
  v19 = 0;
  v21 = 0LL;
  v22 = 1;
  v23 = 1;
  v25 = off_1C00602C0;
  v20 = UsbDevice_EvtUsbDeviceCleanupCallback;
  v24 = 0LL;
  v18 = 56;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, int *, __int64 *))qword_1C00616D8)(
         UcxDriverGlobals,
         a1,
         &v17,
         &v18,
         &v16);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 72), v8, 12, 10, (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids, v7);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_i(
        *(_QWORD *)(v6 + 72),
        v8,
        12,
        11,
        (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
        v16);
    }
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
            WdfDriverGlobals,
            v16,
            off_1C00602C0);
    *(_QWORD *)v10 = v16;
    *(_QWORD *)(v10 + 8) = v6;
    *(_OWORD *)(v10 + 16) = *(_OWORD *)a2;
    *(_OWORD *)(v10 + 32) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v10 + 48) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(v10 + 64) = *(_QWORD *)(a2 + 48);
    v11 = *(_OWORD *)(a2 + 28);
    v29 = *(_DWORD *)(a2 + 20);
    v12 = *(_QWORD *)(a2 + 44);
    v30 = v11;
    v31 = v12;
    v9 = XilUsbDevice_Create(v10, (__int64)&v29);
    if ( v9 >= 0 )
    {
      KeInitializeSpinLock((PKSPIN_LOCK)(v10 + 88));
      *(_DWORD *)(v10 + 112) = 0;
      *(_QWORD *)(v10 + 104) = v10 + 96;
      *(_QWORD *)(v10 + 96) = v10 + 96;
      Controller_AddDeviceToControllerDeviceList(v6, v16, (_QWORD *)(v10 + 72));
      Etw_DeviceCreate(v13, v10);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_dqd(
          *(_QWORD *)(v6 + 72),
          v14,
          12,
          12,
          (__int64)&WPP_2d0c5f6bf4263c2e7a5f7f01b810c292_Traceguids,
          *(_DWORD *)(v10 + 20),
          *(_QWORD *)(v10 + 24),
          *(_DWORD *)(v10 + 44));
      }
    }
  }
  return (unsigned int)v9;
}

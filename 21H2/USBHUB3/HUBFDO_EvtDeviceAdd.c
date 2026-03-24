/*
 * XREFs of HUBFDO_EvtDeviceAdd @ 0x1C00732C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C000131C (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddHsmEvent @ 0x1C0009F38 (HUBSM_AddHsmEvent.c)
 *     HUBFDO_GetDeviceCapabilities @ 0x1C000BEE0 (HUBFDO_GetDeviceCapabilities.c)
 *     HSMMUX_InitializeHSMMuxContext @ 0x1C000E95C (HSMMUX_InitializeHSMMuxContext.c)
 *     HUBMISC_WaitForSignal @ 0x1C002FAF4 (HUBMISC_WaitForSignal.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 *     HUBMISC_InitializeHsm @ 0x1C007C300 (HUBMISC_InitializeHsm.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceAdd(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rcx
  int DeviceCapabilities; // ebx
  __int64 v8; // rax
  unsigned __int16 v9; // r9
  struct _DEVICE_OBJECT *v10; // rax
  NTSTATUS v11; // ebx
  __int64 v12; // rax
  __int64 *v13; // r14
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned __int16 v19; // r9
  unsigned int v20; // r8d
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  const void *v26; // rax
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v30; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+38h] [rbp-D0h]
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v35[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+78h] [rbp-90h]
  void *v37; // [rsp+88h] [rbp-80h]
  __int128 v38; // [rsp+90h] [rbp-78h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-68h]
  __int128 v40; // [rsp+B0h] [rbp-58h]
  void *v41; // [rsp+C0h] [rbp-48h]
  _OWORD v42[4]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v43[12]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v44[18]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v45; // [rsp+1F8h] [rbp+F0h] BYREF
  __int128 v46; // [rsp+208h] [rbp+100h]
  char pszDest[16]; // [rsp+218h] [rbp+110h] BYREF
  _OWORD v48[2]; // [rsp+228h] [rbp+120h] BYREF
  __int128 v49; // [rsp+248h] [rbp+140h]
  GUID v50; // [rsp+258h] [rbp+150h] BYREF
  __int64 v51; // [rsp+268h] [rbp+160h]

  v34 = a2;
  v2 = a2;
  HIDWORD(v35[0]) = 0;
  v33 = 0LL;
  v51 = 0LL;
  v36 = 0LL;
  v50 = 0LL;
  memset(v43, 0, sizeof(v43));
  v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
  memset(v42, 0, sizeof(v42));
  v45 = 0LL;
  v46 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    McTemplateK0_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_START, 0LL);
    v2 = v34;
  }
  v35[0] = 56LL;
  v35[3] = 0x100000001LL;
  v37 = off_1C0066170;
  v35[1] = HUBFDO_EvtDeviceCleanupCallback;
  v4 = 0LL;
  v35[2] = HUBFDO_EvtDeviceDestroyCallback;
  v36 = 0LL;
  memset(v44, 0, sizeof(v44));
  v44[1] = HUBFDO_EvtDeviceD0Entry;
  LODWORD(v44[0]) = 144;
  v44[3] = HUBFDO_EvtDeviceD0Exit;
  v44[5] = HUBFDO_EvtDevicePrepareHardware;
  v44[6] = HUBFDO_EvtDeviceReleaseHardware;
  v44[12] = HUBFDO_EvtDeviceSurpriseRemoval;
  v44[15] = HUBFDO_EvtDeviceUsageNotification;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 440))(WdfDriverGlobals, v2, v44);
  LOBYTE(v5) = 16;
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, IRP *), __int64, _QWORD, _DWORD))(WdfFunctions_01015 + 584))(
                         WdfDriverGlobals,
                         v34,
                         HUBFDO_EvtDeviceShutdownPreprocess,
                         v5,
                         0LL,
                         0);
  if ( DeviceCapabilities < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_44;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00661C0);
    v9 = 12;
    goto LABEL_6;
  }
  *((_QWORD *)&v42[0] + 1) = HUBFDO_EvtDeviceArmWakeFromS0;
  *(_QWORD *)&v42[0] = 64LL;
  *(_QWORD *)&v42[1] = HUBFDO_EvtDeviceDisarmWakeFromS0;
  *(_QWORD *)&v42[2] = HUBFDO_EvtDeviceArmWakeFromSx;
  *((_QWORD *)&v42[2] + 1) = HUBFDO_EvtDeviceDisarmWakeFromSx;
  *((_QWORD *)&v42[1] + 1) = 0LL;
  v42[3] = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 448))(
    WdfDriverGlobals,
    v34,
    v42);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 3440))(
    WdfDriverGlobals,
    v34,
    2LL);
  DeviceCapabilities = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 600))(
                         WdfDriverGlobals,
                         &v34,
                         v35,
                         &v33);
  if ( DeviceCapabilities >= 0 )
  {
    v10 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(
                                     WdfDriverGlobals,
                                     v33);
    v11 = IoRegisterShutdownNotification(v10);
    if ( v11 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C00661C0);
      LODWORD(v31) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v12 + 64),
        2u,
        2u,
        0xEu,
        (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
        v31);
    }
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v33,
           off_1C0066170);
    *(_QWORD *)(v4 + 16) = v33;
    *(_QWORD *)(v4 + 24) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                             WdfDriverGlobals,
                             v33);
    *(_QWORD *)v4 = &g_Usbhub3_Triage_Info;
    *(_DWORD *)(v4 + 96) = USBD_AllocateHubNumber();
    *(_QWORD *)&v45 = 48LL;
    HIDWORD(v46) = 16;
    pszDest[0] = 0;
    *(_QWORD *)&v46 = v4;
    BYTE8(v46) = 1;
    *((_QWORD *)&v45 + 1) = 0x20000000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub%d", *(_DWORD *)(v4 + 96));
    v13 = (__int64 *)(v4 + 2520);
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v45, v4 + 2520) < 0 )
      *v13 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015
                                                                                               + 1616))(
                           WdfDriverGlobals,
                           WdfDriverGlobals->Driver,
                           off_1C00661C0)
                       + 64);
    LOBYTE(v14) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v33,
      1LL,
      v14);
    LOBYTE(v15) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v33,
      2LL,
      v15);
    LOBYTE(v16) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v33,
      3LL,
      v16);
    LOBYTE(v17) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 392))(
      WdfDriverGlobals,
      v33,
      4LL,
      v17);
    DeviceCapabilities = HUBFDO_GetDeviceCapabilities(v33, (_DWORD *)(v4 + 696), *v13);
    if ( DeviceCapabilities < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_44;
      v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C00661C0);
      v19 = 15;
      LODWORD(v31) = DeviceCapabilities;
      v20 = 2;
      v21 = *(_QWORD *)(v18 + 64);
      goto LABEL_18;
    }
    *((_QWORD *)&v49 + 1) = -1LL;
    LODWORD(v48[0]) = 48;
    *(__m128i *)((char *)v48 + 4) = _mm_load_si128((const __m128i *)&_xmm);
    *(_QWORD *)((char *)&v48[1] + 4) = 0x200000002LL;
    *(_QWORD *)&v49 = 0x200000002LL;
    HIDWORD(v48[1]) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 664))(
      WdfDriverGlobals,
      v33,
      v48);
    *(_QWORD *)(v4 + 336) = v4;
    LOWORD(v31) = 1013;
    LOWORD(v30) = 136;
    v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
            WdfDriverGlobals,
            v33,
            &GUID_HUB_PARENT_INTERFACE,
            v4 + 208,
            v30,
            v31,
            0LL);
    DeviceCapabilities = v22;
    if ( v22 >= 0 )
    {
      if ( !*(_BYTE *)(v4 + 240) )
      {
        v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                WdfDriverGlobals,
                v33);
        *(_QWORD *)(v4 + 2448) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                   WdfDriverGlobals,
                                   v23);
        *(_QWORD *)(v4 + 32) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(
                                 WdfDriverGlobals,
                                 v33);
        *(_DWORD *)(v4 + 92) = 500;
      }
      *(_QWORD *)(v4 + 376) = *(_QWORD *)(v4 + 248);
      *(_QWORD *)(v4 + 384) = v4;
      *(_QWORD *)(v4 + 392) = HUBHTX_ClearTTBuffer;
      *(_QWORD *)(v4 + 536) = HUBPDO_NoPingResponse;
      LOWORD(v31) = 2000;
      LOWORD(v30) = 256;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
             WdfDriverGlobals,
             v33,
             &GUID_HUB_CONTROLLERSTACK_INTERFACE,
             v4 + 344,
             v30,
             v31,
             0LL) >= 0
        || (LOWORD(v31) = 1000,
            LOWORD(v30) = 256,
            v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, __int64, _DWORD, _DWORD, _QWORD))(WdfFunctions_01015 + 1048))(
                    WdfDriverGlobals,
                    v33,
                    &GUID_HUB_CONTROLLERSTACK_INTERFACE,
                    v4 + 344,
                    v30,
                    v31,
                    0LL),
            DeviceCapabilities = v22,
            v22 >= 0) )
      {
        if ( *(_BYTE *)(v4 + 240) )
          v32 = 0LL;
        else
          v32 = *(_QWORD *)(v4 + 248);
        LOWORD(v31) = 3;
        LOWORD(v30) = 96;
        v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const GUID *, __int64, _DWORD, _DWORD, __int64))(WdfFunctions_01015 + 1048))(
                WdfDriverGlobals,
                v33,
                &USB_BUS_INTERFACE_USBDI_GUID,
                v4 + 600,
                v30,
                v31,
                v32);
        DeviceCapabilities = v24;
        if ( v24 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_44;
          v19 = 18;
          LODWORD(v31) = v24;
          goto LABEL_23;
        }
        LODWORD(v38) = 56;
        LODWORD(v43[0]) = 96;
        *((_QWORD *)&v39 + 1) = 0x100000002LL;
        BYTE5(v43[1]) = 1;
        v43[5] = HUBFDO_EvtIoDeviceControl;
        v43[6] = HUBFDO_EvtIoInternalDeviceControlFromPDO;
        *(_QWORD *)((char *)v43 + 4) = 1LL;
        v41 = off_1C0066260;
        v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, __int128 *, __int64))(WdfFunctions_01015 + 1216))(
                WdfDriverGlobals,
                v33,
                v43,
                &v38,
                v4 + 2400);
        DeviceCapabilities = v22;
        if ( v22 >= 0 )
        {
          v50 = GUID_BUS_TYPE_USB;
          v51 = 15LL;
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *))(WdfFunctions_01015 + 680))(
            WdfDriverGlobals,
            v33,
            &v50);
          HSMMUX_InitializeHSMMuxContext(v4);
          DeviceCapabilities = HUBMISC_InitializeHsm(v4);
          if ( DeviceCapabilities >= 0 )
          {
            v25 = PoDirectedDripsSetDeviceFlags(*(_QWORD *)(v4 + 24), 2LL);
            if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v31) = v25;
              WPP_RECORDER_SF_d(*v13, 2u, 3u, 0x14u, (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids, v31);
            }
            _InterlockedOr((volatile signed __int32 *)(v4 + 40), 0x20u);
            KeResetEvent((PRKEVENT)(v4 + 1152));
            HUBSM_AddHsmEvent(v4, 2023LL);
            v26 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                                  WdfDriverGlobals,
                                  v4);
            HUBMISC_WaitForSignal((PVOID)(v4 + 1152), "Hub FDO PnpCallback", v26);
            DeviceCapabilities = *(_DWORD *)(v4 + 1176);
          }
          goto LABEL_44;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v19 = 19;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v19 = 17;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_44;
      v19 = 16;
    }
    LODWORD(v31) = v22;
LABEL_23:
    v21 = *v13;
    v20 = 3;
LABEL_18:
    WPP_RECORDER_SF_d(v21, 2u, v20, v19, (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids, v31);
    goto LABEL_44;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00661C0);
    v9 = 13;
LABEL_6:
    LODWORD(v31) = DeviceCapabilities;
    WPP_RECORDER_SF_d(*(_QWORD *)(v8 + 64), 2u, 2u, v9, (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids, v31);
  }
LABEL_44:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    if ( v4 )
      v27 = *(_QWORD *)(v4 + 248);
    else
      v27 = 0LL;
    LODWORD(v30) = DeviceCapabilities;
    McTemplateK0pq_EtwWriteTransfer(v6, &USBHUB3_ETW_EVENT_HUB_ADD_DEVICE_COMPLETE, 0LL, v27, v30);
  }
  if ( DeviceCapabilities < 0 )
  {
    if ( v4 && *(_DWORD *)(v4 + 96) )
    {
      USBD_ReleaseHubNumber();
      *(_DWORD *)(v4 + 96) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              WdfDriverGlobals->Driver,
              off_1C00661C0);
      LODWORD(v31) = DeviceCapabilities;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v28 + 64),
        2u,
        3u,
        0x15u,
        (__int64)&WPP_40970fddd6f13ebcbe770d49258f843c_Traceguids,
        v31);
    }
  }
  return (unsigned int)DeviceCapabilities;
}

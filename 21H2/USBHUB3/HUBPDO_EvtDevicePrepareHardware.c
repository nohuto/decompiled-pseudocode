/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1C0079110
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x1C00013DC (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006D20 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C00309D4 (HUBMISC_GetDeviceInterfacePath.c)
 *     DereferenceDeviceResetInterface @ 0x1C00423F0 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 *     memset @ 0x1C0043B00 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C007EEF0 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C0080CF0 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C00812DC (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x1C008143C (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C0082C28 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterDevice @ 0x1C00868AC (WMI_RegisterDevice.c)
 *     WMI_FireNotification @ 0x1C0086B48 (WMI_FireNotification.c)
 *     TUNNEL_GetUsb4Host @ 0x1C0087A14 (TUNNEL_GetUsb4Host.c)
 *     TUNNEL_AcquireUsb4HostPowerReference @ 0x1C0089270 (TUNNEL_AcquireUsb4HostPowerReference.c)
 *     QueryDeviceResetInterface @ 0x1C008A4CC (QueryDeviceResetInterface.c)
 *     InitializeResetActionWorkItem @ 0x1C008A84C (InitializeResetActionWorkItem.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rcx
  const signed __int32 *v5; // rdi
  __int64 v6; // rdx
  __int64 Usb4Host; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int DeviceInterfacePath; // eax
  unsigned __int16 v12; // r9
  _QWORD *v13; // r14
  int DeviceResetInterface; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  wchar_t *Pool2; // rax
  wchar_t *v19; // r14
  void *v20; // rax
  __int64 v21; // r8
  char *v22; // rcx
  __int64 v23; // r9
  unsigned __int16 *v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r13
  int v28; // ecx
  int v29; // edi
  __int64 v30; // rax
  __int64 v31; // r10
  const char *v32; // r9
  bool v33; // cl
  const char *v34; // rdx
  const char *v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v41; // [rsp+20h] [rbp-180h]
  __int64 v42; // [rsp+28h] [rbp-178h]
  int v43; // [rsp+40h] [rbp-160h]
  char v44; // [rsp+120h] [rbp-80h]
  unsigned int v45; // [rsp+124h] [rbp-7Ch]
  char v46; // [rsp+128h] [rbp-78h]
  __int16 v47; // [rsp+12Ch] [rbp-74h]
  int v48; // [rsp+130h] [rbp-70h]
  int v49; // [rsp+134h] [rbp-6Ch]
  int v50; // [rsp+138h] [rbp-68h]
  int v51; // [rsp+13Ch] [rbp-64h]
  int v52; // [rsp+140h] [rbp-60h]
  unsigned __int16 v53; // [rsp+144h] [rbp-5Ch]
  __int64 v54; // [rsp+148h] [rbp-58h] BYREF
  int v55; // [rsp+150h] [rbp-50h]
  PVOID P; // [rsp+158h] [rbp-48h]
  __int64 v57; // [rsp+160h] [rbp-40h] BYREF
  void *Src[2]; // [rsp+168h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+178h] [rbp-28h] BYREF
  const wchar_t *v60; // [rsp+188h] [rbp-18h]
  __int64 v61; // [rsp+190h] [rbp-10h]
  __int128 v62; // [rsp+198h] [rbp-8h] BYREF
  __int64 v63; // [rsp+1A8h] [rbp+8h]
  __int64 v64; // [rsp+1B0h] [rbp+10h]
  __int128 v65; // [rsp+1B8h] [rbp+18h]
  __int64 v66; // [rsp+1C8h] [rbp+28h]
  __int64 v67; // [rsp+1D0h] [rbp+30h]
  __int64 v68; // [rsp+1D8h] [rbp+38h]
  wchar_t *v69; // [rsp+1E0h] [rbp+40h]
  __int64 v70; // [rsp+1E8h] [rbp+48h]
  __int64 v71; // [rsp+1F0h] [rbp+50h]
  int v72; // [rsp+1F8h] [rbp+58h] BYREF
  char v73; // [rsp+1FCh] [rbp+5Ch] BYREF

  v1 = a1;
  v70 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00670F8);
  v3 = *(_QWORD *)(v2 + 24);
  v61 = v2;
  v71 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C00671E8);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v3 + 24));
  v5 = *(const signed __int32 **)(v3 + 8);
  if ( _bittest(v5 + 51, 0xBu) )
  {
    v6 = *((_QWORD *)v5 + 183);
    *(_OWORD *)Src = 0LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v6,
      Src);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)v5 + 2744LL),
      0LL);
    Usb4Host = TUNNEL_GetUsb4Host(*(_QWORD *)v5, Src);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)v5 + 2744LL));
    TUNNEL_AcquireUsb4HostPowerReference(*(_QWORD *)v5, Usb4Host);
  }
  _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
  if ( _bittest((const signed __int32 *)(*(_QWORD *)(v3 + 8) + 204LL), 0xBu) )
    _InterlockedOr((volatile signed __int32 *)(v3 + 1644), 0x80u);
  if ( (*(_DWORD *)(v3 + 2464) & 4) != 0 && (*(_DWORD *)(v3 + 2468) & 4) == 0 )
  {
    HUBREG_AssignUsbflagsValueForDevice(v3, L".0", v3 + 2480, 8LL);
    *(_DWORD *)(v3 + 2468) |= 4u;
  }
  HUBREG_UpdateSqmFlags(v3);
  if ( (*(_DWORD *)(v3 + 2464) & 1) != 0 )
    HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)&g_MsOs20Flags, 4, 4, v3 + 2464);
  HUBREG_WriteValueToDeviceHardwareKey(v3, (unsigned int)L"*,", 4, 4, v3 + 32);
  if ( (*(_DWORD *)(v3 + 1632) & 2) == 0 )
  {
    DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                  + 616))(
                            WdfDriverGlobals,
                            v1,
                            &GUID_DEVINTERFACE_USB_DEVICE,
                            0LL);
    v10 = DeviceInterfacePath;
    if ( DeviceInterfacePath >= 0 )
    {
      v13 = (_QWORD *)(v3 + 2136);
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                              (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                              v1,
                              (_QWORD *)(v3 + 2136),
                              0LL,
                              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL));
      v45 = DeviceInterfacePath;
      v10 = DeviceInterfacePath;
      if ( DeviceInterfacePath >= 0 )
      {
        if ( (*(_DWORD *)(v3 + 1644) & 0x4000000) != 0 )
        {
          DeviceResetInterface = QueryDeviceResetInterface(v1, v2 + 456);
          if ( DeviceResetInterface >= 0 )
          {
            v16 = InitializeResetActionWorkItem(v2 + 544, v15, v1);
            v45 = v16;
            v10 = v16;
            if ( v16 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
                  4u,
                  5u,
                  0x50u,
                  (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
                  v16);
              DereferenceDeviceResetInterface((_QWORD *)(v2 + 456));
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
                4u,
                5u,
                0x4Fu,
                (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
                DeviceResetInterface);
            v10 = 0;
            v45 = 0;
          }
        }
        goto LABEL_40;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_98;
      v12 = 78;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_98;
      v12 = 77;
    }
LABEL_21:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      5u,
      v12,
      (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
      DeviceInterfacePath);
    goto LABEL_98;
  }
  v8 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)(*(_QWORD *)v3 + 240LL) >= *(_BYTE *)(v8 + 202) )
  {
    *(_DWORD *)(v8 + 1424) = 7;
    WMI_FireNotification(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        3u,
        0x4Au,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids);
    v10 = -1073741823;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v9,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP,
        0LL,
        *(_QWORD *)(v3 + 24));
    goto LABEL_98;
  }
  DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                + 616))(
                          WdfDriverGlobals,
                          v1,
                          &GUID_DEVINTERFACE_USB_HUB,
                          0LL);
  v10 = DeviceInterfacePath;
  if ( DeviceInterfacePath < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_98;
    v12 = 75;
    goto LABEL_21;
  }
  v13 = (_QWORD *)(v3 + 2136);
  DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                          (__int64)&GUID_DEVINTERFACE_USB_HUB,
                          v1,
                          (_QWORD *)(v3 + 2136),
                          0LL,
                          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL));
  v45 = DeviceInterfacePath;
  v10 = DeviceInterfacePath;
  if ( DeviceInterfacePath < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_98;
    v12 = 76;
    goto LABEL_21;
  }
LABEL_40:
  if ( *v13 && (v17 = HUBREG_WriteStringToDeviceHardwareKey(v3), v45 = v17, v10 = v17, v17 < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v42) = v17;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        5u,
        0x51u,
        (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
        v42);
    }
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (*(_DWORD *)(v3 + 1636) & 2) != 0 )
      *(_BYTE *)v2 = 0;
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C00671E8)
                    + 4) & 0x1000) != 0 )
    {
      DWORD1(v62) = 0;
      DestinationString = 0LL;
      *(_OWORD *)Src = 0LL;
      RtlInitUnicodeString(&DestinationString, 0LL);
      if ( *v13 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
          WdfDriverGlobals,
          *v13,
          &DestinationString);
      Pool2 = (wchar_t *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
      v69 = Pool2;
      v19 = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, DestinationString.Length + 2LL);
        memmove(v19, DestinationString.Buffer, DestinationString.Length);
      }
      v54 = 0LL;
      P = 0LL;
      v63 = 0LL;
      v66 = 0LL;
      v62 = 0LL;
      LODWORD(v62) = 56;
      v64 = 0x100000001LL;
      v65 = (unsigned __int64)v1;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 2464))(
             WdfDriverGlobals,
             0LL,
             &v62,
             &v54) >= 0
        && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
             WdfDriverGlobals,
             v1,
             v54) >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
          WdfDriverGlobals,
          v54,
          Src);
        v20 = (void *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
        P = v20;
        if ( v20 )
          memmove(v20, Src[1], LOWORD(Src[0]));
      }
      v57 = 0LL;
      v66 = 0LL;
      v63 = 0LL;
      v64 = 0x100000001LL;
      v62 = 0LL;
      LODWORD(v62) = 56;
      v65 = (unsigned __int64)v1;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 656))(
             WdfDriverGlobals,
             v1,
             0LL,
             (unsigned int)ExDefaultNonPagedPoolType,
             &v62,
             &v57) < 0 )
        v60 = 0LL;
      else
        v60 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015
                                                                                               + 1552))(
                                 WdfDriverGlobals,
                                 v57,
                                 0LL);
      v21 = *(_QWORD *)(v2 + 16);
      v22 = &v73;
      v23 = 5LL;
      v24 = (unsigned __int16 *)(v21 + 322);
      v72 = *(unsigned __int16 *)(v21 + 320);
      do
      {
        v25 = *v24++;
        *(_DWORD *)v22 = v25;
        v22 += 4;
        --v23;
      }
      while ( v23 );
      v26 = *(unsigned __int8 *)(v21 + 240);
      if ( (unsigned __int8)v26 < 6u )
        *(&v72 + v26) = *(unsigned __int16 *)(v2 + 48);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
      {
        v27 = *(_QWORD *)(v3 + 8);
        v67 = v27;
        v28 = *(_DWORD *)(v27 + 204);
        if ( (v28 & 2) != 0 )
          v44 = *(_BYTE *)(v27 + 1341);
        else
          v44 = 0;
        v29 = *(_DWORD *)(v21 + 168);
        v55 = v29;
        if ( v29 == 1 )
        {
          v47 = *(_WORD *)(v21 + 184);
          v49 = *(_DWORD *)(v21 + 176);
          v50 = *(_DWORD *)(v21 + 196);
          v51 = *(_DWORD *)(v21 + 192);
          v52 = *(_DWORD *)(v21 + 188);
          v48 = *(_DWORD *)(v21 + 180);
        }
        else
        {
          LOBYTE(v47) = 0;
          LOBYTE(v50) = 0;
          LOBYTE(v51) = 0;
          LOBYTE(v52) = 0;
          LOBYTE(v48) = -1;
          LOBYTE(v49) = -1;
        }
        v30 = *(_QWORD *)(v3 + 2016);
        v68 = v30;
        if ( v30 )
          v53 = *(_WORD *)(v30 + 2);
        else
          v53 = 0;
        v32 = 0LL;
        v33 = (v28 & 2) != 0;
        if ( v29 == 2 )
          v32 = (const char *)(v21 + 186);
        v46 = v33;
        v34 = 0LL;
        if ( v29 == 2 )
          v34 = (const char *)(v21 + 181);
        v35 = 0LL;
        if ( v29 == 2 )
          v35 = (const char *)(v21 + 176);
        v19 = v69;
        v31 = *(_QWORD *)(v2 + 24);
        McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
          (__int64)v35,
          &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V2,
          (const GUID *)(v21 + 764),
          *(_QWORD *)(*(_QWORD *)v3 + 248LL),
          *(_QWORD *)(v3 + 24),
          *(_WORD *)(v27 + 200),
          v60,
          v69,
          v43,
          v3 + 1988,
          v53,
          v68,
          (const wchar_t *)P,
          (*(_BYTE *)(v2 + 32) & 1) == 0,
          *(_BYTE *)(v21 + 240) + 1,
          (__int64)&v72,
          v52,
          v51,
          v50,
          v49,
          v48,
          v47,
          *(_DWORD *)(v61 + 384),
          *(_DWORD *)(v3 + 2224),
          v55,
          v35,
          v34,
          v32,
          v46,
          v44,
          *(_QWORD *)(v67 + 1416),
          *(_BYTE *)(v31 + 2704),
          *(_BYTE *)(v31 + 2705),
          *(_DWORD *)(v31 + 2708),
          *(_DWORD *)(v31 + 2712));
        v10 = v45;
        v1 = v70;
        v2 = v61;
      }
      if ( v19 )
        ExFreePoolWithTag(v19, 0x64334855u);
      if ( P )
        ExFreePoolWithTag(P, 0x64334855u);
      if ( v54 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v57 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    }
    if ( (*(_DWORD *)(v3 + 1632) & 6) == 0 )
      WMI_RegisterDevice(v1);
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C00671E8)
                  + 92) )
    {
      v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v1);
      v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              *(_QWORD *)(v2 + 16));
      v38 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v37);
      v9 = *(_QWORD *)(v71 + 96);
      if ( !qword_1C006AC58 || (v39 = qword_1C006AC58(v9, v38, v36, v2 + 392), v39 == -1073741637) )
      {
        *(_QWORD *)(v2 + 392) = &SleepstudyHelperUnsupportedHandle;
      }
      else if ( v39 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v42) = v39;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
            2u,
            2u,
            0x52u,
            (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
            v42);
        }
        *(_QWORD *)(v2 + 392) = 0LL;
      }
    }
  }
LABEL_98:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v41) = v10;
    McTemplateK0pq_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v3 + 24),
      v41);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v42) = *(_DWORD *)(v3 + 1644);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      5u,
      0x53u,
      (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
      v42);
  }
  return v10;
}

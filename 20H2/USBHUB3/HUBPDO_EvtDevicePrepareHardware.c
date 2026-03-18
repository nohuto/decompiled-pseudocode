/*
 * XREFs of HUBPDO_EvtDevicePrepareHardware @ 0x1C0077CC0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x1C00013DC (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0001870 (McTemplateK0pq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0030334 (HUBMISC_GetDeviceInterfacePath.c)
 *     DereferenceDeviceResetInterface @ 0x1C00416F8 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0042A80 (memmove.c)
 *     memset @ 0x1C0042D40 (memset.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C007D8C8 (HUBREG_AssignUsbflagsValueForDevice.c)
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C007F780 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C007FD70 (HUBREG_WriteValueToDeviceHardwareKey.c)
 *     HUBREG_WriteStringToDeviceHardwareKey @ 0x1C007FED0 (HUBREG_WriteStringToDeviceHardwareKey.c)
 *     HUBREG_UpdateSqmFlags @ 0x1C00816B8 (HUBREG_UpdateSqmFlags.c)
 *     WMI_RegisterDevice @ 0x1C0084C64 (WMI_RegisterDevice.c)
 *     WMI_FireNotification @ 0x1C0084F0C (WMI_FireNotification.c)
 *     QueryDeviceResetInterface @ 0x1C0086918 (QueryDeviceResetInterface.c)
 *     InitializeResetActionWorkItem @ 0x1C0086CAC (InitializeResetActionWorkItem.c)
 */

__int64 __fastcall HUBPDO_EvtDevicePrepareHardware(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int DeviceInterfacePath; // eax
  unsigned __int16 v9; // r9
  _QWORD *v10; // r14
  int DeviceResetInterface; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v16; // r13
  wchar_t *v17; // r14
  int (__fastcall *v18)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *); // rax
  wchar_t *v19; // rax
  __int64 v20; // r8
  char *v21; // rcx
  __int64 v22; // r9
  unsigned __int16 *v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r13
  int v27; // ecx
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // r10
  const char *v31; // r9
  bool v32; // cl
  const char *v33; // rdx
  const char *v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v40; // [rsp+20h] [rbp-180h]
  __int64 v41; // [rsp+28h] [rbp-178h]
  int v42; // [rsp+40h] [rbp-160h]
  char v43; // [rsp+120h] [rbp-80h]
  unsigned int v44; // [rsp+124h] [rbp-7Ch]
  char v45; // [rsp+128h] [rbp-78h]
  __int16 v46; // [rsp+12Ch] [rbp-74h]
  int v47; // [rsp+130h] [rbp-70h]
  int v48; // [rsp+134h] [rbp-6Ch]
  int v49; // [rsp+138h] [rbp-68h]
  int v50; // [rsp+13Ch] [rbp-64h]
  int v51; // [rsp+140h] [rbp-60h]
  unsigned __int16 v52; // [rsp+144h] [rbp-5Ch]
  __int64 v53; // [rsp+148h] [rbp-58h] BYREF
  int v54; // [rsp+150h] [rbp-50h]
  __int64 v55; // [rsp+158h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+160h] [rbp-40h] BYREF
  wchar_t *v57; // [rsp+170h] [rbp-30h]
  const wchar_t *v58; // [rsp+178h] [rbp-28h]
  __int64 v59; // [rsp+180h] [rbp-20h]
  wchar_t *v60; // [rsp+188h] [rbp-18h]
  void *Src[2]; // [rsp+190h] [rbp-10h] BYREF
  __int128 v62; // [rsp+1A0h] [rbp+0h] BYREF
  __int64 v63; // [rsp+1B0h] [rbp+10h]
  __int64 v64; // [rsp+1B8h] [rbp+18h]
  __int128 v65; // [rsp+1C0h] [rbp+20h]
  __int64 v66; // [rsp+1D0h] [rbp+30h]
  __int64 v67; // [rsp+1D8h] [rbp+38h]
  __int64 v68; // [rsp+1E0h] [rbp+40h]
  __int64 v69; // [rsp+1E8h] [rbp+48h]
  __int64 v70; // [rsp+1F0h] [rbp+50h]
  int v71; // [rsp+1F8h] [rbp+58h] BYREF
  char v72; // [rsp+1FCh] [rbp+5Ch] BYREF

  v1 = a1;
  v69 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00660D0);
  v3 = *(_QWORD *)(v2 + 24);
  v59 = v2;
  v70 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_1C00661C0);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer(v4, &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_START, 0LL, *(_QWORD *)(v3 + 24));
  _InterlockedOr((volatile signed __int32 *)(v3 + 1636), 0x4000u);
  HUBREG_QueryValuesInDeviceHardwareKey(v3);
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
    v7 = DeviceInterfacePath;
    if ( DeviceInterfacePath >= 0 )
    {
      v10 = (_QWORD *)(v3 + 2136);
      DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                              (__int64)&GUID_DEVINTERFACE_USB_DEVICE,
                              v1,
                              (_QWORD *)(v3 + 2136),
                              0LL,
                              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL));
      v44 = DeviceInterfacePath;
      v7 = DeviceInterfacePath;
      if ( DeviceInterfacePath >= 0 )
      {
        if ( (*(_DWORD *)(v3 + 1644) & 0x4000000) != 0 )
        {
          DeviceResetInterface = QueryDeviceResetInterface(v1, v2 + 456);
          if ( DeviceResetInterface >= 0 )
          {
            v13 = InitializeResetActionWorkItem(v2 + 520, v12, v1);
            v44 = v13;
            v7 = v13;
            if ( v13 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
                  4u,
                  5u,
                  0x50u,
                  (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
                  v13);
              DereferenceDeviceResetInterface(v2 + 456);
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
                (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
                DeviceResetInterface);
            v7 = 0;
            v44 = 0;
          }
        }
        goto LABEL_36;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_92;
      v9 = 78;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_92;
      v9 = 77;
    }
LABEL_17:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      5u,
      v9,
      (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
      DeviceInterfacePath);
    goto LABEL_92;
  }
  v5 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)(*(_QWORD *)v3 + 240LL) >= *(_BYTE *)(v5 + 202) )
  {
    *(_DWORD *)(v5 + 1424) = 7;
    WMI_FireNotification(*(_QWORD *)v3, *(unsigned __int16 *)(v2 + 48), 10LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        3u,
        0x4Au,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids);
    v7 = -1073741823;
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x10) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        v6,
        &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_NESTED_TOO_DEEP,
        0LL,
        *(_QWORD *)(v3 + 24));
    goto LABEL_92;
  }
  DeviceInterfacePath = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD))(WdfFunctions_01015
                                                                                                + 616))(
                          WdfDriverGlobals,
                          v1,
                          &GUID_DEVINTERFACE_USB_HUB,
                          0LL);
  v7 = DeviceInterfacePath;
  if ( DeviceInterfacePath < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v9 = 75;
    goto LABEL_17;
  }
  v10 = (_QWORD *)(v3 + 2136);
  DeviceInterfacePath = HUBMISC_GetDeviceInterfacePath(
                          (__int64)&GUID_DEVINTERFACE_USB_HUB,
                          v1,
                          (_QWORD *)(v3 + 2136),
                          0LL,
                          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL));
  v44 = DeviceInterfacePath;
  v7 = DeviceInterfacePath;
  if ( DeviceInterfacePath < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_92;
    v9 = 76;
    goto LABEL_17;
  }
LABEL_36:
  if ( *v10 && (v14 = HUBREG_WriteStringToDeviceHardwareKey(v3), v44 = v14, v7 = v14, v14 < 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v41) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
        2u,
        5u,
        0x51u,
        (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
        v41);
    }
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 32) & 0x200) == 0 && (*(_DWORD *)(v3 + 1636) & 2) != 0 )
      *(_BYTE *)v2 = 0;
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        WdfDriverGlobals->Driver,
                        off_1C00661C0)
                    + 4) & 0x1000) != 0 )
    {
      DestinationString = 0LL;
      *(_OWORD *)Src = 0LL;
      RtlInitUnicodeString(&DestinationString, 0LL);
      if ( *v10 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
          WdfDriverGlobals,
          *v10,
          &DestinationString);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                                 ExDefaultNonPagedPoolType,
                                 DestinationString.Length + 2LL,
                                 0x64334855u);
      v60 = PoolWithTag;
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, DestinationString.Length + 2LL);
        memmove(v16, DestinationString.Buffer, DestinationString.Length);
      }
      v53 = 0LL;
      v63 = 0LL;
      v66 = 0LL;
      v17 = 0LL;
      v62 = 0LL;
      LODWORD(v62) = 56;
      v64 = 0x100000001LL;
      v65 = (unsigned __int64)v1;
      v18 = *(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 2464);
      v57 = 0LL;
      if ( v18(WdfDriverGlobals, 0LL, &v62, &v53) >= 0
        && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
             WdfDriverGlobals,
             v1,
             v53) >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
          WdfDriverGlobals,
          v53,
          Src);
        v19 = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, LOWORD(Src[0]) + 2LL, 0x64334855u);
        v57 = v19;
        v17 = v19;
        if ( v19 )
        {
          memset(v19, 0, LOWORD(Src[0]) + 2LL);
          memmove(v17, Src[1], LOWORD(Src[0]));
        }
      }
      v55 = 0LL;
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
             &v55) < 0 )
        v58 = 0LL;
      else
        v58 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015
                                                                                               + 1552))(
                                 WdfDriverGlobals,
                                 v55,
                                 0LL);
      v20 = *(_QWORD *)(v2 + 16);
      v21 = &v72;
      v22 = 5LL;
      v23 = (unsigned __int16 *)(v20 + 322);
      v71 = *(unsigned __int16 *)(v20 + 320);
      do
      {
        v24 = *v23++;
        *(_DWORD *)v21 = v24;
        v21 += 4;
        --v22;
      }
      while ( v22 );
      v25 = *(unsigned __int8 *)(v20 + 240);
      if ( (unsigned __int8)v25 < 6u )
        *(&v71 + v25) = *(unsigned __int16 *)(v2 + 48);
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 8) != 0 )
      {
        v26 = *(_QWORD *)(v3 + 8);
        v67 = v26;
        v27 = *(_DWORD *)(v26 + 204);
        if ( (v27 & 2) != 0 )
          v43 = *(_BYTE *)(v26 + 1341);
        else
          v43 = 0;
        v28 = *(_DWORD *)(v20 + 168);
        v54 = v28;
        if ( v28 == 1 )
        {
          v46 = *(_WORD *)(v20 + 184);
          v48 = *(_DWORD *)(v20 + 176);
          v49 = *(_DWORD *)(v20 + 196);
          v50 = *(_DWORD *)(v20 + 192);
          v51 = *(_DWORD *)(v20 + 188);
          v47 = *(_DWORD *)(v20 + 180);
        }
        else
        {
          LOBYTE(v46) = 0;
          LOBYTE(v49) = 0;
          LOBYTE(v50) = 0;
          LOBYTE(v51) = 0;
          LOBYTE(v47) = -1;
          LOBYTE(v48) = -1;
        }
        v29 = *(_QWORD *)(v3 + 2016);
        v68 = v29;
        if ( v29 )
          v52 = *(_WORD *)(v29 + 2);
        else
          v52 = 0;
        v31 = 0LL;
        v32 = (v27 & 2) != 0;
        if ( v28 == 2 )
          v31 = (const char *)(v20 + 186);
        v45 = v32;
        v33 = 0LL;
        if ( v28 == 2 )
          v33 = (const char *)(v20 + 181);
        v34 = 0LL;
        if ( v28 == 2 )
          v34 = (const char *)(v20 + 176);
        v17 = v57;
        v30 = *(_QWORD *)(v2 + 24);
        McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
          (__int64)v34,
          &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_DEVICE_INFORMATION_V2,
          (const GUID *)(v20 + 764),
          *(_QWORD *)(*(_QWORD *)v3 + 248LL),
          *(_QWORD *)(v3 + 24),
          *(_WORD *)(v26 + 200),
          v58,
          v60,
          v42,
          v3 + 1988,
          v52,
          v68,
          v57,
          (*(_BYTE *)(v2 + 32) & 1) == 0,
          *(_BYTE *)(v20 + 240) + 1,
          (__int64)&v71,
          v51,
          v50,
          v49,
          v48,
          v47,
          v46,
          *(_DWORD *)(v59 + 384),
          *(_DWORD *)(v3 + 2224),
          v54,
          v34,
          v33,
          v31,
          v45,
          v43,
          *(_QWORD *)(v67 + 1416),
          *(_BYTE *)(v30 + 2704),
          *(_BYTE *)(v30 + 2705),
          *(_DWORD *)(v30 + 2708),
          *(_DWORD *)(v30 + 2712));
        v7 = v44;
        v1 = v69;
        v2 = v59;
        v16 = v60;
      }
      if ( v16 )
        ExFreePoolWithTag(v16, 0x64334855u);
      if ( v17 )
        ExFreePoolWithTag(v17, 0x64334855u);
      if ( v53 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
      if ( v55 )
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    }
    if ( (*(_DWORD *)(v3 + 1632) & 6) == 0 )
      WMI_RegisterDevice(v1);
    if ( *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C00661C0)
                  + 92) )
    {
      v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v1);
      v36 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              *(_QWORD *)(v2 + 16));
      v37 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(WdfDriverGlobals, v36);
      v38 = SleepstudyHelper_RegisterPdoWithParentPdo(*(_QWORD *)(v70 + 96), v37, v35, v2 + 392);
      if ( v38 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v41) = v38;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
            2u,
            2u,
            0x52u,
            (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
            v41);
        }
        *(_QWORD *)(v2 + 392) = 0LL;
      }
      v7 = v44;
    }
  }
LABEL_92:
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
  {
    LODWORD(v40) = v7;
    McTemplateK0pq_EtwWriteTransfer(
      v6,
      &USBHUB3_ETW_EVENT_DEVICE_PREPARE_HARDWARE_COMPLETE,
      0LL,
      *(_QWORD *)(v3 + 24),
      v40);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v41) = *(_DWORD *)(v3 + 1644);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
      2u,
      5u,
      0x53u,
      (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
      v41);
  }
  return v7;
}

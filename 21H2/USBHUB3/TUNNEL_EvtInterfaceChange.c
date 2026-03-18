/*
 * XREFs of TUNNEL_EvtInterfaceChange @ 0x1C00883B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0031BAC (WPP_RECORDER_SF_S.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C004025C (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_GetUsb4Host @ 0x1C0087A14 (TUNNEL_GetUsb4Host.c)
 */

__int64 __fastcall TUNNEL_EvtInterfaceChange(char *NotificationStructure, PVOID Context)
{
  unsigned __int64 v2; // rax
  char v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  int DeviceInterfacePropertyData; // eax
  unsigned int v9; // esi
  unsigned __int16 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  _UNKNOWN **v13; // rcx
  _QWORD *Usb4Host; // rsi
  __int64 v15; // rax
  unsigned __int16 *v16; // r8
  __int64 v17; // r10
  unsigned __int64 v18; // r9
  unsigned __int16 v19; // cx
  __int64 v20; // rdx
  _WORD *v21; // rcx
  _WORD *v22; // rax
  unsigned int v23; // eax
  __int64 v25; // [rsp+28h] [rbp-D8h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+70h] [rbp-90h] BYREF
  __int128 v31; // [rsp+74h] [rbp-8Ch]
  int v32; // [rsp+84h] [rbp-7Ch]
  int v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+8Ch] [rbp-74h]
  PVOID v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  void *v37; // [rsp+A0h] [rbp-60h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Str1[20]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR SourceString[236]; // [rsp+E8h] [rbp-18h] BYREF

  HIDWORD(v29[0]) = 0;
  v2 = *(_QWORD *)(NotificationStructure + 4);
  v31 = 0LL;
  v32 = 0;
  v5 = 0;
  v36 = 0LL;
  DestinationString = 0LL;
  v27 = 0LL;
  v26 = 0;
  v28 = 0;
  if ( __PAIR128__(*(_QWORD *)(NotificationStructure + 12), v2) != *(_OWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL )
    return 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, PVOID, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         Context,
         off_1C0067198);
  v7 = v6;
  if ( *(_OWORD *)(NotificationStructure + 20) != *(_OWORD *)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(v6 + 2520), 2u, 3u, 0x13u, (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids);
    return 0LL;
  }
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  *((_QWORD *)NotificationStructure + 5),
                                  &DEVPKEY_DeviceInterface_ReferenceString,
                                  0LL,
                                  0LL,
                                  512,
                                  Str1,
                                  &v28,
                                  &v26);
  v9 = DeviceInterfacePropertyData;
  if ( DeviceInterfacePropertyData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 20;
      LODWORD(v25) = DeviceInterfacePropertyData;
LABEL_6:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v7 + 2520),
        2u,
        3u,
        v10,
        (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
        v25);
      return 0LL;
    }
    return 0LL;
  }
  v11 = v26;
  if ( v26 != 18 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v10 = 21;
    goto LABEL_10;
  }
  if ( _wcsnicmp(Str1, L"Usb4-Host-Interface-", 0x14uLL) )
  {
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        *(_QWORD *)(v7 + 2520),
        v12,
        3u,
        0x16u,
        (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
        Str1);
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      (__int64)v13,
      v9,
      0,
      "USB4 virtual power PDO interface arrival with invalid reference string");
    return 0LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v7 + 2744),
    0LL);
  Usb4Host = TUNNEL_GetUsb4Host(v7, &DestinationString);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v7 + 2744));
  if ( Usb4Host )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      Usb4Host[2],
      0LL);
    if ( (Usb4Host[3] & 0xFFFFFFFB) == 0 )
    {
      v5 = 1;
      *((_DWORD *)Usb4Host + 6) = 1;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, Usb4Host[2]);
    if ( v5 )
    {
      v32 = 0;
      v29[2] = 1LL;
      v36 = 0LL;
      v29[0] = 24LL;
      v29[1] = TUNNEL_EvtWorkitemPnpInterfaceNotification;
      v37 = off_1C00672A8;
      v31 = 0LL;
      v30 = 56;
      v33 = 1;
      v34 = 1;
      v35 = Context;
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, int *, __int64 *))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              v29,
              &v30,
              &v27);
      if ( v11 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v27,
                off_1C00672A8);
        v16 = (unsigned __int16 *)*((_QWORD *)NotificationStructure + 5);
        v17 = v15;
        v18 = *v16;
        if ( (v18 & 1) != 0
          || (v19 = v16[1], (v19 & 1) != 0)
          || (unsigned __int16)v18 > v19
          || v19 == 0xFFFF
          || (v16 = (unsigned __int16 *)*((_QWORD *)v16 + 1)) == 0LL && ((_WORD)v18 || v19) )
        {
          v23 = -1073741811;
          *(_WORD *)v17 = 0;
        }
        else
        {
          v20 = 256LL;
          v21 = (_WORD *)v15;
          v16 = (unsigned __int16 *)((char *)v16 - v15);
          do
          {
            if ( !(v20 + (v18 >> 1) - 256) )
              break;
            *v21 = *(_WORD *)((char *)v21 + (_QWORD)v16);
            ++v21;
            --v20;
          }
          while ( v20 );
          v22 = v21 - 1;
          if ( v20 )
            v22 = v21;
          *v22 = 0;
          v23 = v20 == 0 ? 0x80000005 : 0;
          if ( v20 )
          {
            *(_QWORD *)(v17 + 512) = Usb4Host;
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 3040))(
              WdfDriverGlobals,
              v27,
              v16);
            return 0LL;
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v25) = v23;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v7 + 2520),
            2u,
            3u,
            0x18u,
            (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
            v25);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, unsigned __int16 *))(WdfFunctions_01015 + 1664))(
          WdfDriverGlobals,
          v27,
          v16);
        return 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = 23;
LABEL_10:
      LODWORD(v25) = v11;
      goto LABEL_6;
    }
  }
  return 0LL;
}

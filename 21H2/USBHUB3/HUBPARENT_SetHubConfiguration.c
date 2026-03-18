/*
 * XREFs of HUBPARENT_SetHubConfiguration @ 0x1C0006F04
 * Callers:
 *     HUBHSM_SettingHubConfiguration @ 0x1C0009500 (HUBHSM_SettingHubConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C0033084 (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 */

_UNKNOWN **__fastcall HUBPARENT_SetHubConfiguration(__int64 a1)
{
  int v2; // ecx
  PURB v3; // rsi
  struct _USB_CONFIGURATION_DESCRIPTOR *v4; // rdi
  int v5; // ecx
  int v6; // ecx
  struct _USB_INTERFACE_DESCRIPTOR *v7; // rax
  _UNKNOWN **result; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // edi
  __int64 v14; // [rsp+28h] [rbp-91h]
  __int64 v15; // [rsp+50h] [rbp-69h] BYREF
  __int128 v16; // [rsp+58h] [rbp-61h] BYREF
  __int128 v17; // [rsp+68h] [rbp-51h]
  __int128 v18; // [rsp+78h] [rbp-41h]
  __int64 v19; // [rsp+88h] [rbp-31h]
  _USBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+90h] [rbp-29h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-19h]
  _QWORD v22[9]; // [rsp+B0h] [rbp-9h] BYREF

  LODWORD(v19) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  memset(v22, 0, sizeof(v22));
  v2 = *(_DWORD *)(a1 + 256);
  v3 = 0LL;
  v15 = 0LL;
  v4 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 1256);
  v5 = v2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        goto LABEL_9;
    }
    else
    {
      v7 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v4,
                                                 (_DWORD)v4,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 2,
                                                 0LL,
                                                 *(_QWORD *)(a1 + 2520));
      if ( v7 )
        goto LABEL_11;
    }
  }
  v7 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                             (_DWORD)v4,
                                             (_DWORD)v4,
                                             -1,
                                             -1,
                                             9,
                                             -1,
                                             1,
                                             0LL,
                                             *(_QWORD *)(a1 + 2520));
  if ( !v7 )
  {
    v7 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                               (_DWORD)v4,
                                               (_DWORD)v4,
                                               -1,
                                               -1,
                                               9,
                                               -1,
                                               0,
                                               0LL,
                                               *(_QWORD *)(a1 + 2520));
    if ( !v7 )
    {
      v7 = (struct _USB_INTERFACE_DESCRIPTOR *)HUBDESC_ParseConfigurationDescriptor(
                                                 (_DWORD)v4,
                                                 (_DWORD)v4,
                                                 -1,
                                                 -1,
                                                 9,
                                                 -1,
                                                 -1,
                                                 0LL,
                                                 *(_QWORD *)(a1 + 2520));
      if ( !v7 )
      {
LABEL_9:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0xCu,
            (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
        goto LABEL_23;
      }
    }
  }
LABEL_11:
  if ( v7->bInterfaceClass != 9 || !v7->bNumEndpoints )
  {
LABEL_23:
    if ( v15 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1264, 2006LL);
  }
  v21 = 0LL;
  InterfaceList.InterfaceDescriptor = v7;
  v3 = USBD_CreateConfigurationRequestEx(v4, &InterfaceList);
  if ( v3 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    v10 = *(_QWORD *)(a1 + 16);
    v11 = v9;
    *(_QWORD *)&v17 = 0LL;
    v19 = 0LL;
    v18 = v10;
    v16 = 0LL;
    LODWORD(v16) = 56;
    *((_QWORD *)&v17 + 1) = 0x100000001LL;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            &v16,
            v9,
            &v15);
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          0xEu,
          (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
          v14);
      }
      goto LABEL_23;
    }
    LOBYTE(v22[0]) = 15;
    LODWORD(v22[3]) = 2228227;
    v22[1] = v3;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v15,
      v22);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), PURB))(WdfFunctions_01015 + 2080))(
      WdfDriverGlobals,
      v15,
      HUBPARENT_SetHubConfigurationComplete,
      v3);
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                            WdfDriverGlobals,
                            v15,
                            v11,
                            0LL);
    if ( !(_BYTE)result )
    {
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v15);
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v14) = v13;
        result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                                *(_QWORD *)(a1 + 2520),
                                2u,
                                3u,
                                0xFu,
                                (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                                v14);
      }
      if ( v13 < 0 )
        goto LABEL_23;
    }
  }
  else
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 2520),
                            2u,
                            3u,
                            0xDu,
                            (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
  }
  return result;
}

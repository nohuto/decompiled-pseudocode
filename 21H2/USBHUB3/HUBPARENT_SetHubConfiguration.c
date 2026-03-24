/*
 * XREFs of HUBPARENT_SetHubConfiguration @ 0x1C0006C64
 * Callers:
 *     HUBHSM_SettingHubConfiguration @ 0x1C0009200 (HUBHSM_SettingHubConfiguration.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     HUBDESC_ParseConfigurationDescriptor @ 0x1C003281C (HUBDESC_ParseConfigurationDescriptor.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
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
  __int64 v10; // r14
  int v11; // edi
  unsigned __int16 v12; // r9
  __int64 v13; // [rsp+28h] [rbp-91h]
  __int64 v14; // [rsp+50h] [rbp-69h] BYREF
  __int128 v15; // [rsp+58h] [rbp-61h] BYREF
  __int128 v16; // [rsp+68h] [rbp-51h]
  __int128 v17; // [rsp+78h] [rbp-41h]
  __int64 v18; // [rsp+88h] [rbp-31h]
  _USBD_INTERFACE_LIST_ENTRY InterfaceList; // [rsp+90h] [rbp-29h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-19h]
  _QWORD v21[9]; // [rsp+B0h] [rbp-9h] BYREF

  v18 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(v21, 0, sizeof(v21));
  v2 = *(_DWORD *)(a1 + 256);
  v3 = 0LL;
  v14 = 0LL;
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
        goto LABEL_24;
      }
    }
  }
LABEL_11:
  if ( v7->bInterfaceClass != 9 || !v7->bNumEndpoints )
  {
LABEL_24:
    if ( v14 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1264, 2006LL);
  }
  v20 = 0LL;
  InterfaceList.InterfaceDescriptor = v7;
  v3 = USBD_CreateConfigurationRequestEx(v4, &InterfaceList);
  if ( v3 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    *(_QWORD *)&v17 = *(_QWORD *)(a1 + 16);
    v10 = v9;
    LODWORD(v15) = 56;
    *((_QWORD *)&v16 + 1) = 0x100000001LL;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
            WdfDriverGlobals,
            &v15,
            v9,
            &v14);
    if ( v11 >= 0 )
    {
      LOBYTE(v21[0]) = 15;
      LODWORD(v21[3]) = 2228227;
      v21[1] = v3;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
        WdfDriverGlobals,
        v14,
        v21);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), PURB))(WdfFunctions_01015 + 2080))(
        WdfDriverGlobals,
        v14,
        HUBPARENT_SetHubConfigurationComplete,
        v3);
      result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
                              WdfDriverGlobals,
                              v14,
                              v10,
                              0LL);
      if ( (_BYTE)result
        || (v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                    WdfDriverGlobals,
                    v14),
            result = &WPP_RECORDER_INITIALIZED,
            WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED) )
      {
LABEL_23:
        if ( v11 >= 0 )
          return result;
        goto LABEL_24;
      }
      v12 = 15;
    }
    else
    {
      result = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v12 = 14;
    }
    LODWORD(v13) = v11;
    result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                            *(_QWORD *)(a1 + 2520),
                            2u,
                            3u,
                            v12,
                            (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                            v13);
    goto LABEL_23;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          *(_QWORD *)(a1 + 2520),
                          2u,
                          3u,
                          0xDu,
                          (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids);
  return result;
}

/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x1C00169B8
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C006DA94 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0005B6C (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0014F40 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_diS @ 0x1C0016DC0 (WPP_RECORDER_SF_diS.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r14
  __int64 result; // rax
  unsigned int v6; // esi
  char *v7; // r15
  _QWORD *v8; // rdi
  __int64 v9; // r13
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdx
  int v18; // edx
  int v19; // r8d
  int v20; // [rsp+28h] [rbp-E0h]
  int v21; // [rsp+28h] [rbp-E0h]
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  char *v29; // [rsp+80h] [rbp-88h]
  _QWORD v30[2]; // [rsp+88h] [rbp-80h] BYREF
  wchar_t pszDest[64]; // [rsp+98h] [rbp-70h] BYREF

  v30[0] = L"USBXHCI";
  v4 = 0;
  v22 = 0LL;
  v30[1] = L"USBXHCI2";
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( !WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    goto LABEL_57;
  v6 = 0;
  v7 = (char *)v30 - a1;
  v8 = (_QWORD *)(a1 + 336);
  v29 = (char *)v30 - a1;
  do
  {
    RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ALL");
    v9 = *(_QWORD *)((char *)v8 + (_QWORD)v7 - 336);
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v22) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v10, v11, 154, v20, v6, v22, (__int64)pszDest);
      *v8 |= v22;
    }
    if ( *(_DWORD *)(a1 + 244) == 1 )
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 248));
    else
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 304);
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v23) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v12, v13, 155, v20, v6, v23, (__int64)pszDest);
      v4 = 1;
      *v8 |= v23;
    }
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v21 = *(unsigned __int16 *)(a1 + 252);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 248));
    }
    else
    {
      v21 = a1 + 309;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 304);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v24) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v14, v15, 156, v21, v6, v24, (__int64)pszDest);
      v4 = 1;
      *v8 |= v24;
    }
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v20 = *(unsigned __int16 *)(a1 + 252);
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X", *(unsigned __int16 *)(a1 + 248));
    }
    else
    {
      v20 = a1 + 309;
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 304);
    }
    if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v25) >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v16, a3, 157, v20, v6, v25, (__int64)pszDest);
      v4 = 1;
      *v8 |= v25;
    }
    v17 = *(_QWORD *)(a1 + 328);
    if ( v17 != -1 )
    {
      if ( *(_DWORD *)(a1 + 244) == 1 )
      {
        v20 = *(unsigned __int16 *)(a1 + 252);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
          *(unsigned __int16 *)(a1 + 248));
      }
      else
      {
        v20 = a1 + 309;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 304);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v26) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 158, v20, v6, v26, (__int64)pszDest);
        v4 = 1;
        *v8 |= v26;
      }
    }
    if ( *(_DWORD *)(a1 + 244) == 1 )
    {
      v20 = *(unsigned __int16 *)(a1 + 252);
      RtlStringCchPrintfW(
        pszDest,
        0x3CuLL,
        L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
        *(unsigned __int16 *)(a1 + 248));
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v27) >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 159, v20, v6, v27, (__int64)pszDest);
        v4 = 1;
        *v8 |= v27;
      }
      if ( *(_DWORD *)(a1 + 244) == 1 )
      {
        v20 = *(unsigned __int16 *)(a1 + 252);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 248));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v28) >= 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_diS(*(_QWORD *)(a1 + 72), v17, a3, 160, v20, v6, v28, (__int64)pszDest);
          v4 = 1;
          *v8 |= v28;
        }
      }
    }
    v7 = v29;
    ++v6;
    ++v8;
  }
  while ( v6 < 2 );
  result = *(_QWORD *)(a1 + 336);
  if ( (result & 0x10) != 0 )
  {
    v18 = 4;
    v19 = 4108;
LABEL_55:
    result = Controller_ReportFatalError(a1, v18, v19, 0, 0LL, 0LL, 0LL);
    goto LABEL_30;
  }
  if ( (result & 0x1000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), v17, 4, 161, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids);
    }
    Controller_HwVerifierBreakIfEnabled(
      a1,
      0,
      0,
      1,
      (__int64)"Controller Firmware has known issues, and newer firmware is available",
      0LL,
      0LL);
    v18 = 0;
    v19 = 4111;
    goto LABEL_55;
  }
LABEL_30:
  if ( v4 )
    return result;
  result = (__int64)&WPP_RECORDER_INITIALIZED;
LABEL_57:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 72), 3u, a3, 0xA2u, v20, pszDest);
  return result;
}

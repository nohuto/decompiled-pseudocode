/*
 * XREFs of Controller_PopulateHardwareVerifierFlags @ 0x1C006D470
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0015410 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A0B8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     RtlUnicodeStringPrintf @ 0x1C0015A0C (RtlUnicodeStringPrintf.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall Controller_PopulateHardwareVerifierFlags(__int64 a1)
{
  char v2; // cl
  char v3; // al
  void *v4; // rsi
  NTSTATUS result; // eax
  int v6; // edx
  int v7; // edi
  int v8; // r9d
  __int64 v9; // [rsp+28h] [rbp-59h]
  __int64 v10; // [rsp+48h] [rbp-39h] BYREF
  __int64 v11; // [rsp+50h] [rbp-31h] BYREF
  __int64 v12; // [rsp+58h] [rbp-29h] BYREF
  __int64 v13; // [rsp+60h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  char v15; // [rsp+78h] [rbp-9h] BYREF

  *(_QWORD *)&DestinationString.Length = 3407872LL;
  v13 = 0LL;
  v2 = *(_BYTE *)(a1 + 320);
  DestinationString.Buffer = (wchar_t *)&v15;
  v12 = 0LL;
  v3 = *(_BYTE *)(a1 + 321);
  v11 = 0LL;
  v10 = 0LL;
  if ( v2 )
  {
    if ( (v2 != 1 || v3) && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 72),
        3,
        4,
        210,
        (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
        v2,
        v3);
    v4 = &g_HwVerifierxHCI10;
  }
  else
  {
    v4 = &g_HwVerifierxHCI96;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
             WdfDriverGlobals,
             0LL,
             &g_HwVerifierKeyName,
             131097LL,
             0LL,
             &v12);
  v7 = result;
  if ( result < 0 )
  {
    v12 = 0LL;
    goto LABEL_7;
  }
  result = *(_DWORD *)(a1 + 244);
  if ( result == 1 )
  {
    LODWORD(v9) = *(unsigned __int8 *)(a1 + 256);
    result = RtlUnicodeStringPrintf(
               &DestinationString,
               L"%04X%04X%02X",
               *(unsigned __int16 *)(a1 + 248),
               *(unsigned __int16 *)(a1 + 252),
               v9);
  }
  else
  {
    if ( result != 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 2;
        result = WPP_RECORDER_SF_(
                   *(_QWORD *)(a1 + 72),
                   v6,
                   4,
                   211,
                   (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
      }
      goto LABEL_7;
    }
    result = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1 + 304, a1 + 309, a1 + 314);
  }
  v7 = result;
  if ( result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v8 = 212;
    goto LABEL_27;
  }
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
             WdfDriverGlobals,
             v12,
             &DestinationString,
             131097LL,
             0LL,
             &v11);
  v7 = result;
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
               WdfDriverGlobals,
               v11,
               v4,
               131097LL,
               0LL,
               &v10);
    v7 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                 WdfDriverGlobals,
                 v10,
                 &g_HwVerifierControllerName,
                 8LL,
                 &v13,
                 0LL,
                 0LL);
      v7 = result;
      if ( result >= 0 )
        goto LABEL_7;
    }
    else
    {
      v10 = 0LL;
    }
  }
  else
  {
    v11 = 0LL;
  }
  if ( v7 == -1073741772 )
  {
    if ( v10 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
      v10 = 0LL;
    }
    v6 = v11;
    if ( v11 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
      v11 = 0LL;
    }
    result = *(_DWORD *)(a1 + 244);
    if ( result == 1 )
    {
      result = RtlUnicodeStringPrintf(
                 &DestinationString,
                 L"%04X%04X",
                 *(unsigned __int16 *)(a1 + 248),
                 *(unsigned __int16 *)(a1 + 252));
    }
    else
    {
      if ( result != 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 2;
          result = WPP_RECORDER_SF_(
                     *(_QWORD *)(a1 + 72),
                     v6,
                     4,
                     213,
                     (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids);
        }
        *(_QWORD *)(a1 + 448) = 0LL;
        goto LABEL_9;
      }
      result = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a1 + 304, a1 + 309);
    }
    v7 = result;
    if ( result >= 0 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                 WdfDriverGlobals,
                 v12,
                 &DestinationString,
                 131097LL,
                 0LL,
                 &v11);
      v7 = result;
      if ( result >= 0 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                   WdfDriverGlobals,
                   v11,
                   v4,
                   131097LL,
                   0LL,
                   &v10);
        v7 = result;
        if ( result >= 0 )
        {
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                     WdfDriverGlobals,
                     v10,
                     &g_HwVerifierControllerName,
                     8LL,
                     &v13,
                     0LL,
                     0LL);
          v7 = result;
          if ( result >= 0 )
            goto LABEL_7;
        }
        else
        {
          v10 = 0LL;
        }
      }
      else
      {
        v11 = 0LL;
      }
      if ( v7 == -1073741772 )
      {
        if ( v10 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
          v10 = 0LL;
        }
        if ( v11 )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
          v11 = 0LL;
        }
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                   WdfDriverGlobals,
                   v12,
                   &g_HwVerifierGlobalName,
                   131097LL,
                   0LL,
                   &v11);
        v7 = result;
        if ( result >= 0 )
        {
          result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01023 + 1832))(
                     WdfDriverGlobals,
                     v11,
                     v4,
                     131097LL,
                     0LL,
                     &v10);
          v7 = result;
          if ( result >= 0 )
          {
            result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1880))(
                       WdfDriverGlobals,
                       v10,
                       &g_HwVerifierControllerName,
                       8LL,
                       &v13,
                       0LL,
                       0LL);
            v7 = result;
          }
          else
          {
            v10 = 0LL;
          }
        }
        else
        {
          v11 = 0LL;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 214;
LABEL_27:
      LOBYTE(v6) = 2;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v6,
                 4,
                 v8,
                 (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
                 v7);
    }
  }
LABEL_7:
  if ( v7 >= 0 )
  {
    result = v13;
    *(_QWORD *)(a1 + 448) = v13;
  }
  else
  {
    *(_QWORD *)(a1 + 448) = 0LL;
    if ( v7 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_11;
      LOBYTE(v6) = 2;
      result = WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1 + 72),
                 v6,
                 4,
                 215,
                 (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
                 v7);
    }
  }
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    result = WPP_RECORDER_SF_i(
               *(_QWORD *)(a1 + 72),
               v6,
               4,
               216,
               (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
               *(_QWORD *)(a1 + 448));
  }
LABEL_11:
  if ( v10 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  if ( v11 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  if ( v12 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1848))(WdfDriverGlobals);
  return result;
}

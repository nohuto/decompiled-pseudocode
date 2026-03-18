/*
 * XREFs of HUBREG_QueryUsbflagsValuesForDevice @ 0x1C007DA10
 * Callers:
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C007C6B4 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     RtlUnicodeStringPrintf @ 0x1C000BBF4 (RtlUnicodeStringPrintf.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x1C002FE4C (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBREG_QueryUsbflagsAlternateSettingFilter @ 0x1C0031600 (HUBREG_QueryUsbflagsAlternateSettingFilter.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     HUBREG_OpenCreateUsbflagsDeviceKey @ 0x1C007CEE0 (HUBREG_OpenCreateUsbflagsDeviceKey.c)
 */

__int64 __fastcall HUBREG_QueryUsbflagsValuesForDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v9; // r13
  __int64 v10; // rax
  int v11; // esi
  _WORD *v12; // r10
  __int64 v13; // rbx
  unsigned __int16 v14; // r9
  bool v15; // zf
  char v16; // al
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  int v20; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+88h] [rbp-78h] BYREF
  char pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+98h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v31; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  char v34; // [rsp+100h] [rbp+0h] BYREF

  v4 = *(_QWORD *)a1;
  v20 = 0;
  v31 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v9 = *(_BYTE *)(v4 + 200);
  DestinationString.Buffer = (wchar_t *)&v34;
  v10 = *(_QWORD *)(a1 + 8);
  v21 = 0LL;
  v23 = 0LL;
  *(_QWORD *)&DestinationString.Length = 6291456LL;
  v19 = *(_QWORD *)(v10 + 1432);
  v29 = 0LL;
  HUBREG_OpenCreateUsbflagsDeviceKey(a2, a3, a4, 0x20019u, &v29, &v21, 0, v19);
  v11 = HUBREG_OpenCreateUsbflagsDeviceKey(
          a2,
          a3,
          a4,
          0x20019u,
          0LL,
          &v23,
          1,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  if ( v11 < 0 )
    goto LABEL_163;
  RtlStringCchPrintfA(pszDest, 3uLL, "%02X", *(unsigned __int8 *)(a1 + 1992));
  if ( *(_DWORD *)(v4 + 168) == 3 && (v12 = *(_WORD **)(v4 + 176)) != 0LL )
    HUBMISC_QueryKseDeviceFlags(
      (__int64)pszDest,
      a2,
      a3,
      a4,
      v12,
      *(_WORD **)(v4 + 184),
      *(_WORD **)(v4 + 192),
      &v31,
      &v27,
      &v28,
      &v24,
      &v25,
      &v26,
      &v30,
      0,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  else
    HUBMISC_QueryKseDeviceFlags(
      (__int64)pszDest,
      a2,
      a3,
      a4,
      0LL,
      0LL,
      0LL,
      &v31,
      &v27,
      &v28,
      &v24,
      &v25,
      &v26,
      &v30,
      0,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL));
  v13 = v31 | v27 | v28 | v24 | v25 | v26 | v30;
  if ( v29 )
  {
    v11 = RtlUnicodeStringPrintf(
            &DestinationString,
            L"IgnoreHWSerNum%04X%04X",
            *(unsigned __int16 *)(a1 + 1996),
            *(unsigned __int16 *)(a1 + 1998));
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_163;
      v14 = 25;
LABEL_162:
      LODWORD(v18) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        v14,
        (__int64)&WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids,
        v18);
      goto LABEL_163;
    }
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
            WdfDriverGlobals,
            v29,
            &DestinationString,
            4LL,
            &v20,
            0LL,
            0LL);
    if ( v11 < 0 )
    {
      if ( v11 != -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_163;
        v14 = 26;
        goto LABEL_162;
      }
    }
    else if ( v20 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 1u);
    }
  }
  v20 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v23,
          L"\b\n",
          2LL,
          &v20,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_163;
      v14 = 27;
      goto LABEL_162;
    }
    if ( (v13 & 1) == 0 )
    {
      if ( (v24 & 2) != 0 || (v25 & 2) != 0 || (v26 & 2) != 0 || (v27 & 2) != 0 || (v28 & 2) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 2u);
      goto LABEL_28;
    }
  }
  else if ( v20 )
  {
    *(_BYTE *)(a1 + 2052) = BYTE1(v20);
    goto LABEL_28;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x80u);
LABEL_28:
  v20 = 0;
  if ( !v21 )
    goto LABEL_36;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v21,
          &g_IgnoreHwSerialNumber,
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 >= 0 && v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 1u);
  if ( v11 == -1073741772 )
  {
LABEL_36:
    if ( (v13 & 0x40) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 1u);
  }
  else if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_163;
    v14 = 28;
    goto LABEL_162;
  }
  v20 = 0;
  if ( !v21 )
    goto LABEL_46;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v21,
          L"68",
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 >= 0 && v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x200000u);
  if ( v11 == -1073741772 )
  {
LABEL_46:
    if ( (v13 & 0x80000000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x200000u);
  }
  else if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_163;
    v14 = 29;
    goto LABEL_162;
  }
  v20 = 0;
  if ( !v21 )
    goto LABEL_56;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v21,
          &g_ResetOnResume,
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 >= 0 && v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 4u);
  if ( v11 == -1073741772 )
  {
LABEL_56:
    if ( (v13 & 4) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 4u);
  }
  else if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_163;
    v14 = 30;
    goto LABEL_162;
  }
  v20 = 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 8u);
  if ( !v21 )
    goto LABEL_66;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v21,
          L"&(",
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 >= 0 && !v20 )
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFF7);
  if ( v11 == -1073741772 )
  {
LABEL_66:
    if ( (v13 & 8) != 0 )
      _InterlockedAnd((volatile signed __int32 *)(a1 + 1644), 0xFFFFFFF7);
  }
  else if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_163;
    v14 = 31;
    goto LABEL_162;
  }
  v20 = 0;
  if ( !v21 )
    goto LABEL_76;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v21,
          L"02",
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 >= 0 && v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10u);
  if ( v11 == -1073741772 )
  {
LABEL_76:
    if ( (v13 & 0x10) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10u);
  }
  else if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_163;
    v14 = 32;
    goto LABEL_162;
  }
  v20 = 0;
  if ( !v21 )
    goto LABEL_86;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v21,
          L":<",
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 >= 0 && v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800000u);
  if ( v11 == -1073741772 )
  {
LABEL_86:
    if ( (v13 & 0x1000000000LL) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800000u);
  }
  else if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_163;
    v14 = 33;
    goto LABEL_162;
  }
  v20 = 0;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v23,
          L"(*",
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_163;
      v14 = 34;
      goto LABEL_162;
    }
    v15 = (v13 & 0x20) == 0;
  }
  else
  {
    v15 = v20 == 0;
  }
  if ( !v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x20u);
  v20 = 0;
  if ( !v21 )
    goto LABEL_102;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v21,
          &g_DisableLpm,
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 >= 0 && v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80u);
  if ( v11 == -1073741772 )
  {
LABEL_102:
    if ( (v13 & 0x1000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80u);
  }
  else if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_163;
    v14 = 35;
    goto LABEL_162;
  }
  if ( (v13 & 0x400) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x40u);
  if ( (v13 & 0x4000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x100u);
  if ( (v13 & 0x10000) != 0 && *(_BYTE *)(*(_QWORD *)a1 + 240LL) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80u);
  if ( (v13 & 0x80000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400u);
  if ( (v13 & 0x200000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x800u);
  if ( (v13 & 0x800000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x1000u);
  if ( (v13 & 0x1000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x2000u);
  v20 = 0;
  if ( !v21 )
    goto LABEL_127;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v21,
          L",.",
          4LL,
          &v20,
          0LL,
          0LL);
  if ( v11 >= 0 && v20 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000u);
  if ( v11 == -1073741772 )
  {
LABEL_127:
    if ( (v13 & 0x8000000) != 0 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x8000u);
  }
  else if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_163;
    v14 = 36;
    goto LABEL_162;
  }
  if ( (v13 & 0x2000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x20000u);
  if ( (v13 & 0x20000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x40000u);
  if ( (v13 & 0x40000000) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x100000u);
  if ( ((v13 & 0x400000) != 0 || (v13 & 0x4000000000LL) != 0 && v9) && (*(_DWORD *)(a1 + 1632) & 2) == 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x80000u);
  if ( (v13 & 0x100000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400000u);
  if ( (v13 & 0x2000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x1000000u);
  if ( (v13 & 0x80000000000LL) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x4000000u);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
          WdfDriverGlobals,
          v23,
          L".0",
          8LL,
          &v32,
          0LL,
          0LL);
  if ( v11 < 0 )
  {
    if ( v11 != -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_163;
      v14 = 37;
      goto LABEL_162;
    }
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2468), 4u);
    v16 = BYTE6(v32);
    *(_DWORD *)(a1 + 2464) |= 4u;
    *(_BYTE *)(a1 + 2052) = v16;
    *(_QWORD *)(a1 + 2480) = v32;
  }
  if ( *(_WORD *)(a1 + 1996) == 8457 && *(_WORD *)(a1 + 1998) == 2064 && (unsigned __int8)*(_WORD *)(a1 + 2000) < 0x89u )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x10000u);
  if ( v21 )
    HUBREG_QueryUsbflagsAlternateSettingFilter(a1, v21);
  v11 = 0;
LABEL_163:
  if ( v21 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v29 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v23 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return (unsigned int)v11;
}

/*
 * XREFs of HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C0031948
 * Callers:
 *     HUBREG_QueryValuesInDeviceHardwareKey @ 0x1C007F780 (HUBREG_QueryValuesInDeviceHardwareKey.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     RtlUnicodeStringInit @ 0x1C003144C (RtlUnicodeStringInit.c)
 *     WPP_RECORDER_SF_S @ 0x1C00314D8 (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBREG_ValidateAndPopulateEndpointPriorities(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned int v4; // r12d
  __int64 (__fastcall *v5)(PWDF_DRIVER_GLOBALS); // rax
  wchar_t *v6; // rax
  unsigned int v7; // r13d
  unsigned __int16 v8; // r9
  __int64 v9; // rax
  int v10; // ebx
  unsigned __int16 v11; // r9
  unsigned int v12; // r15d
  const wchar_t *v13; // rax
  NTSTRSAFE_PCWSTR *v14; // r14
  unsigned int i; // ebx
  __int64 v16; // r14
  ULONG v17; // edx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v22; // [rsp+20h] [rbp-E0h]
  __int64 *v23; // [rsp+28h] [rbp-D8h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  wchar_t *Str[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  NTSTRSAFE_PCWSTR pszSrc[2]; // [rsp+B8h] [rbp-48h] BYREF
  NTSTRSAFE_PCWSTR v35[2]; // [rsp+C8h] [rbp-38h]
  NTSTRSAFE_PCWSTR v36[3]; // [rsp+D8h] [rbp-28h]
  char v37; // [rsp+F0h] [rbp-10h] BYREF

  *(_QWORD *)&DestinationString.Length = 6553600LL;
  v28 = a2;
  v33 = 0LL;
  Value = 0;
  DestinationString.Buffer = (wchar_t *)&v37;
  v3 = a2;
  v4 = 0;
  v30 = 0LL;
  v27 = 0LL;
  v31 = 0LL;
  v25 = 0LL;
  v32 = 0LL;
  *(_OWORD *)Str = 0LL;
  v5 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 112);
  *(_OWORD *)pszSrc = 0LL;
  *(_OWORD *)v35 = 0LL;
  *(_OWORD *)v36 = 0LL;
  LODWORD(v6) = v5(WdfDriverGlobals);
  v7 = (unsigned int)v6;
  if ( !(_DWORD)v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_75;
    v8 = 59;
LABEL_4:
    LOBYTE(v6) = WPP_RECORDER_SF_(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                   2u,
                   5u,
                   v8,
                   (__int64)&WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids);
    goto LABEL_75;
  }
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  *((_QWORD *)&v31 + 1) = 0x100000001LL;
  *(_QWORD *)&v32 = v9;
  v23 = &v27;
  v22 = 20 * v7;
  LODWORD(v30) = 56;
  LODWORD(v6) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64))(WdfFunctions_01015 + 1536))(
                  WdfDriverGlobals,
                  &v30,
                  (unsigned int)ExDefaultNonPagedPoolType,
                  1681082453LL);
  v10 = (int)v6;
  if ( (int)v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_74;
    v11 = 60;
LABEL_8:
    LODWORD(v23) = (_DWORD)v6;
LABEL_9:
    LOBYTE(v6) = WPP_RECORDER_SF_d(
                   *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                   2u,
                   5u,
                   v11,
                   (__int64)&WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids,
                   v23);
    goto LABEL_74;
  }
  v12 = 0;
  if ( !v7 )
    goto LABEL_71;
  while ( 2 )
  {
    v6 = (wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 144))(
                      WdfDriverGlobals,
                      v3,
                      v12);
    if ( !v6 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 61;
      goto LABEL_102;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, wchar_t *, wchar_t **))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v6,
      Str);
    v13 = Str[1];
    v14 = &pszSrc[1];
    pszSrc[0] = Str[1];
    for ( i = 1; i < 6; ++i )
    {
      v6 = wcschr(v13, 0x2Cu);
      if ( !v6 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_75;
        v8 = 62;
        goto LABEL_4;
      }
      *v6 = 0;
      v13 = v6 + 1;
      *v14++ = v13;
    }
    LODWORD(v6) = RtlUnicodeStringInit(&DestinationString, pszSrc[0]);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 63;
      goto LABEL_8;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      v16 = 20LL * v4;
      *(_WORD *)(v16 + v25) = -1;
      goto LABEL_21;
    }
    LODWORD(v6) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 64;
      goto LABEL_8;
    }
    LOBYTE(v6) = Value - 1;
    if ( Value - 1 > 0xFE )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = Value;
        LOBYTE(v6) = WPP_RECORDER_SF_d(
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                       2u,
                       5u,
                       0x41u,
                       (__int64)&WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids,
                       v23);
      }
      goto LABEL_75;
    }
    v16 = 20LL * v4;
    *(_WORD *)(v16 + v25) = Value;
LABEL_21:
    LODWORD(v6) = RtlUnicodeStringInit(&DestinationString, pszSrc[1]);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 66;
      goto LABEL_102;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      *(_WORD *)(v16 + v25 + 2) = -1;
      goto LABEL_27;
    }
    LODWORD(v6) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 67;
      goto LABEL_102;
    }
    v17 = Value;
    if ( (int)Value > 255 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 68;
      goto LABEL_87;
    }
    *(_WORD *)(v16 + v25 + 2) = Value;
LABEL_27:
    LODWORD(v6) = RtlUnicodeStringInit(&DestinationString, v35[0]);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 69;
      goto LABEL_102;
    }
    if ( RtlEqualUnicodeString(&g_WildcardString, &DestinationString, 0) == 1 )
    {
      *(_WORD *)(v16 + v25 + 2) = -1;
      goto LABEL_33;
    }
    LODWORD(v6) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 70;
      goto LABEL_102;
    }
    v17 = Value;
    if ( Value > 0xFF )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 71;
      goto LABEL_87;
    }
    *(_WORD *)(v16 + v25 + 4) = Value;
LABEL_33:
    LODWORD(v6) = RtlUnicodeStringInit(&DestinationString, v35[1]);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 72;
      goto LABEL_102;
    }
    if ( RtlEqualUnicodeString(&g_BulkIn, &DestinationString, 1u) == 1 )
    {
      *(_DWORD *)(v16 + v25 + 8) = 0;
      goto LABEL_38;
    }
    if ( RtlEqualUnicodeString(&g_BulkOut, &DestinationString, 1u) != 1 )
    {
      LOBYTE(v6) = RtlEqualUnicodeString(&g_InterruptIn, &DestinationString, 1u);
      if ( (_BYTE)v6 == 1
        || (LOBYTE(v6) = RtlEqualUnicodeString(&g_InterruptOut, &DestinationString, 1u), (_BYTE)v6 == 1)
        || (LOBYTE(v6) = RtlEqualUnicodeString(&g_IsochronousIn, &DestinationString, 1u), (_BYTE)v6 == 1)
        || (LOBYTE(v6) = RtlEqualUnicodeString(&g_IsochronousOut, &DestinationString, 1u), (_BYTE)v6 == 1) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_60;
        v20 = 74;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_60;
        v20 = 73;
      }
      goto LABEL_59;
    }
    *(_DWORD *)(v16 + v25 + 8) = 1;
LABEL_38:
    LODWORD(v6) = RtlUnicodeStringInit(&DestinationString, v36[0]);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 75;
      goto LABEL_102;
    }
    LODWORD(v6) = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 76;
      goto LABEL_102;
    }
    v17 = Value;
    if ( Value > 0xF )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 77;
LABEL_87:
      LODWORD(v23) = v17;
      goto LABEL_9;
    }
    *(_WORD *)(v16 + v25 + 12) = Value;
    LODWORD(v6) = RtlUnicodeStringInit(&DestinationString, v36[1]);
    v10 = (int)v6;
    if ( (int)v6 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_74;
      v11 = 78;
LABEL_102:
      LODWORD(v23) = v10;
      goto LABEL_9;
    }
    if ( RtlEqualUnicodeString(&g_Video, &DestinationString, 1u) == 1 )
    {
      LOBYTE(v6) = v25;
      *(_DWORD *)(v16 + v25 + 16) = 1;
      goto LABEL_48;
    }
    if ( RtlEqualUnicodeString(&g_Voice, &DestinationString, 1u) == 1 )
    {
      LOBYTE(v6) = v25;
      *(_DWORD *)(v16 + v25 + 16) = 2;
      goto LABEL_48;
    }
    LOBYTE(v6) = RtlEqualUnicodeString(&g_Interactive, &DestinationString, 1u);
    if ( (_BYTE)v6 != 1 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_60;
      v20 = 79;
LABEL_59:
      LOBYTE(v6) = WPP_RECORDER_SF_S(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                     v18,
                     v19,
                     v20,
                     v22,
                     (__int64)DestinationString.Buffer);
      goto LABEL_60;
    }
    LOBYTE(v6) = v25;
    *(_DWORD *)(v16 + v25 + 16) = 3;
LABEL_48:
    ++v4;
LABEL_60:
    if ( ++v12 < v7 )
    {
      v3 = v28;
      continue;
    }
    break;
  }
  if ( !v4 )
  {
LABEL_71:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LOBYTE(v6) = WPP_RECORDER_SF_(
                     *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                     2u,
                     5u,
                     0x50u,
                     (__int64)&WPP_bb780d5c926432a673b7a78c72bdde31_Traceguids);
    v10 = -1073741811;
  }
LABEL_74:
  if ( v10 >= 0 )
  {
    LOBYTE(v6) = v25;
    *(_QWORD *)(a1 + 2688) = v25;
    *(_DWORD *)(a1 + 2696) = v4;
  }
  else
  {
LABEL_75:
    if ( v27 )
      LOBYTE(v6) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  }
  return (char)v6;
}

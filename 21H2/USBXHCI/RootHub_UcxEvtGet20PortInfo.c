/*
 * XREFs of RootHub_UcxEvtGet20PortInfo @ 0x1C00180B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r11
  int v5; // edx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  unsigned __int16 v8; // di
  unsigned __int16 i; // dx
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // eax
  int v13; // ecx
  int v15; // r9d
  int v16; // [rsp+28h] [rbp-50h]
  _OWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060248);
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v17);
  v4 = *((_QWORD *)&v17[0] + 1);
  v5 = **((_DWORD **)&v17[0] + 1);
  v6 = *(_QWORD *)(*((_QWORD *)&v17[0] + 1) + 8LL);
  if ( **((_DWORD **)&v17[0] + 1) < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2104))(WdfDriverGlobals, a2);
    v15 = 197;
    v16 = **((_DWORD **)&v17[0] + 1);
LABEL_19:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v5,
      11,
      v15,
      (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
      v16);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2104))(WdfDriverGlobals, a2);
  }
  LOWORD(v7) = *(_WORD *)(*((_QWORD *)&v17[0] + 1) + 4LL);
  if ( (_WORD)v7 != *(_WORD *)(v3 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2104))(WdfDriverGlobals, a2);
    v15 = 198;
    goto LABEL_18;
  }
  v7 = *(unsigned __int16 *)(*((_QWORD *)&v17[0] + 1) + 6LL);
  if ( v7 < 0x14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2104))(WdfDriverGlobals, a2);
    v15 = 199;
LABEL_18:
    LOBYTE(v16) = v7;
    goto LABEL_19;
  }
  v8 = 0;
  for ( i = 0; (unsigned int)i < *(_DWORD *)(v3 + 16); ++i )
  {
    if ( v8 >= *(_WORD *)(v4 + 4) )
      break;
    v10 = 112LL * i;
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 13) == 2 )
    {
      v11 = v8;
      **(_WORD **)(v6 + 8LL * v8) = i + 1;
      v12 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 17) != 1 )
        v12 = 102;
      *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 4LL) = v12;
      v13 = 116;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 16) != 1 )
        v13 = 102;
      *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 8LL) = v13;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x400000LL) == 0 )
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v8) + 16LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 19);
      ++v8;
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v11) + 2LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 12);
      *(_BYTE *)(*(_QWORD *)(v6 + 8 * v11) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 14);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2104))(WdfDriverGlobals, a2);
}

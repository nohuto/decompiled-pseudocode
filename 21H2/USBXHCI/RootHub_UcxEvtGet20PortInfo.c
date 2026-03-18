/*
 * XREFs of RootHub_UcxEvtGet20PortInfo @ 0x1C00179E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_UcxEvtGet20PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 i; // r9
  __int64 v5; // r11
  int v6; // edx
  __int64 v7; // r14
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned __int16 v10; // di
  __int64 v11; // r10
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // ecx
  int v16; // r9d
  int v17; // [rsp+28h] [rbp-60h]
  _OWORD v18[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v19 = 0LL;
  memset(v18, 0, sizeof(v18));
  LOWORD(v18[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v18);
  v5 = *((_QWORD *)&v18[0] + 1);
  v6 = **((_DWORD **)&v18[0] + 1);
  v7 = *(_QWORD *)(*((_QWORD *)&v18[0] + 1) + 8LL);
  if ( **((_DWORD **)&v18[0] + 1) < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_20:
      v9 = 3221225485LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v9,
               i);
    }
    v16 = 198;
    v17 = **((_DWORD **)&v18[0] + 1);
LABEL_19:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v6,
      11,
      v16,
      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
      v17);
    goto LABEL_20;
  }
  LOWORD(v8) = *(_WORD *)(*((_QWORD *)&v18[0] + 1) + 4LL);
  if ( (_WORD)v8 != *(_WORD *)(v3 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v16 = 199;
    goto LABEL_18;
  }
  v8 = *(unsigned __int16 *)(*((_QWORD *)&v18[0] + 1) + 6LL);
  if ( v8 < 0x14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v16 = 200;
LABEL_18:
    LOBYTE(v17) = v8;
    goto LABEL_19;
  }
  v9 = 0LL;
  v10 = 0;
  for ( i = 0LL; (unsigned int)(unsigned __int16)i < *(_DWORD *)(v3 + 16); LOWORD(i) = i + 1 )
  {
    if ( v10 >= *(_WORD *)(v5 + 4) )
      break;
    v11 = 112LL * (unsigned __int16)i;
    if ( *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 13) == 2 )
    {
      v12 = v10;
      **(_WORD **)(v7 + 8LL * v10) = i + 1;
      v13 = 102;
      if ( *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 17) == 1 )
        v13 = 116;
      *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v10) + 4LL) = v13;
      v14 = 116;
      if ( *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 16) != 1 )
        v14 = 102;
      *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v10) + 8LL) = v14;
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 336LL) & 0x400000LL) == 0 )
        *(_BYTE *)(*(_QWORD *)(v7 + 8LL * v10) + 16LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 19);
      ++v10;
      *(_BYTE *)(*(_QWORD *)(v7 + 8 * v12) + 2LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 12);
      *(_BYTE *)(*(_QWORD *)(v7 + 8 * v12) + 3LL) = *(_BYTE *)(v11 + *(_QWORD *)(v3 + 48) + 14);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v9,
           i);
}

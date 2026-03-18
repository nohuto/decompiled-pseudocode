/*
 * XREFs of RootHub_UcxEvtGet30PortInfo @ 0x1C0017420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0017624 (RootHub_Read30PortSpeeds.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // r14
  unsigned int v7; // ecx
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // di
  __int64 v10; // r9
  __int64 v11; // r8
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r9d
  char v17; // [rsp+28h] [rbp-70h]
  _OWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h]

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
  v4 = *((_QWORD *)&v18[0] + 1);
  v5 = **((_DWORD **)&v18[0] + 1);
  v6 = *(_QWORD *)(*((_QWORD *)&v18[0] + 1) + 8LL);
  if ( **((_DWORD **)&v18[0] + 1) < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_21:
      v11 = 3221225485LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
               WdfDriverGlobals,
               a2,
               v11);
    }
    v16 = 201;
    v17 = **((_DWORD **)&v18[0] + 1);
LABEL_20:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v5,
      11,
      v16,
      (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
      v17);
    goto LABEL_21;
  }
  LOWORD(v7) = *(_WORD *)(*((_QWORD *)&v18[0] + 1) + 4LL);
  if ( (_WORD)v7 != *(_WORD *)(v3 + 22) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = 202;
    goto LABEL_19;
  }
  v7 = *(unsigned __int16 *)(*((_QWORD *)&v18[0] + 1) + 6LL);
  if ( v7 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = 203;
LABEL_19:
    v17 = v7;
    goto LABEL_20;
  }
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)(v3 + 16) )
  {
    while ( v8 < *(_WORD *)(v4 + 4) )
    {
      v10 = 112LL * v9;
      if ( *(_BYTE *)(v10 + *(_QWORD *)(v3 + 48) + 13) == 3 )
      {
        **(_WORD **)(v6 + 8LL * v8) = v9 + 1;
        v13 = 102;
        if ( *(_BYTE *)(v10 + *(_QWORD *)(v3 + 48) + 17) == 1 )
          v13 = 116;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 4LL) = v13;
        v14 = 116;
        if ( *(_BYTE *)(v3 + 56) != 1 )
          v14 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 8LL) = v14;
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v8) + 2LL) = *(_BYTE *)(v10 + *(_QWORD *)(v3 + 48) + 12);
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v8) + 3LL) = *(_BYTE *)(v10 + *(_QWORD *)(v3 + 48) + 14);
        if ( *(_WORD *)(v4 + 6) >= 0x18u )
        {
          v15 = RootHub_Read30PortSpeeds(
                  v3,
                  *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 16LL),
                  (unsigned int)*(_QWORD *)(v6 + 8LL * v8) + 14,
                  *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v8) + 12LL),
                  *(_QWORD *)(v10 + *(_QWORD *)(v3 + 48) + 56),
                  *(_WORD *)(v10 + *(_QWORD *)(v3 + 48) + 54),
                  *(_BYTE *)(v10 + *(_QWORD *)(v3 + 48) + 12));
          v11 = v15;
          if ( v15 )
            return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                     WdfDriverGlobals,
                     a2,
                     v11);
        }
        ++v8;
      }
      if ( (unsigned int)++v9 >= *(_DWORD *)(v3 + 16) )
        break;
    }
  }
  v11 = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}

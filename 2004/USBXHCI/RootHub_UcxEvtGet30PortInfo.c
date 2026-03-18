/*
 * XREFs of RootHub_UcxEvtGet30PortInfo @ 0x1C0016A20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     RootHub_Read30PortSpeeds @ 0x1C0016C24 (RootHub_Read30PortSpeeds.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_UcxEvtGet30PortInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // edx
  __int64 v6; // r15
  unsigned int v7; // ecx
  unsigned __int16 v8; // si
  unsigned __int16 v9; // di
  __int64 v10; // r9
  __int64 v11; // r8
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // r9d
  int v17; // [rsp+28h] [rbp-70h]
  _OWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0060248);
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
    v16 = 200;
    v17 = **((_DWORD **)&v18[0] + 1);
LABEL_20:
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v5,
      11,
      v16,
      (__int64)&WPP_f97631885c123b34877e2ec176e34bf2_Traceguids,
      v17);
    goto LABEL_21;
  }
  LOWORD(v7) = *(_WORD *)(*((_QWORD *)&v18[0] + 1) + 4LL);
  if ( (_WORD)v7 != *(_WORD *)(v3 + 22) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = 201;
    goto LABEL_19;
  }
  v7 = *(unsigned __int16 *)(*((_QWORD *)&v18[0] + 1) + 6LL);
  if ( v7 < 0xC )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_21;
    v16 = 202;
LABEL_19:
    LOBYTE(v17) = v7;
    goto LABEL_20;
  }
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)(v3 + 16) )
  {
    while ( v8 < *(_WORD *)(v4 + 4) )
    {
      v10 = 104LL * v9;
      if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 13) == 3 )
      {
        **(_WORD **)(v6 + 8LL * v8) = v9 + 1;
        v13 = 116;
        if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 17) != 1 )
          v13 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 4LL) = v13;
        v14 = 116;
        if ( *(_BYTE *)(v3 + 56) != 1 )
          v14 = 102;
        *(_DWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 8LL) = v14;
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v8) + 2LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 12);
        *(_BYTE *)(*(_QWORD *)(v6 + 8LL * v8) + 3LL) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 14);
        if ( *(_WORD *)(v4 + 6) >= 0x18u )
        {
          v15 = RootHub_Read30PortSpeeds(
                  v3,
                  *(_QWORD *)(*(_QWORD *)(v6 + 8LL * v8) + 16LL),
                  (unsigned int)*(_QWORD *)(v6 + 8LL * v8) + 14,
                  *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v8) + 12LL),
                  *(_QWORD *)(*(_QWORD *)(v3 + 48) + v10 + 56),
                  *(_WORD *)(*(_QWORD *)(v3 + 48) + v10 + 54),
                  *(_BYTE *)(*(_QWORD *)(v3 + 48) + v10 + 12));
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

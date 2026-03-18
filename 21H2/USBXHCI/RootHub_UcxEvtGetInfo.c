/*
 * XREFs of RootHub_UcxEvtGetInfo @ 0x1C0017280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RootHub_UcxEvtGetInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // rcx
  int v5; // edx
  unsigned int v6; // edi
  int v7; // edx
  __int16 v8; // r8
  char v10; // [rsp+28h] [rbp-50h]
  _OWORD v11[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v12; // [rsp+60h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0061248);
  v12 = 0LL;
  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v4 = (_WORD *)*((_QWORD *)&v11[0] + 1);
  v5 = **((_DWORD **)&v11[0] + 1);
  if ( **((_DWORD **)&v11[0] + 1) < 0x10u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v5,
        11,
        192,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        **((_DWORD **)&v11[0] + 1));
    }
    v6 = -1073741811;
  }
  else
  {
    v6 = 0;
    *(_DWORD *)(*((_QWORD *)&v11[0] + 1) + 4LL) = 0;
    v7 = *(unsigned __int16 *)(v3 + 20);
    v4[4] = v7;
    v8 = *(_WORD *)(v3 + 22);
    v4[5] = v8;
    v4[6] = *(_WORD *)(v3 + 24);
    v4[7] = *(_WORD *)(v3 + 26);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v7;
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v7,
        11,
        193,
        (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
        v10,
        v8);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v6);
}

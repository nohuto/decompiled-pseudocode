/*
 * XREFs of HUBDSM_SettingConfigurationInformationInClientRequest @ 0x1C001D670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_SettingConfigurationInformationInClientRequest(__int64 a1)
{
  __int64 *v1; // r13
  __int64 v2; // rdx
  unsigned __int16 *v3; // rbp
  _QWORD *v4; // r15
  _QWORD *i; // rax
  __int64 v6; // r14
  int v7; // edi
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  __int64 v11; // [rsp+30h] [rbp-78h]
  __int64 v12; // [rsp+38h] [rbp-70h]
  _QWORD *v13; // [rsp+40h] [rbp-68h]
  _OWORD v14[2]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v15; // [rsp+68h] [rbp-40h]

  v1 = *(__int64 **)(a1 + 960);
  memset(v14, 0, sizeof(v14));
  v2 = v1[57];
  v11 = *v1;
  v15 = 0LL;
  LOWORD(v14[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    v2,
    v14);
  v3 = (unsigned __int16 *)(*((_QWORD *)&v14[0] + 1) + 40LL);
  v4 = (_QWORD *)(v1[6] + 16);
  v13 = v4;
  for ( i = (_QWORD *)*v4; ; i = (_QWORD *)v9[1] )
  {
    v9 = i - 1;
    if ( v4 == i )
      break;
    v6 = 0LL;
    if ( *((_DWORD *)v9 + 6) )
    {
      do
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD))(v11 + 472))(v9[9 * v6 + 5]);
        if ( !v12 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *(_QWORD *)(v1[1] + 1432),
            2u,
            5u,
            0x2Cu,
            (__int64)&WPP_fa1f6120722133e233e88879adbd68f0_Traceguids);
        v7 = (*(__int64 (__fastcall **)(_QWORD))(v11 + 480))(v9[9 * v6 + 5]);
        v8 = 3 * v6;
        v9[9 * v6 + 7] = v12;
        *(_QWORD *)&v3[12 * v6 + 16] = v12;
        (*(void (__fastcall **)(_QWORD))(v11 + 464))(v9[9 * v6 + 5]);
        v6 = (unsigned int)(v6 + 1);
        *(_DWORD *)&v3[4 * v8 + 20] = v7;
      }
      while ( (unsigned int)v6 < *((_DWORD *)v9 + 6) );
      v4 = v13;
    }
    v3 = (unsigned __int16 *)((char *)v3 + *v3);
  }
  return 4077LL;
}

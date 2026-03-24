/*
 * XREFs of HUBHTX_CompleteGetPortStatusWithPortStatusResult @ 0x1C0005D14
 * Callers:
 *     HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer @ 0x1C0007FE0 (HUBHSM_CompletingPDORequestForGetPortStatusFromConfigWithIntTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_CompleteGetPortStatusWithPortStatusResult(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-10h]

  v11 = 0LL;
  v1 = a1[316];
  v14 = 0LL;
  v3 = a1[323];
  v12 = 0LL;
  v13 = 0LL;
  v4 = *(_DWORD *)(v3 + 184);
  v5 = *(_DWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(
                                 WdfDriverGlobals,
                                 v1)
                             + 184)
                 + 24LL);
  if ( v5 == 2228240 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 *))(WdfFunctions_01015 + 2144))(
           WdfDriverGlobals,
           a1[316],
           &v11);
    if ( v6 >= 0 )
    {
      *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v11,
                   0LL)
               + 4) = v4;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
        WdfDriverGlobals,
        a1[316],
        8LL);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_d(a1[315], 2u, 3u, 0x71u, (__int64)&WPP_48f9d914ad953e47f49793ea568006bd_Traceguids, v6);
    }
  }
  else if ( v5 == 2228243 )
  {
    v7 = a1[316];
    LOWORD(v12) = 40;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2128))(
      WdfDriverGlobals,
      v7,
      &v12);
    v8 = (_DWORD *)*((_QWORD *)&v12 + 1);
    v6 = 0;
    v9 = v13;
    if ( (v4 & 1) != 0 )
      **((_DWORD **)&v12 + 1) |= 2u;
    else
      v6 = -1073741810;
    if ( (v4 & 2) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 32) & 0x2000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)(v9 + 32), 0xFFFFDFFF);
      else
        *v8 |= 1u;
    }
    if ( (v4 & 0x10000) != 0 )
      v6 = -1073741810;
  }
  else
  {
    v6 = -1073741630;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a1[316],
           (unsigned int)v6);
}

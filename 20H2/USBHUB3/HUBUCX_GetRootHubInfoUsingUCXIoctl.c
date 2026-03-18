/*
 * XREFs of HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0024CE4
 * Callers:
 *     HUBHSM_GettingRootHubInfo @ 0x1C00094F0 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

_UNKNOWN **__fastcall HUBUCX_GetRootHubInfoUsingUCXIoctl(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // ebx
  _UNKNOWN **result; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rdx
  int v9; // [rsp+30h] [rbp-41h]
  __int64 v10; // [rsp+38h] [rbp-39h] BYREF
  __int128 v11; // [rsp+40h] [rbp-31h] BYREF
  __int64 v12; // [rsp+50h] [rbp-21h]
  __int64 v13; // [rsp+58h] [rbp-19h]
  __int128 v14; // [rsp+60h] [rbp-11h]
  __int64 v15; // [rsp+70h] [rbp-1h]
  _QWORD v16[9]; // [rsp+78h] [rbp+7h] BYREF

  v10 = 0LL;
  memset(v16, 0, sizeof(v16));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  v12 = 0LL;
  v15 = 0LL;
  v14 = v3;
  v11 = 0LL;
  LODWORD(v11) = 56;
  v13 = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v11,
         v2,
         &v10);
  if ( v5 < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v7 = 41;
    goto LABEL_7;
  }
  v8 = v10;
  *(_DWORD *)(a1 + 104) = 24;
  v16[1] = a1 + 104;
  LOBYTE(v16[0]) = 15;
  LODWORD(v16[3]) = 4788235;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v8,
    v16);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v10,
    HUBUCX_GetRootHubInfoUsingUCXIoctlComplete,
    a1);
  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015
                                                                                                 + 2024))(
                          WdfDriverGlobals,
                          v10,
                          v4,
                          0LL);
  if ( !(_BYTE)result )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v10);
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 42;
LABEL_7:
      v9 = v5;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1 + 2520),
                              2u,
                              3u,
                              v7,
                              (__int64)&WPP_0fdba02233013f1195f31cf9301a7589_Traceguids,
                              v9);
    }
  }
LABEL_8:
  if ( v5 < 0 )
  {
    if ( v10 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1264, 2038);
  }
  return result;
}

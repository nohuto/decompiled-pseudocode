/*
 * XREFs of HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0007A2C
 * Callers:
 *     HUBHSM_GettingAdditionalInfoFromParent @ 0x1C0009520 (HUBHSM_GettingAdditionalInfoFromParent.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

_UNKNOWN **__fastcall HUBPARENT_GetInfoFromParentUsingParentIoctl(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // ebx
  _UNKNOWN **result; // rax
  unsigned __int16 v7; // r9
  int v8; // [rsp+30h] [rbp-41h]
  __int64 v9; // [rsp+38h] [rbp-39h] BYREF
  __int128 v10; // [rsp+40h] [rbp-31h] BYREF
  __int64 v11; // [rsp+50h] [rbp-21h]
  __int64 v12; // [rsp+58h] [rbp-19h]
  __int128 v13; // [rsp+60h] [rbp-11h]
  __int64 v14; // [rsp+70h] [rbp-1h]
  _QWORD v15[9]; // [rsp+78h] [rbp+7h] BYREF

  v9 = 0LL;
  memset(v15, 0, sizeof(v15));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  v11 = 0LL;
  v14 = 0LL;
  v13 = v3;
  v10 = 0LL;
  LODWORD(v10) = 56;
  v12 = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v10,
         v2,
         &v9);
  if ( v5 < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_8;
    v7 = 22;
    goto LABEL_7;
  }
  v15[1] = a1 + 2448;
  LOBYTE(v15[0]) = 15;
  LODWORD(v15[3]) = 4788291;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v9,
    v15);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v9,
    HUBPARENT_GetInfoFromParentUsingParentIoctlComplete,
    0LL);
  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015
                                                                                                 + 2024))(
                          WdfDriverGlobals,
                          v9,
                          v4,
                          0LL);
  if ( !(_BYTE)result )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v9);
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 23;
LABEL_7:
      v8 = v5;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1 + 2520),
                              2u,
                              3u,
                              v7,
                              (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                              v8);
    }
  }
LABEL_8:
  if ( v5 < 0 )
  {
    if ( v9 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1264, 2038LL);
  }
  return result;
}

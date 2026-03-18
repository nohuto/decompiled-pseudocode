/*
 * XREFs of HUBPARENT_ResetHub @ 0x1C00075F0
 * Callers:
 *     HUBHSM_ResettingHubOnResume @ 0x1C0008720 (HUBHSM_ResettingHubOnResume.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0006A7C (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x1C000AFFC (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

_UNKNOWN **__fastcall HUBPARENT_ResetHub(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // edi
  _UNKNOWN **result; // rax
  unsigned __int16 v8; // r9
  __int64 v9; // rdx
  int v10; // [rsp+30h] [rbp-41h]
  __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  __int128 v12; // [rsp+40h] [rbp-31h] BYREF
  __int64 v13; // [rsp+50h] [rbp-21h]
  __int64 v14; // [rsp+58h] [rbp-19h]
  __int128 v15; // [rsp+60h] [rbp-11h]
  __int64 v16; // [rsp+70h] [rbp-1h]
  _QWORD v17[9]; // [rsp+78h] [rbp+7h] BYREF

  v11 = 0LL;
  memset(v17, 0, sizeof(v17));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 16);
  v13 = 0LL;
  v4 = v2;
  v12 = 0LL;
  v16 = 0LL;
  LODWORD(v12) = 56;
  v14 = 0x100000001LL;
  v15 = (unsigned __int64)v3;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x20) != 0 )
    McTemplateK0p_EtwWriteTransfer(v3, &USBHUB3_ETW_EVENT_HUB_RESET_REQUEST_START, 0LL, *(_QWORD *)(a1 + 248));
  v5 = *(_QWORD *)(a1 + 2656);
  if ( v5 )
    *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 v5,
                 off_1C0066148)
             + 24) = 1;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         &v12,
         v4,
         &v11);
  if ( v6 < 0 )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v8 = 19;
    goto LABEL_11;
  }
  v9 = v11;
  v17[1] = a1 + 2408;
  *(_DWORD *)(a1 + 2408) = 0;
  LOBYTE(v17[0]) = 15;
  LODWORD(v17[3]) = 2232243;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v9,
    v17);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64), _QWORD))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    v11,
    HUBPARENT_ResetHubComplete,
    0LL);
  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015
                                                                                                 + 2024))(
                          WdfDriverGlobals,
                          v11,
                          v4,
                          0LL);
  if ( !(_BYTE)result )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v11);
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 20;
LABEL_11:
      v10 = v6;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              *(_QWORD *)(a1 + 2520),
                              2u,
                              3u,
                              v8,
                              (__int64)&WPP_7215ce29f44d3be25ae6d82bbfc5240b_Traceguids,
                              v10);
    }
  }
LABEL_12:
  if ( v6 < 0 )
  {
    if ( v11 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    return (_UNKNOWN **)HUBSM_AddEvent(a1 + 1264, 2070LL);
  }
  return result;
}

/*
 * XREFs of ControllerPreInterruptsDisableAcpiCallout @ 0x1C000A6F4
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000A530 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0014518 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerPreInterruptsDisableAcpiCallout(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  int v7; // r9d
  _DWORD v8[2]; // [rsp+50h] [rbp-19h] BYREF
  int v9; // [rsp+58h] [rbp-11h] BYREF
  int v10; // [rsp+5Ch] [rbp-Dh]
  int *v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  int v14; // [rsp+70h] [rbp+7h] BYREF
  int v15; // [rsp+74h] [rbp+Bh]
  _DWORD *v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+84h] [rbp+1Bh]
  __int64 v19; // [rsp+88h] [rbp+1Fh] BYREF
  int v20; // [rsp+90h] [rbp+27h] BYREF
  __int128 v21; // [rsp+94h] [rbp+2Bh]

  v15 = 0;
  v18 = 0;
  v10 = 0;
  v13 = 0;
  v19 = 0LL;
  v21 = 0LL;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C00613D8);
  v4 = *(_QWORD *)(result + 8);
  if ( (*(_QWORD *)(v4 + 336) & 0x40000000000000LL) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_i(*(_QWORD *)(v4 + 72), v3, 4, 79, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, a1);
    }
    v15 = 0;
    v18 = 0;
    v10 = 0;
    v13 = 0;
    v16 = v8;
    v11 = &v20;
    v14 = 1;
    v9 = 1;
    v8[0] = 1114203457;
    v8[1] = 1229804112;
    v17 = 8;
    v21 = 0LL;
    v20 = 1114596673;
    v12 = 20;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, int *, int *, _QWORD, __int64 *))(WdfFunctions_01023 + 1488))(
               WdfDriverGlobals,
               v5,
               0LL,
               3325956LL,
               &v14,
               &v9,
               0LL,
               &v19);
    if ( (int)result >= 0 )
    {
      if ( v20 == 1114596673 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v7 = 82;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return result;
        v7 = 81;
      }
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_i(
               *(_QWORD *)(v4 + 72),
               v6,
               4,
               v7,
               (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
               a1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v4 + 72),
               v6,
               4,
               80,
               (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
               a1,
               result);
    }
  }
  return result;
}

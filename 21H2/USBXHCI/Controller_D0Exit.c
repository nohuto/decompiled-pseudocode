/*
 * XREFs of Controller_D0Exit @ 0x1C000DC0C
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000DD50 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     Register_ControllerStop @ 0x1C000D898 (Register_ControllerStop.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C002F454 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Controller_D0Exit(_QWORD *a1, char a2, __int64 a3)
{
  int v5; // edx
  __int64 result; // rax
  int v7; // edx

  LOBYTE(a3) = 1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    a1[45],
    a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_qL(a1[9], v5, 4, 122, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, (char)a1, a2);
  }
  result = Register_ControllerStop(a1[11]);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    return WPP_RECORDER_SF_d(a1[9], v7, 4, 123, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, result);
  }
  return result;
}

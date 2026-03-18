/*
 * XREFs of Controller_EvtDeviceFileClose @ 0x1C00101E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0014644 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0032F20 (Controller_StopTimeTrackingForHandle.c)
 */

__int64 __fastcall Controller_EvtDeviceFileClose(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  int v4; // edx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C00613B0);
  if ( *(_BYTE *)(result + 48) )
  {
    v3 = *(_QWORD *)(result + 40);
    result = Controller_StopTimeTrackingForHandle(v3, a1, 0LL);
    if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v3 + 72),
               v4,
               4,
               280,
               (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
               a1,
               result);
    }
  }
  return result;
}

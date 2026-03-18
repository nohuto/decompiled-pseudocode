/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C00350A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00613D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v2, 4, 92, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, v1);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C00627D0)(UcxDriverGlobals, **(_QWORD **)(v3 + 152));
}

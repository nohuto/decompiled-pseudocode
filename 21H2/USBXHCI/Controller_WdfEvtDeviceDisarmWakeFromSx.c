/*
 * XREFs of Controller_WdfEvtDeviceDisarmWakeFromSx @ 0x1C0035010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall Controller_WdfEvtDeviceDisarmWakeFromSx(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx
  _UNKNOWN **result; // rax

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00613D8)
                 + 8);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    result = (_UNKNOWN **)WPP_RECORDER_SF_i(
                            *(_QWORD *)(v3 + 72),
                            v2,
                            4,
                            91,
                            (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids,
                            v1);
  }
  *(_BYTE *)(v3 + 468) = 0;
  return result;
}

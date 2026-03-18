/*
 * XREFs of Controller_IdleTimeoutUpdateWorker @ 0x1C0032AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Controller_UpdateIdleTimeout @ 0x1C0076BE0 (Controller_UpdateIdleTimeout.c)
 */

_UNKNOWN **__fastcall Controller_IdleTimeoutUpdateWorker(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // edx
  _UNKNOWN **result; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0061428);
  Controller_UpdateIdleTimeout(v2, 1LL);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    return (_UNKNOWN **)WPP_RECORDER_SF_d(
                          *(_QWORD *)(v2 + 72),
                          v3,
                          4,
                          29,
                          (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids,
                          1);
  }
  return result;
}

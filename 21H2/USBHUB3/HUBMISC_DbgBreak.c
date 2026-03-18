/*
 * XREFs of HUBMISC_DbgBreak @ 0x1C00302F4
 * Callers:
 *     HUBSM_LogUnhandledEvent @ 0x1C000A29C (HUBSM_LogUnhandledEvent.c)
 *     HUBSM_FindAndSetTargetState @ 0x1C000A49C (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_RunStateMachine @ 0x1C000B90C (HUBSM_RunStateMachine.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000FCB8 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C001A650 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 *     HUBIDLE_AddEvent @ 0x1C003C168 (HUBIDLE_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C002BA30 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBMISC_DbgBreak(const char *a1)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  char result; // al

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00671E8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(*(_QWORD *)(v2 + 64), v3, v4, v5);
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    result = DbgPrint("Breaking due to %s. For more details run: !rcdrlogdump usbhub3\n", a1);
    __debugbreak();
  }
  return result;
}

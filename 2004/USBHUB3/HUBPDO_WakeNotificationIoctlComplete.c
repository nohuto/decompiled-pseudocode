/*
 * XREFs of HUBPDO_WakeNotificationIoctlComplete @ 0x1C0019B40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_CompleteWaitWake @ 0x1C0019A74 (HUBPDO_CompleteWaitWake.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall HUBPDO_WakeNotificationIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  struct _KEVENT *v7; // rax
  _UNKNOWN **result; // rax
  int v9; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  HUBPDO_CompleteWaitWake(a4);
  v7 = (struct _KEVENT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                           WdfDriverGlobals,
                           a1,
                           off_1C00662B8);
  KeSetEvent(v7 + 1, 0, 0);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v4;
    return (_UNKNOWN **)WPP_RECORDER_SF_d(
                          *(_QWORD *)(*(_QWORD *)(a4 + 8) + 1432LL),
                          4u,
                          5u,
                          0x81u,
                          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
                          v9);
  }
  return result;
}

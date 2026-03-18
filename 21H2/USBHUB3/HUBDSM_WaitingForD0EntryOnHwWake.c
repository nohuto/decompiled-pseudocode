/*
 * XREFs of HUBDSM_WaitingForD0EntryOnHwWake @ 0x1C0021C00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0013D04 (WPP_RECORDER_SF_q.c)
 *     HUBPDO_CompleteWaitWake @ 0x1C0019FC4 (HUBPDO_CompleteWaitWake.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_WaitingForD0EntryOnHwWake(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_CompleteWaitWake(v1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(v1 + 16));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
  PoSetSystemWakeDevice(v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00671E8);
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v5 + 64),
      4u,
      2u,
      0x7Fu,
      (__int64)&WPP_22940240c7fa3e5c402eafd6483cb7b0_Traceguids,
      v4);
  }
  return 1000LL;
}

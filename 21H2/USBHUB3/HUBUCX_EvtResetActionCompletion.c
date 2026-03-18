/*
 * XREFs of HUBUCX_EvtResetActionCompletion @ 0x1C0023430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0002DA0 (WPP_RECORDER_SF_qd.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_EvtResetActionCompletion(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v6; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    v6 = a2;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      2u,
      0xAu,
      (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
      v4,
      v6);
  }
  return HUBSM_AddEvent(a1 + 504, 4028);
}

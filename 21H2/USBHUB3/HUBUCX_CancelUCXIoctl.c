/*
 * XREFs of HUBUCX_CancelUCXIoctl @ 0x1C0023F88
 * Callers:
 *     HUBDSM_CancellingAcquiringAddress0OnDetachInEnum @ 0x1C001E290 (HUBDSM_CancellingAcquiringAddress0OnDetachInEnum.c)
 *     HUBDSM_WaitingForUCXIoctlOnStopSuspend @ 0x1C001E610 (HUBDSM_WaitingForUCXIoctlOnStopSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall HUBUCX_CancelUCXIoctl(__int64 a1)
{
  _UNKNOWN **result; // rax

  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a1 + 416));
  if ( !(_BYTE)result )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                            2u,
                            5u,
                            0x14u,
                            (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids);
  }
  return result;
}

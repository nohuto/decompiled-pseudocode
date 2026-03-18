/*
 * XREFs of HUBDTX_CancelControlTransfer @ 0x1C0027BA0
 * Callers:
 *     HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors @ 0x1C001E6F0 (HUBDSM_CancellingControlTransferOnHubStopInRemainingDescriptors.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall HUBDTX_CancelControlTransfer(__int64 a1)
{
  _UNKNOWN **result; // rax

  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a1 + 248));
  if ( !(_BYTE)result )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
                            3u,
                            5u,
                            0x24u,
                            (__int64)&WPP_dca96bb6076339a37c8cec63799f607f_Traceguids);
  }
  return result;
}

/*
 * XREFs of PinReset @ 0x1C00246C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

_UNKNOWN **__fastcall PinReset(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax

  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            a2,
                            8u,
                            0x12u,
                            (__int64)&WPP_ca06769e79693a67799b8e6dd31dfb44_Traceguids);
  }
  return result;
}

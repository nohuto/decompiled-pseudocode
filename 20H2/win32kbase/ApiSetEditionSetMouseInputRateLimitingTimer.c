/*
 * XREFs of ApiSetEditionSetMouseInputRateLimitingTimer @ 0x1C01C8280
 * Callers:
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0136730 (NtUserSetMouseInputRateLimitingTimer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionSetMouseInputRateLimitingTimer(unsigned int a1)
{
  int v2; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      332,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C0251848 )
    v2 = qword_1C0251848();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0251850 )
      v2 = qword_1C0251850(a1);
    else
      v2 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      333,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return (unsigned int)v2;
}

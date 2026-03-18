/*
 * XREFs of ApiSetEditionSetMouseInputRateLimitingTimer @ 0x1C01CA600
 * Callers:
 *     NtUserSetMouseInputRateLimitingTimer @ 0x1C0138A80 (NtUserSetMouseInputRateLimitingTimer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0253848 )
    v2 = qword_1C0253848();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C0253850 )
      v2 = qword_1C0253850(a1);
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

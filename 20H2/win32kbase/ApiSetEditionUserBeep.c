/*
 * XREFs of ApiSetEditionUserBeep @ 0x1C01C87B4
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01AB3A0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionUserBeep()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      406,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C0251468 )
    v1 = qword_1C0251468();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0251470 )
    v0 = qword_1C0251470(440LL, 125LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      407,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}

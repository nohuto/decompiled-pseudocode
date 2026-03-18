/*
 * XREFs of ApiSetEditionImmActivateThreadsLayout @ 0x1C01C83D4
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C0018B70 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionImmActivateThreadsLayout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // eax

  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      384,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C0253348 )
    v6 = qword_1C0253348();
  else
    v6 = -1073741637;
  if ( v6 >= 0 && qword_1C0253350 )
    v4 = qword_1C0253350(a1, 0LL, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      385,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v4;
}

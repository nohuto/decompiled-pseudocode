/*
 * XREFs of ApiSetEditionRawInputRequestedForKeyboard @ 0x1C01CFEEC
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C01B3480 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionRawInputRequestedForKeyboard(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      404,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C0259418 )
    v3 = qword_1C0259418();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0259420 )
    v2 = qword_1C0259420(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      405,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}

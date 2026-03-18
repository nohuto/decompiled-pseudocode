/*
 * XREFs of ApiSetEditionImmActivateThreadsLayout @ 0x1C01CE354
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C00587F0 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0259308 )
    v6 = qword_1C0259308();
  else
    v6 = -1073741637;
  if ( v6 >= 0 && qword_1C0259310 )
    v4 = qword_1C0259310(a1, 0LL, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      385,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v4;
}

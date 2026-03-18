/*
 * XREFs of ApiSetEditionGetProcessWindowStation @ 0x1C0077098
 * Callers:
 *     NtUserActivateKeyboardLayout @ 0x1C0018800 (NtUserActivateKeyboardLayout.c)
 *     _GetKeyboardLayoutList @ 0x1C003E354 (_GetKeyboardLayoutList.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     _GetKeyboardLayout @ 0x1C0076FF0 (_GetKeyboardLayout.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0136F40 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C013AD50 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionGetProcessWindowStation()
{
  __int64 v0; // rbx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      494,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 0LL;
  if ( qword_1C0251DD8 )
    v1 = qword_1C0251DD8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0251DE0 )
    v0 = qword_1C0251DE0(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      495,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}

/*
 * XREFs of ApiSetEditionGetProcessWindowStation @ 0x1C006F338
 * Callers:
 *     _GetKeyboardLayoutList @ 0x1C0030024 (_GetKeyboardLayoutList.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0058480 (NtUserActivateKeyboardLayout.c)
 *     _GetKeyboardLayout @ 0x1C006F290 (_GetKeyboardLayout.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C013CBE0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C01409F0 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0257D98 )
    v1 = qword_1C0257D98();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0257DA0 )
    v0 = qword_1C0257DA0(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      495,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}

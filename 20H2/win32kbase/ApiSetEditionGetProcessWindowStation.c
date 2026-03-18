/*
 * XREFs of ApiSetEditionGetProcessWindowStation @ 0x1C004F6D8
 * Callers:
 *     _GetKeyboardLayout @ 0x1C004F630 (_GetKeyboardLayout.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0089000 (NtUserActivateKeyboardLayout.c)
 *     _GetKeyboardLayoutList @ 0x1C00A15F4 (_GetKeyboardLayoutList.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0134BF0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0138A00 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C024FDD8 )
    v1 = qword_1C024FDD8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C024FDE0 )
    v0 = qword_1C024FDE0(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      495,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}

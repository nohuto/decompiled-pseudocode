/*
 * XREFs of ApiSetEditionCloseDesktopEntryPoint @ 0x1C00AEAB8
 * Callers:
 *     NtUserCloseDesktop @ 0x1C00AEAA0 (NtUserCloseDesktop.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCloseDesktopEntryPoint(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      482,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0;
  if ( qword_1C024FD18 )
    v3 = qword_1C024FD18();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C024FD20 )
    v2 = qword_1C024FD20(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      483,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}

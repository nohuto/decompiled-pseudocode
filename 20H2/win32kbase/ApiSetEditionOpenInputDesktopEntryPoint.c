/*
 * XREFs of ApiSetEditionOpenInputDesktopEntryPoint @ 0x1C00B3308
 * Callers:
 *     NtUserOpenInputDesktop @ 0x1C00B32F0 (NtUserOpenInputDesktop.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionOpenInputDesktopEntryPoint(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  int v7; // eax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      480,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v6 = 0LL;
  if ( qword_1C024FD08 )
    v7 = qword_1C024FD08();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C024FD10 )
    v6 = qword_1C024FD10(a1, v4, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      481,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v6;
}

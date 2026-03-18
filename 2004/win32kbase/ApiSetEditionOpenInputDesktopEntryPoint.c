/*
 * XREFs of ApiSetEditionOpenInputDesktopEntryPoint @ 0x1C0053318
 * Callers:
 *     NtUserOpenInputDesktop @ 0x1C0053300 (NtUserOpenInputDesktop.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0251D08 )
    v7 = qword_1C0251D08();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0251D10 )
    v6 = qword_1C0251D10(a1, v4, a3);
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

/*
 * XREFs of ApiSetEditionGetThreadDesktopEntryPoint @ 0x1C00321E8
 * Callers:
 *     NtUserGetThreadDesktop @ 0x1C00321D0 (NtUserGetThreadDesktop.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionGetThreadDesktopEntryPoint(unsigned int a1)
{
  __int64 v2; // rbx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      484,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0LL;
  if ( qword_1C0251D28 )
    v3 = qword_1C0251D28();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0251D30 )
    v2 = qword_1C0251D30(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      485,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}

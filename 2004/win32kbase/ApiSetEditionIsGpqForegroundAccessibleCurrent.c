/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C00AD274
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C00AC550 (NtUserGetAsyncKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C00AC8F0 (NtUserGetKeyboardState.c)
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  unsigned int v2; // ebx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      182,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0;
  if ( qword_1C02531B8 )
    v3 = qword_1C02531B8();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C02531C0 )
    v2 = qword_1C02531C0(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      183,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}

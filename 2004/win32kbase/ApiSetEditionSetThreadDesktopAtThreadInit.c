/*
 * XREFs of ApiSetEditionSetThreadDesktopAtThreadInit @ 0x1C01CA7C8
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 * Callees:
 *     IsEditionSetThreadDesktopAtThreadInitSupported @ 0x1C0056338 (IsEditionSetThreadDesktopAtThreadInitSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*ApiSetEditionSetThreadDesktopAtThreadInit())(void)
{
  __int64 (*result)(void); // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      476,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  result = (__int64 (*)(void))IsEditionSetThreadDesktopAtThreadInitSupported();
  if ( (int)result >= 0 )
  {
    result = qword_1C0251E70;
    if ( qword_1C0251E70 )
      result = (__int64 (*)(void))qword_1C0251E70();
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (__int64 (*)(void))WPP_RECORDER_SF_(
                                  WPP_GLOBAL_Control->DeviceExtension,
                                  5,
                                  10,
                                  477,
                                  (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return result;
}

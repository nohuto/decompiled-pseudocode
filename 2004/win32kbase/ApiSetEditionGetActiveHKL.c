/*
 * XREFs of ApiSetEditionGetActiveHKL @ 0x1C004286C
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0069990 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01AD1D4 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 *     VKFromVSC @ 0x1C01AE550 (VKFromVSC.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionGetActiveHKL()
{
  __int64 v0; // rbx
  int v1; // eax

  v0 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      396,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C02533A8 )
    v1 = qword_1C02533A8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C02533B0 )
    v0 = qword_1C02533B0();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      397,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}

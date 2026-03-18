/*
 * XREFs of ApiSetEditionMessageBeep @ 0x1C01CEFA4
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0059060 (xxxInternalToUnicode.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionMessageBeep()
{
  unsigned int v0; // ebx
  int v1; // eax

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      408,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C0259438 )
    v1 = qword_1C0259438();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0259440 )
    v0 = qword_1C0259440(0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      409,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}

/*
 * XREFs of ApiSetSanitizeRIMCOMPLETEFRAME @ 0x1C01CCADC
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0197BB4 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetSanitizeRIMCOMPLETEFRAME(__int64 a1)
{
  int v2; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      208,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( qword_1C02534D8 )
    v2 = qword_1C02534D8();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02534E0 )
      a1 = qword_1C02534E0(a1);
    else
      a1 = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      209,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return a1;
}

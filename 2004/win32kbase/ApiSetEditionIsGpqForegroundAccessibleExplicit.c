/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleExplicit @ 0x1C006B04C
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0069990 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0196B88 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C01AD6C0 (ProcessKeyboardInjectedInputViaRim.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleExplicit(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  __int64 v6; // rbp
  unsigned int v8; // edi
  int v9; // eax

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      184,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v8 = 0;
  if ( qword_1C02531C8 )
    v9 = qword_1C02531C8();
  else
    v9 = -1073741637;
  if ( v9 >= 0 && qword_1C02531D0 )
    v8 = qword_1C02531D0(a1, v6, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      185,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v8;
}

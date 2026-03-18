/*
 * XREFs of ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C01C4AB0
 * Callers:
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C01858A0 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionAllocAndLinkThreadPointerData(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      256,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v2 = 0LL;
  if ( qword_1C0251658 )
    v3 = qword_1C0251658();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0251660 )
    v2 = qword_1C0251660(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      257,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v2;
}

/*
 * XREFs of ApiSetEditionHandleAltTabCancel @ 0x1C002D488
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C002CD00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     IsEditionHandleAltTabCancelSupported @ 0x1C002D570 (IsEditionHandleAltTabCancelSupported.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTabCancel(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        int a6,
        int a7)
{
  unsigned int v9; // r14d
  unsigned int v11; // edi
  int v12; // edx
  int v14; // [rsp+20h] [rbp-38h]

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      418,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v11 = 0;
  if ( (int)IsEditionHandleAltTabCancelSupported() >= 0 && qword_1C0251430 )
  {
    LOBYTE(v14) = a5;
    v11 = qword_1C0251430(a1, v9, a3, a4, v14, a6, a7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      10,
      419,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v11;
}

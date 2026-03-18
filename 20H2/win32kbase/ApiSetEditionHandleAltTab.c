/*
 * XREFs of ApiSetEditionHandleAltTab @ 0x1C00B3CE4
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C002CD00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleAltTab(
        char a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int16 a8)
{
  unsigned __int16 v10; // si
  __int64 result; // rax
  __int64 v13; // rcx

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      420,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0251438 )
    result = qword_1C0251438();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0251440;
    if ( qword_1C0251440 )
    {
      v13 = a5;
      LOBYTE(v13) = a1;
      result = qword_1C0251440(v13, v10, a3, a4, a5, a6, a7, a8);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               a2,
               10,
               421,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

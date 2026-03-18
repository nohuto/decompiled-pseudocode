/*
 * XREFs of ApiSetEditionHandleSonarKeyEvent @ 0x1C00436B4
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionHandleSonarKeyEvent(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 result; // rax

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      402,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C02533D8 )
    result = qword_1C02533D8();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C02533E0;
    if ( qword_1C02533E0 )
    {
      LOBYTE(a2) = v2;
      result = qword_1C02533E0(a1, a2);
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
               403,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

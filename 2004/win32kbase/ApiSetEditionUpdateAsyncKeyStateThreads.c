/*
 * XREFs of ApiSetEditionUpdateAsyncKeyStateThreads @ 0x1C0069F6C
 * Callers:
 *     UpdateAsyncKeyState @ 0x1C0069E20 (UpdateAsyncKeyState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionUpdateAsyncKeyStateThreads(__int64 a1, __int64 a2)
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
      424,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0253488 )
    result = qword_1C0253488();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0253490;
    if ( qword_1C0253490 )
    {
      LOBYTE(a2) = v2;
      result = qword_1C0253490(a1, a2);
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
               425,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

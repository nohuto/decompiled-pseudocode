/*
 * XREFs of ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C01C82E0
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00198C0 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned int v6; // edi
  __int64 result; // rax

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      376,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( qword_1C0253308 )
    result = qword_1C0253308();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = (__int64)qword_1C0253310;
    if ( qword_1C0253310 )
      result = qword_1C0253310(a1, v6, 0LL, a4, a5);
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
               377,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

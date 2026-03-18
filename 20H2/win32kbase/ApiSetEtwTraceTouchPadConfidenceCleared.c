/*
 * XREFs of ApiSetEtwTraceTouchPadConfidenceCleared @ 0x1C01C8E20
 * Callers:
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C0178274 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     EtwTraceTouchPadConfidenceCleared @ 0x1C0126980 (EtwTraceTouchPadConfidenceCleared.c)
 */

__int64 __fastcall ApiSetEtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  int v4; // edi
  __int64 result; // rax
  int v7; // edx

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      44,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  result = EtwTraceTouchPadConfidenceCleared(a1, v4, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v7,
               10,
               45,
               (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
    }
  }
  return result;
}

/*
 * XREFs of WPP_SF_gggg @ 0x180104840
 * Callers:
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x180101980 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gggg(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, 52LL, &v5);
}

/*
 * XREFs of GetWindowNCMetrics @ 0x1C0033394
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     GetScaledLogFontForDpi @ 0x1C0034A40 (GetScaledLogFontForDpi.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     GetResizeBorderWidthForDpi @ 0x1C00C4DD4 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00C5044 (GetWindowFrameMetricForDpi.c)
 */

__int64 __fastcall GetWindowNCMetrics(_DWORD *a1, __int64 a2)
{
  __int64 DpiForSystem; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 DPIServerInfo; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = (unsigned int)GetDpiForSystem(a1, a2);
  a1[5] = GetDpiDependentMetric(13LL, DpiForSystem);
  a1[55] = GetDpiDependentMetric(26LL, (unsigned int)DpiForSystem);
  a1[1] = GetResizeBorderWidthForDpi(DpiForSystem);
  a1[2] = GetDpiDependentMetric(0LL, (unsigned int)DpiForSystem);
  a1[3] = GetDpiDependentMetric(10LL, (unsigned int)DpiForSystem);
  a1[4] = GetDpiDependentMetric(12LL, (unsigned int)DpiForSystem);
  a1[29] = GetDpiDependentMetric(23LL, (unsigned int)DpiForSystem);
  a1[30] = GetDpiDependentMetric(24LL, (unsigned int)DpiForSystem);
  a1[54] = GetDpiDependentMetric(25LL, (unsigned int)DpiForSystem);
  a1[125] = GetWindowFrameMetricForDpi(v4, (unsigned int)DpiForSystem);
  DPIServerInfo = GetDPIServerInfo(v6, v5, v7, v8);
  DPIMetrics = (HBRUSH *)GetDPIMetrics(v11, v10, v12, v13);
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8));
  GreExtGetObjectW(DPIMetrics[4]);
  GreExtGetObjectW(*DPIMetrics);
  GreExtGetObjectW(DPIMetrics[7]);
  return GetScaledLogFontForDpi(5LL, (unsigned int)DpiForSystem, a1 + 102);
}

/*
 * XREFs of GetWindowNCMetrics @ 0x1C00633F4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetResizeBorderWidthForDpi @ 0x1C0060384 (GetResizeBorderWidthForDpi.c)
 *     GetWindowFrameMetricForDpi @ 0x1C00603AC (GetWindowFrameMetricForDpi.c)
 *     GetDPIServerInfo @ 0x1C0060838 (GetDPIServerInfo.c)
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 *     GetScaledLogFontForDpi @ 0x1C0064EBC (GetScaledLogFontForDpi.c)
 *     GreExtGetObjectW @ 0x1C0065958 (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 */

__int64 __fastcall GetWindowNCMetrics(_DWORD *a1, __int64 a2)
{
  unsigned int DpiForSystem; // esi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 DPIServerInfo; // rbx
  __int64 v15; // rcx
  HBRUSH *DPIMetrics; // rdi

  DpiForSystem = GetDpiForSystem(a1, a2);
  a1[5] = GetDpiDependentMetric(13LL, DpiForSystem, v4);
  a1[55] = GetDpiDependentMetric(26LL, DpiForSystem, v5);
  a1[1] = GetResizeBorderWidthForDpi(DpiForSystem);
  a1[2] = GetDpiDependentMetric(0LL, DpiForSystem, v6);
  a1[3] = GetDpiDependentMetric(10LL, DpiForSystem, v7);
  a1[4] = GetDpiDependentMetric(12LL, DpiForSystem, v8);
  a1[29] = GetDpiDependentMetric(23LL, DpiForSystem, v9);
  a1[30] = GetDpiDependentMetric(24LL, DpiForSystem, v10);
  a1[54] = GetDpiDependentMetric(25LL, DpiForSystem, v11);
  a1[125] = GetWindowFrameMetricForDpi(v12, DpiForSystem);
  DPIServerInfo = GetDPIServerInfo(v13);
  DPIMetrics = (HBRUSH *)GetDPIMetrics(v15);
  GreExtGetObjectW(*(HBRUSH *)(DPIServerInfo + 8));
  GreExtGetObjectW(DPIMetrics[4]);
  GreExtGetObjectW(*DPIMetrics);
  GreExtGetObjectW(DPIMetrics[7]);
  return GetScaledLogFontForDpi(5LL, DpiForSystem);
}

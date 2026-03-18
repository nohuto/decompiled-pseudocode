/*
 * XREFs of _GetWindowNCMetricsForDpi@8 @ 0x9184C
 * Callers:
 *     __SystemParametersInfoForDpi@20 @ 0x91804 (__SystemParametersInfoForDpi@20.c)
 * Callees:
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetScaledLogFontForDpi@12 @ 0x91944 (_GetScaledLogFontForDpi@12.c)
 */

int __fastcall GetWindowNCMetricsForDpi(_DWORD *a1, INT a2)
{
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi

  a1[5] = GetDpiDependentMetric(13, a2);
  a1[55] = GetDpiDependentMetric(26, a2);
  v4 = Get96DpiServerInfo();
  a1[1] = EngMulDiv(*(_DWORD *)(v4 + 4), a2, 96);
  a1[2] = GetDpiDependentMetric(0, a2);
  a1[3] = GetDpiDependentMetric(10, a2);
  a1[4] = GetDpiDependentMetric(12, a2);
  a1[29] = GetDpiDependentMetric(23, a2);
  a1[30] = GetDpiDependentMetric(24, a2);
  a1[54] = GetDpiDependentMetric(25, a2);
  a1[125] = GetDpiDependentMetric(29, a2);
  v5 = GetScaledLogFontForDpi(4, a2, a1 + 6) & 1;
  v6 = GetScaledLogFontForDpi(1, a2, a1 + 31) & v5;
  v7 = GetScaledLogFontForDpi(2, a2, a1 + 56) & v6;
  v8 = GetScaledLogFontForDpi(3, a2, a1 + 79) & v7;
  return v8 & GetScaledLogFontForDpi(5, a2, a1 + 102);
}

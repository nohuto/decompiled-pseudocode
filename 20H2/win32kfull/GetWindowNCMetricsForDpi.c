/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x1C005E988
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C003858C (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetScaledLogFontForDpi @ 0x1C0034A40 (GetScaledLogFontForDpi.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 */

__int64 __fastcall GetWindowNCMetricsForDpi(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  BOOL ScaledLogFontForDpi; // ebx
  BOOL v9; // ebx
  BOOL v10; // ebx
  BOOL v11; // ebx

  a1[5] = GetDpiDependentMetric(13LL, a2);
  a1[55] = GetDpiDependentMetric(26LL, a2);
  v7 = Get96DpiServerInfo(v5, v4, v6);
  a1[1] = EngMulDiv(*(_DWORD *)(v7 + 4), a2, 96);
  a1[2] = GetDpiDependentMetric(0LL, a2);
  a1[3] = GetDpiDependentMetric(10LL, a2);
  a1[4] = GetDpiDependentMetric(12LL, a2);
  a1[29] = GetDpiDependentMetric(23LL, a2);
  a1[30] = GetDpiDependentMetric(24LL, a2);
  a1[54] = GetDpiDependentMetric(25LL, a2);
  a1[125] = GetDpiDependentMetric(29LL, a2);
  ScaledLogFontForDpi = GetScaledLogFontForDpi(4u, a2, (__int64)(a1 + 6));
  v9 = GetScaledLogFontForDpi(1u, a2, (__int64)(a1 + 31)) && ScaledLogFontForDpi;
  v10 = GetScaledLogFontForDpi(2u, a2, (__int64)(a1 + 56)) && v9;
  v11 = GetScaledLogFontForDpi(3u, a2, (__int64)(a1 + 79)) && v10;
  return v11 & (unsigned int)GetScaledLogFontForDpi(5u, a2, (__int64)(a1 + 102));
}

/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x1C0064D78
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C006142C (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetScaledLogFontForDpi @ 0x1C0064EBC (GetScaledLogFontForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 */

__int64 __fastcall GetWindowNCMetricsForDpi(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx

  v4 = a2;
  a1[5] = GetDpiDependentMetric(13LL, a2, a3);
  a1[55] = GetDpiDependentMetric(26LL, v4, v5);
  v6 = Get96DpiServerInfo();
  a1[1] = EngMulDiv(*(_DWORD *)(v6 + 4), v4, 96);
  a1[2] = GetDpiDependentMetric(0LL, v4, v7);
  a1[3] = GetDpiDependentMetric(10LL, v4, v8);
  a1[4] = GetDpiDependentMetric(12LL, v4, v9);
  a1[29] = GetDpiDependentMetric(23LL, v4, v10);
  a1[30] = GetDpiDependentMetric(24LL, v4, v11);
  a1[54] = GetDpiDependentMetric(25LL, v4, v12);
  a1[125] = GetDpiDependentMetric(29LL, v4, v13);
  v14 = GetScaledLogFontForDpi(4LL, v4) & 1;
  v15 = GetScaledLogFontForDpi(1LL, v4) & v14;
  v16 = GetScaledLogFontForDpi(2LL, v4) & v15;
  v17 = GetScaledLogFontForDpi(3LL, v4) & v16;
  return v17 & (unsigned int)GetScaledLogFontForDpi(5LL, v4);
}

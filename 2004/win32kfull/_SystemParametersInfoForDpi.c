/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1C006142C
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x1C00612B0 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     GetWindowNCMetricsForDpi @ 0x1C0064D78 (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C0064EBC (GetScaledLogFontForDpi.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8

  v5 = 0;
  if ( a1 != 41 )
  {
    if ( a1 == 31 )
    {
      v9 = a5;
    }
    else
    {
      if ( a1 != 45 )
        return v5;
      if ( *a3 != 108 )
      {
LABEL_12:
        UserSetLastError(87LL);
        return v5;
      }
      a3[1] = GetDpiDependentMetric(18LL, a5, a3);
      a3[2] = GetDpiDependentMetric(19LL, a5, v10);
      v9 = a5;
      a3[3] = (gdwPUDFlags >> 21) & 1;
    }
    return (unsigned int)GetScaledLogFontForDpi(0LL, v9);
  }
  if ( *a3 != 504 )
    goto LABEL_12;
  return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
}

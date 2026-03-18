/*
 * XREFs of __SystemParametersInfoForDpi@20 @ 0x91804
 * Callers:
 *     _NtUserSystemParametersInfoForDpi@20 @ 0x91716 (_NtUserSystemParametersInfoForDpi@20.c)
 * Callees:
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _GetWindowNCMetricsForDpi@8 @ 0x9184C (_GetWindowNCMetricsForDpi@8.c)
 *     _GetScaledLogFontForDpi@12 @ 0x91944 (_GetScaledLogFontForDpi@12.c)
 */

int __thiscall _SystemParametersInfoForDpi(void *this, _DWORD *a2, int a3, INT a4)
{
  int v4; // esi

  v4 = 0;
  if ( this != (void *)41 )
  {
    if ( this == (void *)31 )
      return GetScaledLogFontForDpi(0, a4, a2);
    if ( this != (void *)45 )
      return v4;
    if ( *a2 == 108 )
    {
      a2[1] = GetDpiDependentMetric(18, a4);
      a2[2] = GetDpiDependentMetric(19, a4);
      a2[3] = (_gdwPUDFlags >> 21) & 1;
      return GetScaledLogFontForDpi(0, a4, a2 + 4);
    }
LABEL_12:
    UserSetLastError((struct _NT_TIB *)0x57);
    return v4;
  }
  if ( *a2 != 504 )
    goto LABEL_12;
  return GetWindowNCMetricsForDpi();
}

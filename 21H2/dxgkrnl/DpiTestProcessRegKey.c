/*
 * XREFs of DpiTestProcessRegKey @ 0x1C02DA220
 * Callers:
 *     <none>
 * Callees:
 *     wcscmp_0 @ 0x1C0028BD8 (wcscmp_0.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 */

__int64 __fastcall DpiTestProcessRegKey(const wchar_t *a1, int a2, const void *a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rax

  if ( wcscmp_0(a1, L"TestBrightnessLevels") || a2 != 3 )
    return 3221225659LL;
  if ( a4 < 2 )
  {
    v9 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v9 + 24) = -1073741637LL;
    WdLogEvent5_WdEvent(v9);
    return 3221225659LL;
  }
  if ( a4 > 0x67 )
  {
    v11 = WdLogNewEntry5_WdEvent(v8, v7);
    *(_QWORD *)(v11 + 24) = -1073741637LL;
    WdLogEvent5_WdEvent(v11);
    a4 = 103;
  }
  memmove(&g_BrightnessLevels, a3, a4);
  g_Brightness = (unsigned __int8)g_BrightnessLevels;
  result = 0LL;
  g_NumBrightnessLevels = a4;
  return result;
}

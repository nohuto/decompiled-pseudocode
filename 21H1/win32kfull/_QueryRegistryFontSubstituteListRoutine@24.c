/*
 * XREFs of _QueryRegistryFontSubstituteListRoutine@24 @ 0x292BF4
 * Callers:
 *     <none>
 * Callees:
 *     vProcessEntry @ 0xE2E66 (vProcessEntry.c)
 *     ??$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YGJPAKPAPAU_FONTSUB@@0PBU0@@Z @ 0xE2F7A (--$AllocAndCopyRegistryEntries@U_FONTSUB@@$0GCHDGGEH@@@YGJPAKPAPAU_FONTSUB@@0PBU0@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall QueryRegistryFontSubstituteListRoutine(WCHAR *a1, int a2, WCHAR *a3, int a4, unsigned int *a5, int a6)
{
  int result; // eax
  wchar_t v7[98]; // [esp+Ch] [ebp-C8h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( vProcessEntry(a3, &v7[65], 0) >= 0
    && vProcessEntry(a1, &v7[32], (char *)v7) >= 0
    && HIBYTE(v7[64]) == HIBYTE(v7[97])
    && HIBYTE(v7[64]) != 2 )
  {
    result = AllocAndCopyRegistryEntries<_FONTSUB,1651729991>(a5, v7);
    if ( result < 0 )
      return result;
    if ( !HIBYTE(v7[64]) )
      ++gcfsCharSetTable;
    if ( !gbShellFontCompatible && !__wcsicmp(&v7[32], L"MS Shell Dlg") && !__wcsicmp(&v7[65], L"Microsoft Sans Serif") )
      gbShellFontCompatible = 1;
  }
  return 0;
}

/*
 * XREFs of _GreNamedEscape@24 @ 0x206C75
 * Callers:
 *     _NtGdiExtEscape@32 @ 0x8B698 (_NtGdiExtEscape@32.c)
 * Callees:
 *     _AtmDrvFontManagementRedirector@28 @ 0x1FCF46 (_AtmDrvFontManagementRedirector@28.c)
 */

int __fastcall GreNamedEscape(wchar_t *Str1, unsigned int a2, unsigned int a3, int *a4, unsigned int a5, void *a6)
{
  if ( __wcsicmp(Str1, L"atmfd.dll") )
    return 0;
  else
    return AtmDrvFontManagementRedirector(a2, a3, a4, a5, a6);
}

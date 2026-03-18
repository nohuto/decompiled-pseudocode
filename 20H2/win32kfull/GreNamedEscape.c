/*
 * XREFs of GreNamedEscape @ 0x1C02A6814
 * Callers:
 *     NtGdiExtEscape @ 0x1C008D480 (NtGdiExtEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     AtmDrvFontManagementRedirector @ 0x1C029DF14 (AtmDrvFontManagementRedirector.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, int a2, int a3, int *a4, int a5, __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[520]; // [rsp+40h] [rbp-248h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( _wcsicmp(Str1, L"atmfd.dll") )
    return 0LL;
  else
    return AtmDrvFontManagementRedirector(v11, v10, a2, a3, a4, a5, a6);
}

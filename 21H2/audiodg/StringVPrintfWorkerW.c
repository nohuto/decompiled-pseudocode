/*
 * XREFs of StringVPrintfWorkerW @ 0x14003C6D0
 * Callers:
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x14003C680 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x14001DF54 (_vsnwprintf.c)
 */

HRESULT __stdcall StringVPrintfWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rdi
  HRESULT v7; // ebx
  int v8; // eax

  v5 = cchDest - 1;
  v7 = 0;
  v8 = vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v8 < 0 || v8 > v5 )
  {
    pszDest[v5] = 0;
    return -2147024774;
  }
  else if ( v8 == v5 )
  {
    pszDest[v5] = 0;
  }
  return v7;
}

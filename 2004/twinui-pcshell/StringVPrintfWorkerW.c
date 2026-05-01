/*
 * XREFs of StringVPrintfWorkerW @ 0x18045F89C
 * Callers:
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x18045F7E8 (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 * Callees:
 *     _vsnwprintf_l @ 0x180467DDC (_vsnwprintf_l.c)
 */

HRESULT __stdcall StringVPrintfWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rbx
  HRESULT v8; // ebp
  int v9; // eax

  v5 = cchDest - 1;
  v8 = 0;
  v9 = vsnwprintf_l(pszDest, cchDest - 1, pszFormat, 0LL, argList);
  if ( v9 < 0 || v9 > v5 )
  {
    v8 = -2147024774;
  }
  else if ( v9 != v5 )
  {
    v5 = v9;
    goto LABEL_7;
  }
  pszDest[v5] = 0;
LABEL_7:
  if ( pcchNewDestLength )
    *pcchNewDestLength = v5;
  return v8;
}

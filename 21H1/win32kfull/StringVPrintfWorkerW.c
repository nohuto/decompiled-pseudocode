/*
 * XREFs of StringVPrintfWorkerW @ 0xD5528
 * Callers:
 *     _StringCchPrintfW @ 0xD54EC (_StringCchPrintfW.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringVPrintfWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  int v5; // edx
  wchar_t *v6; // ecx
  unsigned int v7; // esi
  wchar_t *v8; // edi
  HRESULT v9; // ebx
  int v10; // eax

  v7 = v5 - 1;
  v8 = v6;
  v9 = 0;
  v10 = __vsnwprintf(v6, v5 - 1, (const wchar_t *)cchDest, (va_list)pcchNewDestLength);
  if ( v10 < 0 || v10 > v7 )
  {
    v9 = -2147024774;
    goto LABEL_6;
  }
  if ( v10 == v7 )
LABEL_6:
    v8[v7] = 0;
  return v9;
}

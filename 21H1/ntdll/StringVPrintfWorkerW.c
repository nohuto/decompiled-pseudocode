/*
 * XREFs of StringVPrintfWorkerW @ 0x4B334D98
 * Callers:
 *     _StringCbPrintfW @ 0x4B334D60 (_StringCbPrintfW.c)
 *     _StringCchPrintfW @ 0x4B33B6EC (_StringCchPrintfW.c)
 * Callees:
 *     __vsnwprintf @ 0x4B2F78B0 (__vsnwprintf.c)
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
  _BYTE v12[12]; // [esp-Ch] [ebp-18h]
  va_list v13; // [esp+0h] [ebp-Ch]

  v7 = v5 - 1;
  v8 = v6;
  *(_QWORD *)&v12[4] = cchDest;
  v9 = 0;
  *(_DWORD *)v12 = v5 - 1;
  v10 = _vsnwprintf(v6, *(size_t *)v12, (const wchar_t *)HIDWORD(cchDest), v13);
  if ( v10 < 0 || v10 > v7 )
  {
    v9 = -2147024774;
LABEL_6:
    v8[v7] = 0;
    return v9;
  }
  if ( v10 == v7 )
    goto LABEL_6;
  return v9;
}

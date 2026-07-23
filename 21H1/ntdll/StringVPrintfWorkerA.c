/*
 * XREFs of StringVPrintfWorkerA @ 0x4B32E810
 * Callers:
 *     _StringCbPrintfA @ 0x4B32E7CE (_StringCbPrintfA.c)
 * Callees:
 *     __vsnprintf @ 0x4B2F7800 (__vsnprintf.c)
 */

HRESULT __stdcall StringVPrintfWorkerA(
        STRSAFE_LPSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCSTR pszFormat,
        va_list argList)
{
  int v5; // edx
  char *v6; // ecx
  unsigned int v7; // esi
  char *v8; // edi
  HRESULT v9; // ebx
  int v10; // eax
  _BYTE v12[12]; // [esp-Ch] [ebp-18h]
  va_list v13; // [esp+0h] [ebp-Ch]

  v7 = v5 - 1;
  v8 = v6;
  *(_QWORD *)&v12[4] = cchDest;
  v9 = 0;
  *(_DWORD *)v12 = v5 - 1;
  v10 = _vsnprintf(v6, *(const size_t *)v12, (const char *const)HIDWORD(cchDest), v13);
  if ( v10 < 0 || v10 > v7 )
  {
    v8[v7] = 0;
    return -2147024774;
  }
  else if ( v10 == v7 )
  {
    v8[v7] = 0;
  }
  return v9;
}

/*
 * XREFs of RtlStringVPrintfWorkerW_0 @ 0xE268C
 * Callers:
 *     ?RtlStringCchPrintfExW@@YAJPAGIPAPAGPAIKPBGZZ @ 0xE25C0 (-RtlStringCchPrintfExW@@YAJPAGIPAPAGPAIKPBGZZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringVPrintfWorkerW_0(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszFormat,
        va_list argList)
{
  int v5; // edx
  wchar_t *v6; // ecx
  unsigned int v7; // esi
  wchar_t *v8; // edi
  NTSTATUS v9; // ebx
  int v10; // eax

  v7 = v5 - 1;
  v8 = v6;
  v9 = 0;
  v10 = __vsnwprintf(v6, v5 - 1, (const wchar_t *)cchDest, (va_list)pcchNewDestLength);
  if ( v10 < 0 || v10 > v7 )
  {
    v9 = -2147483643;
  }
  else if ( v10 != v7 )
  {
    v7 = v10;
    goto LABEL_5;
  }
  v8[v7] = 0;
LABEL_5:
  if ( pszDest )
    *(_DWORD *)pszDest = v7;
  return v9;
}

/*
 * XREFs of StringCopyWorkerW_1 @ 0x4B3862B8
 * Callers:
 *     _StringCchCopyNW@16 @ 0x4B38628E (_StringCchCopyNW@16.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW_1(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  _WORD *v5; // ecx
  int v7; // eax
  size_t v8; // esi
  __int16 v9; // di
  HRESULT result; // eax

  v7 = 256;
  v8 = cchDest - (_DWORD)v5;
  do
  {
    if ( !pcchNewDestLength )
      break;
    v9 = *(_WORD *)((char *)v5 + v8);
    if ( !v9 )
      break;
    *v5++ = v9;
    pcchNewDestLength = (size_t *)((char *)pcchNewDestLength - 1);
    --v7;
  }
  while ( v7 );
  if ( !v7 )
    --v5;
  result = v7 != 0 ? 0 : -2147024774;
  *v5 = 0;
  return result;
}

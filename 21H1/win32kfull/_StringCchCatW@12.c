/*
 * XREFs of _StringCchCatW@12 @ 0x1DA4B1
 * Callers:
 *     _GetNlsTablePath@8 @ 0x1DA3A5 (_GetNlsTablePath@8.c)
 * Callees:
 *     StringCopyWorkerW_1 @ 0x1DA51C (StringCopyWorkerW_1.c)
 *     StringLengthWorkerW_1 @ 0x1DA56C (StringLengthWorkerW_1.c)
 */

HRESULT __stdcall StringCchCatW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  HRESULT result; // eax
  wchar_t *v4; // ecx
  size_t v5; // [esp+0h] [ebp-8h]
  const wchar_t *v6; // [esp+0h] [ebp-8h]
  wchar_t psz[2]; // [esp+4h] [ebp-4h] BYREF

  result = StringLengthWorkerW_1(psz, v5, 0);
  if ( result >= 0 )
    return StringCopyWorkerW_1(v4, (size_t)pszDest, (size_t *)v4, v6, *(size_t *)psz);
  return result;
}

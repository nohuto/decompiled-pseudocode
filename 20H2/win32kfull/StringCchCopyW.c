/*
 * XREFs of StringCchCopyW @ 0x1C027D3A0
 * Callers:
 *     EngGetFilePath @ 0x1C027CFD0 (EngGetFilePath.c)
 *     GetNlsTablePath @ 0x1C027D1A4 (GetNlsTablePath.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1C027D3E8 (StringCopyWorkerW.c)
 */

HRESULT __stdcall StringCchCopyW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  HRESULT v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 >= 0 )
    return StringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, v5);
  if ( cchDest )
    *pszDest = 0;
  return v3;
}

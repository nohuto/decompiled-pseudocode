/*
 * XREFs of StringCchCopyNW @ 0x180113C44
 * Callers:
 *     SbpParseFuncName @ 0x180113AF0 (SbpParseFuncName.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCopyNW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_PCNZWCH pszSrc, size_t cchToCopy)
{
  HRESULT result; // eax
  signed __int64 v5; // r10
  __int64 v6; // r8
  wchar_t v7; // ax
  STRSAFE_LPWSTR v8; // rax

  if ( cchToCopy <= 0x7FFFFFFE )
  {
    v5 = (char *)pszSrc - (char *)pszDest;
    v6 = 256LL;
    do
    {
      if ( !(v6 + cchToCopy - 256) )
        break;
      v7 = *(STRSAFE_LPWSTR)((char *)pszDest + v5);
      if ( !v7 )
        break;
      *pszDest++ = v7;
      --v6;
    }
    while ( v6 );
    v8 = pszDest - 1;
    if ( v6 )
      v8 = pszDest;
    *v8 = 0;
    return v6 == 0 ? 0x8007007A : 0;
  }
  else
  {
    result = -2147024809;
    *pszDest = 0;
  }
  return result;
}

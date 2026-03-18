/*
 * XREFs of RtlStringCchVPrintfA @ 0x1C0062FA4
 * Callers:
 *     CatError @ 0x1C0065B40 (CatError.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchVPrintfA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCSTR pszFormat,
        va_list argList)
{
  NTSTATUS v4; // esi
  size_t v6; // rbx
  int v7; // eax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v6 = cchDest - 1;
    v4 = 0;
    v7 = _vsnprintf(pszDest, cchDest - 1, pszFormat, argList);
    if ( v7 < 0 || v7 > v6 )
    {
      pszDest[v6] = 0;
      return -2147483643;
    }
    else if ( v7 == v6 )
    {
      pszDest[v6] = 0;
    }
  }
  return v4;
}

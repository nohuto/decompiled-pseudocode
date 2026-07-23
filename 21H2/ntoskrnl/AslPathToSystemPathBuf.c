/*
 * XREFs of AslPathToSystemPathBuf @ 0x140968B60
 * Callers:
 *     SdbpGetPathAppPatch @ 0x140967140 (SdbpGetPathAppPatch.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x14096A730 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1403714B0 (RtlStringCchCatW.c)
 *     memset @ 0x140414300 (memset.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToSystemPathBuf(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v6; // ebx
  size_t v7; // rdx
  NTSTRSAFE_PWSTR i; // rcx
  wchar_t v9; // ax
  NTSTRSAFE_PWSTR v10; // rax

  memset(pszDest, 0, 2 * cchDest);
  v6 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v6 = -1073741811;
  if ( v6 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v7 = cchDest;
    for ( i = pszDest; v7; --v7 )
    {
      if ( !(2147483646 - cchDest + v7) )
        break;
      v9 = *(NTSTRSAFE_PWSTR)((char *)i + (char *)L"\\SystemRoot" - (char *)pszDest);
      if ( !v9 )
        break;
      *i++ = v9;
    }
    v10 = i - 1;
    if ( v7 )
      v10 = i;
    v6 = v7 == 0 ? 0x80000005 : 0;
    *v10 = 0;
  }
  if ( v6 >= 0 )
  {
    v6 = RtlStringCchCatW(pszDest, cchDest, pszSrc);
    if ( v6 < 0 )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v6;
}

/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x14096CCC8
 * Callers:
 *     SdbpGetPathSystem @ 0x140969A10 (SdbpGetPathSystem.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x14096CA5C (AslEnvGetSysNativeDirPathForGuestBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140370FB0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x14096AF8C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x14096B0F8 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  _WORD *i; // rax
  int v12; // ebx
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset(pszSrc, 0, sizeof(pszSrc));
  *pszDest = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = &unk_140C04902; *(i - 1) != a4 || *i != v9; i += 8 )
  {
    if ( (unsigned __int64)++v10 >= 7 )
      return (unsigned int)-1073741637;
  }
  v12 = AslPathToSystemPathBuf(pszSrc, 0x40uLL, (&off_140C04908)[2 * v10]);
  if ( v12 < 0 )
    goto LABEL_11;
  if ( a3 && *a3 )
  {
    v12 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
    if ( v12 < 0 )
      goto LABEL_11;
    return 0;
  }
  v12 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
  if ( v12 >= 0 )
    return 0;
LABEL_11:
  AslLogCallPrintf(1LL);
  return (unsigned int)v12;
}

/*
 * XREFs of SdbpGetPathAppPatch @ 0x140963920
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1405BB450 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x1405BB5D0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x140963B50 (SdbpGetPathCustomSdb.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1409651BC (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140965328 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(NTSTRSAFE_PWSTR pszDest, size_t cchDest)
{
  int v5; // ebx
  wchar_t pszSrc[16]; // [rsp+30h] [rbp-258h] BYREF
  wchar_t v7[264]; // [rsp+50h] [rbp-238h] BYREF

  wcscpy(pszSrc, L"\\AppPatch");
  if ( cchDest < 0xA )
    return 3221225507LL;
  *pszDest = 0;
  v7[0] = 0;
  v5 = AslPathCombine(pszSrc);
  if ( v5 < 0 || (v5 = AslPathToSystemPathBuf(pszDest, cchDest, v7), v5 < 0) )
    AslLogCallPrintf(1LL);
  return (unsigned int)v5;
}

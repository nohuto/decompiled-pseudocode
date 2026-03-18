/*
 * XREFs of SdbpGetPathAppraiser @ 0x140963A10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140963D00 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslPathCombine @ 0x1409651BC (AslPathCombine.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140966C8C (AslEnvGetSysNativeDirPathForGuestBuf.c)
 */

__int64 __fastcall SdbpGetPathAppraiser(NTSTRSAFE_PWSTR pszDest, size_t cchDest, __int64 a3, __int64 a4)
{
  int ProcessHostGuestArchitectures; // ebx
  _WORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v10; // [rsp+34h] [rbp-CCh] BYREF
  wchar_t pszSrc[276]; // [rsp+38h] [rbp-C8h] BYREF

  wcscpy(pszSrc, L"\\appraiser");
  if ( cchDest < 0xB )
    return 3221225507LL;
  *pszDest = 0;
  pszSrc[12] = 0;
  v10 = -1;
  v9[0] = -1;
  ProcessHostGuestArchitectures = AslPathCombine(pszSrc);
  if ( ProcessHostGuestArchitectures < 0
    || (ProcessHostGuestArchitectures = SdbpGetProcessHostGuestArchitectures(&v10, v9, a4),
        ProcessHostGuestArchitectures < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    return (unsigned int)AslEnvGetSysNativeDirPathForGuestBuf(pszDest, cchDest, (__int64)v9);
  }
  return (unsigned int)ProcessHostGuestArchitectures;
}

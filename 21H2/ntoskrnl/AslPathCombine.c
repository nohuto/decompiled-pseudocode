/*
 * XREFs of AslPathCombine @ 0x140A15B1C
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1406498D0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x140649A60 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppPatch @ 0x140A13EC0 (SdbpGetPathAppPatch.c)
 *     SdbpGetPathAppraiser @ 0x140A13FC0 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathCustomSdb @ 0x140A14110 (SdbpGetPathCustomSdb.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140A17ABC (AslEnvGetSysNativeDirPathForGuestBuf.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140A17D10 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1402D87F0 (RtlStringCchCatW.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCombine(
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PCWSTR a2,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest)
{
  NTSTATUS v9; // ebx
  unsigned int v10; // r11d
  const wchar_t *v11; // r15
  unsigned int v12; // r11d
  unsigned int v13; // r11d
  unsigned int v14; // eax
  size_t pcchLength[7]; // [rsp+30h] [rbp-38h] BYREF
  size_t v16; // [rsp+88h] [rbp+20h] BYREF

  pcchLength[0] = 0LL;
  v16 = 0LL;
  if ( !cchDest )
    return 3221225507LL;
  v9 = RtlStringCchLengthW(pszSrc, 0x7FFFFFFFuLL, pcchLength);
  if ( v9 < 0 )
    goto LABEL_23;
  v9 = RtlStringCchLengthW(a2, v10, &v16);
  if ( v9 < 0 )
    goto LABEL_23;
  if ( pcchLength[0] )
  {
    if ( v16 )
    {
      v11 = a2 + 1;
      v12 = (pszSrc[pcchLength[0] - 1] == 92) + 1;
      if ( *a2 != 92 )
        v12 = pszSrc[pcchLength[0] - 1] == 92;
      if ( v12 <= 1 )
        v11 = a2;
      v9 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
      if ( v9 >= 0 )
      {
        v14 = v13 - 1;
        if ( v13 <= 1 )
          v14 = v13;
        if ( v14 || (v9 = RtlStringCchCatW(pszDest, cchDest, L"\\"), v9 >= 0) )
        {
          v9 = RtlStringCchCatW(pszDest, cchDest, v11);
          if ( v9 >= 0 )
            return 0;
        }
      }
LABEL_23:
      AslLogCallPrintf(1LL);
      return (unsigned int)v9;
    }
    a2 = pszSrc;
LABEL_11:
    v9 = RtlStringCchCopyW(pszDest, cchDest, a2);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    goto LABEL_23;
  }
  if ( v16 )
    goto LABEL_11;
  *pszDest = 0;
  return 0;
}

/*
 * XREFs of _EtwpGenerateFileName@12 @ 0x4B382A61
 * Callers:
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlCreateUnicodeString@8 @ 0x4B2D40C0 (_RtlCreateUnicodeString@8.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _wcschr @ 0x4B2FA680 (_wcschr.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 *     _wcsstr @ 0x4B2FA9B0 (_wcsstr.c)
 *     _StringCbPrintfW @ 0x4B334D60 (_StringCbPrintfW.c)
 */

ULONG __fastcall EtwpGenerateFileName(const wchar_t **a1, volatile signed __int32 *a2, PUNICODE_STRING UnicodeString)
{
  wchar_t *v4; // ebx
  size_t v6; // [esp-Ch] [ebp-828h]
  size_t v7; // [esp-4h] [ebp-820h]
  const wchar_t *v8; // [esp-4h] [ebp-820h]
  wchar_t pszDest[1026]; // [esp+10h] [ebp-80Ch] BYREF

  v4 = wcschr(a1[1], 0x25u);
  if ( !v4 || v4 != wcsrchr(a1[1], 0x25u) || !wcsstr(a1[1], L"%d") )
    return RtlNtStatusToDosError(-1073741773);
  v8 = (const wchar_t *)_InterlockedIncrement(a2);
  HIDWORD(v6) = a1[1];
  LODWORD(v6) = 2048;
  if ( StringCbPrintfW(pszDest, v6, v8) )
    return RtlNtStatusToDosError(-1073741776);
  LODWORD(v7) = *(unsigned __int16 *)a1;
  if ( !memcmp(a1[1], pszDest, v7) )
    return RtlNtStatusToDosError(-1073741776);
  RtlFreeAnsiString(UnicodeString);
  RtlCreateUnicodeString(UnicodeString, (PCWSTR)pszDest);
  return 0;
}

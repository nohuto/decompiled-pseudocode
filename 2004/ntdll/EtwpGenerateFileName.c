/*
 * XREFs of EtwpGenerateFileName @ 0x18005814C
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800564B8 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x180038AF0 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x1800507F0 (RtlNtStatusToDosError.c)
 *     StringCbPrintfW @ 0x180058248 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memcmp @ 0x180090000 (memcmp.c)
 *     wcschr @ 0x180091D60 (wcschr.c)
 *     wcsrchr @ 0x180091FA0 (wcsrchr.c)
 *     wcsstr @ 0x180092030 (wcsstr.c)
 */

ULONG __fastcall EtwpGenerateFileName(const wchar_t **a1, volatile signed __int32 *a2, _UNICODE_STRING *a3)
{
  wchar_t *v6; // rsi
  NTSTATUS v8; // ecx
  wchar_t pszDest[1024]; // [rsp+20h] [rbp-828h] BYREF

  v6 = wcschr(a1[1], 0x25u);
  if ( v6 && v6 == wcsrchr(a1[1], 0x25u) && wcsstr(a1[1], L"%d") )
  {
    if ( !StringCbPrintfW(pszDest, 0x800uLL, a1[1], (unsigned int)_InterlockedIncrement(a2))
      && memcmp(a1[1], pszDest, *(unsigned __int16 *)a1) )
    {
      RtlFreeAnsiString(a3);
      RtlCreateUnicodeString(a3, pszDest);
      return 0;
    }
    v8 = -1073741776;
  }
  else
  {
    v8 = -1073741773;
  }
  return RtlNtStatusToDosError(v8);
}

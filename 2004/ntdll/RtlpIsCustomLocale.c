/*
 * XREFs of RtlpIsCustomLocale @ 0x1800875B0
 * Callers:
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x18003C490 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800FCCC0 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 */

bool __fastcall RtlpIsCustomLocale(PCWSTR SourceString)
{
  unsigned __int64 v1; // rbp
  bool v3; // zf
  __int64 v4; // rbx
  bool result; // al
  HANDLE Handle; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = gCustomCultureRegKey == 0;
  *(_QWORD *)((unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3
    && (int)NtOpenKey(
              (unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFE0uLL,
              1LL,
              &`RtlpGetCustomCultureRegKey'::`2'::ObjAttribute) >= 0
    && _InterlockedCompareExchange64(&gCustomCultureRegKey, *(_QWORD *)v1, 0LL) )
  {
    NtClose(*(HANDLE *)v1);
  }
  v4 = gCustomCultureRegKey;
  result = 0;
  if ( gCustomCultureRegKey )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
      if ( (int)NtQueryValueKey(v4, v1 + 16, 2LL, v1 + 32, 120, v1 + 8) >= 0 )
        return 1;
    }
  }
  return result;
}

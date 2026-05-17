/*
 * XREFs of RtlpGetUserLocaleName @ 0x1800FD45C
 * Callers:
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlpMatchUserLanguage @ 0x1800FD604 (RtlpMatchUserLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D920 (NtQueryValueKey.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 *     RtlpGetLocaleDataKey @ 0x1800FD3B4 (RtlpGetLocaleDataKey.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString, __int64 a2)
{
  __int64 v3; // rdx
  _BYTE v5[32]; // [rsp+50h] [rbp+0h] BYREF

  if ( !RtlpGetLocaleDataKey((__int64)DestinationString, a2) )
    return 3221225473LL;
  if ( (int)NtQueryValueKey() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) != 1 )
    return 3221225473LL;
  v3 = *(_QWORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( (v3 & 1) != 0
    || !(_DWORD)v3
    || *(_WORD *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A + 2 * ((unsigned __int64)(unsigned int)v3 >> 1))
    || (unsigned int)v3 > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(
    DestinationString->Buffer,
    (const void *)(((unsigned __int64)v5 & 0xFFFFFFFFFFFFFFE0uLL) + 44),
    (unsigned int)v3);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}

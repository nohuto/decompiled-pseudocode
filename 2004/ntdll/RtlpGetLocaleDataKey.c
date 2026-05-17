/*
 * XREFs of RtlpGetLocaleDataKey @ 0x1800FD004
 * Callers:
 *     RtlpGetUserLocaleName @ 0x1800FD0AC (RtlpGetUserLocaleName.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x18006F3B4 (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 */

__int64 __fastcall RtlpGetLocaleDataKey(__int64 a1, __int64 a2)
{
  HANDLE v3; // [rsp+68h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( !gLocaleDataRegKey && (int)OpenGlobalizationUserSettingsKey(0x20019u, a2, (__int64)&v3) >= 0 )
  {
    if ( (int)NtOpenKey() >= 0 && _InterlockedCompareExchange64(&gLocaleDataRegKey, 0LL, 0LL) )
      NtClose(0LL);
    NtClose(v3);
  }
  return gLocaleDataRegKey;
}

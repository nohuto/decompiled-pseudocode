/*
 * XREFs of RtlpGetLocaleDataKey @ 0x1800FD514
 * Callers:
 *     RtlpGetUserLocaleName @ 0x1800FD5BC (RtlpGetUserLocaleName.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x18006F4B4 (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
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

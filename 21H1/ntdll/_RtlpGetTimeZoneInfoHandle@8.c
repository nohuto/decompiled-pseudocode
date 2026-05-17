/*
 * XREFs of _RtlpGetTimeZoneInfoHandle@8 @ 0x4B2F1584
 * Callers:
 *     _RtlpQueryTimeZoneInformationWorker@8 @ 0x4B2F13A9 (_RtlpQueryTimeZoneInformationWorker@8.c)
 *     _RtlpSetTimeZoneInformationWorker@8 @ 0x4B35147B (_RtlpSetTimeZoneInformationWorker@8.c)
 * Callees:
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpGetTimeZoneInfoHandle(char a1, const unsigned __int16 **a2)
{
  int result; // eax
  int v5; // [esp+Ch] [ebp-214h] BYREF
  unsigned __int16 v6[262]; // [esp+10h] [ebp-210h] BYREF

  if ( dword_4B3A6650 != 2 )
  {
    result = RtlGetPersistedStateLocation(
               L"TimeZoneInformationSettings",
               L"TargetNtPath",
               0,
               0,
               v6,
               0x208u,
               (size_t *)&v5);
    if ( result >= 0 )
    {
      dword_4B3A6650 = 1;
      result = RtlpGetRegistryHandle(0, v6, a1, a2);
      if ( result != -1073741772 )
        return result;
    }
    else
    {
      if ( result != -1073741772 )
        return result;
      dword_4B3A6650 = 2;
    }
  }
  return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
}

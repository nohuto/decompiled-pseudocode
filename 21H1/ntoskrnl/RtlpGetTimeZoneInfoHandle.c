/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x14067CED0
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x14067CC40 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlSetActiveTimeBias @ 0x14079103C (RtlSetActiveTimeBias.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140910A9C (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpGetRegistryHandle @ 0x140617BCC (RtlpGetRegistryHandle.c)
 *     RtlGetPersistedStateLocation @ 0x140682B80 (RtlGetPersistedStateLocation.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, HANDLE *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-238h] BYREF
  WCHAR v6[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_140C4C4DC == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(L"TimeZoneInformationSettings", v6, 520, (__int64)&v5);
  if ( (int)result >= 0 )
  {
    dword_140C4C4DC = 1;
    result = RtlpGetRegistryHandle(0, v6, a1, a2);
    if ( (_DWORD)result != -1073741772 )
      return result;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  if ( (_DWORD)result == -1073741772 )
  {
    dword_140C4C4DC = 2;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}

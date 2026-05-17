/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x180047DE4
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180047EA4 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800EE998 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x18004591C (RtlpGetRegistryHandle.c)
 *     RtlGetPersistedStateLocation @ 0x18004A370 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetTimeZoneInfoHandle(char a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp-238h] BYREF
  _WORD v6[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_18016D1EC == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(L"TimeZoneInformationSettings", v6, 520, (__int64)&v5);
  if ( (int)result >= 0 )
  {
    dword_18016D1EC = 1;
    result = RtlpGetRegistryHandle(0, v6, a1, a2);
    if ( (_DWORD)result != -1073741772 )
      return result;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  if ( (_DWORD)result == -1073741772 )
  {
    dword_18016D1EC = 2;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}

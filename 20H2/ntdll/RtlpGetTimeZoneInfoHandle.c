/*
 * XREFs of RtlpGetTimeZoneInfoHandle @ 0x180057D00
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180057B00 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800EEB08 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x18004595C (RtlpGetRegistryHandle.c)
 *     RtlGetPersistedStateLocation @ 0x180057DC0 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

int __fastcall RtlpGetTimeZoneInfoHandle(char a1, HANDLE *a2)
{
  int result; // eax
  ULONG BufferLengthOut[4]; // [rsp+40h] [rbp-238h] BYREF
  WCHAR TargetPath[264]; // [rsp+50h] [rbp-228h] BYREF

  if ( dword_18016D1EC == 2 )
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  result = RtlGetPersistedStateLocation(
             L"TimeZoneInformationSettings",
             L"TargetNtPath",
             0LL,
             LocationTypeRegistry,
             TargetPath,
             0x208u,
             BufferLengthOut);
  if ( result >= 0 )
  {
    dword_18016D1EC = 1;
    result = RtlpGetRegistryHandle(0, TargetPath, a1, a2);
    if ( result != -1073741772 )
      return result;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  if ( result == -1073741772 )
  {
    dword_18016D1EC = 2;
    return RtlpGetRegistryHandle(2, L"TimeZoneInformation", a1, a2);
  }
  return result;
}

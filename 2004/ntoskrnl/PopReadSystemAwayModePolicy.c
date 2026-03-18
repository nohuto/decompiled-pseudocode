/*
 * XREFs of PopReadSystemAwayModePolicy @ 0x1407618C4
 * Callers:
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403A5434 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 */

int PopReadSystemAwayModePolicy()
{
  bool v0; // bl
  int result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v6; // [rsp+60h] [rbp-10h]

  KeyHandle = 0LL;
  ResultLength = 0;
  v0 = 0;
  v6 = 0;
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( byte_140C238B2 )
    v0 = dword_140C002F0 != 0;
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    if ( byte_140C238B2 )
    {
      RtlInitUnicodeString(&DestinationString, L"AwayModeEnabled");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL
        && HIDWORD(KeyValueInformation) )
      {
        v0 = 1;
      }
    }
    result = ZwClose(KeyHandle);
  }
  byte_140C238B0 = v0;
  return result;
}

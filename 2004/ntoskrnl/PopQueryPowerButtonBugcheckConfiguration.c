/*
 * XREFs of PopQueryPowerButtonBugcheckConfiguration @ 0x1403A64D0
 * Callers:
 *     PopPowerButtonBugcheckConfigure @ 0x14077F148 (PopPowerButtonBugcheckConfigure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall PopQueryPowerButtonBugcheckConfiguration(HANDLE KeyHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-28h] BYREF
  int v9; // [rsp+68h] [rbp-18h]

  *a2 = 0;
  ResultLength = 0;
  v9 = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PowerButtonBugcheck");
  RtlInitUnicodeString(&ValueName, L"OneSettingPowerButtonBugcheck");
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    if ( HIDWORD(KeyValueInformation) )
    {
      *a2 = 1;
      dword_140C205D0 = 2;
    }
    else
    {
      dword_140C205D0 = 1;
    }
  }
  else
  {
    result = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      if ( HIDWORD(KeyValueInformation) )
      {
        *a2 = 1;
        dword_140C205D4 = 2;
      }
      else
      {
        dword_140C205D4 = 1;
      }
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}

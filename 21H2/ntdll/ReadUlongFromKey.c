/*
 * XREFs of ReadUlongFromKey @ 0x18003F7B4
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18003F860 (RtlpGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D8E0 (NtQueryValueKey.c)
 */

NTSTATUS __fastcall ReadUlongFromKey(HANDLE KeyHandle, const WCHAR *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+4Ch] [rbp-2Ch]
  int v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+54h] [rbp-24h]

  *a3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  result = NtQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( v9 == 4 && v10 == 4 )
    {
      *a3 = v11;
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}

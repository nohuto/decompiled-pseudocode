/*
 * XREFs of ?ReadUlongFromKey@@YAJPEAXPEBGPEAK@Z @ 0x1C00BA9D4
 * Callers:
 *     WinSqmIsOptedInEx @ 0x1C00BA860 (WinSqmIsOptedInEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ReadUlongFromKey(HANDLE KeyHandle, const unsigned __int16 *a2, unsigned int *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-30h] BYREF
  int v9; // [rsp+58h] [rbp-20h]

  ResultLength = 0;
  *a3 = 0;
  KeyValueInformation = 0LL;
  v9 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result == -1073741772 )
    return -1073741772;
  if ( result >= 0 )
  {
    if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      *a3 = HIDWORD(KeyValueInformation);
      return 0;
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}

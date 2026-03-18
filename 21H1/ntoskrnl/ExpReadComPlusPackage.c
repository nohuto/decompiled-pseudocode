/*
 * XREFs of ExpReadComPlusPackage @ 0x1406ED460
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F2610 (ZwQueryValueKey.c)
 */

__int64 ExpReadComPlusPackage()
{
  NTSTATUS v0; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+40h] [rbp-20h] BYREF
  int v5; // [rsp+50h] [rbp-10h]

  ResultLength = 0;
  KeyHandle = 0LL;
  KeyValueInformation = 0LL;
  v5 = 0;
  v0 = ZwOpenKey(&KeyHandle, 1u, &stru_140C02088);
  if ( v0 >= 0 )
  {
    v0 = ZwQueryValueKey(
           KeyHandle,
           &stru_140C020B8,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v0 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      MEMORY[0xFFFFF780000002E0] = HIDWORD(KeyValueInformation);
    ZwClose(KeyHandle);
    if ( v0 >= 0 )
      return 0LL;
  }
  if ( v0 == -1073741772 )
    return 0LL;
  else
    return (unsigned int)v0;
}

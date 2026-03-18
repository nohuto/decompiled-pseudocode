/*
 * XREFs of ExpReadComPlusPackage @ 0x1406E35A4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 */

__int64 ExpReadComPlusPackage()
{
  signed __int32 v0; // edi
  NTSTATUS v1; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+40h] [rbp-20h] BYREF
  int v6; // [rsp+50h] [rbp-10h]

  ResultLength = 0;
  KeyHandle = 0LL;
  KeyValueInformation = 0LL;
  v6 = 0;
  v0 = 0;
  v1 = ZwOpenKey(&KeyHandle, 1u, &stru_140C02088);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryValueKey(
           KeyHandle,
           &stru_140C020B8,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v1 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      v0 = HIDWORD(KeyValueInformation);
    ZwClose(KeyHandle);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)0xFFFFF780000002E0LL, v0, -1);
  if ( (int)(v1 + 0x80000000) < 0 || v1 == -1073741772 )
    return 0;
  return (unsigned int)v1;
}

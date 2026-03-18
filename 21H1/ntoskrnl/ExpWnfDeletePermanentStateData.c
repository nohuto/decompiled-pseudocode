/*
 * XREFs of ExpWnfDeletePermanentStateData @ 0x140958134
 * Callers:
 *     NtDeleteWnfStateName @ 0x140666910 (NtDeleteWnfStateName.c)
 *     ExpNtDeleteWnfStateData @ 0x1407B7B4C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1403F3DF0 (ZwDeleteValueKey.c)
 *     ExpWnfComposeValueName @ 0x14068A53C (ExpWnfComposeValueName.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x1406EC708 (ExpWnfGetPermanentDataStoreHandle.c)
 *     ExpWnfEnumeratePermanentDataStores @ 0x140958300 (ExpWnfEnumeratePermanentDataStores.c)
 */

int __fastcall ExpWnfDeletePermanentStateData(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  int result; // eax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-48h] BYREF
  char v9; // [rsp+38h] [rbp-38h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  v3 = (a2 >> 4) & 3;
  v4 = (a2 >> 6) & 0xF;
  ValueName.Buffer = (wchar_t *)&v9;
  ExpWnfComposeValueName(a2, &ValueName);
  v5 = 0;
  if ( a1 )
    result = ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v3, 0LL, &KeyHandle);
  else
    result = ExpWnfEnumeratePermanentDataStores((unsigned int)v4, (unsigned int)v3, 0LL, &KeyHandle, KeyHandle);
  if ( result >= 0 )
  {
    while ( 1 )
    {
      result = ZwDeleteValueKey(KeyHandle, &ValueName);
      if ( a1 )
        break;
      ZwClose(KeyHandle);
      if ( (int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, HANDLE *))ExpWnfEnumeratePermanentDataStores)(
                  (unsigned int)v4,
                  (unsigned int)v3,
                  (unsigned int)++v5,
                  &KeyHandle) < 0 )
        return 0;
    }
  }
  return result;
}

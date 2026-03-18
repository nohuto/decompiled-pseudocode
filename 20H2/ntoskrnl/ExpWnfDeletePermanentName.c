/*
 * XREFs of ExpWnfDeletePermanentName @ 0x1406E3308
 * Callers:
 *     NtDeleteWnfStateName @ 0x140651E30 (NtDeleteWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwDeleteValueKey @ 0x1403F9C50 (ZwDeleteValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1405DF844 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x1405DF9AC (ExpWnfComposeValueName.c)
 */

int __fastcall ExpWnfDeletePermanentName(unsigned __int64 a1)
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-50h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v5;
  ExpWnfComposeValueName(a1, &ValueName);
  result = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( result >= 0 )
    return ZwDeleteValueKey(KeyHandle, &ValueName);
  return result;
}

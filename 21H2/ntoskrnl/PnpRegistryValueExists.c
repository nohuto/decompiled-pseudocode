/*
 * XREFs of PnpRegistryValueExists @ 0x140394F68
 * Callers:
 *     PiDevCfgQueryDriverNode @ 0x14073C9B4 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCopyDeviceKey @ 0x140769FCC (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateRootDevice @ 0x1408A717C (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 */

char __fastcall PnpRegistryValueExists(void *a1, UNICODE_STRING *a2)
{
  char v2; // bl
  NTSTATUS v3; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  ResultLength = 0;
  KeyValueInformation = 0LL;
  v3 = ZwQueryValueKey(a1, a2, KeyValueBasicInformation, &KeyValueInformation, 0x10u, &ResultLength);
  if ( (int)(v3 + 0x80000000) < 0 || v3 == -2147483643 )
    return 1;
  return v2;
}

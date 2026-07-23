/*
 * XREFs of ExpIsIumEncryptionKeyAvailable @ 0x14094A7C0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x14061F7F0 (ExGetFirmwareEnvironmentVariable.c)
 */

bool ExpIsIumEncryptionKeyAvailable()
{
  int v1; // [rsp+30h] [rbp-40h] BYREF
  int v2; // [rsp+34h] [rbp-3Ch] BYREF
  int v3; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v5[4]; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v5[0] = 2012912317;
  v5[1] = 1295123289;
  DestinationString = 0LL;
  v5[2] = -198680387;
  v5[3] = 1266192359;
  RtlInitUnicodeString(&DestinationString, L"VsmLKeyProvisioningResult");
  v3 = -1;
  v1 = 4;
  return (int)ExGetFirmwareEnvironmentVariable((__int64)&DestinationString, (int)v5, (int)&v3, (int)&v1, (__int64)&v2) >= 0
      && v1 == 4
      && v2 == 6
      && v3 >= 0;
}

/*
 * XREFs of RIMReadPowerRegistrySettings @ 0x1C000B094
 * Callers:
 *     RIMInitialize @ 0x1C000AF70 (RIMInitialize.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C000B258 (RIMRegQueryDWord.c)
 */

__int64 RIMReadPowerRegistrySettings()
{
  int v0; // edx
  int v1; // ecx
  int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\INPUT");
  RIMRegQueryDWord(&DestinationString, L"WakeOnInputDeviceTypes", 38LL, &v6);
  v0 = (v6 >> 1) & 1 | 2;
  if ( (v6 & 4) == 0 )
    v0 = (v6 >> 1) & 1;
  v1 = v0 | 0x10;
  if ( (v6 & 8) == 0 )
    v1 = v0;
  v2 = v1 | 4;
  if ( (v6 & 0x10) == 0 )
    v2 = v1;
  v3 = v2 | 8;
  if ( (v6 & 0x20) == 0 )
    v3 = v2;
  result = v3 | 0x20;
  if ( (v6 & 0x80) == 0 )
    result = v3;
  gWakeOnDeviceTypes = result;
  return result;
}

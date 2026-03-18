/*
 * XREFs of PnpMultiSzContainsString @ 0x14038F960
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140721430 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14076699C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A086C (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A19E4 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A3CF0 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 */

PCWSTR __fastcall PnpMultiSzContainsString(PCWSTR SourceString, const WCHAR *a2)
{
  __int64 v3; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  String1 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&String1, a2);
  while ( *SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlEqualUnicodeString(&String1, &DestinationString, 1u) )
      return SourceString;
    SourceString += ((unsigned __int64)DestinationString.Length >> 1) + 1;
  }
  return (PCWSTR)v3;
}

/*
 * XREFs of PnpMultiSzContainsString @ 0x140392990
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140731708 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077738C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A76BC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408A8834 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408AAB40 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
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

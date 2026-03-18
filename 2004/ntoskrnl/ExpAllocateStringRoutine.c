/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406F19D0
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14036C168 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1405E5FD0 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14063F160 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x140642DF0 (RtlCreateUnicodeString.c)
 *     CmpQueryNameString @ 0x1406559A4 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x140655B64 (CmpInitCmRM.c)
 *     RtlStringFromGUIDEx @ 0x1406A7C78 (RtlStringFromGUIDEx.c)
 *     RtlUpcaseUnicodeString @ 0x1406B7FF0 (RtlUpcaseUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1406C5110 (RtlDuplicateUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x1406E3FA0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406E4060 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406E4150 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406E43C0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1406E6CC0 (RtlDowncaseUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1406F99DC (RtlpQueryRegistryDirect.c)
 *     PiDevCfgBuildIndirectString @ 0x14072CF50 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14072D20C (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x14072D9CC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14072EED0 (PiDevCfgLogDeviceConfigured.c)
 *     RtlOemStringToUnicodeString @ 0x14074DAE0 (RtlOemStringToUnicodeString.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14075C0F0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDrvDbCreateNode @ 0x14078CD6C (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A1B8C (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408A752C (PiDevCfgSplitDriverConfigurationId.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B15E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B2E14 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B3C68 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B485C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B49BC (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B4D64 (PiDrvDbSetupNodeHive.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14090C750 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14090C900 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140911064 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140911278 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409124D8 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x140916390 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x140916490 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}

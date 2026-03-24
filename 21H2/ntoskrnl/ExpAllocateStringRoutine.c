/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406A0F60
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14036EEA0 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1405EDB00 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14062C640 (RtlAnsiStringToUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x14063EC10 (RtlpQueryRegistryDirect.c)
 *     RtlCreateUnicodeString @ 0x1406748C0 (RtlCreateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140676CD0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlStringFromGUIDEx @ 0x14067A7D8 (RtlStringFromGUIDEx.c)
 *     RtlDuplicateUnicodeString @ 0x14068B130 (RtlDuplicateUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x140694670 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140694730 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x140694820 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140694A90 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1406970E0 (RtlDowncaseUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1406CC820 (RtlUpcaseUnicodeString.c)
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140716838 (CmpQueryNameString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B090 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14073B7C0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073CE44 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgBuildIndirectString @ 0x14073D1AC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073D468 (PiDevCfgBuildDriverConfigurationId.c)
 *     RtlOemStringToUnicodeString @ 0x140760D50 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x1407A39CC (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A4C8C (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AA62C (PiDevCfgSplitDriverConfigurationId.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B46E0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B5F14 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B6D68 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B795C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7ABC (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7E64 (PiDrvDbSetupNodeHive.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14090FB30 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14090FCE0 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140914354 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140914568 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409157C8 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x140919780 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x140919880 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}

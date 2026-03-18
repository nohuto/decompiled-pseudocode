/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406D0920
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14036A7D0 (PnpDuplicateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x14061B5F0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x14064FE60 (RtlUpcaseUnicodeString.c)
 *     CmpQueryNameString @ 0x14065950C (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 *     RtlpQueryRegistryDirect @ 0x140682FE8 (RtlpQueryRegistryDirect.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14068F280 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x140690CB0 (RtlCreateUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1406B0430 (RtlDuplicateUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x1406C4630 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406C46F0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406C47E0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C4A50 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1406C5B70 (RtlDowncaseUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x14070EF18 (RtlStringFromGUIDEx.c)
 *     PiDevCfgQueryObjectProperties @ 0x140722564 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgBuildIndirectString @ 0x1407228CC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140722B88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407357A4 (PiDevCfgLogDeviceConfigured.c)
 *     RtlOemStringToUnicodeString @ 0x1407496C0 (RtlOemStringToUnicodeString.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14075A4E0 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDrvDbCreateNode @ 0x14078AE9C (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A086C (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408A620C (PiDevCfgSplitDriverConfigurationId.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B02C0 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B1AF4 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B2948 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B353C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408B369C (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B3A44 (PiDrvDbSetupNodeHive.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14090B4A0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x14090B650 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x14090FCC4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14090FED8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140911158 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x140915120 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x140915220 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}

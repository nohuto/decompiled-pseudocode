/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406BE560
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x1402D1DA4 (PnpDuplicateUnicodeString.c)
 *     AllocateOrValidateCharStringBuffer @ 0x1402D7DE0 (AllocateOrValidateCharStringBuffer.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140660F7C (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDuplicateUnicodeString @ 0x1406A9D20 (RtlDuplicateUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1406D09CC (RtlpQueryRegistryDirect.c)
 *     CmpQueryNameString @ 0x140742C78 (CmpQueryNameString.c)
 *     CmpInitCmRM @ 0x140742E3C (CmpInitCmRM.c)
 *     RtlStringFromGUIDEx @ 0x1407454A8 (RtlStringFromGUIDEx.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407459F4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1407460F8 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1407468A0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140746B5C (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x140746CCC (PiDevCfgQueryObjectProperties.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     PiDrvDbSetupNodeHive @ 0x140826270 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408264C0 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbCreateNode @ 0x1408268AC (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x14094A7D4 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14094E74C (PiDevCfgSplitDriverConfigurationId.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14095A750 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14095BFCC (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbMountNode @ 0x14095C12C (PiDrvDbMountNode.c)
 *     PiDrvDbQueryHiveFileName @ 0x14095CC40 (PiDrvDbQueryHiveFileName.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14095D038 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14095DC2C (PiDrvDbResolveSystemFilePath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1409BAE18 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409BEC80 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x1409BED90 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}

/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406C4F70
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14036E148 (PnpDuplicateUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140671490 (RtlUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x140682390 (RtlUpcaseUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x1406BAB50 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406BAC10 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406BAD00 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406BAF70 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlDowncaseUnicodeString @ 0x1406BC640 (RtlDowncaseUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1406CC23C (RtlpQueryRegistryDirect.c)
 *     RtlDuplicateUnicodeString @ 0x1406E6840 (RtlDuplicateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1406FA618 (RtlStringFromGUIDEx.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1406FB700 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x1406FDE90 (RtlCreateUnicodeString.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140711A48 (CmpQueryNameString.c)
 *     PiDevCfgBuildIndirectString @ 0x14073B9CC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073BC88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073C448 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x14073D254 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073D688 (PiDevCfgLogDeviceConfigured.c)
 *     RtlOemStringToUnicodeString @ 0x14075C6C0 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x1407994AC (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1408A76BC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408AD05C (PiDevCfgSplitDriverConfigurationId.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1408B7200 (PiCreateDriverSwDeviceCallback.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x1408B8A34 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B9888 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408BA47C (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408BA5DC (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x1408BA984 (PiDrvDbSetupNodeHive.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140912380 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140912530 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140916BA4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140916DB8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x140918018 (RtlpConstructCrossVmObjectPath.c)
 *     RtlUTF8StringToUnicodeString @ 0x14091BFC0 (RtlUTF8StringToUnicodeString.c)
 *     RtlUnicodeStringToUTF8String @ 0x14091C0C0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}

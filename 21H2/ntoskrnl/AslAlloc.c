/*
 * XREFs of AslAlloc @ 0x14075B444
 * Callers:
 *     AslStringUpcaseToMultiByteN @ 0x14075B0E4 (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14075B1B8 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14075B270 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     SdbInitDatabaseInMemory @ 0x1407ECFCC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1407ED0C8 (SdbpOpenDatabaseInMemory.c)
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     SdbpCheckAllAttributes @ 0x140841610 (SdbpCheckAllAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1408422F0 (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x140842D98 (AslFileMappingCreateFromImageView.c)
 *     AslRegistryBuildMachinePath @ 0x140843AA4 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140843B58 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x140A108BC (SdbOpenDatabaseEx.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140A10AD0 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A111BC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140A11614 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A124A4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpInitializeSearchDBContext @ 0x140A129F4 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140A12DA0 (SdbpResolveMatchingFile.c)
 *     SdbpGetProcessHistory @ 0x140A13308 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140A139FC (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A14498 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140A1483C (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140A14988 (AslStringAnsiToUnicode.c)
 *     AslPathToNetworkPathNt @ 0x140A15C98 (AslPathToNetworkPathNt.c)
 *     AslPathWildcardFindFirst @ 0x140A15ECC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140A1641C (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140A16C68 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140A16DA4 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140A16F94 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x140A17490 (AslpProcessMatchRegNode.c)
 *     AslEnvExpandStrings2 @ 0x140A177D8 (AslEnvExpandStrings2.c)
 *     AslpFileLargeMapCreate @ 0x140A1A2F8 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AslAlloc(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x74705041u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, a2);
  return v4;
}

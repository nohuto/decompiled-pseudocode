/*
 * XREFs of AslAlloc @ 0x140743A84
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x14073C444 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14073C530 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpResolveMatchingFile @ 0x14073C618 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x14073C86C (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x14073CF58 (AslPathToNetworkPathNt.c)
 *     SdbInitDatabaseInMemory @ 0x14073EBF0 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x14073ED20 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x1407414C8 (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x140743244 (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x140743318 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x1407438B0 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAllAttributes @ 0x14079A16C (SdbpCheckAllAttributes.c)
 *     AslpFileGetVersionBlock @ 0x14079AF08 (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x14079B47C (AslFileMappingCreateFromImageView.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x1407AC9C0 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407ACA74 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x14095F69C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14095FE3C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140960284 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096106C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x1409618D8 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x1409620B8 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140962B28 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140962D50 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140962EA4 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x1409640FC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409646CC (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140964FF4 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140965134 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140965268 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x14096577C (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x140967B7C (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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

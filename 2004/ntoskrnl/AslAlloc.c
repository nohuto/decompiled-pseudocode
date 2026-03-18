/*
 * XREFs of AslAlloc @ 0x140745604
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x14073DFC4 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14073E0B0 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpResolveMatchingFile @ 0x14073E198 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x14073E3EC (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x14073EAD8 (AslPathToNetworkPathNt.c)
 *     SdbInitDatabaseInMemory @ 0x140740770 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1407408A0 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x140743048 (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x140744DC4 (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x140744E98 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x140745430 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAllAttributes @ 0x14079E53C (SdbpCheckAllAttributes.c)
 *     AslpFileGetVersionBlock @ 0x14079F2D8 (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x14079F84C (AslFileMappingCreateFromImageView.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x1407AFB20 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407AFBD4 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x140960A3C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1409611DC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140961624 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096240C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x140962C78 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140963458 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140963EC8 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x1409640F0 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140964244 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x14096549C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140965A6C (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140966394 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x1409664D4 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140966608 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x140966B1C (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x140968F1C (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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

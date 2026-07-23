/*
 * XREFs of AslAlloc @ 0x14075B258
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x1407539C8 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140753AB4 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140753DF0 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x1407544DC (AslPathToNetworkPathNt.c)
 *     SdbInitDatabaseInMemory @ 0x1407562D0 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140756414 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075A990 (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14075AA64 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14075B000 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAllAttributes @ 0x1407B219C (SdbpCheckAllAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1407B33C4 (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x1407B3938 (AslFileMappingCreateFromImageView.c)
 *     SdbQueryDataExTagID @ 0x1407C1C88 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x1407C2380 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407C2434 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x14096426C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140964A2C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964E74 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140965B88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x14096649C (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140966C7C (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1409676E8 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140967910 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140967A64 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x140968CD4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409692A4 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140969BCC (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140969D0C (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969E40 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x14096A354 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x14096C5E4 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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

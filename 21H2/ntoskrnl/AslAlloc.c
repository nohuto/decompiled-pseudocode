/*
 * XREFs of AslAlloc @ 0x14075B098
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140753808 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x1407538F4 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpResolveMatchingFile @ 0x1407539DC (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140753C30 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x14075431C (AslPathToNetworkPathNt.c)
 *     SdbInitDatabaseInMemory @ 0x140756110 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140756254 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x1407589F8 (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x14075A7D0 (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14075A8A4 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14075AE40 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAllAttributes @ 0x1407B1FFC (SdbpCheckAllAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1407B3224 (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x1407B3798 (AslFileMappingCreateFromImageView.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x1407C1E60 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407C1F14 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x14096408C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14096484C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140964C94 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659A8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x1409662BC (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140966A9C (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140967508 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140967730 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140967884 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x140968AF4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409690C4 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x1409699EC (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140969B2C (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140969C60 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x14096A174 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x14096C404 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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

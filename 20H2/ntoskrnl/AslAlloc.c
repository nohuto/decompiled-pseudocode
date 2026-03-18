/*
 * XREFs of AslAlloc @ 0x1407541E4
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x14074CBA8 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14074CC94 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbpResolveMatchingFile @ 0x14074CD7C (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x14074CFD0 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x14074D6BC (AslPathToNetworkPathNt.c)
 *     SdbInitDatabaseInMemory @ 0x14074F350 (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x14074F480 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x140751C28 (AslFileMappingCreate.c)
 *     AslStringUpcaseToMultiByteN @ 0x1407539A4 (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x140753A78 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x140754010 (SdbpCreateSearchDBContext.c)
 *     SdbpCheckAllAttributes @ 0x1407AD86C (SdbpCheckAllAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1407AE608 (AslpFileGetVersionBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x1407AEB7C (AslFileMappingCreateFromImageView.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x1407BDA60 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407BDB14 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x14096680C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140966FAC (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x1409673F4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409681DC (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x140968A48 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140969228 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140969C98 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x140969EC0 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x14096A014 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x14096B26C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14096B83C (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x14096C164 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x14096C2A4 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14096C3D8 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x14096C8EC (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x14096ECEC (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
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

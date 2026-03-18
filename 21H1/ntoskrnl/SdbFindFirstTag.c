/*
 * XREFs of SdbFindFirstTag @ 0x140742C54
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14073C2C8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14073D100 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x14073D318 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x14073D418 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x14073D598 (SdbpMatchOsVersion.c)
 *     KsepDbCacheReadDeviceInternal @ 0x14073E93C (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x14073EF7C (SdbGetDatabaseEdition.c)
 *     SdbGetDatabaseID @ 0x140740F30 (SdbGetDatabaseID.c)
 *     KsepDbGetDriverShimsInternal @ 0x14074195C (KsepDbGetDriverShimsInternal.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140742258 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x140742A90 (InitOnceScanIndexes.c)
 *     InitOnceGetStringTableOffset @ 0x14075F1A0 (InitOnceGetStringTableOffset.c)
 *     SdbpSearchDB @ 0x140769830 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x14079A16C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x14079B664 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407AB8C0 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407AC4EC (SdbFindFirstNamedTag.c)
 *     SdbReadEntryInformation @ 0x1407AC59C (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407AC6C0 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchAcpi @ 0x1407BD328 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407BD37C (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407BD3D0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407BD424 (SdbpMatchCpu.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BB410 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x14095F8B0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x14095F980 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140960670 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140960BD0 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x14096101C (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096106C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140961298 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140961648 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1409616EC (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetNextChild @ 0x140742CC8 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x140742F40 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v5, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
      return v8;
  }
  return v3;
}

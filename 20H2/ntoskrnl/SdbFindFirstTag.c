/*
 * XREFs of SdbFindFirstTag @ 0x1407533B4
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14074CA2C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14074D860 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x14074DA78 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x14074DB78 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x14074DCF8 (SdbpMatchOsVersion.c)
 *     KsepDbCacheReadDeviceInternal @ 0x14074F09C (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x14074F6DC (SdbGetDatabaseEdition.c)
 *     SdbGetDatabaseID @ 0x140751690 (SdbGetDatabaseID.c)
 *     KsepDbGetDriverShimsInternal @ 0x1407520BC (KsepDbGetDriverShimsInternal.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407529B8 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x1407531F0 (InitOnceScanIndexes.c)
 *     InitOnceGetStringTableOffset @ 0x14076FBB0 (InitOnceGetStringTableOffset.c)
 *     SdbpSearchDB @ 0x14077A9D0 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407AD86C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407AED64 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407BC960 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407BD58C (SdbFindFirstNamedTag.c)
 *     SdbReadEntryInformation @ 0x1407BD63C (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407BD760 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchAcpi @ 0x1407CED28 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407CED7C (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407CEDD0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407CEE24 (SdbpMatchCpu.c)
 *     KsepDbGetShimInfo @ 0x1408C205C (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408C2490 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x140966A20 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140966AF0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409677E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140967D40 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x14096818C (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409681DC (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140968408 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1409687B8 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x14096885C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetNextChild @ 0x140753428 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x1407536A0 (SdbGetFirstChild.c)
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

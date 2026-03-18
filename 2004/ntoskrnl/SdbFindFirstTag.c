/*
 * XREFs of SdbFindFirstTag @ 0x1407447D4
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14073DE48 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14073EC80 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckForMatch @ 0x14073EE98 (SdbpCheckForMatch.c)
 *     SdbpMatchList @ 0x14073EF98 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x14073F118 (SdbpMatchOsVersion.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1407404BC (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x140740AFC (SdbGetDatabaseEdition.c)
 *     SdbGetDatabaseID @ 0x140742AB0 (SdbGetDatabaseID.c)
 *     KsepDbGetDriverShimsInternal @ 0x1407434DC (KsepDbGetDriverShimsInternal.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140743DD8 (SdbpFindFirstIndexedWildCardTag.c)
 *     InitOnceScanIndexes @ 0x140744610 (InitOnceScanIndexes.c)
 *     InitOnceGetStringTableOffset @ 0x1407615A0 (InitOnceGetStringTableOffset.c)
 *     SdbpSearchDB @ 0x14076BC10 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x14079E53C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x14079FA34 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407AEA20 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407AF64C (SdbFindFirstNamedTag.c)
 *     SdbReadEntryInformation @ 0x1407AF6FC (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407AF820 (SdbpGetExeEntryFlags.c)
 *     SdbpMatchAcpi @ 0x1407C0498 (SdbpMatchAcpi.c)
 *     SdbpMatchOem @ 0x1407C04EC (SdbpMatchOem.c)
 *     SdbpMatchBios @ 0x1407C0540 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407C0594 (SdbpMatchCpu.c)
 *     KsepDbGetShimInfo @ 0x1408BC2FC (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x1408BC730 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x140960C50 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140960D20 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140961A10 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140961F70 (SdbpCheckPackageAttributes.c)
 *     SdbpGetDeviceDWORD @ 0x1409623BC (SdbpGetDeviceDWORD.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096240C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140962638 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1409629E8 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x140962A8C (SdbpFindNextNamedTag.c)
 * Callees:
 *     SdbGetNextChild @ 0x140744848 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x140744AC0 (SdbGetFirstChild.c)
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

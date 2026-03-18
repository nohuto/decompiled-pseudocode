/*
 * XREFs of SdbGetStringTagPtr @ 0x14074F7B0
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14074CA2C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14074D860 (SdbpCheckMatchingFiles.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407529B8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14077A9D0 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x1407AD86C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x1407AED64 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407BC960 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407BD368 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407BD58C (SdbFindFirstNamedTag.c)
 *     KsepDbGetSdbString @ 0x1408C2028 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1408C2490 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x140966A20 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140966AF0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1409677E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140967D40 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409681DC (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140968408 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1409687B8 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x14096885C (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x14074F830 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x14074F958 (SdbpReadStringRef.c)
 *     SdbpGetMappedTagData @ 0x140753034 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetStringTagPtr(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  __int16 v5; // ax
  unsigned int StringRef; // eax

  v2 = 0LL;
  v3 = a2;
  if ( a1 )
  {
    v5 = SdbGetTagFromTagID(a1, a2) & 0xF000;
    if ( v5 == (__int16)0x8000 )
      return SdbpGetMappedTagData(a1, v3);
    if ( v5 != 24576 )
      return v2;
    StringRef = SdbpReadStringRef(a1, v3);
    if ( StringRef )
      return SdbpGetMappedStringFromTable(a1, StringRef);
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}

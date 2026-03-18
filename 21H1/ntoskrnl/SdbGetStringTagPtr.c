/*
 * XREFs of SdbGetStringTagPtr @ 0x14073F050
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14073C2C8 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14073D100 (SdbpCheckMatchingFiles.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140742258 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140769830 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x14079A16C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x14079B664 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407AB8C0 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407AC4EC (SdbFindFirstNamedTag.c)
 *     KsepDbGetSdbString @ 0x1408BAFA8 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1408BB410 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x14095F8B0 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x14095F980 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140960670 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140960BD0 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096106C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140961298 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140961648 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x1409616EC (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x14073F0D0 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x14073F1F8 (SdbpReadStringRef.c)
 *     SdbpGetMappedTagData @ 0x1407428D4 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
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

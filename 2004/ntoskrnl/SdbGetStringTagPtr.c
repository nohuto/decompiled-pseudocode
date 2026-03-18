/*
 * XREFs of SdbGetStringTagPtr @ 0x140740BD0
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14073DE48 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckMatchingFiles @ 0x14073EC80 (SdbpCheckMatchingFiles.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140743DD8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x14076BC10 (SdbpSearchDB.c)
 *     SdbpCheckAllAttributes @ 0x14079E53C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x14079FA34 (KsepDbReadKFlag.c)
 *     SdbpFindMatchingName @ 0x1407AEA20 (SdbpFindMatchingName.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     SdbFindFirstNamedTag @ 0x1407AF64C (SdbFindFirstNamedTag.c)
 *     KsepDbGetSdbString @ 0x1408BC2C8 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x1408BC730 (KsepDbReadKData.c)
 *     SdbpCheckMatchingDevice @ 0x140960C50 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140960D20 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140961A10 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckPackageAttributes @ 0x140961F70 (SdbpCheckPackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x14096240C (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140962638 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1409629E8 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTag @ 0x140962A8C (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpGetMappedStringFromTable @ 0x140740C50 (SdbpGetMappedStringFromTable.c)
 *     SdbpReadStringRef @ 0x140740D78 (SdbpReadStringRef.c)
 *     SdbpGetMappedTagData @ 0x140744454 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
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

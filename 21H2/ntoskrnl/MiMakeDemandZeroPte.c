/*
 * XREFs of MiMakeDemandZeroPte @ 0x140329F70
 * Callers:
 *     MiMakeLargePageTable @ 0x14053DA14 (MiMakeLargePageTable.c)
 *     MiChargeSegmentCommit @ 0x14061FED0 (MiChargeSegmentCommit.c)
 *     MiPrefetchDriverPages @ 0x1406885A0 (MiPrefetchDriverPages.c)
 *     MiBuildImageControlArea @ 0x1406D5038 (MiBuildImageControlArea.c)
 *     MiInitializePrototypePtes @ 0x1406E82FC (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x1406E8410 (MiParseImageSectionHeaders.c)
 *     MiAddMappedPtes @ 0x1406E9250 (MiAddMappedPtes.c)
 *     MiSessionCreate @ 0x14078620C (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x1408C68E0 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}

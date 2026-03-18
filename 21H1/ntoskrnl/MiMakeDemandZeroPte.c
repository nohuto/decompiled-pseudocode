/*
 * XREFs of MiMakeDemandZeroPte @ 0x1402233A0
 * Callers:
 *     MiMakeLargePageTable @ 0x140537EF4 (MiMakeLargePageTable.c)
 *     MiInitializePrototypePtes @ 0x14063FAC4 (MiInitializePrototypePtes.c)
 *     MiAddMappedPtes @ 0x14063FBE0 (MiAddMappedPtes.c)
 *     MiParseImageSectionHeaders @ 0x140640300 (MiParseImageSectionHeaders.c)
 *     MiChargeSegmentCommit @ 0x140640FF0 (MiChargeSegmentCommit.c)
 *     MiPrefetchDriverPages @ 0x1406B97B0 (MiPrefetchDriverPages.c)
 *     MiBuildImageControlArea @ 0x1406D043C (MiBuildImageControlArea.c)
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x1408C1F90 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}

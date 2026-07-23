/*
 * XREFs of MiMakeDemandZeroPte @ 0x140334CC0
 * Callers:
 *     MiMakeLargePageTable @ 0x14053DC54 (MiMakeLargePageTable.c)
 *     MiPrefetchDriverPages @ 0x1405E7A30 (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x140689B40 (MiChargeSegmentCommit.c)
 *     MiBuildImageControlArea @ 0x1406AC318 (MiBuildImageControlArea.c)
 *     MiInitializePrototypePtes @ 0x1406FF6DC (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x1406FF7F0 (MiParseImageSectionHeaders.c)
 *     MiAddMappedPtes @ 0x140700630 (MiAddMappedPtes.c)
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x1408C6A40 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}

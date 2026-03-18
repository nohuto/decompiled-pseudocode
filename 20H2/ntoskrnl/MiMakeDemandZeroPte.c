/*
 * XREFs of MiMakeDemandZeroPte @ 0x1402AD380
 * Callers:
 *     MiMakeLargePageTable @ 0x14053BF14 (MiMakeLargePageTable.c)
 *     MiAddMappedPtes @ 0x140658B60 (MiAddMappedPtes.c)
 *     MiInitializePrototypePtes @ 0x14068304C (MiInitializePrototypePtes.c)
 *     MiPrefetchDriverPages @ 0x1406B26C0 (MiPrefetchDriverPages.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 *     MiBuildImageControlArea @ 0x14070AFF8 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x14070B470 (MiParseImageSectionHeaders.c)
 *     MiSessionCreate @ 0x14078242C (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x1408C9120 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F));
}

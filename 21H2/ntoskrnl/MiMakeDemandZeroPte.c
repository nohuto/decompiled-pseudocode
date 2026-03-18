/*
 * XREFs of MiMakeDemandZeroPte @ 0x14026E548
 * Callers:
 *     MiChargeSegmentCommit @ 0x1406A4140 (MiChargeSegmentCommit.c)
 *     MiAddMappedPtes @ 0x1406F40E0 (MiAddMappedPtes.c)
 *     MiParseImageSectionHeaders @ 0x1406F4230 (MiParseImageSectionHeaders.c)
 *     MiPrefetchDriverPages @ 0x1406F4650 (MiPrefetchDriverPages.c)
 *     MiInitializePrototypePtes @ 0x1406F4768 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x14070893C (MiBuildImageControlArea.c)
 *     MmFreeNonCachedMemory @ 0x14096A680 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1, __int64 a2)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F), a2);
}

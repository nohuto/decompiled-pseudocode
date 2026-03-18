/*
 * XREFs of MiMakeDemandZeroPte @ 0x1402B6020
 * Callers:
 *     MiMakeLargePageTable @ 0x140538544 (MiMakeLargePageTable.c)
 *     MiInitializePrototypePtes @ 0x14060A974 (MiInitializePrototypePtes.c)
 *     MiAddMappedPtes @ 0x14060AA90 (MiAddMappedPtes.c)
 *     MiParseImageSectionHeaders @ 0x14060B1B0 (MiParseImageSectionHeaders.c)
 *     MiChargeSegmentCommit @ 0x14060BEA0 (MiChargeSegmentCommit.c)
 *     MiPrefetchDriverPages @ 0x1406DAAC0 (MiPrefetchDriverPages.c)
 *     MiBuildImageControlArea @ 0x1406F14F0 (MiBuildImageControlArea.c)
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 *     MmFreeNonCachedMemory @ 0x1408C32E0 (MmFreeNonCachedMemory.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeDemandZeroPte(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiSwizzleInvalidPte(32LL * (a1 & 0x1F), a2, a3, a4);
}

/*
 * XREFs of MiMakeSubsectionPte @ 0x1402D57AC
 * Callers:
 *     MiInitializePrototypePtes @ 0x14068304C (MiInitializePrototypePtes.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 *     MiBuildImageControlArea @ 0x14070AFF8 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x14070B470 (MiParseImageSectionHeaders.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}

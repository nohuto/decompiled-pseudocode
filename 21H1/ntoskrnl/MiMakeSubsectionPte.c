/*
 * XREFs of MiMakeSubsectionPte @ 0x1402BCB7C
 * Callers:
 *     MiInitializePrototypePtes @ 0x14063FAC4 (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x140640300 (MiParseImageSectionHeaders.c)
 *     MiBuildImageControlArea @ 0x1406D043C (MiBuildImageControlArea.c)
 *     MiAllocatePerSessionProtos @ 0x1406E69C8 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}

/*
 * XREFs of MiMakeSubsectionPte @ 0x14030312C
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x14061BC08 (MiAllocatePerSessionProtos.c)
 *     MiBuildImageControlArea @ 0x1406AC318 (MiBuildImageControlArea.c)
 *     MiInitializePrototypePtes @ 0x1406FF6DC (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x1406FF7F0 (MiParseImageSectionHeaders.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}

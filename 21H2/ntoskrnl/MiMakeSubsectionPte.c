/*
 * XREFs of MiMakeSubsectionPte @ 0x1402F83DC
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406BCA38 (MiAllocatePerSessionProtos.c)
 *     MiBuildImageControlArea @ 0x1406D5038 (MiBuildImageControlArea.c)
 *     MiInitializePrototypePtes @ 0x1406E82FC (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x1406E8410 (MiParseImageSectionHeaders.c)
 *     MiAllocateFileExtents @ 0x1408CF510 (MiAllocateFileExtents.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40));
}

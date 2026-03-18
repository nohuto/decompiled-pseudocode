/*
 * XREFs of MiMakeSubsectionPte @ 0x140263B4C
 * Callers:
 *     MiInitializePrototypePtes @ 0x14060A974 (MiInitializePrototypePtes.c)
 *     MiParseImageSectionHeaders @ 0x14060B1B0 (MiParseImageSectionHeaders.c)
 *     MiBuildImageControlArea @ 0x1406F14F0 (MiBuildImageControlArea.c)
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiSwizzleInvalidPte(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40), a2, a3, a4);
}

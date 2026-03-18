/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1405498B4
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14054991C (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(
      MemoryMap,
      0x8000u,
      HvlpHibernateScratchPage,
      (unsigned int)(HvlpHibernateScratchPageCount << 12),
      0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}

/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1404F7C4C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1404F7CB4 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x140388060 (PoSetHiberRange.c)
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

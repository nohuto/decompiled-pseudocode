/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1406BD774
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14029F2D0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x1402A0AE0 (MiFlushAllHintedStorePages.c)
 */

__int64 MmStoreFlushAllHintedPages()
{
  return MiFlushAllHintedStorePages();
}

/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x1407F8CD8
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1403773B0 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x1403773D8 (MiFlushAllHintedStorePages.c)
 */

__int64 MmStoreFlushAllHintedPages()
{
  return MiFlushAllHintedStorePages();
}

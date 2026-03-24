/*
 * XREFs of MmStoreFlushAllHintedPages @ 0x14070F124
 * Callers:
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14035A530 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 * Callees:
 *     MiFlushAllHintedStorePages @ 0x14035BBB0 (MiFlushAllHintedStorePages.c)
 */

__int64 MmStoreFlushAllHintedPages()
{
  return MiFlushAllHintedStorePages();
}

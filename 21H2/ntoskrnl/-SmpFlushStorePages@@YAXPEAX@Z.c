/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1403773B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1407F8CD8 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}

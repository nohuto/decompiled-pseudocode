/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140331B30
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1406E41E0 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}

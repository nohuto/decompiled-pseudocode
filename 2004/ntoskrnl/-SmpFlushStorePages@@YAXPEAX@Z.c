/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1403112E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1406D29EC (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}

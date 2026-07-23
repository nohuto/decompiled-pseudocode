/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14029F2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1406BD774 (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}

/*
 * XREFs of ?SmpFlushStorePages@@YAXPEAX@Z @ 0x1402D22F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MmStoreFlushAllHintedPages @ 0x1406564DC (MmStoreFlushAllHintedPages.c)
 */

void __fastcall SmpFlushStorePages(PRKEVENT Event)
{
  MmStoreFlushAllHintedPages();
  KeSetEvent(Event, 0, 0);
}

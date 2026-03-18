/*
 * XREFs of _InitModuleAllocations@0 @ 0xEAA64
 * Callers:
 *     <none>
 * Callees:
 *     ?InitPostMortemLogging@@YGXXZ @ 0xEAABC (-InitPostMortemLogging@@YGXXZ.c)
 */

void __stdcall InitModuleAllocations()
{
  InitPostMortemLogging();
  InitExtraInstrumentations();
}

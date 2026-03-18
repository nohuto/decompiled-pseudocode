/*
 * XREFs of _EditionIsAppForeground@4 @ 0x141997
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0xC7072 (-CompositeAppHasForeground@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 */

BOOL __stdcall EditionIsAppForeground(void *a1)
{
  return CoreWindowProp::CompositeAppHasForeground(a1);
}

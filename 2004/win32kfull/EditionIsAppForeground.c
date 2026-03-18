/*
 * XREFs of EditionIsAppForeground @ 0x1C01D3130
 * Callers:
 *     <none>
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0007CEC (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EditionIsAppForeground(const struct tagWND *a1)
{
  return CoreWindowProp::CompositeAppHasForeground(a1);
}

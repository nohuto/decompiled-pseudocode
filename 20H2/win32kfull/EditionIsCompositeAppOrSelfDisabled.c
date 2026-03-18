/*
 * XREFs of EditionIsCompositeAppOrSelfDisabled @ 0x1C0208CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0012B48 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall EditionIsCompositeAppOrSelfDisabled(const struct tagWND *a1)
{
  return CoreWindowProp::IsCompositeAppOrSelfDisabled(a1);
}

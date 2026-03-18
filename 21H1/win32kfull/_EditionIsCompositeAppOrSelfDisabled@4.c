/*
 * XREFs of _EditionIsCompositeAppOrSelfDisabled@4 @ 0x16F395
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x269F0 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 */

int __stdcall EditionIsCompositeAppOrSelfDisabled(struct tagWND *a1)
{
  return CoreWindowProp::IsCompositeAppOrSelfDisabled(a1);
}

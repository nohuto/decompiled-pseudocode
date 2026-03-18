/*
 * XREFs of _PDEVOBJ_bCreateDefaultBrushesWrap@4 @ 0xAC5FA
 * Callers:
 *     <none>
 * Callees:
 *     ?bCreateDefaultBrushes@PDEVOBJ@@QAEHXZ @ 0xAC60C (-bCreateDefaultBrushes@PDEVOBJ@@QAEHXZ.c)
 */

int __stdcall PDEVOBJ_bCreateDefaultBrushesWrap(PDEVOBJ *a1)
{
  return PDEVOBJ::bCreateDefaultBrushes(a1);
}

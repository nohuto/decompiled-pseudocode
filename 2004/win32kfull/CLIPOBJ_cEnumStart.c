/*
 * XREFs of CLIPOBJ_cEnumStart @ 0x1C00CCCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CD2A0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

ULONG __stdcall CLIPOBJ_cEnumStart(CLIPOBJ *pco, BOOL bAll, ULONG iType, ULONG iDirection, ULONG cLimit)
{
  return XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, bAll, iType, iDirection, cLimit);
}

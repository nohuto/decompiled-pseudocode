/*
 * XREFs of PATHOBJ_bPolyLineTo @ 0x1C00C6210
 * Callers:
 *     <none>
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C0024110 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 */

BOOL __stdcall PATHOBJ_bPolyLineTo(PATHOBJ *ppo, POINTFIX *pptfx, ULONG cptfx)
{
  return EPATHOBJ::bPolyLineTo((EPATHOBJ *)ppo, 0LL, (struct _POINTL *)pptfx, cptfx);
}

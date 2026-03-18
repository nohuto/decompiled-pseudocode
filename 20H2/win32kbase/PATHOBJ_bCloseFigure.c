/*
 * XREFs of PATHOBJ_bCloseFigure @ 0x1C00C6FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C00999B0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 */

BOOL __stdcall PATHOBJ_bCloseFigure(PATHOBJ *ppo)
{
  return EPATHOBJ::bCloseFigure((EPATHOBJ *)ppo);
}

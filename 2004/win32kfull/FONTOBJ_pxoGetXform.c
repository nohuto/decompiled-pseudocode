/*
 * XREFs of FONTOBJ_pxoGetXform @ 0x1C0293FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

XFORMOBJ *__stdcall FONTOBJ_pxoGetXform(FONTOBJ *pfo)
{
  return (XFORMOBJ *)&pfo[3].sizLogResPpi;
}

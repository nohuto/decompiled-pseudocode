/*
 * XREFs of _CLIPOBJ_ppoGetPath@4 @ 0x1CCCD7
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ @ 0x1CCB24 (-ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ.c)
 */

PATHOBJ *__stdcall CLIPOBJ_ppoGetPath(CLIPOBJ *pco)
{
  return XCLIPOBJ::ppoGetPath((XCLIPOBJ *)pco);
}

/*
 * XREFs of _EngMovePointer@16 @ 0x1CDDD0
 * Callers:
 *     <none>
 * Callees:
 *     _EngpMovePointer@20 @ 0x1CDDEA (_EngpMovePointer@20.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y);
}

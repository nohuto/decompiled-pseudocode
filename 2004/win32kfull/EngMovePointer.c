/*
 * XREFs of EngMovePointer @ 0x1C026FE00
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C0053A18 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, prcl, 0);
}

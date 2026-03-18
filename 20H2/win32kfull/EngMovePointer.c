/*
 * XREFs of EngMovePointer @ 0x1C026E7E0
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C0107610 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, prcl, 0);
}

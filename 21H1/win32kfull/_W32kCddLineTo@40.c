/*
 * XREFs of _W32kCddLineTo@40 @ 0x1D47F5
 * Callers:
 *     <none>
 * Callees:
 *     _EngLineTo@36 @ 0xBDF44 (_EngLineTo@36.c)
 */

BOOL __stdcall W32kCddLineTo(
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix,
        HDEV a10)
{
  BOOL result; // eax

  *(pso != 0 ? &pso[8].hdev : (HDEV *)444) = a10;
  result = EngLineTo(pso, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
  *(pso != 0 ? &pso[8].hdev : (HDEV *)444) = 0;
  return result;
}

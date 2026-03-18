/*
 * XREFs of _W32kCddStrokePath@36 @ 0x1D4841
 * Callers:
 *     <none>
 * Callees:
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 */

BOOL __stdcall W32kCddStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix,
        HDEV a9)
{
  BOOL result; // eax

  *(pso != 0 ? &pso[8].hdev : (HDEV *)444) = a9;
  result = EngStrokePath(pso, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  *(pso != 0 ? &pso[8].hdev : (HDEV *)444) = 0;
  return result;
}

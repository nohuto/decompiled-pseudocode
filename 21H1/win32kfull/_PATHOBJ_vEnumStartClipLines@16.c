/*
 * XREFs of _PATHOBJ_vEnumStartClipLines@16 @ 0x223A36
 * Callers:
 *     <none>
 * Callees:
 *     ?vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x22389D (-vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z.c)
 */

void __stdcall PATHOBJ_vEnumStartClipLines(PATHOBJ *ppo, CLIPOBJ *pco, SURFOBJ *pso, LINEATTRS *pla)
{
  XCLIPOBJ::vEnumPathStart((XCLIPOBJ *)pco, ppo, pso != 0 ? (struct SURFACE *)&pso[-1].lDelta : 0, pla);
}

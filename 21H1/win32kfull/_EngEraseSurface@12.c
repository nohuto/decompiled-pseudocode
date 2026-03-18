/*
 * XREFs of _EngEraseSurface@12 @ 0x93A4A
 * Callers:
 *     ?vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z @ 0x935DE (-vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     _NtGdiEngEraseSurface@12 @ 0x2181D1 (_NtGdiEngEraseSurface@12.c)
 * Callees:
 *     ?vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z @ 0x55928 (-vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z.c)
 */

BOOL __stdcall EngEraseSurface(SURFOBJ *pso, RECTL *prcl, ULONG iColor)
{
  unsigned int v3; // edi
  SURFOBJ *v4; // ecx
  LONG *v5; // esi
  int v7; // [esp+0h] [ebp-4h]

  v4 = pso;
  v5 = pso != 0 ? &pso[-1].lDelta : 0;
  if ( !v5 )
    return 0;
  pso = (SURFOBJ *)*(pso != 0 ? &pso->hdev : (HDEV *)28);
  PDEVOBJ::vSync((PDEVOBJ *)&pso, v4, 0, 0);
  vDIBSolidBlt(prcl, v5, 0, iColor, 0, v3, v7);
  return 1;
}

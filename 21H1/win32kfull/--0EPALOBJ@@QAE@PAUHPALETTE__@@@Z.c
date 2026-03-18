/*
 * XREFs of ??0EPALOBJ@@QAE@PAUHPALETTE__@@@Z @ 0xA9642
 * Callers:
 *     ?DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z @ 0xF6256 (-DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z @ 0xF62A8 (-DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z @ 0xF62D8 (-DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 * Callees:
 *     <none>
 */

EPALOBJ *__thiscall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)this = HmgShareLockCheck(a2, 8);
  return this;
}

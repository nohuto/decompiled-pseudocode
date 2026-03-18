/*
 * XREFs of ??1EPALOBJ@@QAE@XZ @ 0xAAD84
 * Callers:
 *     ?DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z @ 0xF6256 (-DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z @ 0xF62A8 (-DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z @ 0xF62D8 (-DxEngSyncPaletteTableWithDevice@@YGHPAUHPALETTE__@@PAUHDEV__@@@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 *     _NtGdiResizePalette@8 @ 0x21E909 (_NtGdiResizePalette@8.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     <none>
 */

void __thiscall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  if ( *(_DWORD *)this )
    DEC_SHARE_REF_CNT(*(_DWORD *)this);
}

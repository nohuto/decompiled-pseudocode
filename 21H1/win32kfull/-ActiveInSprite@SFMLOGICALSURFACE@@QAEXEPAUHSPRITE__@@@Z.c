/*
 * XREFs of ?ActiveInSprite@SFMLOGICALSURFACE@@QAEXEPAUHSPRITE__@@@Z @ 0x2474C
 * Callers:
 *     ?SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z @ 0x246B2 (-SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall SFMLOGICALSURFACE::ActiveInSprite(SFMLOGICALSURFACE *this, unsigned __int8 a2, HSPRITE a3)
{
  *((_DWORD *)this + 39) ^= (*((_DWORD *)this + 39) ^ (4 * a2)) & 4;
  *((_DWORD *)this + 49) = (*((_DWORD *)this + 39) & 4) != 0 ? a3 : 0;
}

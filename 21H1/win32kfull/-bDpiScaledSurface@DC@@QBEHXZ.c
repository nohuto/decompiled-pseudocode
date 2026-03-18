/*
 * XREFs of ?bDpiScaledSurface@DC@@QBEHXZ @ 0x11CEA
 * Callers:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPADPAU_DRAWSTREAMINFO@@@Z @ 0x5E070 (-NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPAD.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z @ 0x79F82 (-GreExtSelectClipRgnLocked@@YGHAAVXDCOBJ@@PAU_RECTL@@H@Z.c)
 *     ?vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z @ 0x1D11D0 (-vSetDpiScaling@DC@@QAEXVPOINTFL@@@Z.c)
 *     ?vGet_sizlWindow@DC@@QBEXPAUtagSIZE@@@Z @ 0x24754A (-vGet_sizlWindow@DC@@QBEXPAUtagSIZE@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall DC::bDpiScaledSurface(DC *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 126);
  return v1 && (*(_DWORD *)(v1 + 76) & 0x800) != 0;
}

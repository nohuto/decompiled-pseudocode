/*
 * XREFs of ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z @ 0x24B32
 * Callers:
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     _GreAdjustSpriteDirtyAccum@24 @ 0x1FEC6 (_GreAdjustSpriteDirtyAccum@24.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z @ 0x22222 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ @ 0x24AAC (-CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall SFMLOGICALSURFACE::vDirtyRegionAccum(SFMLOGICALSURFACE *this, struct REGION *a2)
{
  *((_DWORD *)this + 11) = a2;
  EtwTraceLifetimeAccum(*(_DWORD *)this, *(int *)this >> 31, 1, a2);
}

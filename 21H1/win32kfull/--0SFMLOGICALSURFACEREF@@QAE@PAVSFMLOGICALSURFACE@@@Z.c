/*
 * XREFs of ??0SFMLOGICALSURFACEREF@@QAE@PAVSFMLOGICALSURFACE@@@Z @ 0x2461E
 * Callers:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE (-bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@.c)
 * Callees:
 *     <none>
 */

SFMLOGICALSURFACEREF *__thiscall SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF(
        SFMLOGICALSURFACEREF *this,
        struct SFMLOGICALSURFACE *a2)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 1;
  if ( a2 && *(_DWORD *)a2 )
    *(_DWORD *)this = HmgLock(*(_DWORD *)a2, 18);
  return this;
}

/*
 * XREFs of ?CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ @ 0x24AAC
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x24A46 (-DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6 (-vClearMoveData@METAREGION@@QAEXH@Z.c)
 *     ?vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z @ 0x24B32 (-vDirtyRegionAccum@SFMLOGICALSURFACE@@QAEXPAVREGION@@@Z.c)
 */

void __thiscall SFMLOGICALSURFACE::CleanupRegions(REGION **this)
{
  REGION *v2; // ecx

  REGION::vDeleteREGION(this[12]);
  v2 = this[11];
  this[12] = 0;
  REGION::vDeleteREGION(v2);
  SFMLOGICALSURFACE::vDirtyRegionAccum((SFMLOGICALSURFACE *)this, 0);
  REGION::vDeleteREGION(this[20]);
  this[20] = 0;
  METAREGION::vClearMoveData((METAREGION *)(this + 20), 1);
}

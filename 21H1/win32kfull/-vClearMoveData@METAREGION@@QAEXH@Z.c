/*
 * XREFs of ?vClearMoveData@METAREGION@@QAEXH@Z @ 0x24AE6
 * Callers:
 *     ?GrepSfmGetDirtyRgn@@YGJPAVSFMLOGICALSURFACE@@_KPAPAUHRGN__@@222PAU_POINTL@@PAH4@Z @ 0x227E8 (-GrepSfmGetDirtyRgn@@YGJPAVSFMLOGICALSURFACE@@_KPAPAUHRGN__@@222PAU_POINTL@@PAH4@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ @ 0x24AAC (-CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ.c)
 *     ?vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z @ 0x60D20 (-vSpUpdateDirtyRgn@@YGXPAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUHDC__@@PAUtagRECT@@PAKH@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z @ 0x2285DC (-bIntersectMoveWithDirty@METAREGION@@AAEHPAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AAEHPAVREGION@@H@Z @ 0x2287C0 (-bTrimMoveWithRegion@METAREGION@@AAEHPAVREGION@@H@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AAEHPAU_RECTL@@@Z @ 0x228969 (-vAddRectToMoveRegionHelper@METAREGION@@AAEHPAU_RECTL@@@Z.c)
 *     ?vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z @ 0x228A76 (-vApplyMoveData@METAREGION@@AAEHPAU_RECTL@@PAU_POINTL@@PAVREGION@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AAEXXZ @ 0x228D7A (-vCalculateNoMoveDirty@METAREGION@@AAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall METAREGION::vClearMoveData(METAREGION *this, int a2)
{
  REGION *v3; // ecx
  REGION *v4; // ecx
  REGION *v5; // ecx

  v3 = (REGION *)*((_DWORD *)this + 2);
  if ( v3 && a2 )
    REGION::vDeleteREGION(v3);
  v4 = (REGION *)*((_DWORD *)this + 1);
  if ( v4 )
  {
    REGION::vDeleteREGION(v4);
    *((_DWORD *)this + 1) = 0;
  }
  v5 = (REGION *)*((_DWORD *)this + 5);
  if ( v5 && a2 )
    REGION::vDeleteREGION(v5);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 6) = 0;
}

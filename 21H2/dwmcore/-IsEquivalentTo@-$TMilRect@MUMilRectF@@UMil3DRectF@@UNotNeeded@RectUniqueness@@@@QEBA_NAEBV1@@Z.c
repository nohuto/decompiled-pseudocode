/*
 * XREFs of ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006767C
 * Callers:
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180014DEC (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006755C (-SetSurfaceContentRect@CSurfaceBrush@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGETRECT@@@Z @ 0x1800675B4 (-ProcessSetTouchTargetRect@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETTOUCHTARGET.c)
 *     ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18023EAF8 (-SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x1802443C8 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(float *a1, float *a2)
{
  char v2; // dl
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8

  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] )
    return 1;
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a1)
    && (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v4) )
  {
    return 1;
  }
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(v5) )
  {
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(v6) )
      return 1;
  }
  return v2;
}

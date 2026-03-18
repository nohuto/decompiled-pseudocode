/*
 * XREFs of ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017E568
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18007BF90 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080130 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 */

char __fastcall COverlayContext::RectIntersectsDirty(__int64 a1, float *a2)
{
  char v2; // r8
  __int64 v3; // r11
  unsigned int v4; // r9d
  int v5; // r9d
  unsigned int v6; // r10d

  v2 = 0;
  v3 = a1;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 11040) )
  {
    while ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               (float *)(16LL * v4 + v3 + 11044),
               a2) )
    {
      v4 = v5 + 1;
      if ( v4 >= v6 )
        return v2;
    }
    return 1;
  }
  return v2;
}

/*
 * XREFs of ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800C9230
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DiscardIfOccluded@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B5984 (-DiscardIfOccluded@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800DF6AC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     <none>
 */

char __fastcall CArrayBasedCoverageSet::IsCovered(__int64 *a1, float *a2, int a3)
{
  unsigned int v4; // r9d
  __int128 v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // r8
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm6_4

  v4 = *((_DWORD *)a1 + 6);
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 1;
  v5 = *(_OWORD *)a2;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = *a1;
    v8 = *((float *)&v5 + 3);
    v9 = *((float *)&v5 + 1);
    while ( *(_DWORD *)(v7 + 36 * v6 + 16) < a3 )
    {
      v11 = *(float *)(v7 + 36 * v6 + 8);
      v12 = *(float *)(v7 + 36 * v6);
      if ( v11 > v12 )
      {
        v13 = *(float *)(v7 + 36 * v6 + 12);
        v14 = *(float *)(v7 + 36 * v6 + 4);
        if ( v13 > v14 && *(float *)&v5 >= v12 && v11 >= *((float *)&v5 + 2) )
        {
          if ( v9 < v14 )
          {
            if ( v13 >= v8 && v8 > v14 )
              v8 = *(float *)(v7 + 36 * v6 + 4);
          }
          else
          {
            if ( v13 >= v8 )
              return 1;
            if ( v13 > v9 )
              v9 = *(float *)(v7 + 36 * v6 + 12);
          }
        }
      }
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v4 )
        return 0;
    }
  }
  return 0;
}

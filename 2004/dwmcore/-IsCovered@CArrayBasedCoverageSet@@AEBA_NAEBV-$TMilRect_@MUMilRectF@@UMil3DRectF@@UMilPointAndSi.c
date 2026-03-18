/*
 * XREFs of ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800AA650
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x180060FC0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18007D874 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18007F77C (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080130 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 */

char __fastcall CArrayBasedCoverageSet::IsCovered(__int64 *a1, float *a2, int a3)
{
  __int64 v3; // r10
  char v4; // si
  __int64 *v6; // r9
  int v7; // edi
  unsigned int v8; // r8d
  __int64 v9; // r14
  int v10; // r15d
  int v11; // ebp
  unsigned int v12; // ecx
  __int64 v13; // rdx
  float v14; // xmm0_4
  float v15; // xmm1_4
  int v16; // eax
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm3_4
  bool DoesIntersectUnsafe; // al
  int v23; // r8d
  unsigned int v24; // r11d
  __int128 v25; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v4 = 0;
  v6 = a1;
  v7 = 0;
  v8 = 0;
  if ( *((_DWORD *)a1 + 104) )
  {
    v9 = a1[49];
    do
    {
      v10 = v7;
      v11 = *(_DWORD *)(v9 + 36LL * v8 + 16);
      if ( v11 > a3 )
        break;
      DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                              (float *)(v9 + 36LL * v8),
                              a2);
      v7 = v11;
      if ( DoesIntersectUnsafe )
        v4 = 1;
      v8 = v23 + 1;
      if ( !DoesIntersectUnsafe )
        v7 = v10;
    }
    while ( v8 < v24 );
  }
  v12 = *((_DWORD *)v6 + 6);
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 1;
  v25 = *(_OWORD *)a2;
  if ( v12 )
  {
    v13 = *v6;
    v14 = *((float *)&v25 + 3);
    v15 = *((float *)&v25 + 1);
    do
    {
      v16 = *(_DWORD *)(v13 + 36 * v3 + 16);
      if ( v16 >= a3 )
        break;
      v18 = *(float *)(v13 + 36 * v3 + 8);
      v19 = *(float *)(v13 + 36 * v3);
      if ( v18 > v19 )
      {
        v20 = *(float *)(v13 + 36 * v3 + 12);
        v21 = *(float *)(v13 + 36 * v3 + 4);
        if ( v20 > v21 && (!v4 || v16 > v7) && *(float *)&v25 >= v19 && v18 >= *((float *)&v25 + 2) )
        {
          if ( v15 >= v21 )
          {
            if ( v20 >= v14 )
              return 1;
            if ( v20 > v15 )
              v15 = *(float *)(v13 + 36 * v3 + 12);
          }
          else if ( v20 >= v14 && v14 > v21 )
          {
            v14 = *(float *)(v13 + 36 * v3 + 4);
          }
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v12 );
  }
  return 0;
}

/*
 * XREFs of ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18018D268
 * Callers:
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180067630 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180068020 (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ceilf_0 @ 0x1800EBCE7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EBCFF (floorf_0.c)
 */

void __fastcall InflateRectF_InPlace(float *a1, float a2)
{
  float *v3; // rcx
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4

  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(a1, a2, a2);
  v4 = *v3;
  if ( COERCE_FLOAT(*(_DWORD *)v3 & _xmm) < 8388608.0 )
    v4 = (float)(int)floorf_0(v4);
  v5 = a1[1];
  *a1 = v4;
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) < 8388608.0 )
    v5 = (float)(int)floorf_0(v5);
  v6 = a1[2];
  a1[1] = v5;
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) < 8388608.0 )
    v6 = (float)(int)ceilf_0(v6);
  v7 = a1[3];
  a1[2] = v6;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) < 8388608.0 )
    v7 = (float)(int)ceilf_0(v7);
  a1[3] = v7;
}

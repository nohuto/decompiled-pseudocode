/*
 * XREFs of ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800892B0
 * Callers:
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180088E30 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180190BF0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm1_4
  unsigned int v5; // r8d
  float v7; // xmm1_4
  __int64 v8; // rcx
  float v9; // xmm1_4
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rdx

  v4 = a1[1];
  v5 = 0;
  if ( *(float *)(a2 + 4) > v4 )
  {
    *(float *)(a4 + 4) = v4;
    v5 = 1;
    *(_DWORD *)(a4 + 12) = *(_DWORD *)(a2 + 4);
    *(float *)a4 = *a1;
    *(float *)(a4 + 8) = a1[2];
  }
  v7 = *a1;
  if ( *(float *)a2 > *a1 )
  {
    v8 = 2LL * v5++;
    *(float *)(a4 + 8 * v8) = v7;
    *(_DWORD *)(a4 + 8 * v8 + 8) = *(_DWORD *)a2;
    *(_DWORD *)(a4 + 8 * v8 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a4 + 8 * v8 + 12) = *(_DWORD *)(a2 + 12);
  }
  v9 = *(float *)(a2 + 8);
  if ( a1[2] > v9 )
  {
    if ( v5 < 4 )
    {
      v10 = 2LL * v5;
      *(float *)(a4 + 8 * v10) = v9;
      *(float *)(a4 + 8 * v10 + 8) = a1[2];
      *(_DWORD *)(a4 + 8 * v10 + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a4 + 8 * v10 + 12) = *(_DWORD *)(a2 + 12);
    }
    ++v5;
  }
  v11 = *(float *)(a2 + 12);
  if ( a1[3] > v11 )
  {
    if ( v5 < 4 )
    {
      v12 = 2LL * v5;
      *(float *)(a4 + 8 * v12 + 4) = v11;
      *(float *)(a4 + 8 * v12 + 12) = a1[3];
      *(float *)(a4 + 8 * v12) = *a1;
      *(float *)(a4 + 8 * v12 + 8) = a1[2];
    }
    ++v5;
  }
  return v5;
}

/*
 * XREFs of ?AddWorldBoundsToDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@PEAVSubTreeContext@1@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D53A8
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800B73B8 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800D49D8 (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@PEBVCVisualT.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CPreComputeContext::AddWorldBoundsToDirtyRegion(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10

  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a4) )
    return 0LL;
  LOBYTE(v5) = 1;
  return CDirtyRegion::Add(*(_QWORD *)(v7 + 424), v4, v5, v6);
}

/*
 * XREFs of ?GetUnoptimizedBounds@CDirtyRegion@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C088C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180094DD0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180077110 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetUnoptimizedDirtyRects@CDirtyRegion@@IEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C08F4 (-GetUnoptimizedDirtyRects@CDirtyRegion@@IEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 */

__int64 __fastcall CDirtyRegion::GetUnoptimizedBounds(__int64 a1, __int64 a2)
{
  float *v3; // rdx
  float *v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  float *v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_BYTE *)(a1 + 4456) )
  {
    *(_OWORD *)a2 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    CDirtyRegion::GetUnoptimizedDirtyRects(a1, &v7);
    v3 = v8;
    v4 = &v8[4 * v7];
    while ( v3 != v4 )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, v3);
      v3 = (float *)(v5 + 16);
    }
  }
  return a2;
}

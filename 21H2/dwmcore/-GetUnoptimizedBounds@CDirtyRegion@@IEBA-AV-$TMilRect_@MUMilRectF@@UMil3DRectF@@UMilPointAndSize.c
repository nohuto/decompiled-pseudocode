/*
 * XREFs of ?GetUnoptimizedBounds@CDirtyRegion@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800D3744
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

float *__fastcall CDirtyRegion::GetUnoptimizedBounds(__int64 a1, float *a2)
{
  float *v2; // r11
  float *v3; // rdx
  float *v4; // rbx
  __int64 v5; // rdx

  v2 = a2;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  if ( *(_BYTE *)(a1 + 4424) )
  {
    *(_OWORD *)a2 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    v3 = (float *)(a1 + 1568);
    v4 = (float *)(a1 + 1696);
    while ( v3 != v4 )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v2, v3);
      v3 = (float *)(v5 + 16);
    }
  }
  return v2;
}

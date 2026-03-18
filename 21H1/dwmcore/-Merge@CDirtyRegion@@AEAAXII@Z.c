/*
 * XREFs of ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800B8D28
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180061FD0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AA870 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x1800B8EB4 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x1800BE6A0 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 */

void __fastcall CDirtyRegion::Merge(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  float v12[10]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a2;
  v6 = 16LL * a3;
  v7 = a3;
  *(_OWORD *)v12 = *((_OWORD *)this + a2 + 100);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v12, (float *)((char *)this + v6 + 1600));
  v5 *= 16LL;
  *(_OWORD *)((char *)this + 8 * v8) = *(_OWORD *)v12;
  CDirtyRegion::CalcDirtyRegionCachedData(v9, v12, (char *)this + v5 + 1984);
  *(_DWORD *)((char *)this + v6 + 1992) = 0;
  *(_DWORD *)((char *)this + v6 + 1988) = 0;
  *((_BYTE *)this + v6 + 1996) = 1;
  *((_DWORD *)this + 4 * v7 + 496) = 0;
  v10 = (_DWORD *)((char *)this + 16 * v7 + 1600);
  v10[3] = 0;
  v10[2] = 0;
  v10[1] = 0;
  *v10 = 0;
  CDirtyRegion::UpdateAcceleration(this, a2);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
    (float *)((char *)this + v5 + 1728),
    (float *)((char *)this + v6 + 1728));
  v11 = (_DWORD *)((char *)this + 16 * v7 + 1728);
  v11[3] = 0;
  v11[2] = 0;
  v11[1] = 0;
  *v11 = 0;
  CDirtyRegion::AppendDirtyRegionLists(this, a2, v7);
}

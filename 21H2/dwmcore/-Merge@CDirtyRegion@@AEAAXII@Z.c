/*
 * XREFs of ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800D2BD8
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A3D00 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x180085688 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z @ 0x1800D2D0C (-AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x1800D8F58 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CDirtyRegion::Merge(CDirtyRegion *this, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r11
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _DWORD *v11; // r11
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2;
  v6 = 16LL * a3;
  v7 = a3;
  v12 = *((_OWORD *)this + a2 + 98);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
    (float *)&v12,
    (float *)((char *)this + v6 + 1568));
  v5 *= 16LL;
  *(_OWORD *)((char *)this + 8 * v8) = v12;
  CDirtyRegion::CalcDirtyRegionCachedData(v9, &v12, (char *)this + v5 + 1952);
  *(_DWORD *)((char *)this + v6 + 1960) = 0;
  *(_DWORD *)((char *)this + v6 + 1956) = 0;
  *((_BYTE *)this + v6 + 1964) = 1;
  *((_DWORD *)this + 4 * v7 + 488) = 0;
  v10 = (_DWORD *)((char *)this + 16 * v7 + 1568);
  v10[3] = 0;
  v10[2] = 0;
  v10[1] = 0;
  *v10 = 0;
  CDirtyRegion::UpdateAcceleration(this, a2);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
    (float *)((char *)this + v5 + 1696),
    (float *)((char *)this + v6 + 1696));
  v11 = (_DWORD *)((char *)this + 16 * v7 + 1696);
  v11[3] = 0;
  v11[2] = 0;
  v11[1] = 0;
  *v11 = 0;
  CDirtyRegion::AppendDirtyRegionLists(this, a2, v7);
}

/*
 * XREFs of ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x180256DE4
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EC3EC (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D35E0 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ??A?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_J@Z @ 0x180184514 (--A-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180257F60 (-reserve_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 */

void __fastcall CHolographicInteropTexture::CacheDirtyRegion(CHolographicInteropTexture *this)
{
  __int64 v1; // rax
  unsigned int i; // ebp
  unsigned __int64 *OptimizedDirtyRects; // rax
  _OWORD *v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 12);
  if ( !v1 || *(_BYTE *)(v1 + 4456) )
  {
    *((_BYTE *)this + 224) = 1;
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects(*((_QWORD *)this + 12), &v6); ++i )
    {
      OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(*((_QWORD *)this + 12), v7);
      v5 = (_OWORD *)gsl::span<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const,-1>::operator[](
                       OptimizedDirtyRects,
                       i);
      *(_OWORD *)detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)this + 104,
                   (__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 4) = *v5;
    }
    *((_QWORD *)this + 12) = 0LL;
  }
}

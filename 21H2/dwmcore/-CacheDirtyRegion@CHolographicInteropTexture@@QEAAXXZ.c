/*
 * XREFs of ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x18029B1A4
 * Callers:
 *     ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180299F98 (-Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800B99FC (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x18029C450 (-reserve_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS_ea_18029C450.c)
 */

void __fastcall CHolographicInteropTexture::CacheDirtyRegion(CHolographicInteropTexture *this)
{
  __int64 v2; // rcx
  gsl::details *v3; // rcx
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rsi
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( !v2 || *(_BYTE *)(v2 + 4424) )
  {
    *((_BYTE *)this + 240) = 1;
  }
  else
  {
    CDirtyRegion::GetDirtyRects(v2, v7);
    v4 = 0;
    if ( LODWORD(v7[0]) )
    {
      v5 = v7[1];
      do
      {
        if ( (unsigned __int64)v4 >= v7[0] )
        {
          gsl::details::terminate(v3);
          __debugbreak();
        }
        v6 = 2LL * v4++;
        *(_OWORD *)detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                     (char *)this + 120,
                     (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 4) = *(_OWORD *)(v5 + 8 * v6);
      }
      while ( v4 < LODWORD(v7[0]) );
    }
    *((_QWORD *)this + 14) = 0LL;
  }
}

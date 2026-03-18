/*
 * XREFs of ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180255E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C14BC (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D1330 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTexture::AddInvalidRects(
        CHolographicInteropTexture *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rbp

  if ( *((_BYTE *)this + 168) )
  {
    CDirtyRegion::SetFullDirty(a3);
    *((_BYTE *)this + 168) = 0;
  }
  else
  {
    v5 = *((_QWORD *)this + 6);
    v6 = *((_QWORD *)this + 7);
    while ( v5 != v6 )
    {
      CDirtyRegion::Add(a3);
      v5 += 16LL;
    }
  }
  detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::clear((char *)this + 48);
}

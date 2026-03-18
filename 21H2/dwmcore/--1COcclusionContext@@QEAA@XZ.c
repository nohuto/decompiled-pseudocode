/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x1800644D8
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCVisual@@@Z @ 0x180004728 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x18002736C (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800637AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180063EB4 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801C10D8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CDDARenderTarget@@UEAA@XZ @ 0x1801E0E94 (--1CDDARenderTarget@@UEAA@XZ.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180049AB0 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?clear@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180064670 (-clear@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801942BC (--_GCVisualTreePath@@QEAAPEAXI@Z.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(void **this)
{
  COcclusionContext *v2; // rcx
  unsigned int v3; // edx
  CVisualTreePath *v4; // rcx

  DefaultHeap::Free(this[190]);
  DefaultHeap::Free(this[186]);
  DefaultHeap::Free(this[182]);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 168));
  detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear(this + 105);
  v2 = (COcclusionContext *)this[105];
  this[105] = 0LL;
  if ( v2 == (COcclusionContext *)(this + 108) )
    v2 = 0LL;
  DefaultHeap::Free(v2);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 56);
  CLightStack::~CLightStack((CLightStack *)(this + 26));
  DefaultHeap::Free(this[24]);
  DefaultHeap::Free(this[20]);
  DefaultHeap::Free(this[14]);
  DefaultHeap::Free(this[6]);
  v4 = (CVisualTreePath *)this[2];
  if ( v4 )
    CVisualTreePath::`scalar deleting destructor'(v4, v3);
}

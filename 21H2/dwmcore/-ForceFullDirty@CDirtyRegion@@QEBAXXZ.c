/*
 * XREFs of ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180016094
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C2FEC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E1378 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800B99FC (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800E8D60 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDirtyRegion::ForceFullDirty(CDirtyRegion *this)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, __int64, char *); // rbx
  __int64 DirtyRects; // rax
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 4424) )
  {
    CDirtyRegion::SetFullDirty(this);
    if ( *((_QWORD *)this + 5) == GetCurrentFrameId() )
    {
      v2 = *(_QWORD *)this;
      v3 = *(void (__fastcall **)(__int64, __int64, char *))(**(_QWORD **)this + 192LL);
      DirtyRects = CDirtyRegion::GetDirtyRects(this, v5);
      v3(v2, DirtyRects, (char *)this + 16);
    }
  }
}

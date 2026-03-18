/*
 * XREFs of ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801C3404
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@@Z @ 0x1801C2BF8 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C2FEC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800B99D0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800B99FC (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1801C27E8 (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C2994 (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV-$TMilRect_@MUMilRectF@@UMi.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RenderDirtyRegion(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        struct ISwapChain *a3,
        struct CComposition **a4,
        enum CRemoteAppRenderTarget::ProtectionMode *a5)
{
  unsigned int v7; // edi
  unsigned int v10; // ebx
  struct IDeviceTarget *v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  COcclusionContext *OcclusionContext; // rax
  __int64 v15; // r9
  struct CVisualTree *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  int *v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v25; // [rsp+20h] [rbp-71h]
  __int64 v26[2]; // [rsp+50h] [rbp-41h] BYREF
  int v27[4]; // [rsp+60h] [rbp-31h] BYREF
  __int128 v28; // [rsp+70h] [rbp-21h] BYREF
  int v29; // [rsp+80h] [rbp-11h]
  int v30; // [rsp+84h] [rbp-Dh]
  int v31[4]; // [rsp+88h] [rbp-9h] BYREF

  v7 = 0;
  *(_DWORD *)a5 = 0;
  v10 = 0;
  if ( *CDirtyRegion::GetDirtyRects((__int64)a4, v31) )
  {
    CRemoteAppRenderTarget::GetTreeBounds((__int64)this, (__int64)v31);
    v11 = (struct IDeviceTarget *)(**(__int64 (__fastcall ***)(struct ISwapChain *))a3)(a3);
    v12 = CDrawingContext::BeginFrame(
            a2,
            v11,
            (CRemoteAppRenderTarget *)((char *)this + 184),
            (const struct _D3DCOLORVALUE *)((char *)this + 124),
            0LL);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x234u);
      return v10;
    }
    if ( *((_DWORD *)a4 + 705) )
    {
      do
      {
        v26[0] = 0LL;
        v26[1] = 0LL;
        CDirtyRegion::GetOptimizedRect(a4, (__int64)v27, v7, (__int64)v31, 0LL, 0LL, 0, v26, 0LL);
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v27) )
        {
          OcclusionContext = CDirtyRegion::GetOcclusionContext((CDirtyRegion *)a4);
          v29 &= v15;
          v30 &= v15;
          v16 = (struct CVisualTree *)*((_QWORD *)this + 12);
          v25 = *((_BYTE *)this + 140) != 0 ? 2 : 0;
          v28 = *(_OWORD *)v27;
          v10 = CDrawingContext::DrawVisualTree(a2, v16, (__int64)&v28, OcclusionContext, v25, v15, v15);
          if ( (v10 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v10, 0x243u);
            CDrawingContext::EndFrame((CD3DDevice **)a2);
            return v10;
          }
          v19 = v27;
          if ( *((_BYTE *)a4 + 4424) )
            v19 = 0LL;
          CRemoteAppRenderTarget::NotifyRenderedRect((__int64)this, (__int64)a3, (__int64)v19, v18);
        }
        ++v7;
      }
      while ( v7 < *((_DWORD *)a4 + 705) );
    }
    if ( *((_BYTE *)a2 + 7964) )
    {
      *(_DWORD *)a5 = 2;
    }
    else if ( *((_BYTE *)a4 + 4424) )
    {
      *(_DWORD *)a5 = 1;
    }
    v20 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    v10 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x254u);
      return v10;
    }
  }
  if ( g_LockAndReadOffscreenTarget )
  {
    v22 = (**(__int64 (__fastcall ***)(struct ISwapChain *))a3)(a3);
    v23 = *(int *)(*(_QWORD *)(v22 + 8) + 16LL) + v22 + 8;
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 24LL))(
      v23,
      ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  }
  return v10;
}

/*
 * XREFs of ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x18018ACDC
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E6ADC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018A94C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18004EDE4 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006A6C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18006B7C4 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800D39C0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18018A3BC (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018A514 (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV-$TMilRect_@MUMilRectF@@UMi.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::RenderDirtyRegion(
        CRemoteAppRenderTarget *this,
        struct CDrawingContext *a2,
        struct ISwapChain *a3)
{
  struct IDeviceTarget *v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int i; // edi
  _BYTE *v11; // rcx
  char v12; // bl
  COcclusionContext *OcclusionContext; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  __int128 *v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // [rsp+40h] [rbp-29h] BYREF
  __int128 v24; // [rsp+50h] [rbp-19h] BYREF
  __int128 v25; // [rsp+60h] [rbp-9h] BYREF
  int v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+74h] [rbp+Bh]
  float v28[4]; // [rsp+78h] [rbp+Fh] BYREF

  CRemoteAppRenderTarget::GetTreeBounds((__int64)this, (__int64)v28);
  v6 = (struct IDeviceTarget *)(**(__int64 (__fastcall ***)(struct ISwapChain *))a3)(a3);
  v7 = CDrawingContext::BeginFrame(
         a2,
         v6,
         (CRemoteAppRenderTarget *)((char *)this + 184),
         (const struct _D3DCOLORVALUE *)this + 7,
         0LL);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1F4u, 0LL);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects(*((_QWORD *)this + 22), &v23); ++i )
    {
      v11 = (_BYTE *)*((_QWORD *)this + 22);
      v25 = 0LL;
      CDirtyRegion::GetUnOccludedDirtyRect(v11, (float *)&v24, i, v28, 0, &v25, 0LL);
      if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v24) )
      {
        v12 = *((_BYTE *)this + 128);
        OcclusionContext = CDirtyRegion::GetOcclusionContext(*((CDirtyRegion **)this + 22));
        v26 = 0;
        v27 = 0;
        v14 = *((_QWORD *)this + 13);
        v25 = v24;
        v15 = CDrawingContext::DrawVisualTree(a2, v14, (__int64)&v25, OcclusionContext, v12 != 0 ? 2 : 0, 0);
        v9 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x203u, 0LL);
          CDrawingContext::EndFrame((CD3DDevice **)a2);
          return v9;
        }
        v17 = &v24;
        if ( *(_BYTE *)(*((_QWORD *)this + 22) + 4456LL) )
          v17 = 0LL;
        CRemoteAppRenderTarget::NotifyRenderedRect((__int64)this, (__int64 *)a3, (__int64)v17);
      }
    }
    v18 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    v9 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x20Au, 0LL);
    }
    else if ( g_LockAndReadOffscreenTarget )
    {
      v20 = (**(__int64 (__fastcall ***)(struct ISwapChain *))a3)(a3);
      v21 = *(int *)(*(_QWORD *)(v20 + 8) + 16LL) + v20 + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v21 + 24LL))(
        v21,
        ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
    }
  }
  return v9;
}

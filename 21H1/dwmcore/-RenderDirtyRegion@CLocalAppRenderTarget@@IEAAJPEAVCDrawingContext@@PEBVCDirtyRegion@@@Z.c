/*
 * XREFs of ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018ED90
 * Callers:
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7730 (-Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
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
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180188C9C (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018EB44 (-NotifyRenderedRect@CLocalAppRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 */

__int64 __fastcall CLocalAppRenderTarget::RenderDirtyRegion(
        CLocalAppRenderTarget *this,
        struct CDrawingContext *a2,
        const struct CDirtyRegion *a3)
{
  int v3; // eax
  float v7; // xmm0_4
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD); // rcx
  float v10; // xmm1_4
  __int64 (__fastcall *v11)(_QWORD); // rax
  struct IDeviceTarget *v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned int i; // edi
  char v17; // bl
  COcclusionContext *OcclusionContext; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // [rsp+40h] [rbp-19h] BYREF
  __int128 v24; // [rsp+50h] [rbp-9h] BYREF
  __int128 v25; // [rsp+60h] [rbp+7h] BYREF
  int v26; // [rsp+70h] [rbp+17h]
  int v27; // [rsp+74h] [rbp+1Bh]
  float v28[4]; // [rsp+78h] [rbp+1Fh] BYREF

  v3 = *((_DWORD *)this + 20);
  v28[0] = 0.0;
  v28[1] = 0.0;
  v7 = (float)v3;
  v8 = *((_DWORD *)this + 21);
  v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 19);
  v10 = (float)v8;
  v11 = **v9;
  v28[2] = v7;
  v28[3] = v10;
  v12 = (struct IDeviceTarget *)v11(v9);
  v13 = CDrawingContext::BeginFrame(a2, v12, 0LL, (const struct _D3DCOLORVALUE *)this + 7, 0LL);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x11Au, 0LL);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects((__int64)a3, &v23); ++i )
    {
      v25 = 0LL;
      CDirtyRegion::GetUnOccludedDirtyRect(a3, (float *)&v24, i, v28, 0, &v25, 0LL);
      if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v24) )
      {
        v17 = *((_BYTE *)this + 128);
        OcclusionContext = CDirtyRegion::GetOcclusionContext(a3);
        v26 = 0;
        v27 = 0;
        v19 = *((_QWORD *)this + 13);
        v25 = v24;
        v20 = CDrawingContext::DrawVisualTree(a2, v19, (__int64)&v25, OcclusionContext, v17 != 0 ? 2 : 0, 0);
        v15 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x128u, 0LL);
          goto LABEL_11;
        }
        CLocalAppRenderTarget::NotifyRenderedRect((__int64)this, (float *)&v24);
      }
    }
    if ( g_LockAndReadOffscreenTarget )
      CDrawingContext::ReadTexture(a2);
LABEL_11:
    CDrawingContext::EndFrame((CD3DDevice **)a2);
  }
  return v15;
}

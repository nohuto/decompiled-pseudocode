/*
 * XREFs of ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018A400
 * Callers:
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E8DCC (-Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18007FDB0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x180085038 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180099EC4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18009A544 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18009C794 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D2E9C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x18018420C (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018A154 (-NotifyRenderedRect@CLocalAppRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
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
  unsigned __int64 CurrentFrameId; // rax
  char v18; // cl
  COcclusionContext *v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  _QWORD v24[2]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v25; // [rsp+50h] [rbp-19h] BYREF
  __int128 v26; // [rsp+60h] [rbp-9h] BYREF
  int v27; // [rsp+70h] [rbp+7h]
  int v28; // [rsp+74h] [rbp+Bh]
  float v29[4]; // [rsp+78h] [rbp+Fh] BYREF

  v3 = *((_DWORD *)this + 20);
  v29[0] = 0.0;
  v29[1] = 0.0;
  v7 = (float)v3;
  v8 = *((_DWORD *)this + 21);
  v9 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 19);
  v10 = (float)v8;
  v11 = **v9;
  v29[2] = v7;
  v29[3] = v10;
  v12 = (struct IDeviceTarget *)v11(v9);
  v13 = CDrawingContext::BeginFrame(a2, v12, 0LL, (const struct _D3DCOLORVALUE *)this + 7, 0LL);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x11Au, 0LL);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects((__int64)a3, v24); ++i )
    {
      v26 = 0LL;
      CDirtyRegion::GetUnOccludedDirtyRect(a3, (float *)&v25, i, v29, 0, &v26, 0LL);
      if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v25) )
      {
        CurrentFrameId = GetCurrentFrameId();
        v18 = *((_BYTE *)this + 128);
        v19 = (const struct CDirtyRegion *)((char *)a3 + 16);
        v27 = 0;
        v28 = 0;
        v20 = *((_QWORD *)this + 13);
        if ( *((_QWORD *)a3 + 4) != CurrentFrameId )
          v19 = 0LL;
        v26 = v25;
        v21 = CDrawingContext::DrawVisualTree(a2, v20, (__int64)&v26, v19, v18 != 0 ? 2 : 0, 0);
        v15 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x128u, 0LL);
          goto LABEL_11;
        }
        CLocalAppRenderTarget::NotifyRenderedRect((__int64)this, (float *)&v25);
      }
    }
    if ( g_LockAndReadOffscreenTarget )
      CDrawingContext::ReadTexture(a2);
LABEL_11:
    CDrawingContext::EndFrame((CD3DDevice **)a2);
  }
  return v15;
}

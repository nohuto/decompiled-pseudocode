/*
 * XREFs of ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180186D64
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ED7C4 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180186A1C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058390 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x180075020 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007A2A8 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800908C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180092B14 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D7A7C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetTreeBounds@CRemoteAppRenderTarget@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18018645C (-GetTreeBounds@CRemoteAppRenderTarget@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801865B4 (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV-$TMilRect_@MUMilRectF@@UMi.c)
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
  unsigned __int64 CurrentFrameId; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  COcclusionContext *v15; // r9
  bool v16; // zf
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rcx
  __int128 *v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v26; // [rsp+20h] [rbp-49h]
  _QWORD v27[2]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v28; // [rsp+50h] [rbp-19h] BYREF
  __int128 v29; // [rsp+60h] [rbp-9h] BYREF
  int v30; // [rsp+70h] [rbp+7h]
  int v31; // [rsp+74h] [rbp+Bh]
  float v32[4]; // [rsp+78h] [rbp+Fh] BYREF

  CRemoteAppRenderTarget::GetTreeBounds((__int64)this, (__int64)v32);
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
    return v9;
  }
  for ( i = 0; i < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects(*((_QWORD *)this + 22), v27); ++i )
  {
    v11 = (_BYTE *)*((_QWORD *)this + 22);
    v29 = 0LL;
    CDirtyRegion::GetUnOccludedDirtyRect(v11, (float *)&v28, i, v32, 0, &v29, 0LL);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v28) )
    {
      CurrentFrameId = GetCurrentFrameId();
      v14 = *(_QWORD *)(v13 + 32);
      v30 = 0;
      v31 = 0;
      v15 = (COcclusionContext *)(v13 + 16);
      v16 = v14 == CurrentFrameId;
      v26 = *((_BYTE *)this + 128) != 0 ? 2 : 0;
      v17 = *((_QWORD *)this + 13);
      if ( !v16 )
        v15 = 0LL;
      v29 = v28;
      v18 = CDrawingContext::DrawVisualTree(a2, v17, (__int64)&v29, v15, v26, 0);
      v9 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x203u, 0LL);
        CDrawingContext::EndFrame((CD3DDevice **)a2);
        return v9;
      }
      v20 = &v28;
      if ( *(_BYTE *)(*((_QWORD *)this + 22) + 4456LL) )
        v20 = 0LL;
      CRemoteAppRenderTarget::NotifyRenderedRect((__int64)this, (__int64 *)a3, (__int64)v20);
    }
  }
  v21 = CDrawingContext::EndFrame((CD3DDevice **)a2);
  v9 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x20Au, 0LL);
  }
  else if ( g_LockAndReadOffscreenTarget )
  {
    v23 = (**(__int64 (__fastcall ***)(struct ISwapChain *))a3)(a3);
    v24 = *(int *)(*(_QWORD *)(v23 + 8) + 16LL) + v23 + 8;
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v24 + 24LL))(
      v24,
      ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  }
  return v9;
}

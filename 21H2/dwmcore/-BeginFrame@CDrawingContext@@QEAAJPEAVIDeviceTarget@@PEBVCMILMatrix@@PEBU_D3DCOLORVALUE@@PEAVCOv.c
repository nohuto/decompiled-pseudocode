/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAVCVisual@@@Z @ 0x180004728 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18003CA54 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18005C920 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800FE630 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C1768 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801C3404 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C5564 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CA42C (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E1378 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x18029A484 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18007E328 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18007E9E4 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ @ 0x180080C30 (-GetNullProcessAttribution@CProcessAttributionManager@@QEAAPEAVCProcessAttribution@@XZ.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18008B404 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18008C2EC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0ppffffubr6_EventWriteTransfer @ 0x1801127E4 (McTemplateU0ppffffubr6_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        struct IDeviceTarget *a2,
        const struct CMILMatrix *a3,
        const struct _D3DCOLORVALUE *a4,
        struct COverlayContext *a5)
{
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  _OWORD *v13; // rcx
  char v14; // al
  int v15; // eax
  __int64 v16; // rcx
  _DWORD *v17; // rax
  CProcessAttributionManager *v18; // rcx
  struct CProcessAttribution *NullProcessAttribution; // rax
  struct CProcessAttribution *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // ebx
  char v29; // si
  char *v30; // rcx
  float v31; // xmm6_4
  char *v32; // rcx
  _DWORD *v33; // rax
  int v34; // edx
  char v35; // al
  float v36; // [rsp+30h] [rbp-78h]
  __int64 v37; // [rsp+50h] [rbp-58h] BYREF
  __int64 v38; // [rsp+58h] [rbp-50h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  struct CProcessAttribution *v40; // [rsp+B0h] [rbp+8h] BYREF
  char v41; // [rsp+B8h] [rbp+10h] BYREF

  *((_OWORD *)this + 495) = 0LL;
  *((_OWORD *)this + 496) = 0LL;
  *((_QWORD *)this + 994) = 0LL;
  v9 = (**(__int64 (__fastcall ***)(struct IDeviceTarget *, __int64 *))a2)(a2, &v37);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v9;
  *((_QWORD *)this + 9) = *(_QWORD *)(v9 + 16);
  v10 = CDrawingContext::PushRenderTarget(this, a2);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xDFu);
    return v12;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    if ( !a3 || (v29 = 1, (unsigned __int8)CMILMatrix::IsIdentity<0>(a3)) )
      v29 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    {
      v30 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
      v31 = (float)*(int *)((**(__int64 (__fastcall ***)(char *, struct CProcessAttribution **))v30)(v30, &v40) + 4);
      v32 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
      v33 = (_DWORD *)(**(__int64 (__fastcall ***)(char *, char *))v32)(v32, &v41);
      v36 = (float)(int)*v33;
      McTemplateU0ppffffubr6_EventWriteTransfer(
        *v33,
        v34,
        (_DWORD)this,
        (_DWORD)a2,
        0,
        0,
        SLOBYTE(v36),
        SLOBYTE(v31),
        v29 != 0 ? 0x44 : 0,
        (__int64)a3);
    }
  }
  v13 = (_OWORD *)((char *)this + 96);
  if ( a3 )
  {
    *v13 = *(_OWORD *)a3;
    *((_OWORD *)this + 7) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 8) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 9) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 40) = *((_DWORD *)a3 + 16);
    v14 = CMILMatrix::IsIdentity<0>(v13);
  }
  else
  {
    *(_DWORD *)v13 = 1065353216;
    *(_QWORD *)((char *)this + 100) = 0LL;
    *(_QWORD *)((char *)this + 108) = 0LL;
    *(_QWORD *)((char *)this + 116) = 1065353216LL;
    *(_QWORD *)((char *)this + 124) = 0LL;
    *((_DWORD *)this + 33) = 0;
    *((_QWORD *)this + 17) = 1065353216LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_DWORD *)this + 38) = 0;
    *((_DWORD *)this + 39) = 1065353216;
    v35 = *((_BYTE *)this + 161) & 0xD7;
    *((_BYTE *)this + 160) = 85;
    *((_BYTE *)this + 161) = v35 | 0x17;
    v14 = 1;
  }
  *((_BYTE *)this + 8040) = v14;
  if ( a4 )
  {
    *((struct _D3DCOLORVALUE *)this + 5) = *(const struct _D3DCOLORVALUE *)&a4->r;
  }
  else
  {
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 6) = a5;
  *((_DWORD *)this + 75) = 1;
  *((_QWORD *)this + 38) = 1LL;
  *((_QWORD *)this + 39) = 0LL;
  v37 = 0LL;
  LOBYTE(v38) = 1;
  v15 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 3320, &v37);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x10Fu);
    return v12;
  }
  CLightStack::Clear((CDrawingContext *)((char *)this + 528));
  v17 = (_DWORD *)*((_QWORD *)this + 996);
  v18 = qword_1803D33D8;
  *((_DWORD *)this + 1991) = 0;
  *((_QWORD *)this + 419) = 0LL;
  *v17 = 0;
  NullProcessAttribution = CProcessAttributionManager::GetNullProcessAttribution(v18);
  LODWORD(v37) = 11;
  v38 = 0LL;
  v20 = NullProcessAttribution;
  v21 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 336, &v37);
  if ( v21 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v21, retaddr);
  v23 = *((_DWORD *)this + 198);
  v40 = v20;
  v24 = v23 + 1;
  if ( v23 + 1 < v23 )
  {
    v28 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_24;
  }
  if ( v24 > *((_DWORD *)this + 197) )
  {
    v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 768, 8LL, 1LL, &v40);
    v28 = v26;
    if ( v26 >= 0 )
      return v12;
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0xC0u);
LABEL_24:
    ModuleFailFastForHRESULT(v28, retaddr);
  }
  *(_QWORD *)(*((_QWORD *)this + 96) + 8LL * v23) = v20;
  *((_DWORD *)this + 198) = v24;
  return v12;
}

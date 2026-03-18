/*
 * XREFs of ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4
 * Callers:
 *     ?Render@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECDC0 (-Render@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18004EDE4 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x180069E80 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006A6C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18006B7C4 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18006CF60 (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D3664 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800D39C0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D3CA8 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@details@wil@@QEAA_NXZ @ 0x1800E8368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2102c_26374961@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180188B50 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180191960 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD940 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 */

__int64 __fastcall CRemoteRenderTarget::Render(
        CRemoteRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  const struct COcclusionContext *OcclusionContext; // r15
  bool *v5; // rdi
  struct CDrawingContext *v6; // r12
  unsigned int v8; // ebx
  CDesktopTree *v9; // r11
  float v10; // xmm1_4
  __m128i v11; // xmm0
  float v12; // xmm1_4
  const struct CDirtyRegion *DirtyRegion; // rax
  __int64 v14; // r11
  struct CComposeTop *v15; // r13
  char v16; // bl
  CDirtyRegion *v17; // r14
  char v18; // r12
  struct IDeviceTarget *v19; // rax
  struct CDrawingContext *v20; // rdi
  int v21; // eax
  __int64 v22; // rcx
  CDesktopTree *v23; // rcx
  __int64 v24; // xmm1_8
  unsigned int i; // edi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  char v31; // r9
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 (__fastcall ***v36)(_QWORD); // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  int v40; // [rsp+20h] [rbp-69h]
  __int128 v43; // [rsp+50h] [rbp-39h] BYREF
  __int64 v44; // [rsp+60h] [rbp-29h]
  __int128 v45; // [rsp+68h] [rbp-21h] BYREF
  __int128 v46; // [rsp+78h] [rbp-11h] BYREF
  int v47; // [rsp+88h] [rbp-1h]
  int v48; // [rsp+8Ch] [rbp+3h]
  float v49[4]; // [rsp+90h] [rbp+7h] BYREF

  OcclusionContext = 0LL;
  *a4 = 0;
  v5 = a4;
  v6 = a2;
  v8 = 0;
  if ( !*((_QWORD *)this - 25) )
    goto LABEL_46;
  v9 = (CDesktopTree *)*((_QWORD *)this - 23);
  if ( !v9 || *(int *)(*((_QWORD *)this - 43) + 952LL) > 3 )
    goto LABEL_46;
  v10 = (float)*((int *)this - 43);
  v49[0] = (float)*((int *)this - 44);
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this - 42));
  v49[1] = v10;
  v12 = (float)*((int *)this - 41);
  LODWORD(v49[2]) = _mm_cvtepi32_ps(v11).m128_u32[0];
  v49[3] = v12;
  DirtyRegion = CDesktopTree::GetDirtyRegion(v9);
  v15 = *(struct CComposeTop **)(v14 + 5912);
  v16 = 1;
  v17 = DirtyRegion;
  if ( !v15 || !CComposeTop::HasNewContent(*(CComposeTop **)(v14 + 5912)) )
    v16 = 0;
  v18 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_26374961>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2102c_26374961>::GetImpl'::`2'::impl)
    && v16 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this - 25) + 24LL))(*((_QWORD *)this - 25));
  }
  if ( !v17 && !v16 )
    goto LABEL_41;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2102c_26374961>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2102c_26374961>::GetImpl'::`2'::impl) )
  {
    CDirtyRegion::CalcOcclusion(v17);
LABEL_17:
    OcclusionContext = CDirtyRegion::GetOcclusionContext(v17);
    goto LABEL_18;
  }
  if ( v17 && (int)CDirtyRegion::CalcOcclusion(v17) >= 0 )
    goto LABEL_17;
LABEL_18:
  v19 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this - 25))(*((_QWORD *)this - 25));
  v20 = a2;
  v21 = CDrawingContext::BeginFrame(
          a2,
          v19,
          (CRemoteRenderTarget *)((char *)this - 128),
          (const struct _D3DCOLORVALUE *)((char *)this - 248),
          0LL);
  v8 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xC7u, 0LL);
    v6 = a2;
    goto LABEL_46;
  }
  if ( OcclusionContext )
  {
    v23 = (CDesktopTree *)*((_QWORD *)this - 23);
    v24 = *((_QWORD *)this - 17);
    v43 = *(_OWORD *)((char *)this - 152);
    v44 = v24;
    CDesktopTree::UpdateCVIRenderTargets(v23, OcclusionContext, (const struct RenderTargetInfo *)&v43);
  }
  if ( v17 )
  {
    for ( i = 0; i < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects((__int64)v17, &v43); ++i )
    {
      v46 = 0LL;
      CDirtyRegion::GetUnOccludedDirtyRect(v17, (float *)&v45, i, v49, 0, &v46, (__int64)OcclusionContext);
      if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v45) )
      {
        v47 = 0;
        v48 = 0;
        v26 = *((_QWORD *)this - 32);
        v40 = *((_BYTE *)this - 232) != 0 ? 2 : 0;
        v46 = v45;
        v27 = CDrawingContext::DrawVisualTree(a2, v26, (__int64)&v46, OcclusionContext, v40, 0);
        v8 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xE0u, 0LL);
          goto LABEL_37;
        }
        CRemoteRenderTarget::NotifyRenderedRect((__int64)this - 360, (__int64)&v45);
        if ( v15 )
        {
          v29 = CComposeTop::SubtractOverdraw(v15, &v45);
          v8 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xEAu, 0LL);
            goto LABEL_37;
          }
        }
      }
    }
    v20 = a2;
  }
  if ( !v15
    || (!v17 ? (v31 = 0) : (v31 = *((_BYTE *)v17 + 4456)),
        v32 = CRemoteRenderTarget::RenderComposeTop((CRemoteRenderTarget *)((char *)this - 360), v20, v15, v31),
        v8 = v32,
        v32 >= 0) )
  {
    v5 = a4;
    if ( !*((_DWORD *)this - 44) && !*((_DWORD *)this - 43) )
      v18 = 1;
LABEL_41:
    v34 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    v8 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x100u, 0LL);
    }
    else if ( *((_BYTE *)this - 52) || v18 )
    {
      *v5 = 1;
    }
    v6 = a2;
    goto LABEL_46;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xF6u, 0LL);
LABEL_37:
  v6 = a2;
  CDrawingContext::EndFrame((CD3DDevice **)a2);
LABEL_46:
  if ( g_LockAndReadTarget )
  {
    v36 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 25);
    if ( v36 )
    {
      v37 = (**v36)(v36);
      v38 = *(int *)(*(_QWORD *)(v37 + 8) + 16LL) + v37 + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v38 + 24LL))(
        v38,
        ((unsigned __int64)v6 + 24) & -(__int64)(v6 != 0LL));
    }
  }
  return v8;
}

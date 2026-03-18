/*
 * XREFs of ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7A44 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18002B000 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180030220 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180034500 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18004F430 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006A748 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18006B7C4 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18006CE10 (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18006CF60 (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008BE50 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AC3B0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800BC0E0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800BC434 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800C64A8 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800D39C0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18018061C (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801883F8 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x18018842C (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180188640 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180189330 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180189470 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x18018CD68 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1801904C0 (-GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180190554 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?UseSuperSample@CDDisplayRenderTarget@@IEBA_NXZ @ 0x1801915F8 (-UseSuperSample@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD940 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderDirtyRegion(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        const struct CDirtyRegion *a3,
        struct CComposeTop *a4)
{
  unsigned int v4; // r15d
  int v6; // ebx
  unsigned int v7; // esi
  const struct COcclusionContext *OcclusionContext; // r13
  float v11; // xmm1_4
  __m128i v12; // xmm0
  float v13; // xmm1_4
  __int64 v14; // rcx
  float *v15; // r8
  float *v16; // r9
  bool DoesIntersectUnsafe; // al
  __int64 v18; // r8
  CDesktopTree *v19; // rcx
  __int64 v20; // xmm1_8
  int v21; // eax
  __int64 v22; // rcx
  int EffectiveDirectFlipMode; // eax
  CVisual **v24; // rbx
  int DeviceTarget; // eax
  __int64 v26; // rcx
  char *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // r11d
  int v32; // r10d
  int v33; // r11d
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  struct IDeviceTarget *v37; // rsi
  struct IDeviceTarget *v38; // rax
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // r9
  float v42; // xmm6_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm9_4
  char v46; // al
  char v47; // cl
  __int64 v48; // rdx
  struct IDeviceTarget *CurrentBackBuffer; // rax
  int v50; // eax
  __int64 v51; // rcx
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  char v54; // [rsp+48h] [rbp-C0h]
  _WORD v55[3]; // [rsp+49h] [rbp-BFh] BYREF
  struct IDeviceTarget *v56[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v57; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+70h] [rbp-98h]
  struct CComposeTop *v59; // [rsp+78h] [rbp-90h]
  __int64 v60; // [rsp+80h] [rbp-88h] BYREF
  __int64 v61; // [rsp+90h] [rbp-78h] BYREF
  float *v62; // [rsp+98h] [rbp-70h]
  __int128 v63; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v64; // [rsp+B0h] [rbp-58h]
  float v65[4]; // [rsp+B8h] [rbp-50h] BYREF

  v4 = 0;
  v59 = a4;
  v58 = 0LL;
  v6 = 0;
  v7 = 0;
  v57 = 0LL;
  OcclusionContext = CDirtyRegion::GetOcclusionContext(a3);
  v54 = 0;
  v11 = (float)*((int *)this + 4567);
  v65[0] = (float)*((int *)this + 4566);
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 4568));
  v65[1] = v11;
  v13 = (float)*((int *)this + 4569);
  LODWORD(v65[2]) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v65[3] = v13;
  CDirtyRegion::GetOptimizedDirtyRects((__int64)a3, &v61);
  v15 = v62;
  v16 = &v62[4 * v61];
  while ( v15 != v16 )
  {
    DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v15, v65);
    v14 = v7 + 1;
    if ( !DoesIntersectUnsafe )
      v14 = v7;
    v15 = (float *)(v18 + 16);
    v7 = v14;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq_EventWriteTransfer(v14, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (__int64)a2, 0, v7);
  if ( !v7 )
    goto LABEL_58;
  v55[0] = 0;
  if ( OcclusionContext )
  {
    *((_DWORD *)OcclusionContext + 310) = 0x7FFFFFFF;
    v19 = (CDesktopTree *)*((_QWORD *)this + 20);
    v20 = *(_QWORD *)((char *)this + 18604);
    v63 = *(_OWORD *)((char *)this + 18588);
    v64 = v20;
    CDesktopTree::UpdateCVIRenderTargets(v19, OcclusionContext, (const struct RenderTargetInfo *)&v63);
  }
  v21 = COverlayContext::ApplyConfiguration(
          (CDDisplayRenderTarget *)((char *)this + 176),
          (__int64)&v57,
          (char *)v55,
          (_BYTE *)v55 + 1);
  v6 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x2E4u, 0LL);
    goto LABEL_62;
  }
  if ( !*((_BYTE *)a3 + 4456) && LOBYTE(v55[0]) )
    CDirtyRegion::ForceFullDirty(a3);
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 176);
  switch ( EffectiveDirectFlipMode )
  {
    case 0:
      goto LABEL_46;
    case 1:
      if ( !CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 1434)) )
        goto LABEL_62;
LABEL_46:
      if ( HIBYTE(v55[0]) )
      {
        CurrentBackBuffer = CDDisplaySwapChain::GetCurrentBackBuffer((CDDisplaySwapChain *)(*((_QWORD *)this + 21) + 64LL));
        v50 = CDrawingContext::PushRenderTarget(a2, CurrentBackBuffer);
        v6 = v50;
        if ( v50 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x306u, 0LL);
          goto LABEL_62;
        }
        v54 = 1;
      }
      goto LABEL_25;
    case 2:
      dword_180349274 |= 2u;
      goto LABEL_62;
  }
  if ( (unsigned int)(EffectiveDirectFlipMode - 3) > 1 )
    goto LABEL_25;
  v24 = (CVisual **)*((_QWORD *)this + 1434);
  *((_DWORD *)OcclusionContext + 310) = CDirectFlipInfo::GetCutoffZ(v24, *((const struct CVisualTree **)this + 13));
  v56[0] = 0LL;
  wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)v56);
  DeviceTarget = CDirectFlipInfo::GetDeviceTarget((CDirectFlipInfo *)v24, v56);
  v6 = DeviceTarget;
  if ( DeviceTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, DeviceTarget, 0x326u, 0LL);
    goto LABEL_42;
  }
  if ( RenderTargetInfo::IsHDR((CDDisplayRenderTarget *)((char *)this + 18588)) )
  {
    v27 = (char *)v56[0] + *(int *)(*((_QWORD *)v56[0] + 1) + 12LL) + 8;
    v28 = (**(__int64 (__fastcall ***)(char *, __int64 *))v27)(v27, &v61);
    if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v28 + 8)) )
      (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v56[0] + 40LL))(v56[0]);
  }
  v29 = CDrawingContext::PushRenderTarget(a2, v56[0]);
  v6 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x32Eu, 0LL);
LABEL_42:
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v56);
    goto LABEL_62;
  }
  v54 = 1;
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v56);
LABEL_25:
  if ( *((_BYTE *)a3 + 4456) )
  {
    v31 = *((_DWORD *)this + 21);
    LODWORD(v62) = *((_DWORD *)this + 20);
    HIDWORD(v62) = v31;
    v61 = 0LL;
    if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
            (_DWORD *)this + 4570,
            &v61) )
    {
      v61 = 0LL;
      *(float *)&v62 = (float)v32;
      *((float *)&v62 + 1) = (float)v33;
      v34 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v61, 1, 1);
      v6 = v34;
      if ( v34 < 0 )
      {
        v53 = 836;
LABEL_53:
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, v53, 0LL);
      }
      else
      {
        v6 = CDrawingContext::Clear((struct CDrawingContext *)((char *)a2 + 16), &stru_1802F15F0);
        CDrawingContext::PopGpuClipRectInternal(a2, 0);
        if ( v6 >= 0 )
        {
          CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, 0LL, 1);
          goto LABEL_30;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v6, 0x34Cu, 0LL);
      }
      goto LABEL_60;
    }
  }
LABEL_30:
  while ( v4 < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects((__int64)a3, &v60) )
  {
    v37 = (struct IDeviceTarget *)v57;
    v38 = (struct IDeviceTarget *)gsl::narrow<__int64,unsigned __int64>((__int64)(*((_QWORD *)&v57 + 1) - v57) >> 3);
    v56[0] = v38;
    if ( (__int64)v38 < 0 || (v56[1] = v37) == 0LL && v38 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v39 = CDDisplayRenderTarget::UseSuperSample(this);
    CDirtyRegion::GetUnOccludedDirtyRect(a3, (float *)&v61, v4, v65, v39, v56, 0LL);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v61) )
    {
      v42 = *((float *)&v62 + 1);
      LODWORD(v43) = (_DWORD)v62;
      v44 = *((float *)&v61 + 1);
      LODWORD(v45) = v61;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
        McTemplateU0qdffff_EventWriteTransfer(
          v40,
          &EVTDESC_ETWGUID_DIRTYREGIONEVENT,
          v4,
          v41,
          v61,
          SBYTE4(v61),
          (char)v62,
          SBYTE4(v62));
      dword_180349288 += (int)(float)((float)(v43 - v45) * (float)(v42 - v44));
      v46 = CDDisplayRenderTarget::UseSuperSample(this);
      v47 = *((_BYTE *)this + 128);
      v64 = 0LL;
      v48 = *((_QWORD *)this + 13);
      *(_QWORD *)&v63 = __PAIR64__(LODWORD(v44), LODWORD(v45));
      *((_QWORD *)&v63 + 1) = __PAIR64__(LODWORD(v42), LODWORD(v43));
      v34 = CDrawingContext::DrawVisualTree(a2, v48, (__int64)&v63, OcclusionContext, v47 != 0 ? 2 : 0, v46);
      v6 = v34;
      if ( v34 < 0 )
      {
        v53 = 880;
        goto LABEL_53;
      }
      CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, &v61, 1);
      if ( v59 )
      {
        v34 = CComposeTop::SubtractOverdraw(v59, &v61);
        v6 = v34;
        if ( v34 < 0 )
        {
          v53 = 890;
          goto LABEL_53;
        }
      }
    }
    ++v4;
  }
LABEL_58:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x_EventWriteTransfer(v14, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a2);
LABEL_60:
  if ( v54 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
LABEL_62:
  if ( (_QWORD)v57 )
    std::_Deallocate<16,0>((void *)v57, (v58 - v57) & 0xFFFFFFFFFFFFFFF8uLL);
  return (unsigned int)v6;
}

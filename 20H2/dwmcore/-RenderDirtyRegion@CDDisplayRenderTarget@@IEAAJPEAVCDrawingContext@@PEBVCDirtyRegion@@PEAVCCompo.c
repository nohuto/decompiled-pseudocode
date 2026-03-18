/*
 * XREFs of ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018C3DC
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E90D4 (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003D608 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18004BC48 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004E130 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x18004F1F4 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800630A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x18006B420 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180076E40 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18007FDB0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180081224 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800854AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180099EC4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18009A5C8 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18009C794 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18009CE4C (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18009CF9C (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C19D4 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800CD148 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D2E9C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180153BF8 (McTemplateU0x_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18016212C (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18017BDCC (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x180183928 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x18018395C (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180183B70 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x1801848F0 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180184A30 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180188378 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x18018BB80 (-GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18018BC14 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?UseSuperSample@CDDisplayRenderTarget@@IEBA_NXZ @ 0x18018CD48 (-UseSuperSample@CDDisplayRenderTarget@@IEBA_NXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9140 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderDirtyRegion(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        const struct CDirtyRegion *a3,
        struct CComposeTop *a4)
{
  int v4; // r15d
  int v5; // ebx
  unsigned int v6; // esi
  unsigned __int64 CurrentFrameId; // rax
  __int64 v11; // r8
  const struct COcclusionContext *v12; // r12
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  float v15; // xmm1_4
  __int64 v16; // rcx
  float *v17; // r8
  float *v18; // r9
  bool DoesIntersectUnsafe; // al
  __int64 v20; // r8
  CDesktopTree *v21; // rcx
  __int64 v22; // xmm1_8
  int v23; // eax
  __int64 v24; // rcx
  int EffectiveDirectFlipMode; // eax
  CVisual **v26; // rbx
  int DeviceTarget; // eax
  __int64 v28; // rcx
  char *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // r11d
  int v34; // r10d
  int v35; // r11d
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rsi
  struct IDeviceTarget *v41; // rax
  gsl::details *v42; // rcx
  char v43; // al
  __int64 v44; // rcx
  __int64 v45; // r9
  float v46; // xmm6_4
  float v47; // xmm7_4
  float v48; // xmm8_4
  float v49; // xmm9_4
  char v50; // al
  char v51; // cl
  __int64 v52; // rdx
  struct IDeviceTarget *CurrentBackBuffer; // rax
  int v55; // eax
  __int64 v56; // rcx
  unsigned int v57; // [rsp+28h] [rbp-E0h]
  char v58; // [rsp+48h] [rbp-C0h]
  _WORD v59[3]; // [rsp+49h] [rbp-BFh] BYREF
  struct IDeviceTarget *v60[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v61; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+70h] [rbp-98h]
  struct CComposeTop *v63; // [rsp+78h] [rbp-90h]
  _QWORD v64[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v65; // [rsp+90h] [rbp-78h] BYREF
  float *v66; // [rsp+98h] [rbp-70h]
  __int128 v67; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-58h]
  float v69[4]; // [rsp+B8h] [rbp-50h] BYREF

  v4 = 0;
  v63 = a4;
  v62 = 0LL;
  v5 = 0;
  v6 = 0;
  v61 = 0LL;
  CurrentFrameId = GetCurrentFrameId();
  v12 = (const struct COcclusionContext *)(v11 + 16);
  v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 4567));
  if ( *(_QWORD *)(v11 + 32) != CurrentFrameId )
    v12 = 0LL;
  v58 = 0;
  v69[0] = (float)*((int *)this + 4566);
  v14 = _mm_cvtsi32_si128(*((_DWORD *)this + 4568));
  LODWORD(v69[1]) = _mm_cvtepi32_ps(v13).m128_u32[0];
  v15 = (float)*((int *)this + 4569);
  LODWORD(v69[2]) = _mm_cvtepi32_ps(v14).m128_u32[0];
  v69[3] = v15;
  CDirtyRegion::GetOptimizedDirtyRects(v11, &v65);
  v17 = v66;
  v18 = &v66[4 * v65];
  while ( v17 != v18 )
  {
    DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v17, v69);
    v16 = v6 + 1;
    if ( !DoesIntersectUnsafe )
      v16 = v6;
    v17 = (float *)(v20 + 16);
    v6 = v16;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq_EventWriteTransfer(v16, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (__int64)a2, 0, v6);
  if ( !v6 )
  {
LABEL_44:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x_EventWriteTransfer(v16, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a2);
    goto LABEL_46;
  }
  v59[0] = 0;
  if ( v12 )
  {
    *((_DWORD *)v12 + 310) = 0x7FFFFFFF;
    v21 = (CDesktopTree *)*((_QWORD *)this + 20);
    v22 = *(_QWORD *)((char *)this + 18604);
    v67 = *(_OWORD *)((char *)this + 18588);
    v68 = v22;
    CDesktopTree::UpdateCVIRenderTargets(v21, v12, (const struct RenderTargetInfo *)&v67);
  }
  v23 = COverlayContext::ApplyConfiguration(
          (CDDisplayRenderTarget *)((char *)this + 176),
          (__int64)&v61,
          (char *)v59,
          (_BYTE *)v59 + 1);
  v5 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x2E4u, 0LL);
    goto LABEL_48;
  }
  if ( !*((_BYTE *)a3 + 4456) && LOBYTE(v59[0]) )
    CDirtyRegion::ForceFullDirty(a3);
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode((__int64)this + 176);
  switch ( EffectiveDirectFlipMode )
  {
    case 0:
      goto LABEL_56;
    case 1:
      if ( !CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 1434)) )
        goto LABEL_48;
LABEL_56:
      if ( HIBYTE(v59[0]) )
      {
        CurrentBackBuffer = CDDisplaySwapChain::GetCurrentBackBuffer((CDDisplaySwapChain *)(*((_QWORD *)this + 21) + 64LL));
        v55 = CDrawingContext::PushRenderTarget(a2, CurrentBackBuffer);
        v5 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x306u, 0LL);
          goto LABEL_48;
        }
        v58 = 1;
      }
      goto LABEL_27;
    case 2:
      dword_180344264 |= 2u;
      goto LABEL_48;
  }
  if ( (unsigned int)(EffectiveDirectFlipMode - 3) <= 1 )
  {
    v26 = (CVisual **)*((_QWORD *)this + 1434);
    *((_DWORD *)v12 + 310) = CDirectFlipInfo::GetCutoffZ(v26, *((const struct CVisualTree **)this + 13));
    v60[0] = 0LL;
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)v60);
    DeviceTarget = CDirectFlipInfo::GetDeviceTarget((CDirectFlipInfo *)v26, v60);
    v5 = DeviceTarget;
    if ( DeviceTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, DeviceTarget, 0x326u, 0LL);
    }
    else
    {
      if ( RenderTargetInfo::IsHDR((CDDisplayRenderTarget *)((char *)this + 18588)) )
      {
        v29 = (char *)v60[0] + *(int *)(*((_QWORD *)v60[0] + 1) + 12LL) + 8;
        v30 = (**(__int64 (__fastcall ***)(char *, __int64 *))v29)(v29, &v65);
        if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v30 + 8)) )
          (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v60[0] + 40LL))(v60[0]);
      }
      v31 = CDrawingContext::PushRenderTarget(a2, v60[0]);
      v5 = v31;
      if ( v31 >= 0 )
      {
        v58 = 1;
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v60);
        goto LABEL_27;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x32Eu, 0LL);
    }
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v60);
    goto LABEL_48;
  }
LABEL_27:
  if ( *((_BYTE *)a3 + 4456) )
  {
    v33 = *((_DWORD *)this + 21);
    LODWORD(v66) = *((_DWORD *)this + 20);
    HIDWORD(v66) = v33;
    v65 = 0LL;
    if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
            (_DWORD *)this + 4570,
            &v65) )
    {
      v65 = 0LL;
      *(float *)&v66 = (float)v34;
      *((float *)&v66 + 1) = (float)v35;
      v36 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v65, 1, 1);
      v5 = v36;
      if ( v36 < 0 )
      {
        v57 = 836;
        goto LABEL_63;
      }
      v5 = CDrawingContext::Clear((struct CDrawingContext *)((char *)a2 + 16), &stru_1802ED980);
      CDrawingContext::PopGpuClipRectInternal(a2, 0, v38);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v5, 0x34Cu, 0LL);
        goto LABEL_46;
      }
      CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, 0LL, 1);
    }
  }
  if ( !*(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects((__int64)a3, v64) )
    goto LABEL_44;
  v40 = (__int64)(*((_QWORD *)&v61 + 1) - v61) >> 3;
  while ( 1 )
  {
    v41 = (struct IDeviceTarget *)gsl::narrow<__int64,unsigned __int64>(v40);
    v60[0] = v41;
    if ( (__int64)v41 < 0 || (v42 = (gsl::details *)v61, (v60[1] = (struct IDeviceTarget *)v61) == 0LL) && v41 )
    {
      gsl::details::terminate(v42);
      JUMPOUT(0x18018CA4BLL);
    }
    v43 = CDDisplayRenderTarget::UseSuperSample(this);
    CDirtyRegion::GetUnOccludedDirtyRect(a3, (float *)&v65, v4, v69, v43, v60, 0LL);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v65) )
      goto LABEL_43;
    v46 = *((float *)&v66 + 1);
    LODWORD(v47) = (_DWORD)v66;
    v48 = *((float *)&v65 + 1);
    LODWORD(v49) = v65;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(
        v44,
        &EVTDESC_ETWGUID_DIRTYREGIONEVENT,
        v4,
        v45,
        v65,
        SBYTE4(v65),
        (char)v66,
        SBYTE4(v66));
    dword_180344278 += (int)(float)((float)(v47 - v49) * (float)(v46 - v48));
    v50 = CDDisplayRenderTarget::UseSuperSample(this);
    v51 = *((_BYTE *)this + 128);
    v68 = 0LL;
    v52 = *((_QWORD *)this + 13);
    *(_QWORD *)&v67 = __PAIR64__(LODWORD(v48), LODWORD(v49));
    *((_QWORD *)&v67 + 1) = __PAIR64__(LODWORD(v46), LODWORD(v47));
    v36 = CDrawingContext::DrawVisualTree(a2, v52, (__int64)&v67, v12, v51 != 0 ? 2 : 0, v50);
    v5 = v36;
    if ( v36 < 0 )
      break;
    CDDisplayRenderTarget::NotifyRenderedRect((__int64)this, (float *)&v65, 1);
    if ( v63 )
    {
      v36 = CComposeTop::SubtractOverdraw(v63, &v65);
      v5 = v36;
      if ( v36 < 0 )
      {
        v57 = 890;
        goto LABEL_63;
      }
    }
LABEL_43:
    if ( (unsigned int)++v4 >= *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects((__int64)a3, v64) )
      goto LABEL_44;
  }
  v57 = 880;
LABEL_63:
  MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, v57, 0LL);
LABEL_46:
  if ( v58 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
LABEL_48:
  if ( (_QWORD)v61 )
    std::_Deallocate<16,0>((void *)v61, (v62 - v61) & 0xFFFFFFFFFFFFFFF8uLL);
  return (unsigned int)v5;
}

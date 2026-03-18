/*
 * XREFs of ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E619C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E83A8 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18002B000 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180030220 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180033304 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180034500 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x18004F430 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180069EBC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180069F1C (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006A748 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?UseSuperSample@CLegacyRenderTarget@@AEBA_NXZ @ 0x18006C6D0 (-UseSuperSample@CLegacyRenderTarget@@AEBA_NXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18006CE10 (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18006CF60 (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008BE50 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AC3B0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800BC434 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800C64A8 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@details@wil@@QEAA_NXZ @ 0x1800E75F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180166A9C (-terminate@details@gsl@@YAXXZ.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x180167FA8 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ??0narrowing_error@gsl@@QEAA@XZ @ 0x180167FC0 (--0narrowing_error@gsl@@QEAA@XZ.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1801883F8 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x18018842C (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180188640 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180188C08 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180189330 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180189470 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x18018CD68 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD940 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderDirtyRegion(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        const struct CDirtyRegion *a3,
        struct CComposeTop *a4)
{
  int v5; // ebx
  unsigned int v8; // esi
  const struct COcclusionContext *v9; // r15
  bool IsCurrent; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  const struct COcclusionContext *v13; // r8
  char v14; // r12
  float v15; // xmm1_4
  __m128i v16; // xmm0
  float v17; // xmm1_4
  char *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  char *v21; // r9
  char DoesIntersectUnsafe; // al
  __int64 v23; // r8
  CDesktopTree *v24; // rcx
  __int64 v25; // xmm1_8
  int v26; // eax
  __int64 v27; // rcx
  int v28; // esi
  CDirectFlipInfo *v29; // rbx
  int DeviceTarget; // eax
  __int64 v31; // rcx
  char *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // r10d
  unsigned int v37; // r11d
  int v38; // r10d
  int v39; // r11d
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int i; // esi
  __int64 v44; // rdx
  char v45; // al
  int v46; // r9d
  float v47; // xmm8_4
  float v48; // xmm9_4
  float v49; // xmm6_4
  float v50; // xmm7_4
  char v51; // bl
  int v52; // eax
  __int64 v53; // rdx
  CMILMatrix *v54; // rcx
  int v55; // eax
  __m128 v56; // xmm2
  __m128 v57; // rt1
  __m128 v58; // xmm1
  int v59; // eax
  __m128 v60; // xmm2
  __m128 v61; // rt1
  __m128 v62; // xmm1
  int v63; // eax
  __m128 v64; // xmm2
  __m128 v65; // rt1
  __m128 v66; // xmm0
  int v67; // eax
  __m128 v68; // xmm2
  __m128 v69; // rt1
  __m128 v70; // xmm0
  __int64 v71; // rcx
  struct CComposeTop *v72; // rax
  unsigned int v74; // [rsp+20h] [rbp-E0h]
  __int128 v75; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v76; // [rsp+58h] [rbp-A8h]
  __int128 v77; // [rsp+60h] [rbp-A0h]
  __int64 v78; // [rsp+70h] [rbp-90h]
  struct CComposeTop *v79; // [rsp+78h] [rbp-88h]
  struct IDeviceTarget *v80[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v81; // [rsp+90h] [rbp-70h] BYREF
  int v82; // [rsp+A0h] [rbp-60h]
  int v83; // [rsp+A4h] [rbp-5Ch]
  float v84; // [rsp+A8h] [rbp-58h] BYREF
  float v85; // [rsp+ACh] [rbp-54h]
  float v86; // [rsp+B0h] [rbp-50h]
  float v87; // [rsp+B4h] [rbp-4Ch]
  float v88[6]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v89; // [rsp+D0h] [rbp-30h]

  v79 = a4;
  v5 = 0;
  v78 = 0LL;
  v77 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_29643259>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_29643259>::GetImpl'::`2'::impl) )
  {
    IsCurrent = COcclusionContext::IsCurrent((const struct CDirtyRegion *)((char *)a3 + 16));
    v9 = (const struct COcclusionContext *)(v12 & -(__int64)IsCurrent);
  }
  else if ( !CDirtyRegion::IsEmpty(a3) && COcclusionContext::IsCurrent((const struct CDirtyRegion *)((char *)a3 + 16)) )
  {
    v9 = v13;
  }
  v14 = 0;
  v15 = (float)*((int *)this + 47);
  v88[0] = (float)*((int *)this + 46);
  v16 = _mm_cvtsi32_si128(*((_DWORD *)this + 48));
  v88[1] = v15;
  v17 = (float)*((int *)this + 49);
  LODWORD(v88[2]) = _mm_cvtepi32_ps(v16).m128_u32[0];
  v88[3] = v17;
  if ( !*((_BYTE *)a3 + 4456) )
  {
    v20 = *((unsigned int *)a3 + 713);
    v18 = (char *)a3 + 2692;
    v19 = v20;
    if ( a3 != (const struct CDirtyRegion *)-2692LL || !v20 )
      goto LABEL_11;
LABEL_100:
    gsl::details::terminate((gsl::details *)v11);
    JUMPOUT(0x18006C6C9LL);
  }
  v18 = (char *)a3 + 4436;
  if ( a3 == (const struct CDirtyRegion *)-4436LL )
    goto LABEL_100;
  v19 = 1LL;
LABEL_11:
  v21 = &v18[16 * v19];
  while ( v18 != v21 )
  {
    DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v18, v88);
    v11 = v8 + 1;
    if ( !DoesIntersectUnsafe )
      v11 = v8;
    v18 = (char *)(v23 + 16);
    v8 = v11;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xqq_EventWriteTransfer(
      v11,
      (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start,
      (_DWORD)a2,
      0,
      v8);
  if ( !v8 )
  {
LABEL_92:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x_EventWriteTransfer(v11, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, a2);
    goto LABEL_94;
  }
  if ( v9 )
  {
    *((_DWORD *)v9 + 310) = 0x7FFFFFFF;
    v24 = (CDesktopTree *)*((_QWORD *)this + 22);
    v25 = *(_QWORD *)((char *)this + 244);
    v75 = *(_OWORD *)((char *)this + 228);
    v76 = v25;
    CDesktopTree::UpdateCVIRenderTargets(v24, v9, (const struct RenderTargetInfo *)&v75);
  }
  v26 = COverlayContext::ApplyConfiguration((CLegacyRenderTarget *)((char *)this + 472));
  v5 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x235u, 0LL);
    goto LABEL_96;
  }
  v11 = *((_QWORD *)this + 1471);
  v28 = 0;
  if ( v11 )
  {
    v28 = *(_DWORD *)(v11 + 52);
    if ( v28 == 4 && !CDirectFlipInfo::RenderingRealizationChanged((CDirectFlipInfo *)v11) )
      v28 = 2;
  }
  switch ( v28 )
  {
    case 0:
      goto LABEL_36;
    case 1:
      if ( !CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 1471)) )
        goto LABEL_96;
      goto LABEL_36;
    case 2:
      dword_180349274 |= 2u;
      goto LABEL_96;
  }
  if ( (unsigned int)(v28 - 3) <= 1 )
  {
    v29 = (CDirectFlipInfo *)*((_QWORD *)this + 1471);
    *((_DWORD *)v9 + 310) = CDirectFlipInfo::GetCutoffZ(v29, *((const struct CVisualTree **)this + 13));
    v80[0] = 0LL;
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v80);
    DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v29, v80);
    v5 = DeviceTarget;
    if ( DeviceTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, DeviceTarget, 0x277u, 0LL);
    }
    else
    {
      if ( RenderTargetInfo::IsHDR((CLegacyRenderTarget *)((char *)this + 228)) )
      {
        v32 = (char *)v80[0] + *(int *)(*((_QWORD *)v80[0] + 1) + 12LL) + 8;
        v33 = (**(__int64 (__fastcall ***)(char *, float *))v32)(v32, &v84);
        if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v33 + 8)) )
          (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v80[0] + 40LL))(v80[0]);
      }
      v34 = CDrawingContext::PushRenderTarget(a2, v80[0]);
      v5 = v34;
      if ( v34 >= 0 )
      {
        v14 = 1;
        wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v80);
        goto LABEL_36;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x27Fu, 0LL);
    }
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v80);
    goto LABEL_96;
  }
LABEL_36:
  if ( *((_BYTE *)a3 + 4456) )
  {
    v36 = *((_DWORD *)this + 20);
    v37 = *((_DWORD *)this + 21);
    *(_QWORD *)&v81 = 0LL;
    *((_QWORD *)&v81 + 1) = __PAIR64__(v37, v36);
    if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
                             (char *)this + 200,
                             &v81) )
    {
      *(_QWORD *)&v81 = 0LL;
      *((float *)&v81 + 2) = (float)v38;
      *((float *)&v81 + 3) = (float)v39;
      v40 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v81, 1, 1);
      v5 = v40;
      if ( v40 < 0 )
      {
        v74 = 660;
        goto LABEL_53;
      }
      v5 = CDrawingContext::Clear((struct CDrawingContext *)((char *)a2 + 16), &stru_1802F15F0);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v5, 0x29Cu, 0LL);
        goto LABEL_94;
      }
      LOBYTE(v42) = 1;
      CLegacyRenderTarget::NotifyRenderedRect(this, 0LL, v42);
    }
  }
  for ( i = 0; ; ++i )
  {
    if ( *((_BYTE *)a3 + 4456) )
    {
      if ( a3 == (const struct CDirtyRegion *)-4436LL )
        goto LABEL_100;
      v11 = 1LL;
    }
    else
    {
      v11 = *((unsigned int *)a3 + 713);
      if ( a3 == (const struct CDirtyRegion *)-2692LL && MEMORY[0xA0] )
        goto LABEL_100;
    }
    if ( i >= (unsigned int)v11 )
      goto LABEL_92;
    v11 = v77;
    v44 = (__int64)(*((_QWORD *)&v77 + 1) - v77) >> 3;
    if ( (__int64)(*((_QWORD *)&v77 + 1) - v77) < 0 )
    {
      v75 = 0LL;
      gsl::narrowing_error::narrowing_error((gsl::narrowing_error *)&v75);
      gsl::details::throw_exception<gsl::narrowing_error>();
      __debugbreak();
    }
    *(_QWORD *)&v75 = (__int64)(*((_QWORD *)&v77 + 1) - v77) >> 3;
    if ( v44 < 0 )
      goto LABEL_100;
    *((_QWORD *)&v75 + 1) = v77;
    if ( !(_QWORD)v77 )
    {
      if ( v44 )
        goto LABEL_100;
    }
    v45 = CLegacyRenderTarget::UseSuperSample(this);
    CDirtyRegion::GetUnOccludedDirtyRect((_DWORD)a3, (unsigned int)&v84, i, (unsigned int)v88, v45, (__int64)&v75, 0LL);
    v47 = v86;
    v48 = v84;
    if ( v86 <= v84 )
      continue;
    v49 = v87;
    v50 = v85;
    if ( v87 <= v85 )
      continue;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(
        v11,
        (unsigned int)&EVTDESC_ETWGUID_DIRTYREGIONEVENT,
        i,
        v46,
        SLOBYTE(v84),
        SLOBYTE(v85),
        SLOBYTE(v86),
        SLOBYTE(v87));
    dword_180349288 += (int)(float)((float)(v47 - v48) * (float)(v49 - v50));
    v51 = CLegacyRenderTarget::UseSuperSample(this);
    v52 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 232LL))(this);
    v53 = *((_QWORD *)this + 13);
    v82 = 0;
    v83 = 0;
    *(_QWORD *)&v81 = __PAIR64__(LODWORD(v50), LODWORD(v48));
    *((_QWORD *)&v81 + 1) = __PAIR64__(LODWORD(v49), LODWORD(v47));
    v40 = CDrawingContext::DrawVisualTree(a2, v53, (__int64)&v81, v9, v52, v51);
    v5 = v40;
    if ( v40 < 0 )
      break;
    v54 = (CLegacyRenderTarget *)((char *)this + (*((_BYTE *)this + 11505) != 0 ? 332LL : 264LL));
    *(_OWORD *)v80 = 0LL;
    v81 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v54, (__int64)&v84, (float *)&v81);
    LODWORD(v80[0]) = v81;
    if ( ((unsigned int)v81 & 0x7FFFFFFF) > 0x497FFFF0 )
    {
      v56 = 0LL;
      v56.m128_f32[0] = (float)(int)*(float *)&v81 - *(float *)&v81;
      v57.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v80[0]) = _mm_cmple_ss(v56, v57).m128_u32[0];
      v55 = (int)*(float *)&v81 - LODWORD(v80[0]);
    }
    else
    {
      *(float *)v80 = *(float *)&v81 + 6291456.25;
      v55 = (int)(LODWORD(v80[0]) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v81 - (float)v55) & _xmm) > 0.00390625 )
    {
      v58.m128_f32[0] = (float)(int)*(float *)&v81;
      LODWORD(v80[0]) = _mm_cmplt_ss((__m128)(unsigned int)v81, v58).m128_u32[0];
      v55 = (int)*(float *)&v81 + LODWORD(v80[0]);
    }
    LODWORD(v89) = v55;
    LODWORD(v80[0]) = DWORD1(v81);
    if ( (DWORD1(v81) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v60 = 0LL;
      v60.m128_f32[0] = (float)(int)*((float *)&v81 + 1) - *((float *)&v81 + 1);
      v61.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v80[0]) = _mm_cmple_ss(v60, v61).m128_u32[0];
      v59 = (int)*((float *)&v81 + 1) - LODWORD(v80[0]);
    }
    else
    {
      *(float *)v80 = *((float *)&v81 + 1) + 6291456.25;
      v59 = (int)(LODWORD(v80[0]) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v81 + 1) - (float)v59) & _xmm) > 0.00390625 )
    {
      v62.m128_f32[0] = (float)(int)*((float *)&v81 + 1);
      LODWORD(v80[0]) = _mm_cmplt_ss((__m128)DWORD1(v81), v62).m128_u32[0];
      v59 = (int)*((float *)&v81 + 1) + LODWORD(v80[0]);
    }
    DWORD1(v89) = v59;
    LODWORD(v80[0]) = DWORD2(v81);
    if ( (DWORD2(v81) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v64 = 0LL;
      v64.m128_f32[0] = (float)(int)*((float *)&v81 + 2) - *((float *)&v81 + 2);
      v65.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v80[0]) = _mm_cmple_ss(v64, v65).m128_u32[0];
      v63 = (int)*((float *)&v81 + 2) - LODWORD(v80[0]);
    }
    else
    {
      *(float *)v80 = *((float *)&v81 + 2) + 6291456.25;
      v63 = (int)(LODWORD(v80[0]) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v81 + 2) - (float)v63) & _xmm) > 0.00390625 )
    {
      v66 = 0LL;
      v66.m128_f32[0] = (float)(int)*((float *)&v81 + 2);
      LODWORD(v80[0]) = _mm_cmplt_ss(v66, (__m128)DWORD2(v81)).m128_u32[0];
      v63 = (int)*((float *)&v81 + 2) - LODWORD(v80[0]);
    }
    DWORD2(v89) = v63;
    LODWORD(v80[0]) = HIDWORD(v81);
    if ( (HIDWORD(v81) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v68 = 0LL;
      v68.m128_f32[0] = (float)(int)*((float *)&v81 + 3) - *((float *)&v81 + 3);
      v69.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v80[0]) = _mm_cmple_ss(v68, v69).m128_u32[0];
      v67 = (int)*((float *)&v81 + 3) - LODWORD(v80[0]);
    }
    else
    {
      *(float *)v80 = *((float *)&v81 + 3) + 6291456.25;
      v67 = (int)(LODWORD(v80[0]) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v81 + 3) - (float)v67) & _xmm) > 0.00390625 )
    {
      v70 = 0LL;
      v70.m128_f32[0] = (float)(int)*((float *)&v81 + 3);
      LODWORD(v80[0]) = _mm_cmplt_ss(v70, (__m128)HIDWORD(v81)).m128_u32[0];
      v67 = (int)*((float *)&v81 + 3) - LODWORD(v80[0]);
    }
    v71 = *((_QWORD *)this + 20);
    HIDWORD(v89) = v67;
    *(_OWORD *)v80 = v89;
    (*(void (__fastcall **)(__int64, struct IDeviceTarget **))(*(_QWORD *)v71 + 16LL))(v71, v80);
    v72 = v79;
    *((_BYTE *)this + 18586) = 1;
    if ( v72 )
    {
      v40 = CComposeTop::SubtractOverdraw(v72, &v84);
      v5 = v40;
      if ( v40 < 0 )
      {
        v74 = 711;
        goto LABEL_53;
      }
    }
  }
  v74 = 701;
LABEL_53:
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v40, v74, 0LL);
LABEL_94:
  if ( v14 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
LABEL_96:
  if ( (_QWORD)v77 )
    std::_Deallocate<16,0>(v77, (v78 - v77) & 0xFFFFFFFFFFFFFFF8uLL);
  return (unsigned int)v5;
}

/*
 * XREFs of ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180092098
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECE84 (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EEC90 (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180030A18 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18003F0A8 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180041590 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800563A4 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180060010 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006BB30 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x180075020 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180076494 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18007A71C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180090948 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?UseSuperSample@CLegacyRenderTarget@@AEBA_NXZ @ 0x180092A8C (-UseSuperSample@CLegacyRenderTarget@@AEBA_NXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180092B14 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x1800931CC (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18009331C (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5BB4 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800D19A8 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18016264C (-terminate@details@gsl@@YAXXZ.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x180163B68 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ??0narrowing_error@gsl@@QEAA@XZ @ 0x180163B80 (--0narrowing_error@gsl@@QEAA@XZ.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x180184358 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x18018438C (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x1801845A0 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180184B78 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180185320 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180185460 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180188DA8 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9EB0 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderDirtyRegion(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        const struct CDirtyRegion *a3,
        struct CComposeTop *a4)
{
  char v4; // r11
  int v8; // ebx
  unsigned int v9; // esi
  __int64 v10; // rcx
  const struct COcclusionContext *v11; // r13
  __m128i v12; // xmm0
  char v13; // r12
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  float v16; // xmm1_4
  float *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  float *v20; // r9
  bool DoesIntersectUnsafe; // al
  __int64 v22; // r8
  CDesktopTree *v23; // rcx
  __int64 v24; // xmm1_8
  int v25; // eax
  __int64 v26; // rcx
  int v27; // esi
  CDirectFlipInfo *v28; // rbx
  int DeviceTarget; // eax
  __int64 v30; // rcx
  char *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // r10d
  unsigned int v36; // r11d
  int v37; // r10d
  int v38; // r11d
  int v39; // eax
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int i; // esi
  struct IDeviceTarget *v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  char v47; // al
  __int64 v48; // r11
  int v49; // r9d
  float v50; // xmm8_4
  float v51; // xmm9_4
  float v52; // xmm6_4
  float v53; // xmm7_4
  char v54; // bl
  int v55; // eax
  __int64 v56; // rdx
  CMILMatrix *v57; // rcx
  int v58; // eax
  __m128 v59; // xmm2
  __m128 v60; // rt1
  __m128 v61; // xmm1
  int v62; // eax
  __m128 v63; // xmm2
  __m128 v64; // rt1
  __m128 v65; // xmm1
  int v66; // eax
  __m128 v67; // xmm2
  __m128 v68; // rt1
  __m128 v69; // xmm0
  int v70; // eax
  __m128 v71; // xmm2
  __m128 v72; // rt1
  __m128 v73; // xmm0
  __int64 v74; // rcx
  struct CComposeTop *v75; // rax
  unsigned int v77; // [rsp+20h] [rbp-E0h]
  char v78; // [rsp+40h] [rbp-C0h]
  char v79; // [rsp+41h] [rbp-BFh]
  __int128 v80; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v81; // [rsp+58h] [rbp-A8h]
  __int128 v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+70h] [rbp-90h]
  struct CComposeTop *v84; // [rsp+78h] [rbp-88h]
  struct IDeviceTarget *v85[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v86; // [rsp+90h] [rbp-70h] BYREF
  int v87; // [rsp+A0h] [rbp-60h]
  int v88; // [rsp+A4h] [rbp-5Ch]
  float v89; // [rsp+A8h] [rbp-58h] BYREF
  float v90; // [rsp+ACh] [rbp-54h]
  float v91; // [rsp+B0h] [rbp-50h]
  float v92; // [rsp+B4h] [rbp-4Ch]
  float v93[6]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v94; // [rsp+D0h] [rbp-30h]

  v4 = 0;
  v84 = a4;
  v83 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v82 = 0LL;
  if ( g_pComposition )
    v10 = *((_QWORD *)g_pComposition + 44);
  v11 = (const struct CDirtyRegion *)((char *)a3 + 16);
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 46));
  v13 = 0;
  v14 = _mm_cvtsi32_si128(*((_DWORD *)this + 47));
  if ( *((_QWORD *)a3 + 4) != v10 )
    v11 = 0LL;
  LODWORD(v93[0]) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v15 = _mm_cvtsi32_si128(*((_DWORD *)this + 48));
  LODWORD(v93[1]) = _mm_cvtepi32_ps(v14).m128_u32[0];
  v16 = (float)*((int *)this + 49);
  LODWORD(v93[2]) = _mm_cvtepi32_ps(v15).m128_u32[0];
  v93[3] = v16;
  if ( !*((_BYTE *)a3 + 4456) )
  {
    v19 = *((unsigned int *)a3 + 713);
    v18 = v19;
    v17 = (float *)((char *)a3 + 2692);
    if ( v17 )
      goto LABEL_10;
    v17 = 0LL;
    if ( !v19 )
      goto LABEL_10;
LABEL_105:
    gsl::details::terminate((gsl::details *)v10);
    JUMPOUT(0x180092A82LL);
  }
  v17 = (float *)((char *)a3 + 4436);
  if ( !v17 )
    goto LABEL_105;
  v18 = 1LL;
LABEL_10:
  v20 = &v17[4 * v18];
  while ( v17 != v20 )
  {
    DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v17, v93);
    v10 = v9 + 1;
    if ( !DoesIntersectUnsafe )
      v10 = v9;
    v17 = (float *)(v22 + 16);
    v9 = v10;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xqq_EventWriteTransfer(
      v10,
      (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start,
      (_DWORD)a2,
      0,
      v9);
    v4 = 0;
  }
  if ( !v9 )
  {
LABEL_97:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0x_EventWriteTransfer(v10, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, a2);
    goto LABEL_99;
  }
  v78 = v4;
  v79 = v4;
  if ( v11 )
  {
    *((_DWORD *)v11 + 310) = 0x7FFFFFFF;
    v23 = (CDesktopTree *)*((_QWORD *)this + 22);
    v24 = *(_QWORD *)((char *)this + 244);
    v80 = *(_OWORD *)((char *)this + 228);
    v81 = v24;
    CDesktopTree::UpdateCVIRenderTargets(v23, v11, (const struct RenderTargetInfo *)&v80);
  }
  v25 = COverlayContext::ApplyConfiguration((CLegacyRenderTarget *)((char *)this + 472));
  v8 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x235u, 0LL);
    goto LABEL_101;
  }
  if ( !*((_BYTE *)a3 + 4456) && v78 )
    CDirtyRegion::ForceFullDirty(a3);
  v10 = *((_QWORD *)this + 1471);
  v27 = 0;
  if ( v10 )
  {
    v27 = *(_DWORD *)(v10 + 52);
    if ( v27 == 4 && !CDirectFlipInfo::RenderingRealizationChanged((CDirectFlipInfo *)v10) )
      v27 = 2;
  }
  switch ( v27 )
  {
    case 0:
      goto LABEL_52;
    case 1:
      if ( !CDirectFlipInfo::RenderingRealizationChanged(*((CDirectFlipInfo **)this + 1471)) )
        goto LABEL_101;
LABEL_52:
      if ( v79 )
      {
        v44 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this + 20))(*((_QWORD *)this + 20));
        v45 = CDrawingContext::PushRenderTarget(a2, v44);
        v8 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v45, 0x257u, 0LL);
          goto LABEL_101;
        }
        v13 = 1;
      }
      goto LABEL_38;
    case 2:
      dword_180347294 |= 2u;
      goto LABEL_101;
  }
  if ( (unsigned int)(v27 - 3) > 1 )
    goto LABEL_38;
  v28 = (CDirectFlipInfo *)*((_QWORD *)this + 1471);
  *((_DWORD *)v11 + 310) = CDirectFlipInfo::GetCutoffZ(v28, *((const struct CVisualTree **)this + 13));
  v85[0] = 0LL;
  wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v85);
  DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v28, v85);
  v8 = DeviceTarget;
  if ( DeviceTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, DeviceTarget, 0x277u, 0LL);
    goto LABEL_48;
  }
  if ( RenderTargetInfo::IsHDR((CLegacyRenderTarget *)((char *)this + 228)) )
  {
    v31 = (char *)v85[0] + *(int *)(*((_QWORD *)v85[0] + 1) + 12LL) + 8;
    v32 = (**(__int64 (__fastcall ***)(char *, float *))v31)(v31, &v89);
    if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v32 + 8)) )
      (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v85[0] + 40LL))(v85[0]);
  }
  v33 = CDrawingContext::PushRenderTarget(a2, v85[0]);
  v8 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x27Fu, 0LL);
LABEL_48:
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v85);
    goto LABEL_101;
  }
  v13 = 1;
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v85);
LABEL_38:
  if ( *((_BYTE *)a3 + 4456) )
  {
    v35 = *((_DWORD *)this + 20);
    v36 = *((_DWORD *)this + 21);
    *(_QWORD *)&v86 = 0LL;
    *((_QWORD *)&v86 + 1) = __PAIR64__(v36, v35);
    if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
                             (char *)this + 200,
                             &v86) )
    {
      *(_QWORD *)&v86 = 0LL;
      *((float *)&v86 + 2) = (float)v37;
      *((float *)&v86 + 3) = (float)v38;
      v39 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v86, 1, 1);
      v8 = v39;
      if ( v39 < 0 )
      {
        v77 = 660;
        goto LABEL_58;
      }
      v8 = CDrawingContext::Clear((struct CDrawingContext *)((char *)a2 + 16), &stru_1802F0AE0);
      CDrawingContext::PopGpuClipRectInternal(a2, 0, v40);
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v8, 0x29Cu, 0LL);
        goto LABEL_99;
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
        goto LABEL_105;
      v10 = 1LL;
    }
    else
    {
      v10 = *((unsigned int *)a3 + 713);
      if ( a3 == (const struct CDirtyRegion *)-2692LL && MEMORY[0xA0] )
        goto LABEL_105;
    }
    if ( i >= (unsigned int)v10 )
      goto LABEL_97;
    v10 = v82;
    v46 = (__int64)(*((_QWORD *)&v82 + 1) - v82) >> 3;
    if ( (__int64)(*((_QWORD *)&v82 + 1) - v82) < 0 )
    {
      v80 = 0LL;
      gsl::narrowing_error::narrowing_error((gsl::narrowing_error *)&v80);
      gsl::details::throw_exception<gsl::narrowing_error>();
      __debugbreak();
    }
    *(_QWORD *)&v80 = (__int64)(*((_QWORD *)&v82 + 1) - v82) >> 3;
    if ( v46 < 0 )
      goto LABEL_105;
    *((_QWORD *)&v80 + 1) = v82;
    if ( !(_QWORD)v82 )
    {
      if ( v46 )
        goto LABEL_105;
    }
    v47 = CLegacyRenderTarget::UseSuperSample(this);
    CDirtyRegion::GetUnOccludedDirtyRect((_DWORD)a3, (unsigned int)&v89, i, (unsigned int)v93, v47, (__int64)&v80, v48);
    v50 = v91;
    v51 = v89;
    if ( v91 <= v89 )
      continue;
    v52 = v92;
    v53 = v90;
    if ( v92 <= v90 )
      continue;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(
        v10,
        (unsigned int)&EVTDESC_ETWGUID_DIRTYREGIONEVENT,
        i,
        v49,
        SLOBYTE(v89),
        SLOBYTE(v90),
        SLOBYTE(v91),
        SLOBYTE(v92));
    dword_1803472A8 += (int)(float)((float)(v50 - v51) * (float)(v52 - v53));
    v54 = CLegacyRenderTarget::UseSuperSample(this);
    v55 = (*(__int64 (__fastcall **)(CLegacyRenderTarget *))(*(_QWORD *)this + 232LL))(this);
    v56 = *((_QWORD *)this + 13);
    v87 = 0;
    v88 = 0;
    *(_QWORD *)&v86 = __PAIR64__(LODWORD(v53), LODWORD(v51));
    *((_QWORD *)&v86 + 1) = __PAIR64__(LODWORD(v52), LODWORD(v50));
    v39 = CDrawingContext::DrawVisualTree(a2, v56, (__int64)&v86, v11, v55, v54);
    v8 = v39;
    if ( v39 < 0 )
      break;
    v57 = (CLegacyRenderTarget *)((char *)this + (*((_BYTE *)this + 11505) != 0 ? 332LL : 264LL));
    *(_OWORD *)v85 = 0LL;
    v86 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v57, (__int64)&v89, (float *)&v86);
    LODWORD(v85[0]) = v86;
    if ( ((unsigned int)v86 & 0x7FFFFFFF) > 0x497FFFF0 )
    {
      v59 = 0LL;
      v59.m128_f32[0] = (float)(int)*(float *)&v86 - *(float *)&v86;
      v60.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v85[0]) = _mm_cmple_ss(v59, v60).m128_u32[0];
      v58 = (int)*(float *)&v86 - LODWORD(v85[0]);
    }
    else
    {
      *(float *)v85 = *(float *)&v86 + 6291456.25;
      v58 = (int)(LODWORD(v85[0]) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v86 - (float)v58) & _xmm) > 0.00390625 )
    {
      v61.m128_f32[0] = (float)(int)*(float *)&v86;
      LODWORD(v85[0]) = _mm_cmplt_ss((__m128)(unsigned int)v86, v61).m128_u32[0];
      v58 = (int)*(float *)&v86 + LODWORD(v85[0]);
    }
    LODWORD(v94) = v58;
    LODWORD(v85[0]) = DWORD1(v86);
    if ( (DWORD1(v86) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v63 = 0LL;
      v63.m128_f32[0] = (float)(int)*((float *)&v86 + 1) - *((float *)&v86 + 1);
      v64.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v85[0]) = _mm_cmple_ss(v63, v64).m128_u32[0];
      v62 = (int)*((float *)&v86 + 1) - LODWORD(v85[0]);
    }
    else
    {
      *(float *)v85 = *((float *)&v86 + 1) + 6291456.25;
      v62 = (int)(LODWORD(v85[0]) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v86 + 1) - (float)v62) & _xmm) > 0.00390625 )
    {
      v65.m128_f32[0] = (float)(int)*((float *)&v86 + 1);
      LODWORD(v85[0]) = _mm_cmplt_ss((__m128)DWORD1(v86), v65).m128_u32[0];
      v62 = (int)*((float *)&v86 + 1) + LODWORD(v85[0]);
    }
    DWORD1(v94) = v62;
    LODWORD(v85[0]) = DWORD2(v86);
    if ( (DWORD2(v86) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v67 = 0LL;
      v67.m128_f32[0] = (float)(int)*((float *)&v86 + 2) - *((float *)&v86 + 2);
      v68.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v85[0]) = _mm_cmple_ss(v67, v68).m128_u32[0];
      v66 = (int)*((float *)&v86 + 2) - LODWORD(v85[0]);
    }
    else
    {
      *(float *)v85 = *((float *)&v86 + 2) + 6291456.25;
      v66 = (int)(LODWORD(v85[0]) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v86 + 2) - (float)v66) & _xmm) > 0.00390625 )
    {
      v69 = 0LL;
      v69.m128_f32[0] = (float)(int)*((float *)&v86 + 2);
      LODWORD(v85[0]) = _mm_cmplt_ss(v69, (__m128)DWORD2(v86)).m128_u32[0];
      v66 = (int)*((float *)&v86 + 2) - LODWORD(v85[0]);
    }
    DWORD2(v94) = v66;
    LODWORD(v85[0]) = HIDWORD(v86);
    if ( (HIDWORD(v86) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v71 = 0LL;
      v71.m128_f32[0] = (float)(int)*((float *)&v86 + 3) - *((float *)&v86 + 3);
      v72.m128_f32[0] = FLOAT_N0_5;
      LODWORD(v85[0]) = _mm_cmple_ss(v71, v72).m128_u32[0];
      v70 = (int)*((float *)&v86 + 3) - LODWORD(v85[0]);
    }
    else
    {
      *(float *)v85 = *((float *)&v86 + 3) + 6291456.25;
      v70 = (int)(LODWORD(v85[0]) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v86 + 3) - (float)v70) & _xmm) > 0.00390625 )
    {
      v73 = 0LL;
      v73.m128_f32[0] = (float)(int)*((float *)&v86 + 3);
      LODWORD(v85[0]) = _mm_cmplt_ss(v73, (__m128)HIDWORD(v86)).m128_u32[0];
      v70 = (int)*((float *)&v86 + 3) - LODWORD(v85[0]);
    }
    v74 = *((_QWORD *)this + 20);
    HIDWORD(v94) = v70;
    *(_OWORD *)v85 = v94;
    (*(void (__fastcall **)(__int64, struct IDeviceTarget **))(*(_QWORD *)v74 + 16LL))(v74, v85);
    v75 = v84;
    *((_BYTE *)this + 18586) = 1;
    if ( v75 )
    {
      v39 = CComposeTop::SubtractOverdraw(v75, &v89);
      v8 = v39;
      if ( v39 < 0 )
      {
        v77 = 711;
        goto LABEL_58;
      }
    }
  }
  v77 = 701;
LABEL_58:
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v39, v77, 0LL);
LABEL_99:
  if ( v13 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
LABEL_101:
  if ( (_QWORD)v82 )
    std::_Deallocate<16,0>(v82, (v83 - v82) & 0xFFFFFFFFFFFFFFF8uLL);
  return (unsigned int)v8;
}

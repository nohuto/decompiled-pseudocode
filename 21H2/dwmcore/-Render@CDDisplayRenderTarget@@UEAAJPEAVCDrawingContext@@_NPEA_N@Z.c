/*
 * XREFs of ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180106950 (-Render@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x18000E37C (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180016094 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC030 (-Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?DoesIntersect@CDirtyRegion@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCAD8 (-DoesIntersect@CDirtyRegion@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetIntersectingRectCount@CDirtyRegion@@QEBAIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCC10 (-GetIntersectingRectCount@CDirtyRegion@@QEBAIAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800DCDE8 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     ?NeedsPresent@COverlayContext@@QEBA_NXZ @ 0x1800DE61C (-NeedsPresent@COverlayContext@@QEBA_NXZ.c)
 *     ??$?0$0?0V?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@$0A@@?$span@PEBVCVisual@@$0?0@gsl@@QEAA@AEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@@Z @ 0x1800EB280 (--$-0$0-0V-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@@$0A@@-$span@PEBVCVisual@@$.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180111C2C (McTemplateU0q_EventWriteTransfer.c)
 *     ?GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x1801C86A0 (-GetCurrentBackBuffer@CDDisplaySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801C90AC (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801C93C0 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x18027A550 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::Render(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  char *v4; // rbx
  int v8; // esi
  __int64 v9; // rax
  struct CComposeTop *v10; // r15
  __int64 v11; // r14
  CDDisplaySwapChain *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  char v15; // r12
  char v16; // al
  float *v17; // r11
  unsigned int IntersectingRectCount; // r12d
  __int64 v19; // rcx
  unsigned int i; // r15d
  gsl::details *v21; // rax
  struct IDeviceTarget *CurrentBackBuffer; // rax
  int v23; // eax
  __int64 v24; // rcx
  gsl::details *v25; // rax
  __int64 v26; // r9
  CDDisplayRenderTarget *v27; // r12
  int v28; // eax
  __int64 v29; // rcx
  char v30; // al
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  CDDisplaySwapChain *v35; // rcx
  struct IDeviceTarget *v36; // rax
  __int64 v37; // rcx
  char v39; // [rsp+51h] [rbp-38h] BYREF
  _WORD v40[11]; // [rsp+52h] [rbp-37h] BYREF
  __int64 v41; // [rsp+68h] [rbp-21h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-19h] BYREF
  bool *v43; // [rsp+80h] [rbp-9h]
  _BYTE v44[16]; // [rsp+88h] [rbp-1h] BYREF
  int v45[4]; // [rsp+98h] [rbp+Fh] BYREF

  v4 = 0LL;
  v43 = a4;
  *a4 = 0;
  v8 = 0;
  if ( !*((_QWORD *)this - 2307) )
    goto LABEL_51;
  v9 = *((_QWORD *)this - 2308);
  if ( !v9 || !a3 && *((_BYTE *)this - 54) )
    goto LABEL_51;
  v10 = *(struct CComposeTop **)(v9 + 4744);
  v11 = v9 + 104;
  if ( v10 && CComposeTop::HasNewContent(*(CComposeTop **)(v9 + 4744)) )
  {
    v12 = (CDDisplaySwapChain *)*((_QWORD *)this - 2307);
    HIBYTE(v40[0]) = 1;
    CDDisplaySwapChain::CopyFrontToBackBuffer(v12);
  }
  else
  {
    HIBYTE(v40[0]) = 0;
  }
  v41 = 0LL;
  v39 = 0;
  LOBYTE(v40[0]) = 0;
  *(_OWORD *)&v40[3] = 0LL;
  v13 = COverlayContext::ApplyConfiguration((CDDisplayRenderTarget *)((char *)this - 18448), v11, &v40[3], &v39, v40);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x14Au);
    goto LABEL_42;
  }
  *((_BYTE *)this - 55) |= LOBYTE(v40[0]);
  v15 = v39 | a3;
  QueryPerformanceCounter(&PerformanceCount);
  v16 = CTargetStats::Ready(
          (CDDisplayRenderTarget *)((char *)this - 192),
          PerformanceCount.QuadPart,
          *((struct IOverlaySwapChain **)this - 2307));
  v17 = (float *)((char *)this - 476);
  if ( !v15 && !v16 )
    goto LABEL_61;
  if ( *((_BYTE *)this - 7138) )
  {
    CDirtyRegion::ForceFullDirty((CDirtyRegion *)v11);
    v17 = (float *)((char *)this - 476);
    *((_BYTE *)this - 7138) = 0;
  }
  IntersectingRectCount = CDirtyRegion::GetIntersectingRectCount(v11, v17);
  if ( !IntersectingRectCount && !HIBYTE(v40[0]) )
  {
LABEL_61:
    if ( CDirtyRegion::DoesIntersect(v11, v17) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
        McTemplateU0q_EventWriteTransfer(v19, &RENDERTARGET_RENDERSKIPPED, *((unsigned int *)this - 47));
      for ( i = 0; i < *(_DWORD *)(v11 + 2820); ++i )
      {
        v21 = gsl::span<CVisual const *,-1>::span<CVisual const *,-1>((gsl::details *)v44, (__int64 *)&v40[3]);
        CDirtyRegion::GetOptimizedRect(
          (struct CComposition **)v11,
          (__int64)v45,
          i,
          (__int64)this - 476,
          (CDDisplayRenderTarget *)((char *)this - 128),
          0LL,
          0,
          v21,
          0LL);
      }
    }
LABEL_34:
    if ( *((_BYTE *)this - 7138) || **((_DWORD **)this - 16) )
      ScheduleCompositionPass(0, 1u);
    if ( *(_QWORD *)&v40[3] )
      std::_Deallocate<16,0>(*(void **)&v40[3], (v41 - *(_QWORD *)&v40[3]) & 0xFFFFFFFFFFFFFFF8uLL);
    v30 = 0;
    if ( v8 >= 0 )
      goto LABEL_47;
    goto LABEL_45;
  }
  CurrentBackBuffer = CDDisplaySwapChain::GetCurrentBackBuffer(*((CDDisplaySwapChain **)this - 2307));
  v23 = CDrawingContext::BeginFrame(
          a2,
          CurrentBackBuffer,
          (CDDisplayRenderTarget *)((char *)this + (*((_BYTE *)this - 7423) != 0 ? -296LL : -432LL)),
          (const struct _D3DCOLORVALUE *)((char *)this - 18508),
          (CDDisplayRenderTarget *)((char *)this - 18448));
  v8 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x164u);
    goto LABEL_42;
  }
  if ( !IntersectingRectCount )
  {
    v27 = (CDDisplayRenderTarget *)((char *)this - 18632);
LABEL_30:
    if ( v10 )
    {
      v31 = CDDisplayRenderTarget::RenderComposeTop(v27, a2, v10, *(_BYTE *)(v11 + 4424));
      v8 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x182u);
        goto LABEL_26;
      }
    }
    v33 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    v8 = v33;
    if ( v33 >= 0 )
      goto LABEL_34;
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0x186u);
LABEL_42:
    if ( *(_QWORD *)&v40[3] )
      std::_Deallocate<16,0>(*(void **)&v40[3], (v41 - *(_QWORD *)&v40[3]) & 0xFFFFFFFFFFFFFFF8uLL);
    v30 = 0;
    goto LABEL_45;
  }
  v25 = gsl::span<CVisual const *,-1>::span<CVisual const *,-1>((gsl::details *)v45, (__int64 *)&v40[3]);
  v26 = IntersectingRectCount;
  v27 = (CDDisplayRenderTarget *)((char *)this - 18632);
  v28 = CDDisplayRenderTarget::RenderDirtyRegion((char *)this - 18632, a2, v11, v26, v25, v10);
  v8 = v28;
  if ( v28 >= 0 )
    goto LABEL_30;
  MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0x178u);
LABEL_26:
  if ( *(_QWORD *)&v40[3] )
    std::_Deallocate<16,0>(*(void **)&v40[3], (v41 - *(_QWORD *)&v40[3]) & 0xFFFFFFFFFFFFFFF8uLL);
  v30 = 1;
LABEL_45:
  *((_BYTE *)this - 56) = 0;
  if ( v30 )
    CDrawingContext::EndFrame((CD3DDevice **)a2);
LABEL_47:
  if ( *((_BYTE *)this - 56)
    || *((_BYTE *)this - 55)
    || COverlayContext::NeedsPresent((CDDisplayRenderTarget *)((char *)this - 18448)) )
  {
    *v43 = 1;
  }
LABEL_51:
  if ( g_LockAndReadTarget )
  {
    v35 = (CDDisplaySwapChain *)*((_QWORD *)this - 2307);
    if ( v35 )
    {
      v36 = CDDisplaySwapChain::GetCurrentBackBuffer(v35);
      if ( a2 )
        v4 = (char *)a2 + 24;
      v37 = (__int64)v36 + *(int *)(*((_QWORD *)v36 + 1) + 16LL) + 8;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v37 + 24LL))(v37, v4);
    }
  }
  return (unsigned int)v8;
}

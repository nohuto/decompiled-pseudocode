/*
 * XREFs of ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C
 * Callers:
 *     ?Render@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180106990 (-Render@CLegacyRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CA42C (-Render@CLegacyStereoRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18000E2B8 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x18000E37C (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?ForceFullDirty@CDirtyRegion@@QEBAXXZ @ 0x180016094 (-ForceFullDirty@CDirtyRegion@@QEBAXXZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800B9300 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BBB7C (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x1800BBBD8 (-CheckForFullScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x1800BBE00 (-IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ.c)
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
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C0B5C (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PostRender@CComputeScribbleRenderer@@QEAAXXZ @ 0x1801E464C (-PostRender@CComputeScribbleRenderer@@QEAAXXZ.c)
 */

__int64 __fastcall CLegacyRenderTarget::Render(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        char a3,
        bool *a4)
{
  char *v4; // rdi
  __int64 v6; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  struct CComposeTop *v12; // r15
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  bool v16; // al
  unsigned int IntersectingRectCount; // r12d
  __int64 v18; // rcx
  unsigned int i; // ebx
  _QWORD *v20; // rax
  char v21; // bl
  struct IDeviceTarget *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  gsl::details *v26; // rcx
  __int64 v27; // r9
  CLegacyRenderTarget *v28; // r12
  int v29; // eax
  __int64 v30; // rcx
  char v31; // al
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  struct IMonitorTarget *v39; // rdx
  int v40; // eax
  __int64 v41; // rcx
  __int64 (__fastcall ***v42)(_QWORD); // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  char v46; // [rsp+51h] [rbp-38h]
  _BYTE v47[21]; // [rsp+53h] [rbp-36h] BYREF
  __int64 v48; // [rsp+68h] [rbp-21h]
  CComputeScribbleRenderer *v49; // [rsp+70h] [rbp-19h]
  LARGE_INTEGER PerformanceCount; // [rsp+78h] [rbp-11h] BYREF
  bool *v51; // [rsp+80h] [rbp-9h]
  __int128 v52; // [rsp+88h] [rbp-1h] BYREF
  int v53[4]; // [rsp+98h] [rbp+Fh] BYREF

  v4 = 0LL;
  v51 = a4;
  v49 = 0LL;
  v6 = *((_QWORD *)this - 2314);
  v10 = 0;
  if ( v6 )
    v49 = (CComputeScribbleRenderer *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
  *a4 = 0;
  if ( *((_QWORD *)this - 2314) )
  {
    v11 = *((_QWORD *)this - 2316);
    if ( v11 )
    {
      if ( a3 || !*((_BYTE *)this - 75) )
      {
        v12 = *(struct CComposeTop **)(v11 + 4744);
        v13 = v11 + 104;
        if ( v12 && CComposeTop::HasNewContent(*(CComposeTop **)(v11 + 4744)) )
        {
          v46 = 1;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this - 2314) + 24LL))(*((_QWORD *)this - 2314));
        }
        else
        {
          v46 = 0;
        }
        v48 = 0LL;
        v47[0] = 0;
        *(_OWORD *)&v47[5] = 0LL;
        v14 = COverlayContext::ApplyConfiguration((CLegacyRenderTarget *)((char *)this - 18496), (__int64)v47);
        v10 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x10Au);
        }
        else
        {
          *((_BYTE *)this - 76) |= v47[0];
          QueryPerformanceCounter(&PerformanceCount);
          v16 = CTargetStats::Ready(
                  (CLegacyRenderTarget *)((char *)this - 240),
                  PerformanceCount.QuadPart,
                  *((struct IOverlaySwapChain **)this - 2314));
          if ( !a3 && !v16 )
            goto LABEL_85;
          if ( *((_BYTE *)this - 7186) )
          {
            CDirtyRegion::ForceFullDirty((CDirtyRegion *)v13);
            *((_BYTE *)this - 7186) = 0;
          }
          IntersectingRectCount = CDirtyRegion::GetIntersectingRectCount(v13, (char *)this - 524);
          if ( !IntersectingRectCount && !v46 )
          {
LABEL_85:
            if ( (unsigned __int8)CDirtyRegion::DoesIntersect(v13, (char *)this - 524) )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000000) != 0 )
                McTemplateU0q_EventWriteTransfer(v18, &RENDERTARGET_RENDERSKIPPED, *((unsigned int *)this - 59));
              if ( (unsigned int)COverlayContext::GetEffectiveDirectFlipMode((__int64)this - 18496) != 2 )
              {
                for ( i = 0; i < *(_DWORD *)(v13 + 2820); ++i )
                {
                  v20 = (_QWORD *)gsl::span<CVisual const *,-1>::span<CVisual const *,-1>(&v52, &v47[5]);
                  CDirtyRegion::GetOptimizedRect(
                    (struct CComposition **)v13,
                    (__int64)v53,
                    i,
                    (__int64)this - 524,
                    (CLegacyRenderTarget *)((char *)this - 160),
                    0LL,
                    0,
                    v20,
                    0LL);
                }
              }
            }
LABEL_47:
            if ( *((_BYTE *)this - 7186) || **((_DWORD **)this - 20) )
              ScheduleCompositionPass(0LL, 1LL);
            CLegacyRenderTarget::CheckForFullScreenVideoNotifications((CLegacyRenderTarget *)((char *)this - 18688));
            if ( v49 )
            {
              CComputeScribbleRenderer::PostRender(v49);
              v49 = 0LL;
            }
            if ( *((_BYTE *)this - 7471) )
            {
              *((_QWORD *)&v52 + 1) = *(_QWORD *)((char *)this - 492);
              *(_QWORD *)&v52 = 0LL;
            }
            else
            {
              v52 = *(_OWORD *)((char *)this - 508);
            }
            v39 = (CLegacyRenderTarget *)((char *)this - 18544);
            if ( this == (CLegacyRenderTarget *)18688 )
              v39 = 0LL;
            v40 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(
                    *(CSuperWetInkManager **)(*((_QWORD *)this - 2334) + 256LL),
                    v39);
            v10 = v40;
            if ( v40 >= 0 )
            {
              if ( *(_QWORD *)&v47[5] )
                std::_Deallocate<16,0>(*(_QWORD *)&v47[5], (v48 - *(_QWORD *)&v47[5]) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_68:
              if ( *((_BYTE *)this - 77)
                || *((_BYTE *)this - 76)
                || COverlayContext::NeedsPresent((CLegacyRenderTarget *)((char *)this - 18496)) )
              {
                *v51 = 1;
              }
              goto LABEL_72;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0x185u);
            goto LABEL_61;
          }
          v21 = *((_BYTE *)this - 7471);
          v22 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this - 2314))(*((_QWORD *)this - 2314));
          v23 = CDrawingContext::BeginFrame(
                  a2,
                  v22,
                  (CLegacyRenderTarget *)((char *)this + (v21 != 0 ? -344LL : -480LL)),
                  (const struct _D3DCOLORVALUE *)((char *)this - 18564),
                  (CLegacyRenderTarget *)((char *)this - 18496));
          v10 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x122u);
          }
          else
          {
            if ( IntersectingRectCount )
            {
              v25 = *(_QWORD *)&v47[5];
              gsl::details::extent_type<-1>::extent_type<-1>(
                (gsl::details *)&v52,
                (__int64)(*(_QWORD *)&v47[13] - *(_QWORD *)&v47[5]) >> 3);
              *((_QWORD *)&v52 + 1) = v25;
              if ( (_QWORD)v52 == -1LL || !v25 && (_QWORD)v52 )
              {
                gsl::details::terminate(v26);
                JUMPOUT(0x1800BBB72LL);
              }
              v27 = IntersectingRectCount;
              v28 = (CLegacyRenderTarget *)((char *)this - 18688);
              v29 = CLegacyRenderTarget::RenderDirtyRegion((__int64)this - 18688, a2, v13, v27, &v52, (__int64)v12);
              v10 = v29;
              if ( v29 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x134u);
LABEL_32:
                if ( *(_QWORD *)&v47[5] )
                  std::_Deallocate<16,0>(*(_QWORD *)&v47[5], (v48 - *(_QWORD *)&v47[5]) & 0xFFFFFFFFFFFFFFF8uLL);
                v31 = 1;
                goto LABEL_64;
              }
            }
            else
            {
              v28 = (CLegacyRenderTarget *)((char *)this - 18688);
            }
            if ( v12 )
            {
              v32 = CLegacyRenderTarget::RenderComposeTop(v28, a2, v12, *(_BYTE *)(v13 + 4424));
              v10 = v32;
              if ( v32 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x13Du);
                goto LABEL_32;
              }
            }
            if ( CLegacyRenderTarget::IsPrimaryMonitor((CLegacyRenderTarget *)((char *)this - 18544)) )
            {
              v34 = *(_QWORD *)(*((_QWORD *)this - 2334) + 624LL);
              if ( v34 )
              {
                if ( *(_BYTE *)(v34 + 8) )
                {
                  v35 = CLegacyRenderTarget::RenderDebugFrameCounter(v28, a2);
                  v10 = v35;
                  if ( v35 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, v35, 0x145u);
                    goto LABEL_32;
                  }
                }
              }
            }
            v37 = CDrawingContext::EndFrame((CD3DDevice **)a2);
            v10 = v37;
            if ( v37 >= 0 )
            {
              if ( **((_DWORD **)a2 + 996) )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this - 2314) + 312LL))(*((_QWORD *)this - 2314));
              goto LABEL_47;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, v37, 0x14Au);
          }
        }
LABEL_61:
        if ( *(_QWORD *)&v47[5] )
          std::_Deallocate<16,0>(*(_QWORD *)&v47[5], (v48 - *(_QWORD *)&v47[5]) & 0xFFFFFFFFFFFFFFF8uLL);
        v31 = 0;
LABEL_64:
        *((_BYTE *)this - 77) = 0;
        if ( v31 )
          CDrawingContext::EndFrame((CD3DDevice **)a2);
        if ( v49 )
          CComputeScribbleRenderer::PostRender(v49);
        goto LABEL_68;
      }
    }
  }
LABEL_72:
  if ( g_LockAndReadTarget )
  {
    v42 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 2314);
    if ( v42 )
    {
      v43 = (**v42)(v42);
      if ( a2 )
        v4 = (char *)a2 + 24;
      v44 = *(int *)(*(_QWORD *)(v43 + 8) + 16LL) + v43 + 8;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v44 + 24LL))(v44, v4);
    }
  }
  return v10;
}

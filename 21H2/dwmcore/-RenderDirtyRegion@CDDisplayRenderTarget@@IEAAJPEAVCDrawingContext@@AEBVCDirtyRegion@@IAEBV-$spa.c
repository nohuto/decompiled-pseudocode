/*
 * XREFs of ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801C93C0
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000EBAC (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800B99D0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180112DBE (McTemplateU0qdffff_EventWriteTransfer.c)
 *     McTemplateU0xqq_EventWriteTransfer @ 0x180112E80 (McTemplateU0xqq_EventWriteTransfer.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C8868 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderDirtyRegion(
        __int64 a1,
        CDrawingContext *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v8; // esi
  int v10; // edi
  __int64 v11; // rcx
  struct MilRectF *v12; // r8
  char v13; // r9
  const struct COcclusionContext *OcclusionContext; // r13
  struct CVisualTree *v15; // rcx
  __int64 v16; // xmm1_8
  int v17; // eax
  float v18; // xmm1_4
  int v19; // eax
  __int64 v20; // r9
  char v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r9
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  __int64 v28; // r9
  int v30; // r9d
  unsigned int v31; // [rsp+28h] [rbp-99h]
  __int128 v32; // [rsp+68h] [rbp-59h] BYREF
  __int128 v33; // [rsp+78h] [rbp-49h] BYREF
  __int64 v34; // [rsp+88h] [rbp-39h]

  v8 = 0;
  v10 = 0;
  OcclusionContext = CDirtyRegion::GetOcclusionContext((CDirtyRegion *)a3);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0xqq_EventWriteTransfer(v11, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (__int64)a2, 0, v13);
    v12 = (struct MilRectF *)(a1 + 18156);
  }
  if ( OcclusionContext )
  {
    *((_DWORD *)OcclusionContext + 300) = 0x7FFFFFFF;
    v15 = *(struct CVisualTree **)(a1 + 168);
    v16 = *(_QWORD *)(a1 + 18424);
    v33 = *(_OWORD *)(a1 + 18408);
    v34 = v16;
    CDesktopTree::UpdateCVIRenderTargets(v15, (struct RenderTargetInfo *)&v33, v12);
  }
  if ( *(_BYTE *)(a3 + 4424) )
  {
    if ( *(_BYTE *)(a1 + 11209) )
    {
LABEL_13:
      v21 = 0;
      goto LABEL_14;
    }
    if ( *(_BYTE *)(a1 + 18404) )
    {
      v17 = *(_DWORD *)(a1 + 104);
      *(_QWORD *)&v32 = 0LL;
      v18 = (float)*(int *)(a1 + 108);
      *((float *)&v32 + 2) = (float)v17;
      *((float *)&v32 + 3) = v18;
      v19 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (__int64)&v32, D2D1_ANTIALIAS_MODE_ALIASED, 1);
      v10 = v19;
      if ( v19 < 0 )
      {
        v31 = 675;
        goto LABEL_28;
      }
      v10 = (**((__int64 (__fastcall ***)(__int64, const struct _D3DCOLORVALUE *))a2 + 2))(
              (__int64)a2 + 16,
              &stru_180377378);
      CDrawingContext::PopGpuClipRectInternal(a2, 0);
      if ( v10 < 0 )
      {
        v30 = v10;
        v31 = 683;
        goto LABEL_26;
      }
      CDDisplayRenderTarget::NotifyRenderedRect(a1, 0LL, 0, v20);
    }
  }
  if ( *(_BYTE *)(a1 + 11209) )
    goto LABEL_13;
  v21 = 1;
  if ( !*(_BYTE *)(a1 + 18406) )
    goto LABEL_13;
LABEL_14:
  if ( !*(_DWORD *)(a3 + 2820) )
  {
LABEL_22:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x_EventWriteTransfer(v11, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a2);
    return (unsigned int)v10;
  }
  while ( 1 )
  {
    CDirtyRegion::GetOptimizedRect(
      (struct CComposition **)a3,
      (__int64)&v32,
      v8,
      a1 + 18156,
      0LL,
      a1 + (*(_BYTE *)(a1 + 11209) != 0 ? 18336LL : 18200LL),
      v21,
      a5,
      0LL);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v32) )
      goto LABEL_21;
    v24 = *((float *)&v32 + 3);
    v25 = *((float *)&v32 + 2);
    v26 = *((float *)&v32 + 1);
    LODWORD(v27) = v32;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(v11, v22, v8, v23, v32, SBYTE4(v32), SBYTE8(v32), SBYTE12(v32));
    v34 = 0LL;
    *(_QWORD *)&v33 = __PAIR64__(LODWORD(v26), LODWORD(v27));
    *((_QWORD *)&v33 + 1) = __PAIR64__(LODWORD(v24), LODWORD(v25));
    dword_1803D3158 += (int)(float)((float)(v25 - v27) * (float)(v24 - v26));
    v19 = CDrawingContext::DrawVisualTree(
            a2,
            *(struct CVisualTree **)(a1 + 96),
            (__int64)&v33,
            OcclusionContext,
            *(_BYTE *)(a1 + 140) != 0 ? 2 : 0,
            v21,
            0LL);
    v10 = v19;
    if ( v19 < 0 )
      break;
    CDDisplayRenderTarget::NotifyRenderedRect(a1, &v32, 0, v28);
    if ( a6 )
    {
      v19 = CComposeTop::SubtractOverdraw(a6);
      v10 = v19;
      if ( v19 < 0 )
      {
        v31 = 737;
        goto LABEL_28;
      }
    }
LABEL_21:
    if ( ++v8 >= *(_DWORD *)(a3 + 2820) )
      goto LABEL_22;
  }
  v31 = 727;
LABEL_28:
  v30 = v19;
LABEL_26:
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v30, v31);
  return (unsigned int)v10;
}

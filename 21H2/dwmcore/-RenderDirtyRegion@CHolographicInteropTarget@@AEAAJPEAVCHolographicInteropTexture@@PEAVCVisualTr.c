/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x18029A220
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x18029A484 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800B99D0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800FE59C (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180112DBE (McTemplateU0qdffff_EventWriteTransfer.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18029BA30 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 */

__int64 __fastcall CHolographicInteropTarget::RenderDirtyRegion(
        CHolographicInteropTarget *this,
        struct CHolographicInteropTexture *a2,
        struct CVisualTree *a3,
        const struct CDirtyRegion *a4,
        unsigned int a5,
        unsigned int a6,
        struct IRenderTargetBitmap *a7,
        struct CDrawingContext *a8)
{
  unsigned int v11; // edi
  char *v12; // rcx
  float v13; // xmm2_4
  float v14; // xmm3_4
  __int64 v15; // rcx
  unsigned int i; // ebx
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // xmm6_4
  int v20; // xmm7_4
  int v21; // xmm8_4
  int v22; // xmm9_4
  COcclusionContext *OcclusionContext; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD v28[2]; // [rsp+58h] [rbp-99h] BYREF
  __int64 v29[2]; // [rsp+60h] [rbp-91h] BYREF
  int v30; // [rsp+70h] [rbp-81h] BYREF
  int v31; // [rsp+74h] [rbp-7Dh]
  int v32; // [rsp+78h] [rbp-79h]
  int v33; // [rsp+7Ch] [rbp-75h]
  int v34[4]; // [rsp+80h] [rbp-71h] BYREF
  _DWORD v35[6]; // [rsp+90h] [rbp-61h] BYREF

  v11 = 0;
  v12 = (char *)a7 + *(int *)(*((_QWORD *)a7 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, _DWORD *))v12)(v12, v28);
  v13 = (float)*((int *)a2 + 65);
  v14 = (float)*((int *)a2 + 66);
  *(float *)v34 = v13 + 0.0;
  *(float *)&v34[1] = v14 + 0.0;
  *(float *)&v34[2] = (float)v28[0] + v13;
  *(float *)&v34[3] = (float)v28[1] + v14;
  CDirtyRegion::CalcOcclusion(a4);
  for ( i = 0; i < *((_DWORD *)a4 + 705); ++i )
  {
    v29[0] = 0LL;
    v29[1] = 0LL;
    CDirtyRegion::GetOptimizedRect((struct CComposition **)a4, (__int64)&v30, i, (__int64)v34, 0LL, 0LL, 0, v29, 0LL);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v30) )
    {
      v19 = v33;
      v20 = v32;
      v21 = v31;
      v22 = v30;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
        McTemplateU0qdffff_EventWriteTransfer(v15, v17, i, v18, v30, v31, v32, v33);
      OcclusionContext = CDirtyRegion::GetOcclusionContext(a4);
      v35[4] = 0;
      v35[5] = 0;
      v35[0] = v22;
      v35[1] = v21;
      v35[2] = v20;
      v35[3] = v19;
      v24 = CDrawingContext::DrawVisualTree(a8, a3, (__int64)v35, OcclusionContext, 2, 0, 0LL);
      v11 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v24, 0x1EFu);
        return v11;
      }
      CHolographicInteropTexture::NotifyRenderedRect(a2, v25, a6, &v30);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v15, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a8);
  return v11;
}

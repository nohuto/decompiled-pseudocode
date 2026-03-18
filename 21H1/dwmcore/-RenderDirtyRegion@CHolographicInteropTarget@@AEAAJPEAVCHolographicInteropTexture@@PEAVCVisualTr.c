/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180258AB4
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180258D00 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18006B7C4 (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D3664 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800D39C0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801576F4 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180189330 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18025A0B0 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
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
  unsigned int i; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // xmm6_4
  unsigned int v20; // xmm7_4
  unsigned int v21; // xmm8_4
  unsigned int v22; // xmm9_4
  COcclusionContext *OcclusionContext; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  _DWORD v28[2]; // [rsp+48h] [rbp-99h] BYREF
  __int64 v29; // [rsp+50h] [rbp-91h] BYREF
  unsigned int v30; // [rsp+60h] [rbp-81h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-7Dh]
  unsigned int v32; // [rsp+68h] [rbp-79h]
  unsigned int v33; // [rsp+6Ch] [rbp-75h]
  __int128 v34; // [rsp+70h] [rbp-71h] BYREF
  int v35; // [rsp+80h] [rbp-61h]
  int v36; // [rsp+84h] [rbp-5Dh]
  float v37[4]; // [rsp+88h] [rbp-59h] BYREF

  v11 = 0;
  v12 = (char *)a7 + *(int *)(*((_QWORD *)a7 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, _DWORD *))v12)(v12, v28);
  v13 = (float)*((int *)a2 + 61);
  v14 = (float)*((int *)a2 + 62);
  v37[0] = v13 + 0.0;
  v37[1] = v14 + 0.0;
  v37[2] = (float)v28[0] + v13;
  v37[3] = (float)v28[1] + v14;
  CDirtyRegion::CalcOcclusion(a4);
  for ( i = 0; i < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects((__int64)a4, &v29); ++i )
  {
    v34 = 0LL;
    CDirtyRegion::GetUnOccludedDirtyRect(a4, (float *)&v30, i, v37, 0, &v34, 0LL);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v30) )
    {
      v19 = v33;
      v20 = v32;
      v21 = v31;
      v22 = v30;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
        McTemplateU0qdffff_EventWriteTransfer(v17, &EVTDESC_ETWGUID_DIRTYREGIONEVENT, i, v18, v30, v31, v32, v33);
      OcclusionContext = CDirtyRegion::GetOcclusionContext(a4);
      v35 = 0;
      v36 = 0;
      *(_QWORD *)&v34 = __PAIR64__(v21, v22);
      *((_QWORD *)&v34 + 1) = __PAIR64__(v19, v20);
      v24 = CDrawingContext::DrawVisualTree(a8, (__int64)a3, (__int64)&v34, OcclusionContext, 2, 0);
      v11 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v24, 0x1E1u, 0LL);
        return v11;
      }
      CHolographicInteropTexture::NotifyRenderedRect(a2, v25, a6, &v30);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x_EventWriteTransfer(v16, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a8);
  return v11;
}

/*
 * XREFs of ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180257EA4
 * Callers:
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180258114 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058390 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x180075020 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180092B14 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D79D8 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D7A7C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180185320 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     ?NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802594E0 (-NotifyRenderedRect@CHolographicInteropTexture@@QEAAXIIAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
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
  unsigned __int64 CurrentFrameId; // rax
  COcclusionContext *v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD v29[2]; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v30[2]; // [rsp+50h] [rbp-91h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-81h] BYREF
  unsigned int v32; // [rsp+64h] [rbp-7Dh]
  unsigned int v33; // [rsp+68h] [rbp-79h]
  unsigned int v34; // [rsp+6Ch] [rbp-75h]
  __int128 v35; // [rsp+70h] [rbp-71h] BYREF
  int v36; // [rsp+80h] [rbp-61h]
  int v37; // [rsp+84h] [rbp-5Dh]
  float v38[4]; // [rsp+88h] [rbp-59h] BYREF

  v11 = 0;
  v12 = (char *)a7 + *(int *)(*((_QWORD *)a7 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, _DWORD *))v12)(v12, v29);
  v13 = (float)*((int *)a2 + 61);
  v14 = (float)*((int *)a2 + 62);
  v38[0] = v13 + 0.0;
  v38[1] = v14 + 0.0;
  v38[2] = (float)v29[0] + v13;
  v38[3] = (float)v29[1] + v14;
  CDirtyRegion::CalcOcclusion(a4);
  for ( i = 0; i < *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects((__int64)a4, v30); ++i )
  {
    v35 = 0LL;
    CDirtyRegion::GetUnOccludedDirtyRect(a4, (float *)&v31, i, v38, 0, &v35, 0LL);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v31) )
    {
      v19 = v34;
      v20 = v33;
      v21 = v32;
      v22 = v31;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
        McTemplateU0qdffff_EventWriteTransfer(v17, &EVTDESC_ETWGUID_DIRTYREGIONEVENT, i, v18, v31, v32, v33, v34);
      CurrentFrameId = GetCurrentFrameId();
      v36 = 0;
      v24 = (const struct CDirtyRegion *)((char *)a4 + 16);
      v37 = 0;
      if ( *((_QWORD *)a4 + 4) != CurrentFrameId )
        v24 = 0LL;
      *(_QWORD *)&v35 = __PAIR64__(v21, v22);
      *((_QWORD *)&v35 + 1) = __PAIR64__(v19, v20);
      v25 = CDrawingContext::DrawVisualTree(a8, (__int64)a3, (__int64)&v35, v24, 2, 0);
      v11 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v25, 0x1E1u, 0LL);
        return v11;
      }
      CHolographicInteropTexture::NotifyRenderedRect(a2, v26, a6, &v31);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x_EventWriteTransfer(v16, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a8);
  return v11;
}

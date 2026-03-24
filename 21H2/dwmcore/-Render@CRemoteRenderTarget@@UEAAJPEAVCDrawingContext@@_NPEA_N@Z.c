/*
 * XREFs of ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EE8CC
 * Callers:
 *     ?Render@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F5810 (-Render@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058390 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x180075020 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007A2A8 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x1800900A0 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800908C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180092B14 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z @ 0x18009331C (-UpdateCVIRenderTargets@CDesktopTree@@QEAAXPEBVCOcclusionContext@@AEBVRenderTargetInfo@@@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D79D8 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D7A7C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DFEE8 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180184AC0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018DAE0 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9EB0 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 */

__int64 __fastcall CRemoteRenderTarget::Render(
        CRemoteRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  int v4; // edi
  bool *v5; // r15
  int v8; // ebx
  CDesktopTree *v9; // r12
  float v10; // xmm1_4
  __m128i v11; // xmm0
  float v12; // xmm1_4
  const struct CDirtyRegion *DirtyRegion; // rax
  CComposeTop *v14; // r12
  __int64 v15; // r14
  const struct COcclusionContext *v16; // r15
  struct IDeviceTarget *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  CDesktopTree *v20; // rcx
  __int64 v21; // xmm1_8
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // r9
  int v25; // r9d
  int v26; // eax
  __int64 v27; // rcx
  __int64 (__fastcall ***v28)(_QWORD); // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v32; // [rsp+20h] [rbp-59h]
  unsigned int v33; // [rsp+20h] [rbp-59h]
  __int128 v35; // [rsp+48h] [rbp-31h] BYREF
  __int64 v36; // [rsp+58h] [rbp-21h]
  __int128 v37; // [rsp+60h] [rbp-19h] BYREF
  __int128 v38; // [rsp+70h] [rbp-9h] BYREF
  int v39; // [rsp+80h] [rbp+7h]
  int v40; // [rsp+84h] [rbp+Bh]
  float v41[4]; // [rsp+88h] [rbp+Fh] BYREF

  LOBYTE(v4) = 0;
  *a4 = 0;
  v5 = a4;
  v8 = 0;
  if ( !*((_QWORD *)this - 25) )
    goto LABEL_42;
  v9 = (CDesktopTree *)*((_QWORD *)this - 23);
  if ( !v9 || *(int *)(*((_QWORD *)this - 43) + 952LL) > 3 )
    goto LABEL_42;
  v10 = (float)*((int *)this - 43);
  v41[0] = (float)*((int *)this - 44);
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this - 42));
  v41[1] = v10;
  v12 = (float)*((int *)this - 41);
  LODWORD(v41[2]) = _mm_cvtepi32_ps(v11).m128_u32[0];
  v41[3] = v12;
  DirtyRegion = CDesktopTree::GetDirtyRegion(v9);
  v14 = (CComposeTop *)*((_QWORD *)v9 + 739);
  v15 = (__int64)DirtyRegion;
  if ( v14 && CComposeTop::HasNewContent(v14) )
  {
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this - 25) + 24LL))(*((_QWORD *)this - 25));
  }
  if ( !v15 && !(_BYTE)v8 )
    goto LABEL_38;
  v16 = 0LL;
  if ( v15 )
  {
    if ( (int)CDirtyRegion::CalcOcclusion((CDirtyRegion *)v15) >= 0 )
    {
      v16 = (const struct COcclusionContext *)(v15 + 16);
      if ( *(_QWORD *)(v15 + 32) != GetCurrentFrameId() )
        v16 = 0LL;
    }
  }
  v17 = (struct IDeviceTarget *)(***((__int64 (__fastcall ****)(_QWORD))this - 25))(*((_QWORD *)this - 25));
  v18 = CDrawingContext::BeginFrame(
          a2,
          v17,
          (CRemoteRenderTarget *)((char *)this - 128),
          (const struct _D3DCOLORVALUE *)((char *)this - 248),
          0LL);
  v4 = 0;
  v8 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xBCu, 0LL);
    goto LABEL_42;
  }
  if ( v16 )
  {
    v20 = (CDesktopTree *)*((_QWORD *)this - 23);
    v21 = *((_QWORD *)this - 17);
    v35 = *(_OWORD *)((char *)this - 152);
    v36 = v21;
    CDesktopTree::UpdateCVIRenderTargets(v20, v16, (const struct RenderTargetInfo *)&v35);
  }
  if ( !v15 || !*(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects(v15, &v35) )
  {
LABEL_24:
    if ( v14 )
    {
      v24 = v15 ? *(_BYTE *)(v15 + 4456) : 0;
      v26 = CRemoteRenderTarget::RenderComposeTop((CRemoteRenderTarget *)((char *)this - 360), a2, v14, v24);
      v8 = v26;
      if ( v26 < 0 )
      {
        v25 = v26;
        v33 = 235;
        goto LABEL_33;
      }
    }
    if ( !*((_DWORD *)this - 44) && !*((_DWORD *)this - 43) )
      LOBYTE(v4) = 1;
    v5 = a4;
LABEL_38:
    v8 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v8, 0xF5u, 0LL);
    }
    else if ( *((_BYTE *)this - 52) || (_BYTE)v4 )
    {
      *v5 = 1;
    }
    goto LABEL_42;
  }
  while ( 1 )
  {
    v38 = 0LL;
    CDirtyRegion::GetUnOccludedDirtyRect((_BYTE *)v15, (float *)&v37, v4, v41, 0, &v38, (__int64)v16);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v37) )
      goto LABEL_22;
    v39 = 0;
    v40 = 0;
    v22 = *((_QWORD *)this - 32);
    v32 = *((_BYTE *)this - 232) != 0 ? 2 : 0;
    v38 = v37;
    v8 = CDrawingContext::DrawVisualTree(a2, v22, (__int64)&v38, v16, v32, 0);
    if ( v8 < 0 )
      break;
    CRemoteRenderTarget::NotifyRenderedRect((__int64)this - 360, (__int64)&v37);
    if ( v14 )
    {
      v8 = CComposeTop::SubtractOverdraw(v14, &v37);
      if ( v8 < 0 )
      {
        v33 = 223;
        goto LABEL_28;
      }
    }
LABEL_22:
    if ( (unsigned int)++v4 >= *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects(v15, &v35) )
    {
      LOBYTE(v4) = 0;
      goto LABEL_24;
    }
  }
  v33 = 213;
LABEL_28:
  v25 = v8;
LABEL_33:
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v25, v33, 0LL);
  CDrawingContext::EndFrame((CD3DDevice **)a2);
LABEL_42:
  if ( g_LockAndReadTarget )
  {
    v28 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 25);
    if ( v28 )
    {
      v29 = (**v28)(v28);
      v30 = *(int *)(*(_QWORD *)(v29 + 8) + 16LL) + v29 + 8;
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v30 + 24LL))(
        v30,
        ((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
    }
  }
  return (unsigned int)v8;
}

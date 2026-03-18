/*
 * XREFs of ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E9CB4
 * Callers:
 *     ?Render@CDDARenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F0070 (-Render@CDDARenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18007FDB0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x180085038 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18009A544 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18009C794 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetOptimizedDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800D2E9C (-GetOptimizedDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?HideDDAVisuals@CComposition@@QEBAXXZ @ 0x180155410 (-HideDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?RestoreDDAVisuals@CComposition@@QEBAXXZ @ 0x1801558CC (-RestoreDDAVisuals@CComposition@@QEBAXXZ.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801988BC (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F8BF0 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 */

__int64 __fastcall CDDARenderTarget::Render(
        CDDARenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        CComposition *a4)
{
  __int64 (__fastcall ***v6)(_QWORD); // rcx
  unsigned int v7; // ebx
  char v8; // r15
  __int64 v9; // r12
  float v10; // xmm1_4
  __int64 (__fastcall *v11)(_QWORD); // rax
  __m128i v12; // xmm0
  float v13; // xmm1_4
  struct IDeviceTarget *v14; // rax
  int v15; // eax
  CComposition *v16; // rcx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, _QWORD *, char *); // rbx
  _QWORD *OptimizedDirtyRects; // rax
  int v20; // eax
  char *v21; // rbx
  int v22; // edi
  _BYTE *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  CComposition *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  int v33; // [rsp+20h] [rbp-59h]
  char *v34; // [rsp+40h] [rbp-39h]
  _QWORD v36[2]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v37; // [rsp+60h] [rbp-19h] BYREF
  float v38[4]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v39; // [rsp+80h] [rbp+7h] BYREF
  int v40; // [rsp+90h] [rbp+17h]
  int v41; // [rsp+94h] [rbp+1Bh]

  v6 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this - 224);
  v7 = 0;
  v8 = 0;
  if ( !v6 || !*((_QWORD *)this - 206) || *(int *)(*((_QWORD *)this - 241) + 952LL) > 3 )
    goto LABEL_20;
  v9 = *(_QWORD *)(*((_QWORD *)this - 223) + 5912LL);
  v10 = (float)*((int *)this - 443);
  v11 = **v6;
  v38[0] = (float)*((int *)this - 444);
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this - 442));
  v38[1] = v10;
  v13 = (float)*((int *)this - 441);
  LODWORD(v38[2]) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v38[3] = v13;
  v14 = (struct IDeviceTarget *)v11(v6);
  v15 = CDrawingContext::BeginFrame(
          a2,
          v14,
          (CDDARenderTarget *)((char *)this - 1744),
          (const struct _D3DCOLORVALUE *)((char *)this - 1832),
          0LL);
  v7 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, v15, 0xD7u, 0LL);
    goto LABEL_23;
  }
  v8 = 1;
  *((_BYTE *)g_pComposition + 1129) = 1;
  CComposition::HideDDAVisuals(v16);
  v17 = *((_QWORD *)this - 230);
  v18 = *(__int64 (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v17 + 216LL);
  OptimizedDirtyRects = CDirtyRegion::GetOptimizedDirtyRects(*((_QWORD *)this - 206), v36);
  v20 = v18(v17, OptimizedDirtyRects, (char *)this - 1640);
  v21 = 0LL;
  if ( v20 >= 0 )
    v21 = (char *)this - 1640;
  v22 = 0;
  v34 = v21;
  if ( !*(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects(*((_QWORD *)this - 206), v36) )
  {
LABEL_12:
    if ( v9 )
    {
      v27 = CComposeTop::FullRender(v9, a2, (char *)this - 1744, v38);
      v7 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x101u, 0LL);
        goto LABEL_15;
      }
    }
    *((_BYTE *)this - 55) = *((_BYTE *)a2 + 5951);
    v30 = CDrawingContext::EndFrame((CD3DDevice **)a2);
    v7 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x107u, 0LL);
      goto LABEL_22;
    }
LABEL_20:
    v29 = a4;
    *(_BYTE *)a4 = *((_BYTE *)this - 56);
    goto LABEL_21;
  }
  while ( 1 )
  {
    v23 = (_BYTE *)*((_QWORD *)this - 206);
    v39 = 0LL;
    CDirtyRegion::GetUnOccludedDirtyRect(v23, (float *)&v37, v22, v38, 0, &v39, (__int64)v21);
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v37) )
      break;
LABEL_11:
    if ( (unsigned int)++v22 >= *(_DWORD *)CDirtyRegion::GetOptimizedDirtyRects(*((_QWORD *)this - 206), v36) )
      goto LABEL_12;
  }
  v40 = 0;
  v41 = 0;
  v24 = *((_QWORD *)this - 230);
  v33 = *((_BYTE *)this - 1816) != 0 ? 2 : 0;
  v39 = v37;
  v25 = CDrawingContext::DrawVisualTree(a2, v24, (__int64)&v39, (CDDARenderTarget *)((char *)this - 1640), v33, 0);
  v7 = v25;
  if ( v25 >= 0 )
  {
    CDDARenderTarget::NotifyRenderedRect((char *)this - 1944, &v37);
    v21 = v34;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xF3u, 0LL);
LABEL_15:
  CDrawingContext::EndFrame((CD3DDevice **)a2);
LABEL_21:
  if ( v8 )
  {
LABEL_22:
    CComposition::RestoreDDAVisuals(v29);
    *((_BYTE *)g_pComposition + 1129) = 0;
  }
LABEL_23:
  *((_QWORD *)this - 206) = 0LL;
  return v7;
}

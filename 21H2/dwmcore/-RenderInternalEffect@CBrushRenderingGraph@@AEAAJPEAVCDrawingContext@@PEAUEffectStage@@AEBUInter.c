/*
 * XREFs of ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001C828
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180056A18 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001B590 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x18001CB94 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180040858 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x180040954 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800409B0 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180040A80 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180040B6C (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041730 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180041FEC (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x18004F4EC (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18005238C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180056280 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18008D4E0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800C5754 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D5388 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderInternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct EffectStage *a3,
        __m128 *a4,
        struct EffectInput *a5)
{
  struct EffectInput *v5; // r14
  unsigned int v6; // ebx
  __m128 v9; // xmm1
  __m128 v11; // xmm0
  float v12; // xmm3_4
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  CBrushRenderingGraph *v16; // rcx
  char *v17; // rdx
  bool v18; // bl
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // ecx
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  struct CDrawListCache *v25; // rbx
  int updated; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  int v36; // [rsp+28h] [rbp-E0h]
  struct CDrawListCache *v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  struct EffectInput *v39; // [rsp+58h] [rbp-B0h] BYREF
  float v40; // [rsp+60h] [rbp-A8h] BYREF
  float v41; // [rsp+64h] [rbp-A4h]
  float v42; // [rsp+68h] [rbp-A0h]
  float v43; // [rsp+6Ch] [rbp-9Ch]
  float v44; // [rsp+70h] [rbp-98h]
  float v45; // [rsp+74h] [rbp-94h]
  __int64 v46; // [rsp+80h] [rbp-88h] BYREF
  int v47; // [rsp+88h] [rbp-80h]
  __int64 v48; // [rsp+8Ch] [rbp-7Ch]
  int v49; // [rsp+94h] [rbp-74h]
  __int64 v50; // [rsp+98h] [rbp-70h]
  int v51; // [rsp+A0h] [rbp-68h]
  struct D2D_SIZE_F v52[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-50h]
  char *v54; // [rsp+C0h] [rbp-48h]
  __int128 v55; // [rsp+C8h] [rbp-40h]
  __int128 v56; // [rsp+D8h] [rbp-30h]
  __int128 v57; // [rsp+F8h] [rbp-10h]
  __int128 v58; // [rsp+118h] [rbp+10h] BYREF
  __int128 v59; // [rsp+128h] [rbp+20h]
  __int128 v60; // [rsp+138h] [rbp+30h]
  __int128 v61; // [rsp+148h] [rbp+40h]
  int v62; // [rsp+158h] [rbp+50h]
  const char *v63; // [rsp+168h] [rbp+60h] BYREF
  int v64; // [rsp+170h] [rbp+68h]
  float v65; // [rsp+174h] [rbp+6Ch]
  float v66; // [rsp+178h] [rbp+70h]
  float v67; // [rsp+17Ch] [rbp+74h]

  v5 = a5;
  v6 = 0;
  v59 = _xmm;
  v58 = _xmm;
  v61 = _xmm;
  v9 = *a4;
  LOWORD(v62) = 32085;
  v60 = _xmm;
  v11 = a4[1];
  v37 = 0LL;
  v38 = 0LL;
  v39 = a5;
  v40 = 1.0;
  v41 = 1.0;
  v54 = (char *)v11.m128_u64[1];
  v53 = 0x3F8000003F800000LL;
  *(__m128 *)&v52[0].width = v9;
  v12 = 1.0 / _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v44 = 1.0 / v9.m128_f32[0];
  v45 = v12;
  *(_QWORD *)((char *)a5 + 108) = 0LL;
  *((_DWORD *)a5 + 29) = 1065353216;
  *((_DWORD *)a5 + 30) = 1065353216;
  *(_QWORD *)((char *)a5 + 76) = 0LL;
  *((float *)a5 + 18) = 1.0 / v9.m128_f32[0];
  *((float *)a5 + 22) = v12;
  *((float *)a5 + 24) = 0.0 - (float)((float)(1.0 / v9.m128_f32[0]) * 0.0);
  *((_DWORD *)a5 + 21) = 0;
  *((_DWORD *)a5 + 23) = 0;
  *((_DWORD *)a5 + 26) = 1065353216;
  *((float *)a5 + 25) = 0.0 - (float)(v12 * 0.0);
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v37);
  v13 = CDrawListCache::Create(&v37);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x17Du, 0LL);
    goto LABEL_22;
  }
  v16 = (CBrushRenderingGraph *)*((unsigned int *)a3 + 1);
  if ( (_DWORD)v16 )
  {
    do
    {
      v17 = (char *)a3 + 128 * (unsigned __int64)v6 + 8;
      v54 = v17;
      if ( v17[68] && v17[125] && (_DWORD)v16 == 1 )
      {
        CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v52,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v39);
        v64 = 0;
        v63 = (const char *)LODWORD(v40);
        v65 = v41;
        v66 = 0.0 - (float)(v40 * 0.0);
        v67 = 0.0 - (float)(v41 * 0.0);
        Matrix3x3::operator*((char *)a5 + 72, &v46, &v63);
        DWORD2(v56) = 0;
        DWORD2(v55) = 0;
        DWORD2(v57) = 0;
        *(_QWORD *)&v55 = v46;
        HIDWORD(v55) = v47;
        *(_QWORD *)&v56 = v48;
        *(_QWORD *)&v57 = v50;
        HIDWORD(v56) = v49;
        HIDWORD(v57) = v51;
        v62 = 0;
        v59 = v56;
        v58 = v55;
        v61 = v57;
        v60 = _xmm;
      }
      else
      {
        CBrushRenderingGraph::ConfigureIntermediateFromInput(
          v16,
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v52,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v39);
        CMILMatrix::SetScale((CMILMatrix *)&v58, v42, v43, 1.0, 0.0, 0.0, 0.0);
      }
      v16 = (CBrushRenderingGraph *)*((unsigned int *)a3 + 1);
      ++v6;
    }
    while ( v6 < (unsigned int)v16 );
    v5 = v39;
  }
  v18 = !CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 42) - 1, *(_DWORD *)a3);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v38);
  v19 = *((unsigned int *)a2 + 16);
  v63 = "DWM Internal Effect intermediate";
  v64 = 32;
  LOBYTE(v36) = v18;
  v20 = CDrawingContext::PushOffScreenRenderingLayer(a2, &v63, &v40, v19, v36, &v38);
  v15 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1A4u, 0LL);
    goto LABEL_22;
  }
  v22 = v38;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 8LL))(v38, 1LL);
  v23 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v58, 0, 1);
  v15 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x1A9u, 0LL);
    goto LABEL_31;
  }
  v25 = v37;
  updated = CBrushRenderingGraph::UpdateDrawListCache(this, a2, v52, 0LL, a3, v37);
  v15 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, updated, 0x1B0u, 0LL);
    goto LABEL_29;
  }
  v28 = CDrawListCache::Render(v25, a2, &v58);
  v15 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x1B5u, 0LL);
LABEL_29:
    CDrawingContext::PopTransformInternal(a2, 1);
LABEL_31:
    CDrawingContext::PopLayer(a2);
    goto LABEL_22;
  }
  CDrawingContext::PopTransformInternal(a2, 1);
  v30 = CDrawingContext::PopLayer(a2);
  v15 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1BCu, 0LL);
  }
  else
  {
    v32 = CDrawListBitmap::Initialize(
            v5,
            (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v22 + 8) + 16LL) + v22 + 8),
            a2);
    v15 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1BFu, 0LL);
    }
    else
    {
      v34 = *((_DWORD *)v25 + 22);
      if ( (v34 & 0x80u) != 0 )
      {
        *((_DWORD *)v5 + 16) |= 0x80u;
        v34 = *((_DWORD *)v25 + 22);
      }
      if ( (v34 & 2) != 0 )
      {
        *((_DWORD *)v5 + 16) |= 2u;
        v34 = *((_DWORD *)v25 + 22);
      }
      if ( (v34 & 4) != 0 )
      {
        *((_DWORD *)v5 + 16) |= 4u;
        v34 = *((_DWORD *)v25 + 22);
      }
      if ( (v34 & 0x100) != 0 )
        *((_DWORD *)v5 + 16) |= 0x100u;
    }
  }
LABEL_22:
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(&v37);
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v38);
  return v15;
}

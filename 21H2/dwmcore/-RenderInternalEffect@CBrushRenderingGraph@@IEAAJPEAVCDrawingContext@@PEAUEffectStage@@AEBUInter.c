/*
 * XREFs of ?RenderInternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802524EC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18003F1D8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800557F8 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x180086E30 (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18008AB80 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AF4F4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0B40 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA5D0 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@VDisplayId@.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800BCC70 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D75D0 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180252278 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderInternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct EffectStage *a3,
        __m128 *a4,
        struct EffectInput *a5)
{
  unsigned int v5; // ebx
  float v6; // xmm6_4
  float *v7; // r13
  float v8; // xmm7_4
  __m128 v9; // xmm1
  char *v11; // xmm0_8
  float v13; // xmm9_4
  float v14; // xmm10_4
  int v15; // eax
  __int64 v16; // rcx
  int v17; // esi
  unsigned int v18; // edx
  CBrushRenderingGraph *v19; // rcx
  char *v20; // rax
  int v21; // xmm1_4
  int v22; // xmm0_4
  int v23; // xmm1_4
  int v24; // xmm0_4
  int v25; // xmm1_4
  int v26; // xmm0_4
  int v27; // xmm1_4
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // rcx
  struct CGeometryOnlyDrawListBrush *v34; // rcx
  CGeometryOnlyDrawListBrush *v35; // r8
  CGeometryOnlyDrawListBrush *v36; // rax
  CBrushRenderingGraph *v37; // rcx
  struct CDrawListCache *v38; // rbx
  int updated; // eax
  int v40; // eax
  __int64 v41; // rcx
  __int64 *v42; // rax
  float *v43; // rax
  int v44; // eax
  int v45; // r9d
  struct CDrawListCache *v47; // [rsp+20h] [rbp-E0h]
  unsigned int v48; // [rsp+20h] [rbp-E0h]
  struct CDrawListCache *v49; // [rsp+30h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush *v50; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-C0h] BYREF
  CBrushRenderingGraph *v52; // [rsp+48h] [rbp-B8h] BYREF
  struct EffectInput *v53; // [rsp+50h] [rbp-B0h] BYREF
  float v54; // [rsp+58h] [rbp-A8h] BYREF
  float v55; // [rsp+5Ch] [rbp-A4h]
  float v56; // [rsp+60h] [rbp-A0h]
  float v57; // [rsp+64h] [rbp-9Ch]
  __int128 v58; // [rsp+80h] [rbp-80h] BYREF
  __int128 v59; // [rsp+90h] [rbp-70h]
  __int128 v60; // [rsp+A0h] [rbp-60h]
  __int128 v61; // [rsp+B0h] [rbp-50h]
  int v62; // [rsp+C0h] [rbp-40h]
  struct CGeometryOnlyDrawListBrush *v63[2]; // [rsp+D0h] [rbp-30h] BYREF
  char *v64; // [rsp+E0h] [rbp-20h]

  v5 = 0;
  v59 = _xmm;
  v58 = _xmm;
  v6 = *(float *)&FLOAT_1_0;
  v7 = (float *)((char *)a5 + 48);
  v61 = _xmm;
  v8 = *(float *)&FLOAT_1_0;
  v9 = *a4;
  BYTE1(v62) = BYTE1(v62) & 0xC0 | 0x17;
  v60 = _xmm;
  v11 = (char *)a4[1].m128_u64[0];
  v13 = 1.0 / v9.m128_f32[0];
  v52 = this;
  v50 = 0LL;
  LOBYTE(v62) = 85;
  v49 = 0LL;
  v51 = 0LL;
  v53 = a5;
  v64 = v11;
  *(__m128 *)v63 = v9;
  v14 = 1.0 / _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v54 = *(float *)&FLOAT_1_0;
  v55 = *(float *)&FLOAT_1_0;
  v56 = 1.0 / v9.m128_f32[0];
  v57 = v14;
  *(_QWORD *)((char *)a5 + 84) = 0LL;
  *((_DWORD *)a5 + 23) = 1065353216;
  *((_DWORD *)a5 + 24) = 1065353216;
  *(_QWORD *)((char *)a5 + 52) = 0LL;
  *((float *)a5 + 12) = 1.0 / v9.m128_f32[0];
  *((float *)a5 + 16) = v14;
  *((float *)a5 + 18) = 0.0 - (float)((float)(1.0 / v9.m128_f32[0]) * 0.0);
  *((_DWORD *)a5 + 15) = 0;
  *((_DWORD *)a5 + 17) = 0;
  *((_DWORD *)a5 + 20) = 1065353216;
  *((float *)a5 + 19) = 0.0 - (float)(v14 * 0.0);
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v49);
  v15 = CDrawListCache::Create(&v49);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x1A1u);
    goto LABEL_35;
  }
  v18 = *((_DWORD *)a3 + 1);
  if ( v18 )
  {
    do
    {
      v19 = (CBrushRenderingGraph *)(104LL * v5);
      v20 = (char *)a3 + (_QWORD)v19 + 8;
      v64 = v20;
      if ( v20[44] && v20[101] && v18 == 1 )
        CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
          (FLOAT *)v63,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v53);
      else
        CBrushRenderingGraph::ConfigureIntermediateFromInput(
          v19,
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v63,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v53);
      v18 = *((_DWORD *)a3 + 1);
      ++v5;
    }
    while ( v5 < v18 );
    v14 = v57;
    v13 = v56;
    v8 = v55;
    v6 = v54;
  }
  v21 = *((_DWORD *)a5 + 13);
  *(float *)&v58 = *v7;
  HIDWORD(v58) = *((_DWORD *)a5 + 14);
  v22 = *((_DWORD *)a5 + 16);
  DWORD1(v58) = v21;
  v23 = *((_DWORD *)a5 + 15);
  DWORD1(v59) = v22;
  v24 = *((_DWORD *)a5 + 18);
  LODWORD(v59) = v23;
  v25 = *((_DWORD *)a5 + 17);
  LODWORD(v61) = v24;
  v26 = *((_DWORD *)a5 + 20);
  HIDWORD(v59) = v25;
  v27 = *((_DWORD *)a5 + 19);
  HIDWORD(v61) = v26;
  DWORD1(v61) = v27;
  v62 = 0;
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v51);
  v28 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
  LODWORD(v63[1]) = 32;
  v63[0] = (struct CGeometryOnlyDrawListBrush *)"DWM Internal Effect intermediate";
  LODWORD(v47) = 3;
  v29 = CDrawingContext::PushOffScreenRenderingLayer(
          a2,
          (__int64)v63,
          &v54,
          *(unsigned int *)(v28 + 8),
          (__int64)v47,
          (__int64)&v51);
  v17 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x1C4u);
    goto LABEL_35;
  }
  v31 = v51;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v51 + 8LL))(v51, 1LL);
  v32 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v58, 0, 1);
  v17 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x1C9u);
    goto LABEL_32;
  }
  v63[1] = 0LL;
  v63[0] = (struct CGeometryOnlyDrawListBrush *)&v50;
  LOBYTE(v64) = 1;
  v17 = CGeometryOnlyDrawListBrush::Create(&v63[1]);
  if ( (_BYTE)v64 )
  {
    v34 = v63[0];
    v35 = *(CGeometryOnlyDrawListBrush **)v63[0];
    *(_QWORD *)v63[0] = v63[1];
    if ( v35 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v35, 1);
  }
  if ( v17 < 0 )
  {
    v45 = v17;
    v48 = 462;
    goto LABEL_30;
  }
  v36 = v50;
  v63[0] = 0LL;
  v37 = v52;
  *((_DWORD *)v50 + 12) = 0;
  v38 = v49;
  *((_BYTE *)v36 + 52) = 1;
  *(float *)&v63[1] = v6 / v13;
  *((float *)&v63[1] + 1) = v8 / v14;
  *((_OWORD *)v36 + 2) = *(_OWORD *)v63;
  updated = CBrushRenderingGraph::UpdateDrawListCache(v37, a2, v50, a3, v38);
  v17 = updated;
  if ( updated < 0 )
  {
    v48 = 473;
    goto LABEL_27;
  }
  updated = CDrawListCache::Render((__int64)v38, a2, (CMILMatrix *)&v58, 1.0);
  v17 = updated;
  if ( updated < 0 )
  {
    v48 = 478;
LABEL_27:
    v45 = updated;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v34, 0LL, 0LL, v45, v48);
    CDrawingContext::PopTransformInternal(a2, 1);
LABEL_32:
    CDrawingContext::PopLayer(a2);
    goto LABEL_35;
  }
  CDrawingContext::PopTransformInternal(a2, 1);
  v40 = CDrawingContext::PopLayer(a2);
  v17 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0x1E5u);
  }
  else
  {
    v42 = (__int64 *)CDrawListBitmap::CDrawListBitmap(
                       (CDrawListBitmap *)v63,
                       (struct IBitmapRealization *)(*(int *)(*(_QWORD *)(v31 + 8) + 16LL) + v31 + 8));
    CDrawListBitmap::operator=((__int64 *)a5, v42);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v63[1]);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v63);
    CDrawListBitmap::GetSize(a5, &v52);
    HIDWORD(v63[0]) = 0;
    LODWORD(v63[1]) = 0;
    *(float *)v63 = 1.0 / (float)(int)v52;
    *((float *)&v63[1] + 1) = 1.0 / (float)SHIDWORD(v52);
    *(float *)&v64 = 0.0 - (float)(*(float *)v63 * 0.0);
    *((float *)&v64 + 1) = 0.0 - (float)(*((float *)&v63[1] + 1) * 0.0);
    v43 = Matrix3x3::operator*(v7, (float *)&v53, (float *)v63);
    *(_OWORD *)v7 = *(_OWORD *)v43;
    *((_OWORD *)a5 + 4) = *((_OWORD *)v43 + 1);
    *((float *)a5 + 20) = v43[8];
    v44 = *((_DWORD *)v38 + 22);
    if ( (v44 & 2) != 0 )
    {
      *((_DWORD *)a5 + 10) |= 2u;
      v44 = *((_DWORD *)v38 + 22);
    }
    if ( (v44 & 4) != 0 )
    {
      *((_DWORD *)a5 + 10) |= 4u;
      v44 = *((_DWORD *)v38 + 22);
    }
    if ( (v44 & 0x100) != 0 )
      *((_DWORD *)a5 + 10) |= 0x100u;
  }
LABEL_35:
  Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease((volatile signed __int32 **)&v49);
  if ( v50 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v50, 1);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(&v51);
  return (unsigned int)v17;
}

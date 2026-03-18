/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800099AC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180243EF0 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000A4C4 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x18000A570 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?GetRealizationForEffectInput@CWindowBackgroundTreatment@@QEBAPEAVIBitmapRealization@@XZ @ 0x18000A5D0 (-GetRealizationForEffectInput@CWindowBackgroundTreatment@@QEBAPEAVIBitmapRealization@@XZ.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x18000A5F4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18000A63C (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealiz.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18000A7B0 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18000A7F8 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealizat.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x180054EB8 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180093FA0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B0B40 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800BCC70 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x1800BCD2C (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800D4DD0 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D8514 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B3FF4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 */

__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        CDrawingContext *this,
        struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  CDrawingContext *v3; // rdi
  unsigned int v4; // esi
  float v5; // xmm8_4
  float v6; // xmm9_4
  struct IBitmapRealization *v8; // r14
  FLOAT height; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  char *v15; // r12
  char v16; // r15
  __int64 v17; // rbx
  struct CTreeData *v18; // r8
  CVisual *v19; // rax
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  __int64 v21; // xmm1_8
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // r15
  CVisual *v30; // rax
  struct CCachedWindowBackgroundTreatment *v31; // r10
  int v32; // eax
  unsigned int v33; // ecx
  CDrawListBitmap *v34; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rdi
  struct IBitmapRealization *RealizationForEffectInput; // rax
  __int64 v38; // xmm1_8
  int v39; // eax
  int v40; // eax
  unsigned int v41; // ecx
  CVisual *v42; // rax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  const struct CMILMatrix *v47; // rax
  int v48; // eax
  unsigned int v49; // ecx
  bool v50[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct CCachedWindowBackgroundTreatment *v51; // [rsp+40h] [rbp-C8h] BYREF
  struct CCachedWindowBackgroundTreatment *v52[2]; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v53; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v54; // [rsp+78h] [rbp-90h]
  __int128 v55; // [rsp+88h] [rbp-80h]
  int v56; // [rsp+98h] [rbp-70h]
  struct D2D_SIZE_F *v57; // [rsp+A8h] [rbp-60h]
  _QWORD v58[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int32 v59; // [rsp+C0h] [rbp-48h]
  __int32 v60; // [rsp+C4h] [rbp-44h]
  __int64 v61; // [rsp+C8h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-38h]
  CMatrixStack *v63; // [rsp+D8h] [rbp-30h]
  _OWORD v64[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v65; // [rsp+128h] [rbp+20h]
  _BYTE v66[64]; // [rsp+138h] [rbp+30h] BYREF
  int v67; // [rsp+178h] [rbp+70h]
  _BYTE v68[24]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v69; // [rsp+1A0h] [rbp+98h] BYREF
  __int128 v70; // [rsp+1B0h] [rbp+A8h] BYREF
  float v71; // [rsp+1C0h] [rbp+B8h]
  float v72; // [rsp+1C4h] [rbp+BCh]
  __int128 v73; // [rsp+1C8h] [rbp+C0h] BYREF

  v3 = this;
  v4 = 0;
  v5 = *(float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
       + 1);
  v67 = 0;
  v8 = 0LL;
  *(_OWORD *)v53.m256i_i8 = _xmm;
  v54 = _xmm;
  v51 = this;
  *(_OWORD *)&v53.m256i_u64[2] = _xmm;
  *(_OWORD *)&v68[8] = *(__int128 *)((char *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                   + 8);
  v57 = a2;
  *(_QWORD *)v68 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)v52 = 0LL;
  v50[1] = 0;
  v55 = _xmm;
  LOBYTE(v56) = 85;
  BYTE1(v56) = BYTE1(v56) & 0xC0 | 0x17;
  EffectInput::Reset(a3);
  *(_QWORD *)&v70 = 0LL;
  *((_BYTE *)a3 + 44) = 1;
  *((_BYTE *)a3 + 100) = 1;
  *((_BYTE *)a3 + 102) = 1;
  height = v57->height;
  DWORD2(v70) = LODWORD(v57->width);
  *((FLOAT *)&v70 + 3) = height;
  v73 = 0LL;
  v63 = (CDrawingContext *)((char *)v3 + 368);
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v3 + 368));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v70, &v73);
  v69 = 0LL;
  CDrawingContext::GetClipBoundsWorld(v3, &v69);
  v11 = *(float *)&v69;
  if ( *(float *)&v73 > *(float *)&v69 )
    v11 = *(float *)&v73;
  v12 = *((float *)&v69 + 1);
  if ( *((float *)&v73 + 1) > *((float *)&v69 + 1) )
    v12 = *((float *)&v73 + 1);
  v13 = *((float *)&v69 + 2);
  if ( *((float *)&v69 + 2) > *((float *)&v73 + 2) )
    v13 = *((float *)&v73 + 2);
  v14 = *((float *)&v69 + 3);
  if ( *((float *)&v69 + 3) > *((float *)&v73 + 3) )
    v14 = *((float *)&v73 + 3);
  if ( v13 <= v11 || v14 <= v12 )
    goto LABEL_51;
  v15 = (char *)v3 + 24;
  v50[0] = 0;
  v16 = 0;
  v17 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v3 + 3) + 32LL))((__int64)v3 + 24);
  if ( !v17 )
    goto LABEL_18;
  while ( (**(_DWORD **)(v17 + 232) & 0x200000) == 0 )
  {
    CVisual::CalcTransform(
      (CVisual *)v17,
      *((const struct CVisualTree **)v3 + 991),
      0LL,
      &v50[1],
      (struct CMILMatrix *)v66,
      0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)&v53, (const struct CMILMatrix *)v66, (struct CMILMatrix *)&v53);
    if ( CVisual::FindTreeData((CVisual *)v17, *((const struct CVisualTree **)v3 + 991))
      && CVisual::GetParentTreeData((CVisual *)v17, *((const struct CVisualTree **)v3 + 991), v18, &v50[2])
      && v50[2] )
    {
      v16 = 1;
    }
    v17 = *(_QWORD *)(v17 + 88);
    if ( !v17 )
      goto LABEL_18;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 991) + 184LL))(*((_QWORD *)v3 + 991)) )
  {
LABEL_18:
    v19 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))((__int64)v3 + 24);
    CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(v19);
    if ( CachedWindowBackgroundTreatment && !*((_BYTE *)CachedWindowBackgroundTreatment + 140) )
    {
      v8 = (struct IBitmapRealization *)*((_QWORD *)CachedWindowBackgroundTreatment + 3);
      if ( v8 )
      {
        v21 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 116);
        *(_OWORD *)v68 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 100);
        v6 = *(float *)&v68[4];
        v5 = *(float *)v68;
        *(_OWORD *)v53.m256i_i8 = *((_OWORD *)CachedWindowBackgroundTreatment + 2);
        *(_QWORD *)&v68[16] = v21;
        *(_OWORD *)&v53.m256i_u64[2] = *((_OWORD *)CachedWindowBackgroundTreatment + 3);
        v54 = *((_OWORD *)CachedWindowBackgroundTreatment + 4);
        v55 = *((_OWORD *)CachedWindowBackgroundTreatment + 5);
        v56 = *((_DWORD *)CachedWindowBackgroundTreatment + 24);
      }
      else
      {
        *(_OWORD *)v52 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 124);
      }
      v50[0] = 1;
LABEL_23:
      if ( !v8 )
        goto LABEL_25;
      goto LABEL_24;
    }
    if ( !v17 )
    {
      HIDWORD(v52[1]) = (_DWORD)FLOAT_1_0;
      goto LABEL_51;
    }
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v17);
  if ( !CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal) )
  {
    v29 = 0;
    goto LABEL_26;
  }
  RealizationForEffectInput = CWindowBackgroundTreatment::GetRealizationForEffectInput(WindowBackgroundTreatmentInternal);
  *(_QWORD *)&v73 = RealizationForEffectInput;
  if ( !RealizationForEffectInput )
  {
    *(_OWORD *)v52 = *(_OWORD *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 9) + 88LL);
    goto LABEL_23;
  }
  if ( v16 )
  {
    v43 = *((_OWORD *)WindowBackgroundTreatmentInternal + 10);
    v44 = *((_OWORD *)WindowBackgroundTreatmentInternal + 11);
    v65 = *((_DWORD *)WindowBackgroundTreatmentInternal + 56);
    v64[0] = v43;
    v45 = *((_OWORD *)WindowBackgroundTreatmentInternal + 12);
    v64[1] = v44;
    v46 = *((_OWORD *)WindowBackgroundTreatmentInternal + 13);
    v64[2] = v45;
    v64[3] = v46;
    if ( !CMILMatrix::Invert((CMILMatrix *)v64) )
    {
      v3 = v51;
      goto LABEL_51;
    }
    v47 = CMatrixStack::GetTopByReference(v63);
    CMILMatrix::Multiply(v47, (const struct CMILMatrix *)v64, (struct CMILMatrix *)&v53);
    RealizationForEffectInput = (struct IBitmapRealization *)v73;
  }
  v8 = RealizationForEffectInput;
  v38 = *((_QWORD *)WindowBackgroundTreatmentInternal + 13);
  *(_OWORD *)v68 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 88);
  v6 = *(float *)&v68[4];
  v5 = *(float *)v68;
  *(_QWORD *)&v68[16] = v38;
LABEL_24:
  v22 = *(float *)&v68[8] - v5;
  v23 = *(float *)&v68[12] - v6;
  v69 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(&v53, &v70, &v69);
  v24 = *((float *)&v69 + 3) - v6;
  v25 = *((float *)&v69 + 1) - v6;
  v26 = *((float *)&v69 + 2) - v5;
  *((float *)a3 + 21) = *(float *)&v69 - v5;
  *((float *)a3 + 22) = v25;
  *((float *)a3 + 23) = v26;
  *((float *)a3 + 24) = v24;
  v58[0] = v53.m256i_i64[0];
  v58[1] = *(__int64 *)((char *)&v53.m256i_i64[1] + 4);
  v59 = v53.m256i_i32[5];
  v60 = v53.m256i_i32[7];
  v61 = v55;
  v62 = HIDWORD(v55);
  v70 = *(_OWORD *)&_xmm;
  LODWORD(v71) = LODWORD(v5) ^ _xmm;
  LODWORD(v72) = LODWORD(v6) ^ _xmm;
  v27 = Matrix3x3::operator*(v58, v64, &v70);
  *(_QWORD *)((char *)&v70 + 4) = 0LL;
  *(float *)&v70 = 1.0 / v22;
  *((float *)&v70 + 3) = 1.0 / v23;
  v71 = 0.0 - (float)((float)(1.0 / v22) * 0.0);
  v72 = 0.0 - (float)((float)(1.0 / v23) * 0.0);
  v28 = Matrix3x3::operator*(v27, v58, &v70);
  *((_OWORD *)a3 + 3) = *(_OWORD *)v28;
  *((_OWORD *)a3 + 4) = *(_OWORD *)(v28 + 16);
  *((_DWORD *)a3 + 20) = *(_DWORD *)(v28 + 32);
LABEL_25:
  v29 = v50[0];
  if ( !v17 )
  {
    v3 = v51;
    goto LABEL_30;
  }
LABEL_26:
  v3 = v51;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v51 + 991) + 184LL))(*((_QWORD *)v51 + 991)) && !v29 )
  {
    v30 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 32LL))(v15);
    v51 = CVisual::GetCachedWindowBackgroundTreatment(v30);
    if ( v51 )
    {
      CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v17);
      v32 = CCachedWindowBackgroundTreatment::Update(v31, (__int64)v68, (__int64)v52);
      v4 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x79Du, 0LL);
        return v4;
      }
    }
    else
    {
      v39 = (unsigned int)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v17);
      v40 = CCachedWindowBackgroundTreatment::Create(v39, (int)v8, (int)&v53, (int)v68, v52, (__int64)&v51);
      v4 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x7A6u, 0LL);
        return v4;
      }
      v42 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v15 + 32LL))(v15);
      CVisual::SetCachedWindowBackgroundTreatment(v42, v51);
    }
  }
LABEL_30:
  if ( v8 )
  {
    v34 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v68, v8);
    CDrawListBitmap::operator=(a3, v34);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v68[8]);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v68);
    *((_DWORD *)a3 + 10) |= 0x800u;
    return v4;
  }
LABEL_51:
  v48 = CDrawingContext::SetEffectInputToTransparentBlack(v3, v57, a3);
  v4 = v48;
  if ( v48 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x7BDu, 0LL);
  else
    *(_OWORD *)((char *)a3 + 24) = *(_OWORD *)v52;
  return v4;
}

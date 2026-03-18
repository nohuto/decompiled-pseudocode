/*
 * XREFs of ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800058CC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801F4270 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180004DA8 (-Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealizat.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x180005FA0 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x18000604C (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?GetRealizationForEffectInput@CWindowBackgroundTreatment@@QEBAPEAVIBitmapRealization@@PEBVIDeviceTarget@@@Z @ 0x1800060AC (-GetRealizationForEffectInput@CWindowBackgroundTreatment@@QEBAPEAVIBitmapRealization@@PEBVIDevic.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z @ 0x1800061C4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006230 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealiz.c)
 *     ?SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z @ 0x1800065C0 (-SetCachedWindowBackgroundTreatment@CVisual@@QEAAXPEAVCCachedWindowBackgroundTreatment@@@Z.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800212D4 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z @ 0x18003BF38 (-Initialize@CDrawListBitmap@@QEAAJPEAVIBitmapRealization@@PEBVCDrawingContext@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180047970 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18004C428 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18004E918 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18006D3D0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FD98 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180080058 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180082C08 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800BDA00 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D2324 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
        const struct IDeviceTarget **this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  float v4; // xmm8_4
  float v6; // xmm9_4
  const struct D2D_SIZE_F *v7; // rbx
  struct IBitmapRealization *v8; // r14
  char v9; // di
  FLOAT height; // xmm1_4
  CMILMatrix *TopByReference; // rax
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  char v16; // r12
  struct CVisual *CurrentVisual; // rbx
  struct CTreeData *TreeData; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rdi
  struct CCachedWindowBackgroundTreatment *RealizationForEffectInput; // rax
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // al
  CVisual *v31; // rax
  struct CCachedWindowBackgroundTreatment *v32; // r10
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // ebx
  int v36; // eax
  unsigned int v37; // ecx
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  const struct CMILMatrix *v43; // rax
  struct CWindowBackgroundTreatment *v44; // rax
  int v45; // eax
  unsigned int v46; // ecx
  CVisual *v47; // rax
  CVisual *v48; // rax
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  __int64 v50; // xmm1_8
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  int v55; // eax
  int v56; // eax
  unsigned int v57; // ecx
  char v58; // [rsp+4Ah] [rbp-BEh] BYREF
  bool v59; // [rsp+4Bh] [rbp-BDh] BYREF
  bool v60[16]; // [rsp+50h] [rbp-B8h] BYREF
  __m256i v61; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v62; // [rsp+88h] [rbp-80h]
  __int128 v63; // [rsp+98h] [rbp-70h]
  int v64; // [rsp+A8h] [rbp-60h]
  _QWORD v65[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int32 v66; // [rsp+C8h] [rbp-40h]
  __int32 v67; // [rsp+CCh] [rbp-3Ch]
  __int64 v68; // [rsp+D0h] [rbp-38h]
  int v69; // [rsp+D8h] [rbp-30h]
  const struct D2D_SIZE_F *v70; // [rsp+E0h] [rbp-28h]
  _OWORD v71[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v72; // [rsp+128h] [rbp+20h]
  _BYTE v73[24]; // [rsp+138h] [rbp+30h] BYREF
  struct CCachedWindowBackgroundTreatment *v74[2]; // [rsp+150h] [rbp+48h] BYREF
  __int128 v75; // [rsp+160h] [rbp+58h] BYREF
  __int128 v76; // [rsp+170h] [rbp+68h] BYREF
  float v77; // [rsp+180h] [rbp+78h]
  float v78; // [rsp+184h] [rbp+7Ch]

  v4 = *(float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
       + 1);
  v7 = a2;
  v72 = 0;
  v8 = 0LL;
  *(_OWORD *)v61.m256i_i8 = _xmm;
  v62 = _xmm;
  v70 = a2;
  *(_OWORD *)&v61.m256i_u64[2] = _xmm;
  *(_OWORD *)&v73[8] = *(__int128 *)((char *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                   + 8);
  v58 = 0;
  *(_QWORD *)v73 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *(_OWORD *)v60 = 0LL;
  LOWORD(v64) = 32085;
  v63 = _xmm;
  EffectInput::Reset(a3);
  *(_QWORD *)&v76 = 0LL;
  v9 = 1;
  *((_BYTE *)a3 + 68) = 1;
  *((_WORD *)a3 + 63) = 257;
  height = v7->height;
  DWORD2(v76) = LODWORD(v7->width);
  *(_OWORD *)v74 = 0LL;
  *((FLOAT *)&v76 + 3) = height;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 51));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference);
  v75 = 0LL;
  CDrawingContext::GetClipBoundsWorld(this, &v75);
  v12 = *(float *)&v75;
  if ( *(float *)&v75 < 0.0 )
    v12 = *(float *)v74;
  v13 = *((float *)&v75 + 1);
  if ( *((float *)v74 + 1) > *((float *)&v75 + 1) )
    v13 = *((float *)v74 + 1);
  v14 = *((float *)&v75 + 2);
  if ( *((float *)&v75 + 2) > *(float *)&v74[1] )
    v14 = *(float *)&v74[1];
  v15 = *((float *)&v75 + 3);
  if ( *((float *)&v75 + 3) > *((float *)&v74[1] + 1) )
    v15 = *((float *)&v74[1] + 1);
  if ( v14 <= v12 || v15 <= v13 )
    goto LABEL_56;
  v16 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 3));
  if ( !CurrentVisual )
    goto LABEL_62;
  do
  {
    if ( (**((_DWORD **)CurrentVisual + 28) & 0x200000) != 0 )
      break;
    CVisual::CalcCpuClippingTransform(CurrentVisual, 5LL, this[741], 0LL, &v58, v71, 0LL);
    CMILMatrix::Multiply((const struct CMILMatrix *)&v61, (const struct CMILMatrix *)v71, (struct CMILMatrix *)&v61);
    TreeData = CVisual::FindTreeData(CurrentVisual, this[741]);
    if ( TreeData && CVisual::GetParentTreeData(CurrentVisual, this[741], TreeData, &v59) && v59 )
      v16 = 1;
    CurrentVisual = (struct CVisual *)*((_QWORD *)CurrentVisual + 10);
  }
  while ( CurrentVisual );
  if ( !CurrentVisual
    || !(*(unsigned __int8 (__fastcall **)(const struct IDeviceTarget *))(*(_QWORD *)this[741] + 200LL))(this[741]) )
  {
LABEL_62:
    v48 = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 3));
    CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(v48);
    if ( CachedWindowBackgroundTreatment )
    {
      if ( !*((_BYTE *)CachedWindowBackgroundTreatment + 140) )
      {
        v8 = (struct IBitmapRealization *)*((_QWORD *)CachedWindowBackgroundTreatment + 3);
        if ( v8 )
        {
          v50 = *(_QWORD *)((char *)CachedWindowBackgroundTreatment + 116);
          *(_OWORD *)v73 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 100);
          v51 = *((_OWORD *)CachedWindowBackgroundTreatment + 2);
          v6 = *(float *)&v73[4];
          v4 = *(float *)v73;
          *(_QWORD *)&v73[16] = v50;
          v52 = *((_OWORD *)CachedWindowBackgroundTreatment + 3);
          *(_OWORD *)v61.m256i_i8 = v51;
          v53 = *((_OWORD *)CachedWindowBackgroundTreatment + 4);
          *(_OWORD *)&v61.m256i_u64[2] = v52;
          v54 = *((_OWORD *)CachedWindowBackgroundTreatment + 5);
          v55 = *((_DWORD *)CachedWindowBackgroundTreatment + 24);
          v62 = v53;
          v63 = v54;
          v64 = v55;
        }
        else
        {
          *(_OWORD *)v60 = *(_OWORD *)((char *)CachedWindowBackgroundTreatment + 124);
        }
        goto LABEL_25;
      }
    }
  }
  if ( !CurrentVisual )
  {
    *(_DWORD *)&v60[12] = 1065353216;
    goto LABEL_50;
  }
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
  if ( !CWindowBackgroundTreatment::HasValidSource(WindowBackgroundTreatmentInternal, this[4]) )
  {
    v9 = 0;
    v30 = 0;
    goto LABEL_28;
  }
  RealizationForEffectInput = CWindowBackgroundTreatment::GetRealizationForEffectInput(
                                WindowBackgroundTreatmentInternal,
                                this[4]);
  v74[0] = RealizationForEffectInput;
  if ( !RealizationForEffectInput )
  {
    *(_OWORD *)v60 = *(_OWORD *)(*((_QWORD *)WindowBackgroundTreatmentInternal + 8) + 80LL);
LABEL_50:
    v9 = 0;
    goto LABEL_25;
  }
  if ( !v16 )
  {
LABEL_24:
    v21 = *((_OWORD *)WindowBackgroundTreatmentInternal + 9);
    v8 = RealizationForEffectInput;
    v22 = *((_QWORD *)WindowBackgroundTreatmentInternal + 20);
    v9 = 0;
    *(_OWORD *)v73 = v21;
    v6 = *((float *)&v21 + 1);
    v4 = *(float *)&v21;
    *(_QWORD *)&v73[16] = v22;
LABEL_25:
    if ( v8 )
    {
      v23 = *(float *)&v73[8] - v4;
      v24 = *(float *)&v73[12] - v6;
      v75 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v61);
      v25 = *((float *)&v75 + 3) - v6;
      v26 = *((float *)&v75 + 1) - v6;
      v27 = *((float *)&v75 + 2) - v4;
      *((float *)a3 + 27) = *(float *)&v75 - v4;
      *((float *)a3 + 28) = v26;
      *((float *)a3 + 29) = v27;
      *((float *)a3 + 30) = v25;
      v65[0] = v61.m256i_i64[0];
      v65[1] = *(__int64 *)((char *)&v61.m256i_i64[1] + 4);
      v66 = v61.m256i_i32[5];
      v67 = v61.m256i_i32[7];
      v68 = v63;
      v69 = HIDWORD(v63);
      v76 = _xmm;
      LODWORD(v77) = LODWORD(v4) ^ _xmm;
      LODWORD(v78) = LODWORD(v6) ^ _xmm;
      v28 = Matrix3x3::operator*(v65, v71, &v76);
      *(_QWORD *)((char *)&v76 + 4) = 0LL;
      *(float *)&v76 = 1.0 / v23;
      *((float *)&v76 + 3) = 1.0 / v24;
      v77 = 0.0 - (float)((float)(1.0 / v23) * 0.0);
      v78 = 0.0 - (float)((float)(1.0 / v24) * 0.0);
      v29 = Matrix3x3::operator*(v28, v65, &v76);
      *(_OWORD *)((char *)a3 + 72) = *(_OWORD *)v29;
      *(_OWORD *)((char *)a3 + 88) = *(_OWORD *)(v29 + 16);
      *((_DWORD *)a3 + 26) = *(_DWORD *)(v29 + 32);
    }
    v30 = 0;
    goto LABEL_28;
  }
  v39 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 216);
  v40 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 232);
  v72 = *((_DWORD *)WindowBackgroundTreatmentInternal + 70);
  v71[0] = v39;
  v41 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 248);
  v71[1] = v40;
  v42 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 264);
  v71[2] = v41;
  v71[3] = v42;
  if ( CMILMatrix::Invert((CMILMatrix *)v71) )
  {
    v43 = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 51));
    CMILMatrix::Multiply(v43, (const struct CMILMatrix *)v71, (struct CMILMatrix *)&v61);
    RealizationForEffectInput = v74[0];
    goto LABEL_24;
  }
  v30 = 1;
  v9 = 0;
LABEL_28:
  if ( CurrentVisual
    && !v30
    && (*(unsigned __int8 (__fastcall **)(const struct IDeviceTarget *))(*(_QWORD *)this[741] + 200LL))(this[741])
    && !v9 )
  {
    v31 = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 3));
    v74[0] = CVisual::GetCachedWindowBackgroundTreatment(v31);
    if ( v74[0] )
    {
      CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
      v33 = CCachedWindowBackgroundTreatment::Update(v32, (__int64)v73, (__int64)v60);
      v35 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x71Du, 0LL);
        return v35;
      }
    }
    else
    {
      v44 = CVisual::GetWindowBackgroundTreatmentInternal(CurrentVisual);
      v45 = CCachedWindowBackgroundTreatment::Create((__int64)v44, (__int64)v8, (int)&v61, (float *)v73, v60, v74);
      v35 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x726u, 0LL);
        return v35;
      }
      v47 = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 3));
      CVisual::SetCachedWindowBackgroundTreatment(v47, v74[0]);
    }
  }
  if ( v8 )
  {
    v36 = CDrawListBitmap::Initialize(a3, v8, (const struct CDrawingContext *)this);
    v35 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x738u, 0LL);
    else
      *((_DWORD *)a3 + 16) = 128;
    return v35;
  }
  v7 = v70;
LABEL_56:
  v56 = CDrawingContext::SetEffectInputToTransparentBlack((CDrawingContext *)this, v7, a3);
  v35 = v56;
  if ( v56 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x73Fu, 0LL);
  else
    *((_OWORD *)a3 + 3) = *(_OWORD *)v60;
  return v35;
}

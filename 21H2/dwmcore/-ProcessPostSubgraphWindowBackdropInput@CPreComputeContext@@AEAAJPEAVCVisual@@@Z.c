/*
 * XREFs of ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18000A4C4 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A530 (-AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800633B4 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180093FA0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1448 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800D4DD0 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4C88 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CPreComputeContext::ProcessPostSubgraphWindowBackdropInput(
        CPreComputeContext *this,
        struct CVisual *a2)
{
  char v2; // di
  float v3; // xmm6_4
  float v5; // xmm7_4
  float v7; // xmm8_4
  struct CVisual *v8; // rbx
  float v9; // xmm9_4
  __int64 v10; // rsi
  struct CTreeData *v11; // r8
  const struct CVisualTree *v12; // rdx
  CGeometry *v13; // rcx
  float v14; // xmm3_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  __int128 v17; // xmm0
  __int64 v18; // xmm1_8
  unsigned int v19; // eax
  struct CWindowBackgroundTreatment *v20; // rax
  int v21; // eax
  unsigned int v22; // ebx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  int v29; // [rsp+28h] [rbp-E0h]
  bool v30; // [rsp+38h] [rbp-D0h] BYREF
  bool v31; // [rsp+39h] [rbp-CFh] BYREF
  _OWORD v32[4]; // [rsp+48h] [rbp-C0h] BYREF
  char v33; // [rsp+88h] [rbp-80h]
  char v34; // [rsp+89h] [rbp-7Fh]
  _OWORD v35[4]; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+D8h] [rbp-30h]
  _BYTE v37[64]; // [rsp+E8h] [rbp-20h] BYREF
  int v38; // [rsp+128h] [rbp+20h]
  float v39; // [rsp+138h] [rbp+30h] BYREF
  float v40; // [rsp+13Ch] [rbp+34h]
  float v41; // [rsp+140h] [rbp+38h]
  float v42; // [rsp+144h] [rbp+3Ch]
  __int128 v43; // [rsp+148h] [rbp+40h] BYREF
  float v44; // [rsp+158h] [rbp+50h]
  float v45; // [rsp+15Ch] [rbp+54h]
  __int128 v46; // [rsp+160h] [rbp+58h] BYREF
  __int64 v47; // [rsp+170h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v2 = 0;
  v3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v5 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v7 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v8 = a2;
  v9 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v10 = *((_QWORD *)this + 1);
  v32[0] = _xmm;
  v32[1] = _xmm;
  v39 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v40 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v41 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v42 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v32[2] = _xmm;
  v32[3] = _xmm;
  v33 = 85;
  v34 = v34 & 0xC0 | 0x17;
  if ( !a2 )
    return 0LL;
  while ( (**((_DWORD **)v8 + 29) & 0x200000) == 0 )
  {
    if ( CVisual::FindTreeData(v8, *(const struct CVisualTree **)(v10 - 16))
      && (CVisual::GetParentTreeData(v8, *(const struct CVisualTree **)(v10 - 16), v11, &v30), v30) )
    {
      v3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v2 = 1;
      v5 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v7 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v9 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      v39 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v40 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v41 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v42 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    }
    else
    {
      v12 = *(const struct CVisualTree **)(v10 - 16);
      v36 = 0;
      v38 = 0;
      v31 = 0;
      CVisual::CalcTransform(v8, v12, 0LL, &v31, (struct CMILMatrix *)v35, (struct CMILMatrix *)v37);
      if ( !v2 )
        CMILMatrix::Multiply((const struct CMILMatrix *)v32, (const struct CMILMatrix *)v35, (struct CMILMatrix *)v32);
      if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(&v39) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>(v35, &v39, &v39);
        v9 = v42;
        v7 = v41;
        v5 = v40;
        v3 = v39;
      }
      v13 = (CGeometry *)*((_QWORD *)v8 + 31);
      if ( v13 )
      {
        *(_QWORD *)&v43 = 0LL;
        BYTE8(v43) = 0;
        if ( (int)CGeometry::GetShapeData(v13, (const struct D2D_SIZE_F *)((char *)v8 + 140), (struct CShapePtr *)&v43) >= 0 )
        {
          v46 = 0LL;
          if ( (int)CShapePtr::GetTightBounds(&v43, &v46, v37) >= 0 )
          {
            if ( *(float *)&v46 > v3 )
            {
              v39 = *(float *)&v46;
              v3 = *(float *)&v46;
            }
            v14 = v5;
            if ( *((float *)&v46 + 1) > v5 )
            {
              v40 = *((float *)&v46 + 1);
              v5 = *((float *)&v46 + 1);
              v14 = *((float *)&v46 + 1);
            }
            v15 = v7;
            if ( v7 > *((float *)&v46 + 2) )
            {
              v41 = *((float *)&v46 + 2);
              v7 = *((float *)&v46 + 2);
              v15 = *((float *)&v46 + 2);
            }
            v16 = v9;
            if ( v9 > *((float *)&v46 + 3) )
            {
              v42 = *((float *)&v46 + 3);
              v9 = *((float *)&v46 + 3);
              v16 = *((float *)&v46 + 3);
            }
            if ( v15 <= v3 || v16 <= v14 )
            {
              v9 = 0.0;
              v7 = 0.0;
              v5 = 0.0;
              v42 = 0.0;
              v3 = 0.0;
              v41 = 0.0;
              v40 = 0.0;
              v39 = 0.0;
            }
          }
        }
        CShapePtr::Release((CShapePtr *)&v43);
      }
    }
    v8 = (struct CVisual *)*((_QWORD *)v8 + 11);
    if ( !v8 )
      return 0LL;
  }
  if ( v2 )
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v8);
    v25 = *((_OWORD *)WindowBackgroundTreatmentInternal + 11);
    v35[0] = *((_OWORD *)WindowBackgroundTreatmentInternal + 10);
    v26 = *((_OWORD *)WindowBackgroundTreatmentInternal + 12);
    v35[1] = v25;
    v27 = *((_OWORD *)WindowBackgroundTreatmentInternal + 13);
    LODWORD(WindowBackgroundTreatmentInternal) = *((_DWORD *)WindowBackgroundTreatmentInternal + 56);
    v35[2] = v26;
    v35[3] = v27;
    v36 = (int)WindowBackgroundTreatmentInternal;
    if ( CMILMatrix::Invert((CMILMatrix *)v35) )
    {
      TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(*(_QWORD *)this + 360LL));
      CMILMatrix::Multiply(TopByReference, (const struct CMILMatrix *)v35, (struct CMILMatrix *)v32);
      goto LABEL_26;
    }
    return 0LL;
  }
LABEL_26:
  v17 = *(_OWORD *)((char *)a2 + 172);
  v44 = 0.0;
  v18 = *(_QWORD *)((char *)a2 + 188);
  v45 = 0.0;
  v46 = v17;
  v47 = v18;
  v43 = 0LL;
  CMILMatrix::Transform3DBoundsHelper<0>(v32, &v46, &v43);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(&v39) )
    TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
      &v43,
      &v39);
  v19 = v45 <= v44;
  if ( *((float *)&v43 + 2) <= *(float *)&v43 )
    ++v19;
  if ( *((float *)&v43 + 3) <= *((float *)&v43 + 1) )
    ++v19;
  if ( v19 > 1 )
    return 0LL;
  if ( (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(&v43) )
    return 0LL;
  v20 = CVisual::GetWindowBackgroundTreatmentInternal(v8);
  v21 = CWindowBackgroundTreatment::AddRectangleToBounds(v20, &v43);
  v22 = v21;
  if ( v21 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x829,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
    (const char *)(unsigned int)v21,
    v29);
  return v22;
}

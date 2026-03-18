/*
 * XREFs of ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@@Z @ 0x18000B8E4 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180056C40 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x18020E79C (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180056568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057114 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800578F0 (-TransformEdgeFlags_AxisAlignedPreserving@D2DMatrixHelper@@YAIIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057A54 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180057E64 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1800AC0F4 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800AEBA8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1800B9CE4 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800D32D4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1801D9CB8 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ??$?0$0?0V?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@UPrimitiveUVDesc@@$0?0@gsl@@QEAA@AEAV?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E26A0 (--$-0$0-0V-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expa.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801E2F6C (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ??A?$span@UPrimitiveUVDesc@@$0?0@gsl@@QEBAAEAUPrimitiveUVDesc@@_K@Z @ 0x1801E3068 (--A-$span@UPrimitiveUVDesc@@$0-0@gsl@@QEBAAEAUPrimitiveUVDesc@@_K@Z.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1801E30C4 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E369C (-PartitionPrimitive@CDrawListEntryBuilder@@AEAAJIAEBUD2D_RECT_F@@PEAV-$vector_facade@UPrimitiveS.c)
 *     ?clear@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801E37AC (-clear@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect.c)
 *     ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E3980 (-clear_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_.c)
 *     ?erase@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@0@Z @ 0x1801E3CA4 (-erase@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansi.c)
 *     ?insert@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@_KAEBUPrimitiveUVDesc@@@Z @ 0x1801E3D8C (-insert@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expans.c)
 *     ?Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801E7254 (-Copy@CEdgeFlagsMap@@QEAAXAEBV1@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Insert(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  unsigned int v8; // edi
  char v9; // dl
  int v11; // eax
  __int64 v12; // rcx
  __int128 *v13; // r9
  __int64 v14; // xmm1_8
  const struct D2D_MATRIX_3X2_F *v15; // rdx
  char v16; // dl
  bool v17; // zf
  int v18; // eax
  __int64 v19; // rcx
  struct CShape *v20; // rbx
  const struct CEdgeFlagsMap *v21; // rdx
  _DWORD *v22; // rcx
  char v23; // dl
  struct D2D_RECT_F *v24; // r9
  float *v25; // rdx
  const struct D2D_MATRIX_3X2_F *v26; // r8
  int v27; // eax
  __int64 v28; // rcx
  struct CShape *v29; // rbx
  FLOAT m11; // xmm0_4
  FLOAT m12; // xmm1_4
  __int64 v32; // r8
  _QWORD *v33; // rdi
  unsigned int v34; // r14d
  __int64 v35; // rsi
  float *v36; // rax
  float *v37; // rax
  __int64 v38; // rbx
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // ecx
  _DWORD *v42; // rax
  __int64 v43; // rax
  __int128 v44; // xmm0
  int v45; // eax
  __int64 v46; // rcx
  char v47; // r12
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  _DWORD *v51; // r14
  _DWORD *v52; // rbx
  int v53; // eax
  int inserted; // eax
  __int64 v55; // rcx
  _DWORD *v56; // rbx
  _DWORD *v57; // r14
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  void *v61; // rcx
  void *v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  struct CShape *v65; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v66; // [rsp+38h] [rbp-C8h] BYREF
  char v67; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  int v69; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+64h] [rbp-9Ch]
  int v71; // [rsp+6Ch] [rbp-94h]
  __int64 v72; // [rsp+70h] [rbp-90h]
  int v73; // [rsp+78h] [rbp-88h]
  _DWORD *v74; // [rsp+80h] [rbp-80h] BYREF
  __int128 v75; // [rsp+88h] [rbp-78h] BYREF
  __int64 v76; // [rsp+98h] [rbp-68h]
  __int64 v77; // [rsp+A0h] [rbp-60h]
  __int128 v78; // [rsp+A8h] [rbp-58h]
  __int128 v79; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v80; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v81; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v82; // [rsp+E8h] [rbp-18h]
  _DWORD *v83; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD *v84; // [rsp+F8h] [rbp-8h]
  char *v85; // [rsp+100h] [rbp+0h]
  _DWORD v86[26]; // [rsp+108h] [rbp+8h] BYREF
  char v87; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v88[3]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v89; // [rsp+210h] [rbp+110h]
  _BYTE v90[80]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v91[3]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v92[64]; // [rsp+298h] [rbp+198h] BYREF
  _QWORD v93[3]; // [rsp+2D8h] [rbp+1D8h] BYREF
  _BYTE v94[128]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v95[3]; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v96[128]; // [rsp+388h] [rbp+288h] BYREF
  char v97; // [rsp+408h] [rbp+308h] BYREF

  v8 = 0;
  v9 = *((_BYTE *)a2 + 24) & 1;
  if ( !v9 && (*((float *)a2 + 2) <= *(float *)a2 || *((float *)a2 + 3) <= *((float *)a2 + 1))
    || (*((_BYTE *)a2 + 24) & 6) == 0 )
  {
    return v8;
  }
  if ( a4 && !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)a4) )
  {
    v14 = *((_QWORD *)v13 + 2);
    v81 = *v13;
    v82 = v14;
    if ( !D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v81) )
      return v8;
    v16 = v67 ^ *((_BYTE *)a2 + 24);
    v91[0] = v92;
    LOBYTE(v15) = v67 ^ v16 & 6;
    v17 = (*((_BYTE *)a2 + 24) & 1) == 0;
    v91[1] = v92;
    v91[2] = v93;
    v93[0] = v94;
    v93[1] = v94;
    v93[2] = v95;
    v95[0] = v96;
    v95[1] = v96;
    v95[2] = &v97;
    *(_QWORD *)&v79 = 0LL;
    BYTE8(v79) = 0;
    v67 = (char)v15;
    if ( !v17 )
    {
      CMILMatrix::CMILMatrix((CMILMatrix *)v88, a4);
      v18 = CShape::CopyShape(*(CShape **)a2, (const struct CMILMatrix *)v88, &v65);
      v8 = v18;
      if ( v18 >= 0 )
      {
        v20 = v65;
        CShapePtr::Release((CShapePtr *)&v79);
        v21 = (const struct CEdgeFlagsMap *)*((_QWORD *)a2 + 1);
        *(_QWORD *)&v79 = v20;
        BYTE8(v79) = 1;
        if ( v21 )
          CEdgeFlagsMap::Copy((CEdgeFlagsMap *)v91, v21, a4);
        v67 |= 1u;
        *(_QWORD *)&v66.m11 = v65;
        *(_QWORD *)&v66.m[1][0] = v91;
        goto LABEL_26;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x80u);
LABEL_21:
      CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)v91);
      CShapePtr::Release((CShapePtr *)&v79);
      return v8;
    }
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)a4, v15) )
    {
      v67 = v23 & 0xFE;
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(a2, (const struct D2D_RECT_F *)a4, &v66, v24);
      LODWORD(v66.dx) = D2DMatrixHelper::TransformEdgeFlags_AxisAlignedPreserving(
                          (D2DMatrixHelper *)*((unsigned int *)a2 + 4),
                          v25,
                          v26);
    }
    else
    {
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v90);
      v80 = *(_OWORD *)a2;
      CRectanglesShape::SetSingleRect((CRectanglesShape *)v90, (const struct MilRectF *)&v80);
      CMILMatrix::CMILMatrix((CMILMatrix *)v88, a4);
      v27 = CShape::CopyShape((CShape *)v90, (const struct CMILMatrix *)v88, &v65);
      v8 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x9Au);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v90);
        goto LABEL_21;
      }
      v29 = v65;
      CShapePtr::Release((CShapePtr *)&v79);
      m11 = a4->m11;
      m12 = a4->m12;
      v32 = *((unsigned int *)a2 + 4);
      v69 = 0;
      v71 = 0;
      v68 = __PAIR64__(LODWORD(m12), LODWORD(m11));
      v70 = *(_QWORD *)&a4->m[1][0];
      v72 = *(_QWORD *)&a4->m[2][0];
      *(_QWORD *)&v79 = v29;
      BYTE8(v79) = 1;
      v73 = 1065353216;
      CEdgeFlagsMap::AddEdgeFlags(v91, a2, v32, &v68);
      v67 |= 1u;
      *(_QWORD *)&v66.m11 = v65;
      *(_QWORD *)&v66.m[1][0] = v91;
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v90);
    }
LABEL_26:
    v78 = 0uLL;
    v83 = v86;
    v84 = v86;
    v85 = &v87;
    if ( a3 )
    {
      v33 = (_QWORD *)((char *)a3 + 32);
      v89 = 0;
      v65 = (struct CShape *)v86;
      memset(v88, 0, sizeof(v88));
      if ( *((_QWORD *)a3 + 4) )
      {
        detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>>::insert(
          (unsigned int)&v83,
          (unsigned int)&v74,
          (unsigned int)&v65,
          *v33,
          (__int64)v88);
      }
      else
      {
        v74 = &v86[13 * *v33];
        detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>>::erase(
          &v83,
          &v80,
          &v74,
          &v65);
      }
      v34 = 0;
      if ( *v33 )
      {
        v35 = 0LL;
        do
        {
          v69 = 0;
          v71 = 0;
          v70 = *((_QWORD *)&v81 + 1);
          v68 = v81;
          v72 = v82;
          v73 = 1065353216;
          v36 = (float *)gsl::span<PrimitiveUVDesc,-1>::operator[]((char *)a3 + 32, v35);
          v37 = Matrix3x3::operator*((float *)&v68, (float *)v88, v36);
          v38 = 13 * v35;
          v39 = *(_OWORD *)v37;
          v40 = *((_OWORD *)v37 + 1);
          v41 = *((_DWORD *)v37 + 8);
          v42 = v83;
          *(_OWORD *)&v83[v38] = v39;
          *(_OWORD *)&v42[v38 + 4] = v40;
          v42[v38 + 8] = v41;
          v43 = gsl::span<PrimitiveUVDesc,-1>::operator[]((char *)a3 + 32, v35);
          v35 = ++v34;
          *(_OWORD *)&v83[v38 + 9] = *(_OWORD *)(v43 + 36);
        }
        while ( (unsigned __int64)v34 < *v33 );
      }
      v44 = *(_OWORD *)a3;
      v76 = *((_QWORD *)a3 + 2);
      v77 = *((_QWORD *)a3 + 3);
      v75 = v44;
      gsl::span<PrimitiveUVDesc,-1>::span<PrimitiveUVDesc,-1>(&v80, &v83);
      v78 = v80;
    }
    v45 = CDrawListEntryBuilder::Insert(
            this,
            (const struct PrimitiveGeometryDesc *)&v66,
            (const struct PrimitiveVertexAttributesDesc *)((unsigned __int64)&v75 & -(__int64)(a3 != 0LL)),
            0LL);
    v8 = v45;
    if ( v45 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0LL, v45, 0xBBu);
    v22 = v83;
    if ( 0x4EC4EC4EC4EC4EC5LL * (v84 - v83) )
    {
      detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,2,1,detail::liberal_expansion_policy>>::clear_region(
        &v83,
        0LL);
      v22 = v83;
    }
    v83 = 0LL;
    if ( v22 == v86 )
      v22 = 0LL;
    DefaultHeap::Free(v22);
    goto LABEL_21;
  }
  if ( !*((_BYTE *)this + 29) || v9 )
    goto LABEL_8;
  v47 = 1;
  if ( *((_BYTE *)this + 4425)
    && ((v48 = *((_QWORD *)this + 2), *(_QWORD *)v48) || *(_QWORD *)(v48 + 80))
    && (v79 = *(_OWORD *)a2, !CCpuClip::FullyContains((_BYTE *)v48, (__int64)&v79, 0LL)) )
  {
    v83 = v86;
    v84 = v86;
    v85 = (char *)v88;
    v49 = CDrawListEntryBuilder::PartitionPrimitive(
            this,
            (unsigned int)CCommonRegistryData::CpuClipWarpPartitionThreshold,
            a2,
            &v83);
    v8 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0LL, v49, 0xCCu);
LABEL_64:
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(&v83);
      v62 = v83;
      v17 = v83 == v86;
      v83 = 0LL;
      if ( v17 )
        v62 = 0LL;
      DefaultHeap::Free(v62);
    }
    else
    {
      v51 = v84;
      v52 = v83;
      if ( v84 == v83 )
      {
        v47 = 0;
      }
      else
      {
        v67 = *((_BYTE *)a2 + 24) & 6 | v67 & 0xF8;
        while ( v52 != v51 )
        {
          if ( *((_BYTE *)v52 + 20) )
          {
            v53 = *((_DWORD *)a2 + 4);
            *(_OWORD *)&v66.m11 = *(_OWORD *)v52;
            LODWORD(v66.dx) = v52[4] & v53;
            inserted = CDrawListEntryBuilder::InsertWARP(this, (const struct PrimitiveGeometryDesc *)&v66, a3, 1);
            v8 = inserted;
            if ( inserted < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0LL, inserted, 0xDFu);
              goto LABEL_64;
            }
          }
          v52 += 6;
        }
        v56 = v83;
        v57 = v84;
        while ( v56 != v57 )
        {
          if ( !*((_BYTE *)v56 + 20) )
          {
            v58 = *((_DWORD *)a2 + 4);
            *(_OWORD *)&v66.m11 = *(_OWORD *)v56;
            LODWORD(v66.dx) = v56[4] & v58;
            v59 = CDrawListEntryBuilder::InsertHW((CCpuClip **)this, (const struct PrimitiveGeometryDesc *)&v66, a3, 0);
            v8 = v59;
            if ( v59 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0LL, v59, 0xEBu);
              goto LABEL_64;
            }
          }
          v56 += 6;
        }
      }
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(&v83);
      v61 = v83;
      v17 = v83 == v86;
      v83 = 0LL;
      if ( v17 )
        v61 = 0LL;
      DefaultHeap::Free(v61);
      if ( !v47 )
      {
LABEL_8:
        v11 = CDrawListEntryBuilder::InsertHW((CCpuClip **)this, a2, a3, 1);
        v8 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0xF9u);
      }
    }
  }
  else
  {
    v63 = CDrawListEntryBuilder::InsertWARP(this, a2, a3, 0);
    v8 = v63;
    if ( v63 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0LL, v63, 0xC7u);
  }
  return v8;
}

/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1800AC0F4 (-InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     ?Transform@CPolygonBuilder@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000EB2C (-Transform@CPolygonBuilder@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057114 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@@Z @ 0x180057488 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBU.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180057630 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800633B4 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18006367C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180063700 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800AB300 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AD06C (-DoesContain@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x1800AEBA8 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1800B9CE4 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBA_KV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@MPEAW44@PEA_N@Z @ 0x1800CA1D8 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBA_KV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@M.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CF4E4 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_p.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z @ 0x1800CF50C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPolygonBuilder@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?insert@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@W4D2D1_EDGE_FLAGS@@@2@V?$basic_iterator@$$CBW4D2D1_EDGE_FLAGS@@@2@_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1800D1ED4 (-insert@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800D32D4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D8B5C (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vlibe.c)
 *     ??4?$com_ptr_t@VCPolygonBuilder@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPolygonBuilder@@@Z @ 0x1800E2504 (--4-$com_ptr_t@VCPolygonBuilder@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPolygonBuilde.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x1800E49FC (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800F9440 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801E2F6C (--1CEdgeFlagsMap@@QEAA@XZ.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3)
{
  char v4; // r12
  char v5; // r15
  const struct CRoundedRectangleShape *v7; // rdi
  float v8; // xmm12_4
  float v9; // xmm13_4
  __int64 v10; // rcx
  _QWORD *v11; // rax
  char v12; // r13
  unsigned int v13; // xmm7_4
  unsigned int v14; // xmm8_4
  unsigned int v15; // xmm9_4
  unsigned int v16; // xmm10_4
  bool v17; // zf
  unsigned int v18; // r15d
  LPVOID *v19; // r13
  float v20; // xmm1_4
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  bool v24; // r13
  bool v25; // r12
  bool v26; // r12
  char v27; // al
  struct CPrimitiveColor *v28; // r15
  struct PrimitiveVertexAttributesDesc *v29; // rdx
  char v30; // cl
  _BYTE *v31; // rbx
  _BYTE *v32; // rbx
  __int64 v33; // r8
  _BYTE *v34; // rbx
  __int64 v35; // r8
  _BYTE *v36; // rbx
  char v37; // cl
  _BYTE *v38; // rcx
  _BYTE *v39; // rdx
  __int64 v40; // rcx
  int BuiltHWPrimitiveEntry; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  CCpuClip *v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  CShape *v50; // r15
  int v51; // eax
  __int64 v52; // rcx
  unsigned int v53; // xmm7_4
  unsigned int v54; // xmm8_4
  unsigned int v55; // xmm9_4
  unsigned int v56; // xmm10_4
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rcx
  int v60; // ebx
  __int64 v61; // rcx
  __int64 v62; // rdx
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 **v66; // rbx
  __int64 v67; // rdx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  int v70; // r9d
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rcx
  __m128 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rcx
  const struct Mesh::VertexAAOffsetDesc *MeshAAOffsetsForRoundedRectangle; // rax
  struct CObjectCache *ObjectCache; // rax
  _DWORD *v79; // rdx
  int v80; // r8d
  __int64 v81; // rcx
  int TightBounds; // eax
  __int64 v83; // rcx
  __m128 v84; // xmm4
  __m128 v85; // xmm4
  __m128 v86; // xmm4
  __m128 v87; // xmm1
  int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // rcx
  _BYTE *v93; // rcx
  _BYTE *v94; // rcx
  int v95; // eax
  __int64 v96; // rcx
  HANDLE ProcessHeap; // rax
  HANDLE v98; // rax
  HANDLE v99; // rax
  HANDLE v100; // rax
  char v101; // [rsp+38h] [rbp-D0h]
  char v102; // [rsp+39h] [rbp-CFh]
  bool v103; // [rsp+3Ah] [rbp-CEh] BYREF
  void ***v104; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+48h] [rbp-C0h]
  CShape *v106; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v107[2]; // [rsp+58h] [rbp-B0h] BYREF
  float v108[2]; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v109; // [rsp+70h] [rbp-98h]
  __int128 v110; // [rsp+80h] [rbp-88h]
  __int64 v111; // [rsp+90h] [rbp-78h]
  unsigned int v112; // [rsp+98h] [rbp-70h]
  unsigned int v113; // [rsp+9Ch] [rbp-6Ch]
  int v114; // [rsp+A8h] [rbp-60h]
  struct PrimitiveVertexAttributesDesc *v115; // [rsp+B8h] [rbp-50h]
  char v116[80]; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v117; // [rsp+118h] [rbp+10h] BYREF
  __m128 v118; // [rsp+138h] [rbp+30h] BYREF
  void **v119; // [rsp+148h] [rbp+40h] BYREF
  __int64 v120; // [rsp+150h] [rbp+48h]
  void *v121; // [rsp+158h] [rbp+50h] BYREF
  _BYTE *v122; // [rsp+160h] [rbp+58h]
  int v123; // [rsp+168h] [rbp+60h]
  __int64 v124; // [rsp+16Ch] [rbp+64h]
  _BYTE v125[16]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v126; // [rsp+188h] [rbp+80h]
  struct D2D_MATRIX_3X2_F v127; // [rsp+198h] [rbp+90h] BYREF
  LPVOID lpMem; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE *v129; // [rsp+1C0h] [rbp+B8h]
  char *v130; // [rsp+1C8h] [rbp+C0h]
  _BYTE v131[160]; // [rsp+1D0h] [rbp+C8h] BYREF
  char v132; // [rsp+270h] [rbp+168h] BYREF
  LPVOID v133; // [rsp+278h] [rbp+170h] BYREF
  _BYTE *v134; // [rsp+280h] [rbp+178h]
  LPVOID *v135; // [rsp+288h] [rbp+180h]
  _BYTE v136[64]; // [rsp+290h] [rbp+188h] BYREF
  LPVOID v137; // [rsp+2D0h] [rbp+1C8h] BYREF
  _BYTE *v138; // [rsp+2D8h] [rbp+1D0h]
  LPVOID *v139; // [rsp+2E0h] [rbp+1D8h]
  _BYTE v140[128]; // [rsp+2E8h] [rbp+1E0h] BYREF
  LPVOID v141; // [rsp+368h] [rbp+260h] BYREF
  _BYTE *v142; // [rsp+370h] [rbp+268h]
  char *v143; // [rsp+378h] [rbp+270h]
  _BYTE v144[128]; // [rsp+380h] [rbp+278h] BYREF
  char v145; // [rsp+400h] [rbp+2F8h] BYREF

  v115 = a3;
  v104 = 0LL;
  v119 = &CRectanglesShape::`vftable';
  v120 = 0LL;
  v121 = v125;
  v4 = 1;
  v5 = 0;
  v122 = v125;
  LOBYTE(v105) = 0;
  v7 = 0LL;
  v123 = 1;
  v124 = 1LL;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v125);
  v8 = 0.0;
  v9 = 0.0;
  v10 = 0LL;
  *(_QWORD *)&v127.m[2][0] = 0LL;
  *(_OWORD *)&v127.m11 = *(_OWORD *)&_xmm;
  v126 = 0LL;
  if ( !*((_BYTE *)this + 4425) )
    goto LABEL_4;
  v11 = (_QWORD *)*((_QWORD *)this + 2);
  if ( !*v11 && !v11[10] )
    goto LABEL_4;
  v117 = 0LL;
  if ( (*((_BYTE *)a2 + 24) & 1) != 0 )
  {
    v88 = (*(__int64 (__fastcall **)(_QWORD, __m128 *, _QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v117, 0LL);
    v23 = v88;
    if ( v88 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0LL, v88, 0x295u);
      goto LABEL_59;
    }
  }
  else
  {
    v117 = *(__m128 *)a2;
  }
  if ( CCpuClip::FullyContains(*((_BYTE **)this + 2), (__int64)&v117, 0LL) )
  {
    v10 = v126;
LABEL_4:
    v12 = 0;
    if ( (*((_BYTE *)a2 + 24) & 1) != 0 )
    {
      v7 = *(const struct CRoundedRectangleShape **)a2;
      CShapePtr::Release((CShapePtr *)&v104);
      LOBYTE(v105) = 0;
    }
    else
    {
      v13 = *(_DWORD *)a2;
      v14 = *((_DWORD *)a2 + 1);
      v15 = *((_DWORD *)a2 + 2);
      v16 = *((_DWORD *)a2 + 3);
      HIDWORD(v124) = 0;
      if ( v121 != v122 )
      {
        DefaultHeap::Free(v121);
        v10 = v126;
        v121 = v122;
        LODWORD(v124) = v123;
      }
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v126 = 0LL;
      }
      v117.m128_u64[0] = __PAIR64__(v14, v13);
      v117.m128_u64[1] = __PAIR64__(v16, v15);
      DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        (__int64)&v121,
        &v117,
        1u);
      v7 = (const struct CRoundedRectangleShape *)&v119;
    }
    v4 = 0;
    v101 = 0;
    goto LABEL_11;
  }
  v46 = (CCpuClip *)*((_QWORD *)this + 2);
  v101 = 1;
  v12 = 0;
  v114 = 0;
  v47 = CCpuClip::ResolveClip(v46, &v106, (struct CMILMatrix *)v108);
  v23 = v47;
  if ( v47 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0LL, v47, 0x2A7u);
  }
  else if ( (*((_BYTE *)a2 + 24) & 1) != 0 )
  {
    v90 = CShape::Combine(*(_QWORD *)a2, v48, v106, v108, 1, v107);
    v23 = v90;
    if ( v90 >= 0 )
    {
      v7 = (const struct CRoundedRectangleShape *)v107[0];
      goto LABEL_88;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0LL, v90, 0x2B4u);
  }
  else
  {
    v117 = *(__m128 *)a2;
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v117.m128_f32, 0.015625, 0.015625);
    v50 = v106;
    v118 = 0LL;
    v51 = (*(__int64 (__fastcall **)(CShape *, __m128 *, float *))(*(_QWORD *)v106 + 48LL))(v106, &v118, v108);
    v23 = v51;
    if ( v51 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0LL, v51, 0x2C0u);
    }
    else
    {
      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(&v117) )
      {
        v12 = 1;
        if ( CShape::IsAxisAlignedRectangle(v50) && CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v108) )
        {
          CRectanglesShape::SetSingleRect((CRectanglesShape *)&v119, (const struct MilRectF *)&v118);
          CShapePtr::Release((CShapePtr *)&v104);
          v7 = (const struct CRoundedRectangleShape *)&v119;
          LOBYTE(v105) = 0;
          v104 = &v119;
LABEL_13:
          if ( !(*(unsigned __int8 (__fastcall **)(const struct CRoundedRectangleShape *))(*(_QWORD *)v7 + 16LL))(v7) )
          {
            v17 = (*((_BYTE *)a2 + 24) & 1) == 0;
            v133 = v136;
            v18 = 0;
            v134 = v136;
            v135 = &v137;
            v137 = v140;
            v138 = v140;
            v139 = &v141;
            v141 = v144;
            v142 = v144;
            v143 = &v145;
            if ( v17 )
            {
              if ( *((_DWORD *)this + 3) == 1 )
                v18 = 0;
              else
                v18 = *((_DWORD *)a2 + 4);
              LODWORD(v107[0]) = v18;
              if ( v4 )
              {
                v60 = *((_BYTE *)this + 28) != 0 ? 0x3030303 : 0;
                LODWORD(v106) = v60;
                if ( v12 )
                {
                  v18 = v60;
                }
                else if ( CShapePtr::IsAxisAlignedRectangle((CShape **)&v104) )
                {
                  if ( v18 != v60 )
                  {
                    v117 = 0LL;
                    CMILMatrix::CMILMatrix((CMILMatrix *)v116, &v127);
                    TightBounds = CShapePtr::GetTightBounds((__int64 *)&v104);
                    v23 = TightBounds;
                    if ( TightBounds < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0LL, TightBounds, 0x325u);
                      CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v133);
LABEL_58:
                      v5 = v105;
                      goto LABEL_59;
                    }
                    v118 = v117;
                    ClipRectAndEdgeFlags(a2, v18, &v118, (unsigned int)v106, &v117, v107);
                    v18 = v107[0];
                  }
                }
                else
                {
                  CEdgeFlagsMap::AddEdgeFlags(&v133, a2, v18, &Matrix3x3::Identity);
                }
              }
            }
            else if ( *((_QWORD *)a2 + 1) )
            {
              v19 = (LPVOID *)*((_QWORD *)a2 + 1);
              goto LABEL_19;
            }
            v19 = &v133;
LABEL_19:
            v20 = fmaxf(*((float *)this + 1), *((float *)this + 2));
            lpMem = v131;
            v103 = 0;
            v129 = v131;
            v130 = &v132;
            v111 = 0LL;
            LOBYTE(v107[0]) = 0;
            v109 = 0LL;
            v108[0] = 0.015625 / v20;
            v110 = 0LL;
            if ( (*(unsigned __int8 (__fastcall **)(const struct CRoundedRectangleShape *, CShape **))(*(_QWORD *)v7 + 64LL))(
                   v7,
                   &v106)
              && (_DWORD)v106 == 1
              && v127.m11 == 1.0
              && v127.m12 == 0.0
              && v127.m21 == 0.0
              && v127.m22 == 1.0
              && v8 == 0.0
              && v9 == 0.0 )
            {
              v117 = 0LL;
              v21 = (*(__int64 (__fastcall **)(const struct CRoundedRectangleShape *, __m128 *, _QWORD))(*(_QWORD *)v7 + 48LL))(
                      v7,
                      &v117,
                      0LL);
              v23 = v21;
              if ( v21 >= 0 )
              {
                v24 = v4;
                LODWORD(v110) = v18;
                v109 = v117;
                LOBYTE(v111) = 1;
                v25 = 1;
                if ( (v18 & 0x300) != 0x300 )
                  v25 = (v18 & 3) == 3 || (v18 & 0x3000000) == 50331648;
                v26 = (v18 & 0x30000) == 196608 || v25;
                if ( *((_BYTE *)this + 4426) && (*((_BYTE *)a2 + 24) & 2) != 0 )
                {
                  v27 = v107[0];
                  if ( (float)((float)(v117.m128_f32[2] - v117.m128_f32[0])
                             * (float)(v117.m128_f32[3] - v117.m128_f32[1])) >= (float)CCommonRegistryData::MegaRectSize )
                    v27 = 1;
                }
                else
                {
                  v27 = v107[0];
                }
                v102 = 0;
                v28 = 0LL;
LABEL_33:
                v29 = v115;
                if ( !v115 )
                  v28 = (struct CPrimitiveColor *)MEMORY[0x10];
                if ( v27 )
                {
                  BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, v28, 0LL);
                  v23 = BuiltHWPrimitiveEntry;
                  if ( BuiltHWPrimitiveEntry < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0LL, BuiltHWPrimitiveEntry, 0x39Au);
                    v94 = lpMem;
                    if ( (v129 - (_BYTE *)lpMem) >> 2 )
                    {
                      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &lpMem,
                        0LL);
                      v94 = lpMem;
                    }
                    lpMem = 0LL;
                    if ( v94 == v131 )
                      v94 = 0LL;
                    goto LABEL_179;
                  }
                  *(_WORD *)((char *)&v111 + 1) = (*((_BYTE *)a2 + 24) & 2) != 0;
                  CDrawListEntryBuilder::AppendHWGeometry(this, (const struct Mesh::MeshDesc *)v108, v115);
                  v44 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 1, v28, 0LL);
                  v23 = v44;
                  if ( v44 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0LL, v44, 0x3A4u);
                    v94 = lpMem;
                    if ( (v129 - (_BYTE *)lpMem) >> 2 )
                    {
                      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &lpMem,
                        0LL);
                      v94 = lpMem;
                    }
                    lpMem = 0LL;
                    if ( v94 == v131 )
                      v94 = 0LL;
                    goto LABEL_179;
                  }
                  v30 = *((_BYTE *)a2 + 24);
                  v29 = v115;
                  BYTE1(v111) = 0;
                }
                else
                {
                  v30 = *((_BYTE *)a2 + 24);
                  BYTE1(v111) = (v30 & 2) != 0;
                }
                BYTE2(v111) = (v30 & 4) != 0;
                if ( (v30 & 4) != 0 && v26 )
                  *((_BYTE *)this + 4427) = 1;
                CDrawListEntryBuilder::AppendHWGeometry(this, (const struct Mesh::MeshDesc *)v108, v29);
                if ( *((_DWORD *)this + 1100) >= 0xC8u )
                {
                  v95 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(this, 0, v28, 0LL);
                  v23 = v95;
                  if ( v95 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0LL, v95, 0x3BBu);
                    v94 = lpMem;
                    if ( (v129 - (_BYTE *)lpMem) >> 2 )
                    {
                      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                        &lpMem,
                        0LL);
                      v94 = lpMem;
                    }
                    lpMem = 0LL;
                    if ( v94 == v131 )
                      v94 = 0LL;
LABEL_179:
                    DefaultHeap::Free(v94);
                    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v133);
                    goto LABEL_58;
                  }
                }
                v31 = lpMem;
                if ( (v129 - (_BYTE *)lpMem) >> 2 )
                {
                  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                    &lpMem,
                    0LL);
                  v31 = lpMem;
                }
                lpMem = 0LL;
                if ( v31 != v131 && v31 )
                {
                  ProcessHeap = GetProcessHeap();
                  HeapFree(ProcessHeap, 0, v31);
                }
                v32 = v141;
                v33 = (v142 - (_BYTE *)v141) >> 3;
                if ( v33 )
                {
                  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
                    (__int64 *)&v141,
                    0LL,
                    v33);
                  v32 = v141;
                }
                v141 = 0LL;
                if ( v32 != v144 && v32 )
                {
                  v98 = GetProcessHeap();
                  HeapFree(v98, 0, v32);
                }
                v34 = v137;
                v35 = (v138 - (_BYTE *)v137) >> 3;
                if ( v35 )
                {
                  detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
                    (__int64 *)&v137,
                    0LL,
                    v35);
                  v34 = v137;
                }
                v137 = 0LL;
                if ( v34 != v140 && v34 )
                {
                  v99 = GetProcessHeap();
                  HeapFree(v99, 0, v34);
                }
                v36 = v133;
                if ( (v134 - (_BYTE *)v133) >> 2 )
                {
                  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                    &v133,
                    0LL);
                  v36 = v133;
                }
                v133 = 0LL;
                if ( v36 != v136 && v36 )
                {
                  v100 = GetProcessHeap();
                  HeapFree(v100, 0, v36);
                }
                v4 = v101;
                v37 = v102;
LABEL_54:
                if ( v24 && **((_QWORD **)this + 2) )
                  *((_BYTE *)this + 4424) = 1;
                if ( v4 )
                {
                  if ( v37 )
                    ++dword_1803D322C;
                  else
                    ++dword_1803D3228;
                }
                else
                {
                  ++dword_1803D3224;
                }
                v23 = 0;
                goto LABEL_58;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x140u);
              MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0LL, v23, 0x342u);
              v93 = lpMem;
              if ( (v129 - (_BYTE *)lpMem) >> 2 )
              {
                detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                  &lpMem,
                  0LL);
                v93 = lpMem;
              }
              lpMem = 0LL;
              if ( v93 == v131 )
                v93 = 0LL;
            }
            else
            {
              v61 = *((_QWORD *)this + 12);
              v102 = 1;
              if ( v61 )
              {
                detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear(v61 + 16);
                v62 = *((_QWORD *)this + 12);
              }
              else
              {
                ObjectCache = CThreadContext::GetObjectCache(0LL);
                v79 = 0LL;
                v80 = *((_DWORD *)ObjectCache + 1);
                if ( v80 )
                {
                  v79 = (_DWORD *)*((_QWORD *)ObjectCache + 1);
                  *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v79;
                  *((_DWORD *)ObjectCache + 1) = v80 - 1;
                }
                if ( v79 || (v79 = DefaultHeap::Alloc(0x168uLL)) != 0LL )
                {
                  v79[2] = 0;
                  *(_QWORD *)v79 = &CPolygonBuilder::`vftable';
                  *((_QWORD *)v79 + 2) = v79 + 10;
                  *((_QWORD *)v79 + 3) = v79 + 10;
                  *((_QWORD *)v79 + 4) = v79 + 90;
                }
                wil::com_ptr_t<CPolygonBuilder,wil::err_returncode_policy>::operator=((char *)this + 96);
                v62 = *((_QWORD *)this + 12);
                if ( !v62 )
                {
                  v23 = -2147024882;
                  MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0LL, -2147024882, 0x35Du);
                  v93 = lpMem;
                  if ( (v129 - (_BYTE *)lpMem) >> 2 )
                  {
                    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                      &lpMem,
                      0LL);
                    v93 = lpMem;
                  }
                  lpMem = 0LL;
                  if ( v93 == v131 )
                    v93 = 0LL;
                  goto LABEL_192;
                }
              }
              v63 = (*(__int64 (__fastcall **)(const struct CRoundedRectangleShape *, __int64))(*(_QWORD *)v7 + 32LL))(
                      v7,
                      v62);
              v23 = v63;
              if ( v63 >= 0 )
              {
                if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v127) )
                  CPolygonBuilder::Transform(*((CPolygonBuilder **)this + 12), &v127);
                v65 = *((_QWORD *)this + 12);
                v66 = 0LL;
                LODWORD(v106) = 0;
                v67 = *(_QWORD *)(v65 + 24) - *(_QWORD *)(v65 + 16);
                v68 = (v129 - (_BYTE *)lpMem) >> 2;
                v69 = (unsigned int)(v67 >> 3);
                if ( v69 <= v68 )
                {
                  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                    &lpMem,
                    (__int64)(4 * v69) >> 2);
                }
                else
                {
                  v118.m128_u64[0] = (unsigned __int64)v129;
                  detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::insert(
                    (unsigned int)&lpMem,
                    (unsigned int)&v117,
                    (unsigned int)&v118,
                    v69 - v68,
                    (__int64)&v106);
                }
                if ( v4 && *((_BYTE *)this + 28) )
                  v71 = 3LL;
                else
                  v71 = 0LL;
                v72 = *((_QWORD *)this + 12);
                v74.m128_u64[1] = *(_QWORD *)(v72 + 16);
                v73 = (__int64)(*(_QWORD *)(v72 + 24) - v74.m128_u64[1]) >> 3;
                v74.m128_u64[0] = (unsigned int)v73;
                if ( !v74.m128_u64[1] && (_DWORD)v73 )
                {
                  ((void (__fastcall *)(__int64, _QWORD, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
                    v73,
                    0LL,
                    v71);
                  __debugbreak();
                }
                v117 = v74;
                v75 = CEdgeFlagsMap::ResolveEdgeFlags(
                        (_DWORD)v19,
                        (unsigned int)&v117,
                        v71,
                        v70,
                        (__int64)lpMem,
                        (__int64)&v103);
                v24 = 0;
                if ( v4 )
                  v24 = v75 < (v129 - (_BYTE *)lpMem) >> 2;
                v76 = *((_QWORD *)this + 12);
                v28 = 0LL;
                LOBYTE(v111) = 0;
                v109.m128_u64[0] = (unsigned int)((__int64)(*(_QWORD *)(v76 + 24) - *(_QWORD *)(v76 + 16)) >> 3);
                v109.m128_u64[1] = *(_QWORD *)(v76 + 16);
                *(_QWORD *)&v110 = lpMem;
                if ( g_pComposition )
                  v66 = (__int64 **)*((_QWORD *)g_pComposition + 35);
                if ( (*(unsigned int (__fastcall **)(const struct CRoundedRectangleShape *, LPVOID))(*(_QWORD *)v7 + 8LL))(
                       v7,
                       lpMem) )
                {
                  MeshAAOffsetsForRoundedRectangle = 0LL;
                }
                else
                {
                  MeshAAOffsetsForRoundedRectangle = CMeshCacheManager::TryGetMeshAAOffsetsForRoundedRectangle(
                                                       v66,
                                                       (const struct Mesh::MeshDesc *)v108,
                                                       v7,
                                                       (const struct D2D1::Matrix3x2F *)&v127);
                }
                v26 = v103;
                *((_QWORD *)&v110 + 1) = MeshAAOffsetsForRoundedRectangle;
                v27 = v107[0];
                goto LABEL_33;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0LL, v63, 0x364u);
              v93 = lpMem;
              if ( (v129 - (_BYTE *)lpMem) >> 2 )
              {
                detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
                  &lpMem,
                  0LL);
                v93 = lpMem;
              }
              lpMem = 0LL;
              if ( v93 == v131 )
                v93 = 0LL;
            }
LABEL_192:
            DefaultHeap::Free(v93);
            CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v133);
            goto LABEL_58;
          }
LABEL_124:
          v37 = 0;
          v24 = v4;
          goto LABEL_54;
        }
        CShapePtr::Release((CShapePtr *)&v104);
        v7 = v50;
        v84 = _mm_shuffle_ps((__m128)LODWORD(v108[0]), (__m128)LODWORD(v108[0]), 225);
        v84.m128_f32[0] = v108[1];
        v104 = (void ***)v50;
        v85 = _mm_shuffle_ps(v84, v84, 198);
        v85.m128_f32[0] = v109.m128_f32[2];
        v86 = _mm_shuffle_ps(v85, v85, 39);
        v87 = _mm_unpacklo_ps((__m128)v112, (__m128)v113);
        v86.m128_f32[0] = v109.m128_f32[3];
        LODWORD(v9) = _mm_shuffle_ps(v87, v87, 85).m128_u32[0];
        *(_QWORD *)&v127.m[2][0] = v87.m128_u64[0];
        v8 = v87.m128_f32[0];
        v117 = _mm_shuffle_ps(v86, v86, 57);
        LOBYTE(v105) = 0;
        *(__m128 *)&v127.m11 = v117;
LABEL_12:
        if ( !v7 )
          goto LABEL_124;
        goto LABEL_13;
      }
      v53 = *(_DWORD *)a2;
      v54 = *((_DWORD *)a2 + 1);
      v55 = *((_DWORD *)a2 + 2);
      v56 = *((_DWORD *)a2 + 3);
      HIDWORD(v124) = 0;
      DynArrayImpl<0>::ShrinkToSize(&v121, 16LL);
      if ( v126 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v126 + 16LL))(v126);
        v126 = 0LL;
      }
      v117.m128_u64[0] = __PAIR64__(v54, v53);
      v117.m128_u64[1] = __PAIR64__(v56, v55);
      DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        (__int64)&v121,
        &v117,
        1u);
      v58 = CShape::Combine(&v119, v57, v50, v108, 1, &v106);
      v23 = v58;
      if ( v58 >= 0 )
      {
        v7 = v106;
LABEL_88:
        CShapePtr::Release((CShapePtr *)&v104);
        LOBYTE(v105) = 1;
LABEL_11:
        v104 = (void ***)v7;
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0LL, v58, 0x2E1u);
    }
    v5 = 0;
  }
LABEL_59:
  v38 = v121;
  v39 = v122;
  v119 = &CRectanglesShape::`vftable';
  HIDWORD(v124) = 0;
  if ( v121 != v122 )
  {
    DefaultHeap::Free(v121);
    v39 = v122;
    v38 = v122;
    LODWORD(v124) = v123;
    v121 = v122;
  }
  if ( v126 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v126 + 16LL))(v126);
    v39 = v122;
    v38 = v121;
    v126 = 0LL;
  }
  if ( v38 != v39 )
  {
    DefaultHeap::Free(v38);
    v121 = 0LL;
  }
  v40 = v120;
  if ( v120 )
  {
    v120 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  if ( v5 && v7 )
    (**(void (__fastcall ***)(const struct CRoundedRectangleShape *, __int64))v7)(v7, 1LL);
  return v23;
}

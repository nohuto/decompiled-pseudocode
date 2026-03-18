/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800A8F20
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800ACBF4 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180056568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180057784 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057A54 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$?4U?$default_delete@VCShape@@@std@@$0A@@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062834 (--$-4U-$default_delete@VCShape@@@std@@$0A@@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800893A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800CB8D8 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800CCFF0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D8B5C (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vlibe.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800F9440 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801E2F6C (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801E6300 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  char v3; // r15
  float v4; // xmm10_4
  CBrushDrawListGenerator *v6; // r14
  int v7; // r13d
  struct CRenderingEffect *v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // xmm6_4
  unsigned int v13; // xmm7_4
  unsigned int v14; // xmm8_4
  unsigned int v15; // xmm9_4
  __int64 v16; // rdx
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm1
  __m128 v28; // xmm1
  struct CShape *v29; // rcx
  int v30; // r15d
  __int64 (__fastcall ***v31)(_QWORD, __int64); // rdx
  _BYTE *v32; // rcx
  _BYTE *v33; // rdx
  __int64 v34; // rcx
  struct CRenderingEffect *v35; // rbx
  int v36; // esi
  unsigned int v37; // r14d
  bool v38; // r12
  __int64 v39; // rdx
  unsigned int v40; // esi
  __int64 v41; // r13
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 (__fastcall ***v44)(_QWORD, _QWORD *); // rcx
  unsigned int v45; // xmm0_4
  int v46; // xmm1_4
  bool v47; // cf
  __int64 *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  _QWORD *v52; // rcx
  __int64 (__fastcall ***v53)(_QWORD, __int64); // rdx
  __int64 v54; // rcx
  int v55; // xmm1_4
  int v56; // xmm0_4
  unsigned int v57; // xmm1_4
  unsigned int v58; // xmm0_4
  __m128 v59; // xmm0
  __m128 v60; // xmm1
  __m128 v61; // xmm0
  __m128 v62; // xmm0
  __m128 v63; // xmm1
  __m128 v64; // xmm0
  __m128 v65; // xmm1
  __m128 v66; // xmm0
  __m128 v67; // xmm0
  __int64 v68; // rcx
  char v69; // r15
  _QWORD *v70; // r13
  __int64 v71; // rsi
  const struct Matrix3x3 *v72; // rdx
  const struct D2D_MATRIX_3X2_F *v73; // rdx
  __int64 v74; // r8
  float v75; // xmm11_4
  float v76; // xmm2_4
  float v77; // xmm4_4
  float v78; // xmm7_4
  float v79; // xmm14_4
  float v80; // xmm3_4
  float v81; // xmm12_4
  float v82; // xmm8_4
  float v83; // xmm1_4
  float v84; // xmm10_4
  float v85; // xmm15_4
  float v86; // xmm5_4
  float v87; // xmm9_4
  float v88; // xmm7_4
  float v89; // xmm3_4
  float v90; // xmm6_4
  float v91; // xmm2_4
  float v92; // xmm13_4
  float v93; // xmm1_4
  float v94; // xmm3_4
  float v95; // xmm9_4
  float v96; // xmm7_4
  float v97; // xmm0_4
  float v98; // xmm3_4
  float v99; // xmm7_4
  float v100; // xmm1_4
  float v101; // xmm4_4
  float v102; // xmm6_4
  float v103; // xmm5_4
  float v104; // xmm1_4
  float v105; // xmm11_4
  int v106; // eax
  __int128 v107; // xmm0
  __int64 v108; // rcx
  bool v109; // zf
  unsigned int v110; // xmm1_4
  unsigned int v111; // xmm0_4
  CDrawListEntryBuilder *v112; // rcx
  __int64 v113; // rcx
  _BYTE *v114; // rdi
  __int64 v115; // r8
  _BYTE *v116; // rdi
  __int64 v117; // r8
  _BYTE *v118; // rdi
  __int64 v120; // rcx
  __int64 v121; // rcx
  float *v122; // rax
  __m128 v123; // xmm3
  __m128 v124; // xmm2
  int v125; // esi
  int v126; // ecx
  HANDLE ProcessHeap; // rax
  HANDLE v128; // rax
  HANDLE v129; // rax
  struct CRenderingEffect *v130[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v131)(_QWORD, __int64); // [rsp+48h] [rbp-C0h] BYREF
  __int128 v132; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v133; // [rsp+60h] [rbp-A8h] BYREF
  float v134; // [rsp+70h] [rbp-98h]
  float v135; // [rsp+74h] [rbp-94h]
  CBrushDrawListGenerator *v136; // [rsp+78h] [rbp-90h]
  __m128 v137; // [rsp+80h] [rbp-88h] BYREF
  __m256i v138; // [rsp+90h] [rbp-78h]
  _BYTE v139[20]; // [rsp+B0h] [rbp-58h]
  struct CShape *v140[2]; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v141; // [rsp+D8h] [rbp-30h]
  int v142; // [rsp+E8h] [rbp-20h]
  __m128 v143; // [rsp+F8h] [rbp-10h]
  __m128 v144; // [rsp+118h] [rbp+10h] BYREF
  __m256i v145; // [rsp+128h] [rbp+20h]
  __m128 v146; // [rsp+148h] [rbp+40h]
  int v147; // [rsp+158h] [rbp+50h]
  __int128 v148; // [rsp+168h] [rbp+60h] BYREF
  __int64 v149; // [rsp+178h] [rbp+70h]
  _QWORD *v150; // [rsp+180h] [rbp+78h]
  __int64 v151; // [rsp+188h] [rbp+80h]
  _DWORD *v152; // [rsp+190h] [rbp+88h]
  __int128 v153; // [rsp+198h] [rbp+90h] BYREF
  void **v154; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v155; // [rsp+1B0h] [rbp+A8h]
  void *v156; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE *v157; // [rsp+1C0h] [rbp+B8h]
  int v158; // [rsp+1C8h] [rbp+C0h]
  __int64 v159; // [rsp+1CCh] [rbp+C4h]
  _BYTE v160[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v161; // [rsp+1E8h] [rbp+E0h]
  _QWORD v162[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  LPVOID v163; // [rsp+208h] [rbp+100h] BYREF
  _BYTE *v164; // [rsp+210h] [rbp+108h]
  LPVOID *v165; // [rsp+218h] [rbp+110h]
  _BYTE v166[64]; // [rsp+220h] [rbp+118h] BYREF
  LPVOID v167; // [rsp+260h] [rbp+158h] BYREF
  _BYTE *v168; // [rsp+268h] [rbp+160h]
  LPVOID *p_lpMem; // [rsp+270h] [rbp+168h]
  _BYTE v170[128]; // [rsp+278h] [rbp+170h] BYREF
  LPVOID lpMem; // [rsp+2F8h] [rbp+1F0h] BYREF
  _BYTE *v172; // [rsp+300h] [rbp+1F8h]
  char *v173; // [rsp+308h] [rbp+200h]
  _BYTE v174[128]; // [rsp+310h] [rbp+208h] BYREF
  char v175; // [rsp+390h] [rbp+288h] BYREF
  unsigned int v176[2]; // [rsp+398h] [rbp+290h] BYREF
  __int64 v177; // [rsp+3A0h] [rbp+298h] BYREF
  char v178; // [rsp+3A8h] [rbp+2A0h]
  _DWORD v179[52]; // [rsp+3B8h] [rbp+2B0h] BYREF

  v2 = *((_QWORD *)a2 + 21);
  v3 = 0;
  v4 = *(float *)&FLOAT_1_0;
  v6 = this;
  v136 = this;
  if ( !*(_QWORD *)(v2 + 32) )
  {
    v38 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 22) + 8LL))(*((_QWORD *)a2 + 22)) == 1
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v6 + 8) - 1.0) & _xmm) < 0.0000011920929;
    v39 = *((unsigned int *)a2 + 41);
    v40 = 0;
    if ( !(_DWORD)v39 )
    {
LABEL_40:
      v45 = *((_DWORD *)a2 + 66);
      v46 = *((_DWORD *)a2 + 67);
      HIDWORD(v132) = *((_DWORD *)a2 + 65);
      *(_QWORD *)&v133 = (char *)a2 + 8;
      BYTE12(v133) = *((_BYTE *)a2 + 273);
      HIWORD(v133) = *((unsigned __int8 *)a2 + 275);
      BYTE13(v133) = *((_BYTE *)a2 + 272);
      v47 = *((_BYTE *)a2 + 274) != 0;
      *(_QWORD *)&v132 = __PAIR64__(v45, v39);
      v162[0] = v39;
      DWORD2(v132) = v46;
      v162[1] = v176;
      DWORD2(v133) = *((_DWORD *)v6 + 4) | v38 | (v3 != 0 ? 0x40 : 0) | (v47 ? 0x20 : 0);
      v48 = (__int64 *)*((_QWORD *)a2 + 22);
      v49 = *v48;
      v130[0] = 0LL;
      v50 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, struct CRenderingEffect **))(v49 + 16))(v48, v162, v130);
      v36 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0LL, v50, 0x20Bu);
        if ( v130[0] )
          (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v130[0] + 8LL))(v130[0]);
        return (unsigned int)v36;
      }
      CDrawListEntryBuilder::Begin(
        *((CDrawListEntryBuilder **)a2 + 21),
        (const struct DrawListEntryBuilderSetupParams *)&v132,
        v130[0]);
      if ( v130[0] )
        (*(void (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v130[0] + 8LL))(v130[0]);
      goto LABEL_2;
    }
    while ( 1 )
    {
      v41 = v40;
      v42 = *((_QWORD *)a2 + v40 + 15);
      if ( v42 )
        break;
LABEL_38:
      v39 = *((unsigned int *)a2 + 41);
      ++v40;
      *(_QWORD *)&v176[2 * v41] = v42;
      if ( v40 >= (unsigned int)v39 )
      {
        v6 = v136;
        goto LABEL_40;
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v42 + 8LL))(*((_QWORD *)a2 + v40 + 15), 2LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 8LL))(v42, 1LL) )
        v42 = 0LL;
      goto LABEL_38;
    }
    if ( !v38 )
      goto LABEL_35;
    if ( !*(_BYTE *)(v42 + 72) )
    {
      v43 = *(_QWORD *)(v42 + 56);
      if ( v43 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43) )
          goto LABEL_35;
      }
      else
      {
        v44 = (__int64 (__fastcall ***)(_QWORD, _QWORD *))(*(_QWORD *)(v42 + 64)
                                                         + 8LL
                                                         + *(int *)(*(_QWORD *)(*(_QWORD *)(v42 + 64) + 8LL) + 8LL));
        if ( *(_DWORD *)((**v44)(v44, v162) + 4) != 3 )
        {
LABEL_35:
          v38 = 0;
LABEL_36:
          if ( v3 || *(_BYTE *)(v42 + 147) )
            v3 = 1;
          goto LABEL_38;
        }
      }
    }
    v38 = 1;
    goto LABEL_36;
  }
LABEL_2:
  v7 = *((_DWORD *)a2 + 46);
  v8 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 120);
  v9 = *((unsigned int *)a2 + 40);
  if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-120LL )
  {
    if ( MEMORY[0x28] )
      goto LABEL_138;
    v130[0] = 0LL;
LABEL_24:
    v35 = v130[0];
    v36 = 0;
    *(struct CRenderingEffect **)&v153 = v130[0];
    v37 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderingEffect *))(*(_QWORD *)v130[0] + 16LL))(v130[0]) )
      goto LABEL_137;
    v69 = 1;
    v70 = 0LL;
    memset_0(v179, 0, sizeof(v179));
    if ( *((_DWORD *)a2 + 40) )
    {
      do
      {
        v71 = *((_QWORD *)a2 + v37 + 15);
        if ( v71 )
        {
          if ( v69 && *((_DWORD *)a2 + 65) != 1 && *(_BYTE *)(v71 + 52) && *(_DWORD *)(v71 + 48) != 50529027 )
            v69 = 0;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v71 + 8LL))(
                 *((_QWORD *)a2 + v37 + 15),
                 2LL) )
          {
            v72 = (const struct Matrix3x3 *)&v179[13 * v37];
            *(_DWORD *)v72 = *(_DWORD *)(v71 + 8);
            *((_DWORD *)v72 + 1) = *(_DWORD *)(v71 + 12);
            *((_DWORD *)v72 + 2) = 0;
            *((_DWORD *)v72 + 3) = *(_DWORD *)(v71 + 16);
            *((_DWORD *)v72 + 4) = *(_DWORD *)(v71 + 20);
            *((_DWORD *)v72 + 5) = 0;
            *((_DWORD *)v72 + 6) = *(_DWORD *)(v71 + 24);
            *((_DWORD *)v72 + 7) = *(_DWORD *)(v71 + 28);
            *((_DWORD *)v72 + 8) = 1065353216;
            if ( Matrix3x3::TryInvert(v72, v72) )
            {
              v75 = *(float *)(v71 + 100);
              v76 = *(float *)(v74 + 12);
              v77 = *(float *)(v74 + 20);
              v78 = *(float *)(v71 + 88);
              v79 = *(float *)(v74 + 4);
              v80 = v78;
              v81 = *(float *)(v71 + 112);
              v82 = *(float *)(v71 + 104);
              v83 = v81 * *(float *)(v74 + 8);
              v84 = *(float *)(v71 + 116);
              v85 = *(float *)v74;
              v86 = *(float *)(v71 + 84);
              v135 = *(float *)(v71 + 96);
              v87 = v86 * v76;
              *(float *)&v131 = v78;
              v88 = v78 * v76;
              v134 = *(float *)(v71 + 92);
              v89 = (float)((float)(v80 * v85) + (float)(v75 * v79)) + v83;
              v90 = v134 * v76;
              v91 = *(float *)(v74 + 24);
              v92 = (float)((float)(v134 * v85) + (float)(v82 * v79)) + (float)(v84 * *(float *)(v74 + 8));
              v93 = *(float *)(v71 + 108) * v77;
              *(float *)v130 = v89;
              v94 = *(float *)(v74 + 16);
              v95 = (float)(v87 + (float)(v135 * v94)) + v93;
              v96 = v88 + (float)(v75 * v94);
              v97 = v82 * v94;
              v98 = *(float *)(v74 + 28);
              v99 = v96 + (float)(v81 * v77);
              v100 = v84 * v77;
              v101 = *(float *)(v74 + 32);
              v102 = (float)(v90 + v97) + v100;
              v103 = (float)((float)(v86 * v91) + (float)(v135 * v98)) + (float)(*(float *)(v71 + 108) * v101);
              v104 = (float)(*(float *)&v131 * v91) + (float)(v75 * v98);
              v105 = (float)((float)(v134 * v91) + (float)(v82 * v98)) + (float)(v84 * v101);
              *(float *)v74 = (float)((float)(v135 * v79) + (float)(*(float *)(v71 + 84) * v85))
                            + (float)(*(float *)(v71 + 108) * *(float *)(v74 + 8));
              *(_DWORD *)(v74 + 4) = v130[0];
              *(float *)(v74 + 8) = v92;
              *(float *)(v74 + 12) = v95;
              *(float *)(v74 + 16) = v99;
              *(float *)(v74 + 20) = v102;
              *(float *)(v74 + 24) = v103;
              *(float *)(v74 + 28) = v104 + (float)(v81 * v101);
              v4 = *(float *)&FLOAT_1_0;
            }
            else
            {
              *(_QWORD *)v74 = 2139095040LL;
              v105 = v4;
              *(_QWORD *)(v74 + 8) = 0LL;
              *(_QWORD *)(v74 + 16) = 2139095040LL;
              *(_QWORD *)(v74 + 24) = 0LL;
            }
            *(float *)(v74 + 32) = v105;
            v106 = *((_DWORD *)a2 + 46);
            if ( _bittest(&v106, v37) )
            {
              v122 = Matrix3x3::operator*((float *)a2 + 56, v137.m128_f32, (float *)v74);
              *(_OWORD *)v74 = *(_OWORD *)v122;
              *(_OWORD *)(v74 + 16) = *((_OWORD *)v122 + 1);
              *(float *)(v74 + 32) = v122[8];
            }
            else if ( !v70
                   && *(_BYTE *)(v71 + 148)
                   && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v71 + 8), v73) )
            {
              v70 = v162;
              v123 = (__m128)*(unsigned int *)(v71 + 136);
              v124 = (__m128)*(unsigned int *)(v71 + 140);
              v124.m128_f32[0] = (float)((float)(v124.m128_f32[0] * *(float *)(v71 + 16))
                                       + (float)(*(float *)(v71 + 136) * *(float *)(v71 + 8)))
                               + *(float *)(v71 + 24);
              v123.m128_f32[0] = (float)((float)(v123.m128_f32[0] * *(float *)(v71 + 12))
                                       + (float)(*(float *)(v71 + 140) * *(float *)(v71 + 20)))
                               + *(float *)(v71 + 28);
              v162[0] = _mm_unpacklo_ps(v124, v123).m128_u64[0];
            }
            if ( !*(_BYTE *)(v71 + 52) || *(_BYTE *)(v71 + 144) )
              v107 = _xmm;
            else
              v107 = *(_OWORD *)(v71 + 120);
            *(_OWORD *)(v74 + 36) = v107;
          }
        }
        ++v37;
      }
      while ( v37 < *((_DWORD *)a2 + 40) );
      v35 = (struct CRenderingEffect *)v153;
      v8 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 120);
    }
    v163 = v166;
    v164 = v166;
    v165 = &v167;
    v167 = v170;
    v168 = v170;
    p_lpMem = &lpMem;
    lpMem = v174;
    v172 = v174;
    v133 = 0LL;
    v173 = &v175;
    v132 = 0LL;
    BYTE8(v133) = 6;
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderingEffect *, struct CRenderingEffect **))(*(_QWORD *)v35 + 64LL))(
           v35,
           v130)
      && LODWORD(v130[0]) == 1 )
    {
      v153 = 0LL;
      v36 = (*(__int64 (__fastcall **)(struct CRenderingEffect *, __int128 *, _QWORD))(*(_QWORD *)v35 + 48LL))(
              v35,
              &v153,
              0LL);
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v108, 0LL, 0LL, v36, 0x26Fu);
LABEL_136:
        CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v163);
LABEL_137:
        std::default_delete<CShape>::operator()(v68, (__int64 (__fastcall ***)(_QWORD, __int64))v35);
        return (unsigned int)v36;
      }
      v132 = v153;
      if ( v69 )
      {
        if ( *((_DWORD *)a2 + 65) == 1 )
          LODWORD(v133) = 0;
        else
          LODWORD(v133) = 50529027;
      }
      else
      {
        if ( !v8 && *((_DWORD *)a2 + 40) )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v130[0] = (struct CRenderingEffect *)*((unsigned int *)a2 + 40);
        v130[1] = v8;
        CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
          (__int64 *)v130,
          (const struct D2D_MATRIX_3X2_F *)&v132,
          &v133);
      }
LABEL_80:
      v109 = *((_BYTE *)a2 + 275) == 0;
      v149 = 0LL;
      v151 = *((unsigned int *)a2 + 41);
      v152 = v179;
      if ( v109 )
      {
        HIDWORD(v153) = *((_DWORD *)v136 + 8);
        *(float *)&v110 = *((float *)&v153 + 3) * *((float *)v136 + 6);
        *(float *)&v111 = *((float *)&v153 + 3) * *((float *)v136 + 7);
        *(float *)&v153 = *((float *)&v153 + 3) * *((float *)v136 + 5);
        *(_QWORD *)((char *)&v153 + 4) = __PAIR64__(v111, v110);
      }
      else
      {
        v153 = *(_OWORD *)((char *)v136 + 20);
      }
      v112 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 21);
      v150 = v70;
      v148 = v153;
      v36 = CDrawListEntryBuilder::Insert(
              v112,
              (const struct PrimitiveGeometryDesc *)&v132,
              (const struct PrimitiveVertexAttributesDesc *)&v148,
              0LL);
      if ( v36 >= 0 )
      {
        v114 = lpMem;
        v115 = (v172 - (_BYTE *)lpMem) >> 3;
        if ( v115 )
        {
          detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)&lpMem,
            0LL,
            v115);
          v114 = lpMem;
        }
        lpMem = 0LL;
        if ( v114 != v174 && v114 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v114);
        }
        v116 = v167;
        v117 = (v168 - (_BYTE *)v167) >> 3;
        if ( v117 )
        {
          detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)&v167,
            0LL,
            v117);
          v116 = v167;
        }
        v167 = 0LL;
        if ( v116 != v170 && v116 )
        {
          v128 = GetProcessHeap();
          HeapFree(v128, 0, v116);
        }
        v118 = v163;
        if ( (v164 - (_BYTE *)v163) >> 2 )
        {
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
            &v163,
            0LL);
          v118 = v163;
        }
        v163 = 0LL;
        if ( v118 != v166 && v118 )
        {
          v129 = GetProcessHeap();
          HeapFree(v129, 0, v118);
        }
        (**(void (__fastcall ***)(struct CRenderingEffect *, __int64))v35)(v35, 1LL);
        return (unsigned int)v36;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v113, 0LL, 0LL, v36, 0x2A1u);
      goto LABEL_136;
    }
    BYTE8(v133) |= 1u;
    *(_QWORD *)&v132 = v35;
    if ( v69 && !*((_QWORD *)a2 + 1) && !*((_QWORD *)a2 + 11) )
      goto LABEL_80;
    v125 = *((_DWORD *)a2 + 46);
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v153, *((unsigned int *)a2 + 40));
    if ( (_QWORD)v153 != -1LL && (v8 || !(_QWORD)v153) )
    {
      v126 = *((_DWORD *)a2 + 65);
      *((_QWORD *)&v153 + 1) = v8;
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        v126,
        (unsigned int)&v153,
        v125,
        (_DWORD)a2 + 188,
        (__int64)&v163);
      *((_QWORD *)&v132 + 1) = &v163;
      goto LABEL_80;
    }
LABEL_138:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v130[0] = 0LL;
  v10 = 0LL;
  if ( !v9 )
    goto LABEL_24;
  while ( 1 )
  {
    v11 = *((_QWORD *)v8 + v10);
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 52) )
        break;
    }
LABEL_22:
    if ( ++v10 >= v9 )
    {
      v4 = *(float *)&FLOAT_1_0;
      goto LABEL_24;
    }
  }
  v154 = &CRectanglesShape::`vftable';
  v155 = 0LL;
  v156 = v160;
  v157 = v160;
  v158 = 1;
  v159 = 1LL;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v160);
  v161 = 0LL;
  v12 = *(_DWORD *)(v11 + 32);
  v13 = *(_DWORD *)(v11 + 36);
  v14 = *(_DWORD *)(v11 + 40);
  v15 = *(_DWORD *)(v11 + 44);
  HIDWORD(v159) = 0;
  if ( v156 != v157 )
  {
    DefaultHeap::Free(v156);
    v156 = v157;
    LODWORD(v159) = v158;
    if ( v161 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v161 + 16LL))(v161);
      v161 = 0LL;
    }
  }
  *(_QWORD *)&v153 = __PAIR64__(v13, v12);
  *((_QWORD *)&v153 + 1) = __PAIR64__(v15, v14);
  DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    (__int64)&v156,
    &v153,
    1u);
  v147 = 0;
  if ( ((1 << v10) & v7) != 0 )
  {
    v55 = *(_DWORD *)(v11 + 12);
    LODWORD(v140[0]) = *(_DWORD *)(v11 + 8);
    v56 = *(_DWORD *)(v11 + 16);
    HIDWORD(v140[0]) = v55;
    v57 = *(_DWORD *)(v11 + 20);
    HIDWORD(v140[1]) = v56;
    v58 = *(_DWORD *)(v11 + 24);
    v141.m128_u64[0] = v57;
    v141.m128_u64[1] = __PAIR64__(*(_DWORD *)(v11 + 28), v58);
    LODWORD(v140[1]) = 0;
    v142 = 1065353216;
    Matrix3x3::operator*((float *)v140, v137.m128_f32, (float *)a2 + 47);
    LODWORD(v140[1]) = 0;
    v59 = *(__m128 *)v140;
    v141.m128_i32[2] = 0;
    v143.m128_i32[2] = 0;
    v59.m128_f32[0] = v137.m128_f32[0];
    *(_OWORD *)&v145.m256i_u64[2] = _xmm;
    v60 = v141;
    v147 = 0;
    v61 = _mm_shuffle_ps(v59, v59, 225);
    v61.m128_f32[0] = v137.m128_f32[1];
    v60.m128_f32[0] = v137.m128_f32[3];
    v62 = _mm_shuffle_ps(v61, v61, 135);
    v62.m128_f32[0] = v137.m128_f32[2];
    v63 = _mm_shuffle_ps(v60, v60, 225);
    v63.m128_f32[0] = *(float *)v138.m256i_i32;
    *(__m128 *)v140 = _mm_shuffle_ps(v62, v62, 57);
    v144 = *(__m128 *)v140;
    v64 = v143;
    v65 = _mm_shuffle_ps(v63, v63, 135);
    v64.m128_f32[0] = *(float *)&v138.m256i_i32[2];
    v65.m128_f32[0] = *(float *)&v138.m256i_i32[1];
    v66 = _mm_shuffle_ps(v64, v64, 225);
    v66.m128_f32[0] = *(float *)&v138.m256i_i32[3];
    v67 = _mm_shuffle_ps(v66, v66, 135);
    v67.m128_f32[0] = *(float *)&v138.m256i_i32[4];
    *(__m128 *)v145.m256i_i8 = _mm_shuffle_ps(v65, v65, 57);
    v143 = _mm_shuffle_ps(v67, v67, 57);
    v146 = v143;
    v141 = *(__m128 *)v145.m256i_i8;
  }
  else
  {
    v17 = *(float *)(v11 + 8);
    v18 = *(float *)(v11 + 16);
    v19 = *(float *)(v11 + 20);
    v20 = *(float *)(v11 + 12);
    v21 = *(float *)(v11 + 24);
    v22 = *(float *)(v11 + 28);
    *(_OWORD *)&v138.m256i_u64[1] = 0LL;
    *(_QWORD *)&v139[12] = 0x14043F800000LL;
    v23 = (__m128)v137.m128_u64[0];
    *(_DWORD *)&v139[8] = 0;
    v138.m256i_i64[3] = 1065353216LL;
    v23.m128_f32[0] = v17;
    v24 = *(__m128 *)v138.m256i_i8;
    v24.m128_f32[0] = v18;
    v25 = _mm_shuffle_ps(v23, v23, 225);
    v26 = _mm_shuffle_ps(v24, v24, 225);
    v25.m128_f32[0] = v20;
    v26.m128_f32[0] = v19;
    *(__m128 *)v138.m256i_i8 = _mm_shuffle_ps(v26, v26, 225);
    v147 = 5124;
    v145 = v138;
    v27 = *(__m128 *)v139;
    v137 = _mm_shuffle_ps(v25, v25, 225);
    v27.m128_f32[0] = v21;
    v144 = v137;
    v28 = _mm_shuffle_ps(v27, v27, 225);
    v28.m128_f32[0] = v22;
    *(__m128 *)v139 = _mm_shuffle_ps(v28, v28, 225);
    v146 = *(__m128 *)v139;
  }
  if ( !v130[0] )
  {
    v140[1] = 0LL;
    v140[0] = (struct CShape *)v130;
    v141.m128_i8[0] = 1;
    v30 = CShape::CopyShape((CShape *)&v154, (const struct CMILMatrix *)&v144, &v140[1]);
    if ( v141.m128_i8[0] )
    {
      v29 = v140[1];
      v31 = *(__int64 (__fastcall ****)(_QWORD, __int64))v140[0];
      *(_QWORD *)v140[0] = v140[1];
      if ( v31 )
        std::default_delete<CShape>::operator()((__int64)v29, v31);
    }
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v29, 0LL, 0LL, v30, 0x5Fu);
      goto LABEL_114;
    }
    goto LABEL_14;
  }
  v131 = 0LL;
  *(_QWORD *)v176 = &v131;
  v177 = 0LL;
  v178 = 1;
  v30 = CShape::Combine(v130[0], v16, &v154, &v144, 1, &v177);
  if ( v178 )
  {
    v52 = *(_QWORD **)v176;
    v53 = **(__int64 (__fastcall *****)(_QWORD, __int64))v176;
    **(_QWORD **)v176 = v177;
    if ( v53 )
      std::default_delete<CShape>::operator()((__int64)v52, v53);
  }
  if ( v30 >= 0 )
  {
    std::unique_ptr<CShape>::operator=<std::default_delete<CShape>,0>((__int64 *)v130, (__int64 *)&v131);
    if ( v131 )
      std::default_delete<CShape>::operator()(v54, v131);
LABEL_14:
    v32 = v156;
    v33 = v157;
    v154 = &CRectanglesShape::`vftable';
    HIDWORD(v159) = 0;
    if ( v156 != v157 )
    {
      DefaultHeap::Free(v156);
      v33 = v157;
      v32 = v157;
      LODWORD(v159) = v158;
      v156 = v157;
    }
    if ( v161 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v161 + 16LL))(v161);
      v33 = v157;
      v32 = v156;
      v161 = 0LL;
    }
    if ( v32 != v33 )
    {
      DefaultHeap::Free(v32);
      v156 = 0LL;
    }
    v34 = v155;
    if ( v155 )
    {
      v155 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v52, 0LL, 0LL, v30, 0x6Au);
  if ( v131 )
    std::default_delete<CShape>::operator()(v120, v131);
LABEL_114:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v154);
  v36 = v30;
  if ( v130[0] )
    std::default_delete<CShape>::operator()(v121, (__int64 (__fastcall ***)(_QWORD, __int64))v130[0]);
  *(_QWORD *)&v153 = 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(v121, 0LL, 0LL, v30, 0x21Eu);
  return (unsigned int)v36;
}

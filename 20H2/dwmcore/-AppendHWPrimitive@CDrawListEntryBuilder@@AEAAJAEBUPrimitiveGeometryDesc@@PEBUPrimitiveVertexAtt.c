/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800A08F0
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800A0738 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000928C (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x1800145C0 (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800146DC (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019B34 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180019C94 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001BCC8 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800650B4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180066090 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18006C9A4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x18006C9CC (-resize@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ??2@YAPEAX_K@Z @ 0x18006D9A8 (--2@YAPEAX_K@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072EDC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180075B5C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18007705C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x180092E00 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800A1794 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800A18C0 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800A2D50 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BDEAC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C0458 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1800C952C (--$uninitialized_copy@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DDA90 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180155B3C (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801638F0 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x18019BD8C (--$uninitialized_copy@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_R.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18019BFAC (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x18019C25C (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019CA84 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019CB24 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019CCB4 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x18019CE9C (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1801A033C (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801A2210 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801A2658 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 *     ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801A2C50 (-Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18021C884 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D_MATRIX_3X2_F *a4)
{
  unsigned int v4; // r12d
  char v6; // r15
  const struct D2D_MATRIX_3X2_F *v7; // rdi
  const struct CShape *v10; // r14
  bool v11; // zf
  __int64 v12; // rdx
  _QWORD *v13; // rax
  char *v14; // r15
  float v15; // xmm1_4
  FLOAT v16; // xmm0_4
  int v17; // esi
  __int128 v18; // xmm0
  Mesh *v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  char v23; // r15
  bool v24; // r12
  bool v25; // r15
  int GeometryCount; // eax
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 *v29; // r9
  __int64 v30; // r11
  unsigned int v31; // eax
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rsi
  _OWORD *v43; // rsi
  __int64 v44; // r11
  __int64 v45; // r10
  char *v46; // rsi
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // rsi
  bool v51; // sf
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdi
  _OWORD *v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rax
  int Geometry; // eax
  __int64 v59; // rcx
  int v60; // ecx
  FLOAT m11; // r12d
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rsi
  __int64 v65; // r9
  unsigned __int64 v66; // rsi
  __int64 v67; // r8
  __int64 v68; // r10
  _BYTE *v69; // rsi
  _BYTE *v70; // rsi
  _BYTE *v71; // rsi
  _BYTE *v72; // rcx
  _BYTE *v73; // rdx
  __int64 v74; // rcx
  unsigned __int64 v76; // rsi
  LPVOID v77; // rax
  __int64 v78; // r8
  __int64 v79; // rdx
  LPVOID v80; // rdi
  CDrawListEntryBuilder *v81; // rcx
  __int64 v82; // rsi
  unsigned __int64 v83; // rsi
  LPVOID v84; // rax
  __int64 v85; // r8
  __int64 v86; // rdx
  LPVOID v87; // rdi
  CDrawListEntryBuilder *v88; // rcx
  __int64 v89; // xmm1_8
  float v90; // xmm8_4
  __m128 m11_low; // xmm9
  float v92; // xmm10_4
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __m128 v96; // xmm7
  float v97; // xmm11_4
  float v98; // xmm9_4
  float v99; // xmm10_4
  int v100; // eax
  __int64 v101; // rcx
  __m128 v102; // xmm7
  __m128 v103; // xmm7
  __m128 v104; // xmm7
  int v105; // r9d
  float v106; // xmm2_4
  float v107; // xmm7_4
  int v108; // eax
  __int64 v109; // rcx
  __int128 v110; // xmm0
  __int64 v111; // xmm1_8
  CMILMatrix *v112; // rax
  int v113; // eax
  __int64 v114; // rcx
  LPVOID *v115; // rcx
  __int64 v116; // rdx
  int v117; // eax
  __int64 v118; // rcx
  float *v119; // r9
  int v120; // r9d
  enum D2D1_EDGE_FLAGS *v121; // rcx
  LPVOID *v122; // rax
  CDrawListPolygonBuilder *v123; // rcx
  _DWORD *v124; // rdi
  char v125; // di
  __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  int PolygonMesh; // eax
  __int64 v131; // rcx
  enum D2D1_EDGE_FLAGS *v132; // rcx
  bool v133; // sf
  __int128 v134; // xmm0
  bool v135; // sf
  bool v136; // sf
  bool v137; // sf
  int v138; // esi
  HANDLE ProcessHeap; // rax
  HANDLE v140; // rax
  HANDLE v141; // rax
  int *v142; // [rsp+20h] [rbp-E0h]
  unsigned int v143; // [rsp+20h] [rbp-E0h]
  void *v144; // [rsp+28h] [rbp-D8h]
  __int64 v145; // [rsp+30h] [rbp-D0h]
  char right_low; // [rsp+50h] [rbp-B0h]
  char v147[3]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v148; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int16 v149[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  struct D2D_MATRIX_3X2_F v150; // [rsp+60h] [rbp-A0h] BYREF
  int v151; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_MATRIX_3X2_F v152; // [rsp+84h] [rbp-7Ch] BYREF
  _OWORD *v153; // [rsp+A0h] [rbp-60h]
  LPVOID *v154; // [rsp+B0h] [rbp-50h]
  D2D1_MATRIX_3X2_F v155; // [rsp+B8h] [rbp-48h] BYREF
  int v156; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v157; // [rsp+D4h] [rbp-2Ch]
  __int128 v158; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v159; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v160; // [rsp+100h] [rbp+0h]
  __int128 v161; // [rsp+110h] [rbp+10h]
  __int128 v162; // [rsp+120h] [rbp+20h]
  int v163; // [rsp+130h] [rbp+30h]
  __int128 v164; // [rsp+140h] [rbp+40h] BYREF
  float v165; // [rsp+150h] [rbp+50h]
  float v166; // [rsp+154h] [rbp+54h]
  struct D2D_RECT_F v167; // [rsp+160h] [rbp+60h] BYREF
  _OWORD *v168; // [rsp+170h] [rbp+70h]
  CShape *v169[2]; // [rsp+180h] [rbp+80h] BYREF
  struct D2D_MATRIX_3X2_F v170; // [rsp+190h] [rbp+90h] BYREF
  struct D2D_RECT_F v171; // [rsp+1B0h] [rbp+B0h] BYREF
  struct D2D_RECT_F v172; // [rsp+1C0h] [rbp+C0h] BYREF
  void **v173; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v174; // [rsp+1D8h] [rbp+D8h]
  void *v175; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE *v176; // [rsp+1E8h] [rbp+E8h]
  int v177; // [rsp+1F0h] [rbp+F0h]
  __int64 v178; // [rsp+1F4h] [rbp+F4h]
  _BYTE v179[16]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v180; // [rsp+210h] [rbp+110h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+220h] [rbp+120h] BYREF
  __int128 v182; // [rsp+238h] [rbp+138h] BYREF
  int v183; // [rsp+248h] [rbp+148h]
  enum D2D1_EDGE_FLAGS *v184; // [rsp+250h] [rbp+150h] BYREF
  _BYTE *v185; // [rsp+258h] [rbp+158h]
  char *v186; // [rsp+260h] [rbp+160h]
  _BYTE v187[64]; // [rsp+268h] [rbp+168h] BYREF
  char v188; // [rsp+2A8h] [rbp+1A8h] BYREF
  LPVOID v189; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE *v190; // [rsp+2B8h] [rbp+1B8h]
  LPVOID *v191; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v192[64]; // [rsp+2C8h] [rbp+1C8h] BYREF
  LPVOID v193; // [rsp+308h] [rbp+208h] BYREF
  _BYTE *v194; // [rsp+310h] [rbp+210h]
  LPVOID *p_lpMem; // [rsp+318h] [rbp+218h]
  _BYTE v196[128]; // [rsp+320h] [rbp+220h] BYREF
  LPVOID lpMem; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE *v198; // [rsp+3A8h] [rbp+2A8h]
  char *v199; // [rsp+3B0h] [rbp+2B0h]
  _BYTE v200[128]; // [rsp+3B8h] [rbp+2B8h] BYREF
  char v201; // [rsp+438h] [rbp+338h] BYREF

  v4 = 0;
  v157 = *((_DWORD *)this + 544);
  *(_QWORD *)&v171.left = a4;
  v183 = 0;
  *(_QWORD *)&v167.left = 0LL;
  v173 = &CRectanglesShape::`vftable';
  v174 = 0LL;
  v175 = v179;
  v6 = 0;
  right_low = 0;
  v176 = v179;
  v7 = a4;
  LOBYTE(v167.right) = 0;
  v177 = 1;
  v182 = 0LL;
  v10 = 0LL;
  v178 = 1LL;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v179);
  v11 = *((_DWORD *)this + 3) == 1;
  v189 = v192;
  v12 = 0LL;
  v180 = 0LL;
  v190 = v192;
  v191 = &v193;
  v193 = v196;
  v194 = v196;
  p_lpMem = &lpMem;
  lpMem = v200;
  v198 = v200;
  v199 = &v201;
  v154 = &v189;
  v147[0] = 0;
  if ( v11 )
  {
    LODWORD(v148) = 0;
  }
  else
  {
    v11 = (*((_BYTE *)a2 + 24) & 4) == 0;
    v4 = *((_DWORD *)a2 + 4);
    LODWORD(v148) = v4;
    if ( !v11 && v4 )
      *((_BYTE *)this + 2297) = 1;
  }
  if ( v7 )
  {
    v89 = *(_QWORD *)&v7->m[2][0];
    *(_OWORD *)&matrix.m11 = *(_OWORD *)&v7->m11;
    *(_QWORD *)&matrix.m[2][0] = v89;
    if ( !D2D1IsMatrixInvertible(&matrix) )
      goto LABEL_64;
    v12 = v180;
  }
  else
  {
    *(_OWORD *)&matrix.m11 = _xmm;
    *(_QWORD *)&matrix.m[2][0] = 0LL;
  }
  if ( !*((_BYTE *)this + 2296) || (v13 = (_QWORD *)*((_QWORD *)this + 2), !*v13) && !v13[2] )
  {
    v14 = (char *)a2 + 24;
LABEL_9:
    if ( (*v14 & 1) != 0 )
    {
      v10 = *(const struct CShape **)a2;
      CShapePtr::Release((CShapePtr *)&v167);
      right_low = 0;
      v122 = (LPVOID *)*((_QWORD *)a2 + 1);
      v155 = matrix;
      if ( v122 )
        v154 = v122;
    }
    else
    {
      HIDWORD(v178) = 0;
      if ( v175 != v176 )
      {
        operator delete(v175);
        v12 = v180;
        v175 = v176;
        LODWORD(v178) = v177;
      }
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v180 = 0LL;
      }
      v171 = (struct D2D_RECT_F)_xmm;
      DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        (__int64)&v175,
        &v171,
        1LL);
      v15 = *((float *)a2 + 1);
      v16 = *((float *)a2 + 2) - *(float *)a2;
      v155.dx = *(FLOAT *)a2;
      v155.dy = v15;
      v10 = (const struct CShape *)&v173;
      *(_QWORD *)&v155.m[0][1] = 0LL;
      v155.m11 = v16;
      v155.m22 = *((float *)a2 + 3) - v15;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v170,
        (const struct D2D1::Matrix3x2F *)&v155,
        (const struct D2D1::Matrix3x2F *)&matrix);
      v155 = v170;
    }
    v17 = 2;
    v151 = 2;
    goto LABEL_16;
  }
  v11 = (*((_BYTE *)a2 + 24) & 1) == 0;
  v14 = (char *)a2 + 24;
  v164 = 0LL;
  if ( v11 )
  {
    v164 = *(_OWORD *)a2;
  }
  else
  {
    v108 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, &v164, 0LL);
    LODWORD(v22) = v108;
    if ( v108 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, v108, 0x308u, 0LL);
      goto LABEL_125;
    }
    v7 = *(const struct D2D_MATRIX_3X2_F **)&v171.left;
  }
  if ( CCpuClip::FullyContains(*((_QWORD *)this + 2), (__int64)&v164, v7) )
  {
    v12 = v180;
    goto LABEL_9;
  }
  v90 = *(float *)&FLOAT_1_0;
  v163 = 0;
  if ( v7 )
  {
    if ( (*v14 & 1) != 0 )
    {
      v110 = *(_OWORD *)&matrix.m11;
      v111 = *(_QWORD *)&matrix.m[2][0];
      m11_low = (__m128)(unsigned int)FLOAT_1_0;
      v155 = matrix;
      v92 = *(float *)&FLOAT_1_0;
    }
    else
    {
      D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        (D2DMatrixHelper *)&matrix,
        &v152,
        (float *)&v151,
        &v155.m11);
      v111 = *(_QWORD *)&v155.m[2][0];
      v110 = *(_OWORD *)&v155.m11;
      m11_low = (__m128)LODWORD(v152.m11);
      v92 = *(float *)&v151;
    }
    *(_QWORD *)&v170.m[2][0] = v111;
    *(_OWORD *)&v170.m11 = v110;
    D2D1::Matrix3x2F::Invert(&v170);
    v112 = CMILMatrix::CMILMatrix((CMILMatrix *)&v184, &v170);
    v159 = *(_OWORD *)v112;
    v160 = *((_OWORD *)v112 + 1);
    v161 = *((_OWORD *)v112 + 2);
    v162 = *((_OWORD *)v112 + 3);
    v163 = *((_DWORD *)v112 + 16);
  }
  else
  {
    m11_low = (__m128)(unsigned int)FLOAT_1_0;
    v92 = *(float *)&FLOAT_1_0;
    *(_OWORD *)&v155.m11 = _xmm;
    *(_QWORD *)&v155.m[2][0] = 0LL;
    v159 = _xmm;
    v160 = _xmm;
    v161 = _xmm;
    v162 = _xmm;
    LOWORD(v163) = 32085;
  }
  v93 = CCpuClip::ResolveClip(*((CCpuClip **)this + 2), v169);
  LODWORD(v22) = v93;
  if ( v93 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v93, 0x348u, 0LL);
    goto LABEL_125;
  }
  if ( (*v14 & 1) != 0 )
  {
    v113 = CShape::Combine(*(_QWORD *)a2, v94, (__int64)v169[0], (__int64)&v159, 1, &v171);
    LODWORD(v22) = v113;
    if ( v113 >= 0 )
    {
      v10 = *(const struct CShape **)&v171.left;
      CShapePtr::Release((CShapePtr *)&v167);
      *(_QWORD *)&v167.left = v10;
      right_low = 1;
      v115 = &v189;
      LOBYTE(v167.right) = 1;
      if ( *((_QWORD *)a2 + 1) )
        v115 = (LPVOID *)*((_QWORD *)a2 + 1);
      v154 = v115;
      goto LABEL_140;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v113, 0x353u, 0LL);
LABEL_125:
    v6 = 0;
    goto LABEL_65;
  }
  v22 = (unsigned __int64)v169[0];
  v96 = m11_low;
  v96.m128_f32[0] = m11_low.m128_f32[0] * *(float *)a2;
  v97 = v92 * *((float *)a2 + 1);
  v98 = m11_low.m128_f32[0] * *((float *)a2 + 2);
  v99 = v92 * *((float *)a2 + 3);
  *(_QWORD *)&v164 = __PAIR64__(LODWORD(v97), v96.m128_u32[0]);
  *((_QWORD *)&v164 + 1) = __PAIR64__(LODWORD(v99), LODWORD(v98));
  if ( !CShape::IsAxisAlignedRectangle(v169[0]) || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v159) )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v173, (const struct MilRectF *)&v164);
    v117 = CShape::Combine((__int64)&v173, v116, v22, (__int64)&v159, 1, &v171);
    LODWORD(v22) = v117;
    if ( v117 >= 0 )
    {
      v10 = *(const struct CShape **)&v171.left;
      CShapePtr::Release((CShapePtr *)&v167);
      *(_QWORD *)&v167.left = v10;
      right_low = 1;
      LOBYTE(v167.right) = 1;
      *(_OWORD *)v169 = v164;
      CEdgeFlagsMap::AddEdgeFlags(&v189, &v164, v4, &Matrix3x3::Identity);
      v154 = &v189;
LABEL_140:
      v17 = 1;
      v22 = (unsigned __int64)v10;
      v151 = 1;
      v147[0] = 1;
      goto LABEL_111;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v117, 0x38Eu, 0LL);
    goto LABEL_125;
  }
  v171 = 0LL;
  v100 = (*(__int64 (__fastcall **)(unsigned __int64, struct D2D_RECT_F *, __int128 *))(*(_QWORD *)v22 + 32LL))(
           v22,
           &v171,
           &v159);
  LODWORD(v22) = v100;
  if ( v100 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v101, 0LL, 0, v100, 0x36Cu, 0LL);
    goto LABEL_125;
  }
  v102 = _mm_shuffle_ps(v96, v96, 225);
  v102.m128_f32[0] = v97;
  v103 = _mm_shuffle_ps(v102, v102, 198);
  v103.m128_f32[0] = v98;
  v104 = _mm_shuffle_ps(v103, v103, 39);
  v104.m128_f32[0] = v99;
  *(__m128 *)v169 = _mm_shuffle_ps(v104, v104, 57);
  v158 = *(_OWORD *)v169;
  v172 = v171;
  if ( *((_BYTE *)this + 28) )
    v105 = 50529027;
  else
    v105 = 0;
  if ( ClipRectAndEdgeFlags((__int64)&v158, v4, (__int64)&v172, v105, v169, (int *)&v148) )
  {
    v147[0] = 1;
    v164 = *(_OWORD *)v169;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v173, (const struct MilRectF *)&v164);
  CShapePtr::Release((CShapePtr *)&v167);
  v4 = v148;
  v10 = (const struct CShape *)&v173;
  *(float *)&v151 = 0.0;
  v17 = 0;
  right_low = 0;
  LOBYTE(v167.right) = 0;
  v22 = (unsigned __int64)&v173;
  *(_QWORD *)&v167.left = &v173;
LABEL_111:
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v167) )
  {
    v106 = *((float *)this + 1);
    v107 = *(float *)&FLOAT_1_0;
    LODWORD(v148) = (_DWORD)FLOAT_1_0;
    HIDWORD(v148) = (_DWORD)FLOAT_1_0;
    if ( v106 < 1.0 || *((float *)this + 2) < 1.0 )
    {
      HIDWORD(v164) = *((_DWORD *)this + 2);
      *(float *)&v164 = v106;
      *(_QWORD *)((char *)&v164 + 4) = 0LL;
      v165 = 0.0 - (float)(v106 * 0.0);
      v166 = 0.0 - (float)(*((float *)&v164 + 3) * 0.0);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v170,
        (const struct D2D1::Matrix3x2F *)&v155,
        (const struct D2D1::Matrix3x2F *)&v164);
      v150 = v170;
      D2DMatrixHelper::GetScaleDimensions(
        (D2DMatrixHelper *)&v150,
        (const struct D2D_MATRIX_3X2_F *)&v148,
        (float *)&v148 + 1,
        v119);
      v90 = *(float *)&v148;
      v107 = *((float *)&v148 + 1);
    }
    v164 = 0LL;
    v20 = (*(__int64 (__fastcall **)(unsigned __int64, __int128 *, _QWORD))(*(_QWORD *)v22 + 32LL))(v22, &v164, 0LL);
    LODWORD(v22) = v20;
    if ( v20 < 0 )
    {
      v143 = 947;
      goto LABEL_145;
    }
    if ( (float)((float)(*((float *)&v164 + 2) - *(float *)&v164) * v90) <= 0.015625
      || (float)((float)(*((float *)&v164 + 3) - *((float *)&v164 + 1)) * v107) <= 0.015625 )
    {
      CShapePtr::Release((CShapePtr *)&v167);
      v10 = *(const struct CShape **)&v167.left;
      right_low = LOBYTE(v167.right);
    }
  }
LABEL_16:
  if ( !v10 || (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)v10 + 16LL))(v10) )
    goto LABEL_61;
  if ( a3 )
  {
    v18 = *(_OWORD *)a3;
    LOBYTE(v183) = *((_BYTE *)a3 + 16);
  }
  else
  {
    v18 = _xmm;
  }
  v182 = v18;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, int *))(*(_QWORD *)v10 + 40LL))(v10, &v156)
    && v156 == 1 )
  {
    v171 = 0LL;
    (*(void (__fastcall **)(const struct CShape *, struct D2D_RECT_F *, __int64))(*(_QWORD *)v10 + 48LL))(
      v10,
      &v171,
      1LL);
    v19 = (CDrawListEntryBuilder *)((char *)this + 104);
    v167 = v171;
    v20 = Mesh::CreateRectangleMesh(
            (CDrawListEntryBuilder *)((char *)this + 104),
            (const struct Mesh::ContentInfo *)&v182,
            &v167,
            v4);
    LODWORD(v22) = v20;
    if ( v20 >= 0 )
    {
LABEL_23:
      if ( (_DWORD)v22 )
        goto LABEL_60;
      v23 = *v14;
      v148 = 0LL;
      v24 = (v23 & 4) != 0;
      v25 = (v23 & 2) != 0;
      GeometryCount = Mesh::GetGeometryCount(v19, v25, v24, (int *)&v148 + 1, (int *)&v148);
      LODWORD(v22) = GeometryCount;
      if ( GeometryCount < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, GeometryCount, 0x480u, 0LL);
LABEL_147:
        v120 = v22;
        v143 = 1063;
        goto LABEL_148;
      }
      if ( (int)v148 <= 0 )
      {
LABEL_60:
        CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
          this,
          a3,
          (const struct D2D1::Matrix3x2F *)&matrix,
          (const struct D2D1::Matrix3x2F *)&v155,
          v157);
        v17 = v151;
LABEL_61:
        ++*((_DWORD *)this + 568);
        if ( !v147[0] )
          goto LABEL_62;
        if ( **((_QWORD **)this + 2) )
          ++*((_DWORD *)this + 24);
        if ( !v17 )
        {
          ++dword_180344348;
          goto LABEL_63;
        }
        v138 = v17 - 1;
        if ( !v138 )
        {
          ++dword_18034434C;
          goto LABEL_63;
        }
        if ( v138 == 1 )
LABEL_62:
          ++dword_180344344;
LABEL_63:
        v6 = right_low;
LABEL_64:
        LODWORD(v22) = 0;
        goto LABEL_65;
      }
      v22 = (unsigned __int64)this + 192;
      v28 = *((_QWORD *)this + 24);
      v29 = (__int64 *)((char *)this + 1184);
      v30 = *((_QWORD *)this + 25);
      v31 = 8 * *(_DWORD *)this + 16;
      v32 = (v30 - v28) >> 4;
      v169[0] = (CShape *)((__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4);
      v33 = *((_QWORD *)this + 274) - *((_QWORD *)this + 273);
      LODWORD(v154) = v31;
      LODWORD(v152.m11) = v31 >> 4;
      v34 = HIDWORD(v148) * (v31 >> 4);
      *(_QWORD *)&v152.m[1][1] = v28;
      *(_QWORD *)&v158 = v32;
      *(_QWORD *)&v171.left = v33 >> 1;
      v35 = (unsigned int)v34;
      *(_QWORD *)&v164 = (unsigned int)v34;
      *(_QWORD *)&v167.left = v34 + v32;
      if ( v34 + v32 <= v32 )
      {
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
          v22,
          *(_QWORD *)&v167.left);
        v29 = (__int64 *)((char *)this + 1184);
      }
      else
      {
        if ( (*((_QWORD *)this + 26) - v30) >> 4 < (unsigned __int64)(unsigned int)v34 )
        {
          v76 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)((*((_QWORD *)this + 26) - v28) >> 4),
                  (*((_QWORD *)this + 26) - v28) >> 4,
                  v34 + v32);
          v77 = operator new(saturated_mul(v76, 0x10uLL));
          v78 = *((_QWORD *)this + 25);
          v79 = *((_QWORD *)this + 24);
          *(_QWORD *)&v150.m11 = v77;
          v80 = v77;
          *(_OWORD *)&v150.m[1][0] = (unsigned __int64)v158;
          *(_QWORD *)&v170.m[2][0] = 0LL;
          *(_OWORD *)&v170.m11 = *(_OWORD *)&v150.m11;
          std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
            &v150,
            v79,
            v78,
            &v170);
          v81 = (CDrawListEntryBuilder *)*((_QWORD *)this + 24);
          *((_QWORD *)this + 24) = v80;
          v22 = (unsigned __int64)this + 192;
          if ( v81 == (CDrawListEntryBuilder *)((char *)this + 224) )
            v81 = 0LL;
          operator delete(v81);
          v28 = *(_QWORD *)v22;
          v29 = (__int64 *)((char *)this + 1184);
          v35 = v164;
          v30 = *(_QWORD *)v22 + 16 * v158;
          v82 = *(_QWORD *)v22 + 16 * v76;
          *(_QWORD *)&v152.m[1][1] = *(_QWORD *)v22;
          *((_QWORD *)this + 26) = v82;
          v32 = v158;
          *((_QWORD *)this + 25) = v30;
        }
        *(_OWORD *)&v150.m[1][0] = (unsigned __int64)v35;
        v36 = (v30 - v28) >> 4;
        v37 = v36 - v32;
        v38 = 16 * v36 + *(_QWORD *)&v152.m[1][1];
        *(_QWORD *)&v150.m11 = v38;
        *(_QWORD *)&v172.left = v38;
        if ( v35 )
        {
          *(_QWORD *)&v172.left = 16 * v36 + *(_QWORD *)&v152.m[1][1];
          if ( !v38 )
            goto LABEL_223;
        }
        *(_QWORD *)&v150.m[2][0] = v35;
        v39 = v36 - v32;
        if ( v35 < v37 )
          v39 = v35;
        v167 = *(struct D2D_RECT_F *)&v150.m11;
        v40 = 16 * v39;
        v41 = v30 - v40;
        v168 = (_OWORD *)v35;
        if ( v30 != v30 - v40 )
        {
          *(_QWORD *)&v172.left += 16 * v35;
          v153 = v168;
          do
          {
            v38 = v30 - 16;
            v30 -= 16LL;
            if ( !*(_QWORD *)&v167.left )
              goto LABEL_223;
            if ( !v153 )
              goto LABEL_223;
            v153 = (_OWORD *)((char *)v153 - 1);
            *(_QWORD *)&v172.left -= 16LL;
            v22 = (unsigned __int64)this + 192;
            if ( (unsigned __int64)v153 >= *(_QWORD *)&v167.right )
              goto LABEL_223;
            **(_OWORD **)&v172.left = *(_OWORD *)v38;
          }
          while ( v30 != v41 );
        }
        if ( v37 > v35 )
        {
          v38 = *(_QWORD *)&v152.m[1][1];
          *(_QWORD *)&v150.m11 = *(_QWORD *)&v152.m[1][1];
          *(_QWORD *)&v150.m[1][0] = v36;
          v133 = v36 < 0;
          if ( v36 )
          {
            if ( !*(_QWORD *)&v152.m[1][1] )
              goto LABEL_223;
            v133 = v36 < 0;
          }
          if ( v133 && v36 )
            goto LABEL_223;
          *(_QWORD *)&v150.m[2][0] = v36;
          v42 = 16 * v32;
          *(_OWORD *)&v170.m11 = *(_OWORD *)&v150.m11;
          *(_QWORD *)&v170.m[2][0] = v36;
          std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
            &v150,
            *(_QWORD *)&v152.m[1][1] + v42,
            *(_QWORD *)&v152.m[1][1] + 16 * (v36 - v35),
            &v170,
            v142,
            v144);
          v35 = v164;
          v29 = (__int64 *)((char *)this + 1184);
        }
        else
        {
          v42 = 16 * v32;
        }
        v43 = (_OWORD *)(*(_QWORD *)&v152.m[1][1] + v42);
        *(_QWORD *)(v22 + 8) += 16 * v35;
        if ( v35 )
        {
          *v43 = 0LL;
          qmemcpy(v43 + 1, v43, 8 * ((unsigned __int64)(16 * v35 - 9) >> 3));
        }
      }
      v44 = *v29;
      v45 = v29[1];
      *(_QWORD *)&v167.left = v44;
      v46 = (char *)v169[0] + (unsigned int)(HIDWORD(v148) * LODWORD(v152.m11));
      v22 = (v45 - v44) >> 4;
      *(_QWORD *)&v172.left = v22;
      if ( (unsigned __int64)v46 <= v22 )
      {
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
          v29,
          v46);
      }
      else
      {
        v47 = v29[2];
        v35 = (__int64)&v46[-v22];
        *(_QWORD *)&v164 = &v46[-v22];
        v48 = (v47 - v45) >> 4;
        if ( v48 < (unsigned __int64)&v46[-v22] )
        {
          v83 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)v48,
                  (v47 - v44) >> 4,
                  (unsigned __int64)v169[0] + (unsigned int)(HIDWORD(v148) * LODWORD(v152.m11)));
          v84 = operator new(saturated_mul(v83, 0x10uLL));
          v85 = *((_QWORD *)this + 149);
          v86 = *((_QWORD *)this + 148);
          *(_QWORD *)&v150.m11 = v84;
          v87 = v84;
          *(_OWORD *)&v150.m[1][0] = *(unsigned __int64 *)&v172.left;
          *(_QWORD *)&v170.m[2][0] = 0LL;
          *(_OWORD *)&v170.m11 = *(_OWORD *)&v150.m11;
          std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
            &v150,
            v86,
            v85,
            &v170);
          v88 = (CDrawListEntryBuilder *)*((_QWORD *)this + 148);
          *((_QWORD *)this + 148) = v87;
          if ( v88 == (CDrawListEntryBuilder *)((char *)this + 1216) )
            v88 = 0LL;
          operator delete(v88);
          v22 = *(_QWORD *)&v172.left;
          v29 = (__int64 *)((char *)this + 1184);
          v44 = *((_QWORD *)this + 148);
          v35 = v164;
          v45 = v44 + 16LL * *(_QWORD *)&v172.left;
          *(_QWORD *)&v167.left = v44;
          *((_QWORD *)this + 150) = v44 + 16 * v83;
          *((_QWORD *)this + 149) = v45;
        }
        v38 = 0LL;
        *(_OWORD *)&v150.m[1][0] = (unsigned __int64)v35;
        v49 = (v45 - v44) >> 4;
        v50 = v49 - v22;
        *(_QWORD *)&v150.m11 = v44 + 16 * v49;
        v51 = v35 < 0;
        if ( v35 )
        {
          if ( !(v44 + 16 * v49) )
            goto LABEL_223;
          v51 = v35 < 0;
        }
        if ( v51 && v35 )
          goto LABEL_223;
        *(_QWORD *)&v150.m[2][0] = v35;
        v52 = ((v45 - v44) >> 4) - v22;
        if ( v35 < v50 )
          v52 = v35;
        *(_OWORD *)&v170.m11 = *(_OWORD *)&v150.m11;
        v38 = 16 * v52;
        v53 = v45 - v38;
        *(_QWORD *)&v170.m[2][0] = v35;
        if ( v45 != v45 - v38 )
        {
          v153 = (_OWORD *)(*(_QWORD *)&v150.m11 + 16 * v35);
          *(_QWORD *)&v152.m[1][1] = *(_QWORD *)&v170.m[2][0];
          do
          {
            v38 = v45 - 16;
            v45 -= 16LL;
            if ( !*(_QWORD *)&v170.m11 )
              goto LABEL_223;
            if ( !*(_QWORD *)&v152.m[1][1] )
              goto LABEL_223;
            --*(_QWORD *)&v152.m[1][1];
            --v153;
            v22 = *(_QWORD *)&v172.left;
            if ( *(_QWORD *)&v152.m[1][1] >= *(_QWORD *)&v170.m[1][0] )
              goto LABEL_223;
            v134 = *(_OWORD *)v38;
            v38 = (__int64)v153;
            *v153 = v134;
          }
          while ( v45 != v53 );
        }
        if ( v50 > v35 )
        {
          *(_QWORD *)&v170.m11 = v44;
          *(_QWORD *)&v170.m[1][0] = v49;
          v135 = v49 < 0;
          if ( v49 )
          {
            if ( !v44 )
              goto LABEL_223;
            v135 = v49 < 0;
          }
          if ( v135 && v49 )
            goto LABEL_223;
          *(_QWORD *)&v170.m[2][0] = v49;
          v54 = 16 * v22;
          *(_OWORD *)&v150.m11 = *(_OWORD *)&v170.m11;
          *(_QWORD *)&v150.m[2][0] = v49;
          std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
            &v170,
            v44 + v54,
            v44 + 16 * (v49 - v35),
            &v150,
            v142,
            v144);
          v35 = v164;
          v29 = (__int64 *)((char *)this + 1184);
          v44 = *(_QWORD *)&v167.left;
        }
        else
        {
          v54 = 16 * v22;
        }
        v55 = (_OWORD *)(v44 + v54);
        v29[1] += 16 * v35;
        if ( v35 )
        {
          *v55 = 0LL;
          qmemcpy(v55 + 1, v55, 8 * ((unsigned __int64)(16 * v35 - 9) >> 3));
        }
      }
      v22 = *(_QWORD *)&v171.left;
      v149[0] = 0;
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
        (__int64 *)this + 273,
        *(_QWORD *)&v171.left + (int)v148,
        v149);
      v56 = v158;
      *(_QWORD *)&v164 = *((_QWORD *)this + 24) + 16 * v158;
      *(_QWORD *)&v167.left = *((_QWORD *)this + 148) + 16 * (__int64)v169[0];
      v57 = *((_QWORD *)this + 273);
      *((_QWORD *)&v164 + 1) = __PAIR64__(HIDWORD(v148), (unsigned int)v154);
      LODWORD(v167.right) = (_DWORD)v154;
      v167.bottom = *((FLOAT *)&v148 + 1);
      Geometry = Mesh::GenerateGeometry(
                   (CDrawListEntryBuilder *)((char *)this + 104),
                   v25,
                   v24,
                   (__int64)&v164,
                   (__int64)&v167,
                   (float *)&v148 + 1,
                   *((_WORD *)this + 1088),
                   (unsigned __int16 *)(v57 + 2 * v22),
                   (int *)&v148);
      LODWORD(v22) = Geometry;
      if ( Geometry < 0 )
      {
LABEL_226:
        MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, Geometry, 0x4AAu, 0LL);
        goto LABEL_147;
      }
      v60 = HIDWORD(v148);
      *((_DWORD *)this + 544) += HIDWORD(v148);
      m11 = v152.m11;
      v62 = *((_QWORD *)this + 25);
      v63 = *((_QWORD *)this + 24);
      v172 = 0LL;
      v38 = v56 + (unsigned int)(LODWORD(v152.m11) * v60);
      v64 = (v62 - v63) >> 4;
      if ( v38 > v64 )
      {
        *(_QWORD *)&v167.left = v62;
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
          (_DWORD)this + 192,
          (unsigned int)&v164,
          (unsigned int)&v167,
          v38 - v64,
          (__int64)&v172);
      }
      else
      {
        v22 = (v62 - 16 * v38 - v63) >> 4;
        v35 = v38 + v22;
        if ( v38 + v22 > v64 )
        {
LABEL_225:
          std::_Xoverflow_error("overflow");
          __debugbreak();
          goto LABEL_226;
        }
        if ( v35 != v64 )
        {
          *(_QWORD *)&v170.m11 = v63;
          *(_QWORD *)&v170.m[1][0] = (v62 - v63) >> 4;
          v136 = v38 < 0;
          if ( v38 )
          {
            if ( !v63 )
              goto LABEL_223;
            v136 = v38 < 0;
          }
          if ( v136 && v38 )
            goto LABEL_223;
          *(_QWORD *)&v170.m[2][0] = v38;
          *(_OWORD *)&v150.m11 = *(_OWORD *)&v170.m11;
          *(_QWORD *)&v150.m[2][0] = v38;
          std::uninitialized_copy<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
            &v170,
            v63 + 16 * v35,
            v63 + 16 * v64,
            &v150,
            v142,
            v144,
            v145);
          v62 = *((_QWORD *)this + 25);
        }
        *((_QWORD *)this + 25) = v62 - 16 * v22;
      }
      v38 = *((_QWORD *)this + 149);
      v65 = *((_QWORD *)this + 148);
      v66 = (v38 - v65) >> 4;
      v67 = (__int64)v169[0] + (unsigned int)(HIDWORD(v148) * LODWORD(m11));
      *(_OWORD *)v169 = 0LL;
      if ( v67 > v66 )
      {
        *(_QWORD *)&v167.left = v38;
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
          (_DWORD)this + 1184,
          (unsigned int)&v164,
          (unsigned int)&v167,
          v67 - v66,
          (__int64)v169);
        goto LABEL_59;
      }
      v22 = (v38 - 16 * v67 - v65) >> 4;
      v35 = v22 + v67;
      if ( v22 + v67 <= v66 )
      {
        v68 = v65 + 16 * v66;
        if ( v35 == v66 )
        {
LABEL_58:
          *((_QWORD *)this + 149) = v38 - 16 * v22;
LABEL_59:
          v149[0] = 0;
          detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
            (__int64 *)this + 273,
            *(_QWORD *)&v171.left + (int)v148,
            v149);
          goto LABEL_60;
        }
        *(_QWORD *)&v170.m11 = v65;
        *(_QWORD *)&v170.m[1][0] = (v38 - v65) >> 4;
        v137 = v67 < 0;
        if ( !v67 )
        {
LABEL_221:
          if ( !v137 || !v67 )
            goto LABEL_224;
          goto LABEL_223;
        }
        if ( v65 )
        {
          v137 = v67 < 0;
          goto LABEL_221;
        }
LABEL_223:
        _o__invalid_parameter_noinfo_noreturn(v38, v35);
        __debugbreak();
LABEL_224:
        *(_QWORD *)&v170.m[2][0] = v67;
        *(_OWORD *)&v150.m11 = *(_OWORD *)&v170.m11;
        *(_QWORD *)&v150.m[2][0] = v67;
        std::uninitialized_copy<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
          &v170,
          v65 + 16 * v35,
          v68,
          &v150,
          v142,
          v144,
          v145);
        v38 = *((_QWORD *)this + 149);
        goto LABEL_58;
      }
      goto LABEL_225;
    }
    v143 = 1015;
  }
  else
  {
    v123 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
    if ( !v123 )
    {
      v124 = DefaultHeap::Alloc(0xB0uLL);
      if ( v124 )
      {
        v124[3] = 0;
        memset_0(v124 + 8, 0, 0x90uLL);
        *(_QWORD *)v124 = &CDrawListPolygonBuilder::`vftable'{for `CMILCOMBase'};
        *((_QWORD *)v124 + 2) = &CDrawListPolygonBuilder::`vftable'{for `ID2D1GeometrySink'};
        v124[2] = 0;
        *((_QWORD *)v124 + 3) = v124 + 12;
        *((_QWORD *)v124 + 4) = v124 + 12;
        *((_QWORD *)v124 + 5) = v124 + 44;
      }
      else
      {
        v124 = 0LL;
      }
      wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((char *)this + 184, v124);
      v123 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
      if ( !v123 )
      {
        LODWORD(v22) = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x3FEu, 0LL);
        goto LABEL_152;
      }
    }
    v20 = CDrawListPolygonBuilder::Build(v123, v10);
    LODWORD(v22) = v20;
    if ( v20 >= 0 )
    {
      v125 = v147[0];
      if ( *((_DWORD *)this + 3) == 1 || v147[0] && !*((_BYTE *)this + 28) )
        v126 = 0LL;
      else
        v126 = 3LL;
      v184 = (enum D2D1_EDGE_FLAGS *)v187;
      v185 = v187;
      v186 = &v188;
      v127 = *((_QWORD *)this + 23);
      v128 = *(_QWORD *)(v127 + 24);
      v129 = (*(_QWORD *)(v127 + 32) - v128) >> 3;
      if ( !v128 && (_DWORD)v129 )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v129,
          0LL,
          v126);
        __debugbreak();
      }
      *(_QWORD *)&v167.left = (unsigned int)v129;
      *(_QWORD *)&v167.right = v128;
      CEdgeFlagsMap::ResolveEdgeFlags((_DWORD)v154, (unsigned int)&v167, v126, (unsigned int)&v184, (__int64)v147);
      if ( !v125 || (v11 = v147[0] == 0, v147[0] = 1, v11) )
        v147[0] = 0;
      v19 = (CDrawListEntryBuilder *)((char *)this + 104);
      PolygonMesh = Mesh::CreatePolygonMesh(
                      (CDrawListEntryBuilder *)((char *)this + 104),
                      (const struct Mesh::ContentInfo *)&v182,
                      *(const struct D2D_POINT_2F **)(*((_QWORD *)this + 23) + 24LL),
                      v184,
                      (__int64)(*(_QWORD *)(*((_QWORD *)this + 23) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 23) + 24LL)) >> 3);
      LODWORD(v22) = PolygonMesh;
      if ( PolygonMesh < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v131, 0LL, 0, PolygonMesh, 0x421u, 0LL);
        v121 = v184;
        if ( (v185 - (_BYTE *)v184) >> 2 )
        {
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
            &v184,
            0LL);
          v121 = v184;
        }
        v184 = 0LL;
        if ( v121 == (enum D2D1_EDGE_FLAGS *)v187 )
          v121 = 0LL;
        operator delete(v121);
        goto LABEL_152;
      }
      v132 = v184;
      if ( (v185 - (_BYTE *)v184) >> 2 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
          &v184,
          0LL);
        v132 = v184;
      }
      v184 = 0LL;
      if ( v132 == (enum D2D1_EDGE_FLAGS *)v187 )
        v132 = 0LL;
      operator delete(v132);
      goto LABEL_23;
    }
    v143 = 1025;
  }
LABEL_145:
  v120 = v20;
LABEL_148:
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v120, v143, 0LL);
LABEL_152:
  v6 = right_low;
LABEL_65:
  v69 = lpMem;
  if ( (v198 - (_BYTE *)lpMem) >> 3 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
    v69 = lpMem;
  }
  lpMem = 0LL;
  if ( v69 != v200 && v69 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v69);
  }
  v70 = v193;
  if ( (v194 - (_BYTE *)v193) >> 3 )
  {
    detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(&v193);
    v70 = v193;
  }
  v193 = 0LL;
  if ( v70 != v196 && v70 )
  {
    v140 = GetProcessHeap();
    HeapFree(v140, 0, v70);
  }
  v71 = v189;
  if ( (v190 - (_BYTE *)v189) >> 2 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v189);
    v71 = v189;
  }
  v189 = 0LL;
  if ( v71 != v192 && v71 )
  {
    v141 = GetProcessHeap();
    HeapFree(v141, 0, v71);
  }
  v72 = v175;
  v73 = v176;
  v173 = &CRectanglesShape::`vftable';
  HIDWORD(v178) = 0;
  if ( v175 != v176 )
  {
    operator delete(v175);
    v73 = v176;
    v72 = v176;
    v175 = v176;
    LODWORD(v178) = v177;
  }
  if ( v180 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v180 + 16LL))(v180);
    v73 = v176;
    v72 = v175;
    v180 = 0LL;
  }
  if ( v72 != v73 )
  {
    operator delete(v72);
    v175 = 0LL;
  }
  v74 = v174;
  if ( v174 )
  {
    v174 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  }
  if ( v6 && v10 )
    (**(void (__fastcall ***)(const struct CShape *, __int64))v10)(v10, 1LL);
  return (unsigned int)v22;
}

/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800505C0
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180050408 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800098F0 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180014928 (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180014A44 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180019D44 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180019EA4 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001BED8 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180049218 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C7B0 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x180051464 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x180051590 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180052A20 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057AD4 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x180074000 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007ED78 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008034C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180099B10 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x180099B38 (-resize@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D9E0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BE1EC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1800C9E68 (--$uninitialized_copy@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DD810 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18015798C (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801656F0 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x18019DA0C (--$uninitialized_copy@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_R.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x18019DC2C (--$move_backward@V-$move_iterator@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ??4?$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradientStop@@@Z @ 0x18019DEDC (--4-$com_ptr_t@VCColorGradientStop@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorGradi.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E704 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E7A4 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019E934 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x18019EB1C (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1801A212C (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801A4030 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801A4478 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 *     ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801A4A70 (-Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18021E6E4 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D1::Matrix3x2F *a4)
{
  unsigned int v4; // r12d
  char v6; // r15
  const struct D2D1::Matrix3x2F *v7; // rdi
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
  int GeometryCount; // eax
  __int64 v25; // rcx
  __int64 v26; // r10
  __int64 *v27; // r9
  __int64 v28; // r11
  unsigned int v29; // eax
  unsigned __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rsi
  _OWORD *v41; // rsi
  __int64 v42; // r11
  __int64 v43; // r10
  char *v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // rsi
  bool v49; // sf
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdi
  _OWORD *v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rax
  int Geometry; // eax
  __int64 v57; // rcx
  int v58; // ecx
  FLOAT m11; // r12d
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int64 v62; // rsi
  __int64 v63; // r9
  unsigned __int64 v64; // rsi
  __int64 v65; // r8
  __int64 v66; // r10
  _BYTE *v67; // rsi
  _BYTE *v68; // rsi
  _BYTE *v69; // rsi
  _BYTE *v70; // rcx
  _BYTE *v71; // rdx
  __int64 v72; // rcx
  unsigned __int64 v74; // rsi
  LPVOID v75; // rax
  __int64 v76; // r8
  __int64 v77; // rdx
  LPVOID v78; // rdi
  CDrawListEntryBuilder *v79; // rcx
  __int64 v80; // rsi
  unsigned __int64 v81; // rsi
  LPVOID v82; // rax
  __int64 v83; // r8
  __int64 v84; // rdx
  LPVOID v85; // rdi
  CDrawListEntryBuilder *v86; // rcx
  __int64 v87; // xmm1_8
  float v88; // xmm8_4
  __m128 m11_low; // xmm9
  float v90; // xmm10_4
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __m128 v94; // xmm7
  float v95; // xmm11_4
  float v96; // xmm9_4
  float v97; // xmm10_4
  int v98; // eax
  __int64 v99; // rcx
  __m128 v100; // xmm7
  __m128 v101; // xmm7
  __m128 v102; // xmm7
  int v103; // r9d
  float v104; // xmm2_4
  float v105; // xmm7_4
  int v106; // eax
  __int64 v107; // rcx
  __int128 v108; // xmm0
  __int64 v109; // xmm1_8
  CMILMatrix *v110; // rax
  int v111; // eax
  __int64 v112; // rcx
  LPVOID *v113; // rcx
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rcx
  float *v117; // r9
  int v118; // r9d
  enum D2D1_EDGE_FLAGS *v119; // rcx
  LPVOID *v120; // rax
  CDrawListPolygonBuilder *v121; // rcx
  _DWORD *v122; // rdi
  char v123; // di
  __int64 v124; // r8
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  int PolygonMesh; // eax
  __int64 v129; // rcx
  enum D2D1_EDGE_FLAGS *v130; // rcx
  bool v131; // sf
  __int128 v132; // xmm0
  bool v133; // sf
  bool v134; // sf
  bool v135; // sf
  int v136; // esi
  HANDLE ProcessHeap; // rax
  HANDLE v138; // rax
  HANDLE v139; // rax
  int *v140; // [rsp+20h] [rbp-E0h]
  unsigned int v141; // [rsp+20h] [rbp-E0h]
  void *v142; // [rsp+28h] [rbp-D8h]
  __int64 v143; // [rsp+30h] [rbp-D0h]
  char right_low; // [rsp+50h] [rbp-B0h]
  char v145[3]; // [rsp+51h] [rbp-AFh] BYREF
  __int64 v146; // [rsp+54h] [rbp-ACh] BYREF
  _WORD v147[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  struct D2D_MATRIX_3X2_F v148; // [rsp+60h] [rbp-A0h] BYREF
  int v149; // [rsp+80h] [rbp-80h] BYREF
  struct D2D_MATRIX_3X2_F v150; // [rsp+84h] [rbp-7Ch] BYREF
  _OWORD *v151; // [rsp+A0h] [rbp-60h]
  LPVOID *v152; // [rsp+B0h] [rbp-50h]
  D2D1_MATRIX_3X2_F v153; // [rsp+B8h] [rbp-48h] BYREF
  int v154; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v155; // [rsp+D4h] [rbp-2Ch]
  __int128 v156; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v157; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v158; // [rsp+100h] [rbp+0h]
  __int128 v159; // [rsp+110h] [rbp+10h]
  __int128 v160; // [rsp+120h] [rbp+20h]
  int v161; // [rsp+130h] [rbp+30h]
  __int128 v162; // [rsp+140h] [rbp+40h] BYREF
  float v163; // [rsp+150h] [rbp+50h]
  float v164; // [rsp+154h] [rbp+54h]
  struct D2D_RECT_F v165; // [rsp+160h] [rbp+60h] BYREF
  _OWORD *v166; // [rsp+170h] [rbp+70h]
  CShape *v167[2]; // [rsp+180h] [rbp+80h] BYREF
  struct D2D_MATRIX_3X2_F v168; // [rsp+190h] [rbp+90h] BYREF
  struct D2D_RECT_F v169; // [rsp+1B0h] [rbp+B0h] BYREF
  struct D2D_RECT_F v170; // [rsp+1C0h] [rbp+C0h] BYREF
  void **v171; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v172; // [rsp+1D8h] [rbp+D8h]
  void *v173; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE *v174; // [rsp+1E8h] [rbp+E8h]
  int v175; // [rsp+1F0h] [rbp+F0h]
  __int64 v176; // [rsp+1F4h] [rbp+F4h]
  _BYTE v177[16]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v178; // [rsp+210h] [rbp+110h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+220h] [rbp+120h] BYREF
  __int128 v180; // [rsp+238h] [rbp+138h] BYREF
  int v181; // [rsp+248h] [rbp+148h]
  enum D2D1_EDGE_FLAGS *v182; // [rsp+250h] [rbp+150h] BYREF
  _BYTE *v183; // [rsp+258h] [rbp+158h]
  char *v184; // [rsp+260h] [rbp+160h]
  _BYTE v185[64]; // [rsp+268h] [rbp+168h] BYREF
  char v186; // [rsp+2A8h] [rbp+1A8h] BYREF
  LPVOID v187; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE *v188; // [rsp+2B8h] [rbp+1B8h]
  LPVOID *v189; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v190[64]; // [rsp+2C8h] [rbp+1C8h] BYREF
  LPVOID v191; // [rsp+308h] [rbp+208h] BYREF
  _BYTE *v192; // [rsp+310h] [rbp+210h]
  LPVOID *p_lpMem; // [rsp+318h] [rbp+218h]
  _BYTE v194[128]; // [rsp+320h] [rbp+220h] BYREF
  LPVOID lpMem; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE *v196; // [rsp+3A8h] [rbp+2A8h]
  char *v197; // [rsp+3B0h] [rbp+2B0h]
  _BYTE v198[128]; // [rsp+3B8h] [rbp+2B8h] BYREF
  char v199; // [rsp+438h] [rbp+338h] BYREF

  v4 = 0;
  v155 = *((_DWORD *)this + 544);
  *(_QWORD *)&v169.left = a4;
  v181 = 0;
  *(_QWORD *)&v165.left = 0LL;
  v171 = &CRectanglesShape::`vftable';
  v172 = 0LL;
  v173 = v177;
  v6 = 0;
  right_low = 0;
  v174 = v177;
  v7 = a4;
  LOBYTE(v165.right) = 0;
  v175 = 1;
  v180 = 0LL;
  v10 = 0LL;
  v176 = 1LL;
  TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v177);
  v11 = *((_DWORD *)this + 3) == 1;
  v187 = v190;
  v12 = 0LL;
  v178 = 0LL;
  v188 = v190;
  v189 = &v191;
  v191 = v194;
  v192 = v194;
  p_lpMem = &lpMem;
  lpMem = v198;
  v196 = v198;
  v197 = &v199;
  v152 = &v187;
  v145[0] = 0;
  if ( v11 )
  {
    LODWORD(v146) = 0;
  }
  else
  {
    v11 = (*((_BYTE *)a2 + 24) & 4) == 0;
    v4 = *((_DWORD *)a2 + 4);
    LODWORD(v146) = v4;
    if ( !v11 && v4 )
      *((_BYTE *)this + 2297) = 1;
  }
  if ( v7 )
  {
    v87 = *((_QWORD *)v7 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)v7;
    *(_QWORD *)&matrix.m[2][0] = v87;
    if ( !D2D1IsMatrixInvertible(&matrix) )
      goto LABEL_64;
    v12 = v178;
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
      CShapePtr::Release((CShapePtr *)&v165);
      right_low = 0;
      v120 = (LPVOID *)*((_QWORD *)a2 + 1);
      v153 = matrix;
      if ( v120 )
        v152 = v120;
    }
    else
    {
      HIDWORD(v176) = 0;
      if ( v173 != v174 )
      {
        operator delete(v173);
        v12 = v178;
        v173 = v174;
        LODWORD(v176) = v175;
      }
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v178 = 0LL;
      }
      v169 = (struct D2D_RECT_F)_xmm;
      DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        &v173,
        &v169,
        1LL);
      v15 = *((float *)a2 + 1);
      v16 = *((float *)a2 + 2) - *(float *)a2;
      v153.dx = *(FLOAT *)a2;
      v153.dy = v15;
      v10 = (const struct CShape *)&v171;
      *(_QWORD *)&v153.m[0][1] = 0LL;
      v153.m11 = v16;
      v153.m22 = *((float *)a2 + 3) - v15;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v168,
        (const struct D2D1::Matrix3x2F *)&v153,
        (const struct D2D1::Matrix3x2F *)&matrix);
      v153 = v168;
    }
    v17 = 2;
    v149 = 2;
    goto LABEL_16;
  }
  v11 = (*((_BYTE *)a2 + 24) & 1) == 0;
  v14 = (char *)a2 + 24;
  v162 = 0LL;
  if ( v11 )
  {
    v162 = *(_OWORD *)a2;
  }
  else
  {
    v106 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, &v162, 0LL);
    LODWORD(v22) = v106;
    if ( v106 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v107, 0LL, 0, v106, 0x308u, 0LL);
      goto LABEL_125;
    }
    v7 = *(const struct D2D1::Matrix3x2F **)&v169.left;
  }
  if ( (unsigned __int8)CCpuClip::FullyContains(*((_QWORD *)this + 2), &v162, v7) )
  {
    v12 = v178;
    goto LABEL_9;
  }
  v88 = *(float *)&FLOAT_1_0;
  v161 = 0;
  if ( v7 )
  {
    if ( (*v14 & 1) != 0 )
    {
      v108 = *(_OWORD *)&matrix.m11;
      v109 = *(_QWORD *)&matrix.m[2][0];
      m11_low = (__m128)(unsigned int)FLOAT_1_0;
      v153 = matrix;
      v90 = *(float *)&FLOAT_1_0;
    }
    else
    {
      D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        (D2DMatrixHelper *)&matrix,
        &v150,
        (float *)&v149,
        &v153.m11);
      v109 = *(_QWORD *)&v153.m[2][0];
      v108 = *(_OWORD *)&v153.m11;
      m11_low = (__m128)LODWORD(v150.m11);
      v90 = *(float *)&v149;
    }
    *(_QWORD *)&v168.m[2][0] = v109;
    *(_OWORD *)&v168.m11 = v108;
    D2D1::Matrix3x2F::Invert(&v168);
    v110 = CMILMatrix::CMILMatrix((CMILMatrix *)&v182, &v168);
    v157 = *(_OWORD *)v110;
    v158 = *((_OWORD *)v110 + 1);
    v159 = *((_OWORD *)v110 + 2);
    v160 = *((_OWORD *)v110 + 3);
    v161 = *((_DWORD *)v110 + 16);
  }
  else
  {
    m11_low = (__m128)(unsigned int)FLOAT_1_0;
    v90 = *(float *)&FLOAT_1_0;
    *(_OWORD *)&v153.m11 = _xmm;
    *(_QWORD *)&v153.m[2][0] = 0LL;
    v157 = _xmm;
    v158 = _xmm;
    v159 = _xmm;
    v160 = _xmm;
    LOWORD(v161) = 32085;
  }
  v91 = CCpuClip::ResolveClip(*((CCpuClip **)this + 2), v167);
  LODWORD(v22) = v91;
  if ( v91 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v91, 0x348u, 0LL);
    goto LABEL_125;
  }
  if ( (*v14 & 1) != 0 )
  {
    v111 = CShape::Combine(*(_QWORD *)a2, v92, (__int64)v167[0], (__int64)&v157, 1, &v169);
    LODWORD(v22) = v111;
    if ( v111 >= 0 )
    {
      v10 = *(const struct CShape **)&v169.left;
      CShapePtr::Release((CShapePtr *)&v165);
      *(_QWORD *)&v165.left = v10;
      right_low = 1;
      v113 = &v187;
      LOBYTE(v165.right) = 1;
      if ( *((_QWORD *)a2 + 1) )
        v113 = (LPVOID *)*((_QWORD *)a2 + 1);
      v152 = v113;
      goto LABEL_140;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v111, 0x353u, 0LL);
LABEL_125:
    v6 = 0;
    goto LABEL_65;
  }
  v22 = (unsigned __int64)v167[0];
  v94 = m11_low;
  v94.m128_f32[0] = m11_low.m128_f32[0] * *(float *)a2;
  v95 = v90 * *((float *)a2 + 1);
  v96 = m11_low.m128_f32[0] * *((float *)a2 + 2);
  v97 = v90 * *((float *)a2 + 3);
  *(_QWORD *)&v162 = __PAIR64__(LODWORD(v95), v94.m128_u32[0]);
  *((_QWORD *)&v162 + 1) = __PAIR64__(LODWORD(v97), LODWORD(v96));
  if ( !CShape::IsAxisAlignedRectangle(v167[0]) || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v157) )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v171, (const struct MilRectF *)&v162);
    v115 = CShape::Combine((__int64)&v171, v114, v22, (__int64)&v157, 1, &v169);
    LODWORD(v22) = v115;
    if ( v115 >= 0 )
    {
      v10 = *(const struct CShape **)&v169.left;
      CShapePtr::Release((CShapePtr *)&v165);
      *(_QWORD *)&v165.left = v10;
      right_low = 1;
      LOBYTE(v165.right) = 1;
      *(_OWORD *)v167 = v162;
      CEdgeFlagsMap::AddEdgeFlags(&v187, &v162, v4, &Matrix3x3::Identity);
      v152 = &v187;
LABEL_140:
      v17 = 1;
      v22 = (unsigned __int64)v10;
      v149 = 1;
      v145[0] = 1;
      goto LABEL_111;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0, v115, 0x38Eu, 0LL);
    goto LABEL_125;
  }
  v169 = 0LL;
  v98 = (*(__int64 (__fastcall **)(unsigned __int64, struct D2D_RECT_F *, __int128 *))(*(_QWORD *)v22 + 32LL))(
          v22,
          &v169,
          &v157);
  LODWORD(v22) = v98;
  if ( v98 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, v98, 0x36Cu, 0LL);
    goto LABEL_125;
  }
  v100 = _mm_shuffle_ps(v94, v94, 225);
  v100.m128_f32[0] = v95;
  v101 = _mm_shuffle_ps(v100, v100, 198);
  v101.m128_f32[0] = v96;
  v102 = _mm_shuffle_ps(v101, v101, 39);
  v102.m128_f32[0] = v97;
  *(__m128 *)v167 = _mm_shuffle_ps(v102, v102, 57);
  v156 = *(_OWORD *)v167;
  v170 = v169;
  if ( *((_BYTE *)this + 28) )
    v103 = 50529027;
  else
    v103 = 0;
  if ( ClipRectAndEdgeFlags((__int64)&v156, v4, (__int64)&v170, v103, v167, (int *)&v146) )
  {
    v145[0] = 1;
    v162 = *(_OWORD *)v167;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v171, (const struct MilRectF *)&v162);
  CShapePtr::Release((CShapePtr *)&v165);
  v4 = v146;
  v10 = (const struct CShape *)&v171;
  *(float *)&v149 = 0.0;
  v17 = 0;
  right_low = 0;
  LOBYTE(v165.right) = 0;
  v22 = (unsigned __int64)&v171;
  *(_QWORD *)&v165.left = &v171;
LABEL_111:
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v165) )
  {
    v104 = *((float *)this + 1);
    v105 = *(float *)&FLOAT_1_0;
    LODWORD(v146) = (_DWORD)FLOAT_1_0;
    HIDWORD(v146) = (_DWORD)FLOAT_1_0;
    if ( v104 < 1.0 || *((float *)this + 2) < 1.0 )
    {
      HIDWORD(v162) = *((_DWORD *)this + 2);
      *(float *)&v162 = v104;
      *(_QWORD *)((char *)&v162 + 4) = 0LL;
      v163 = 0.0 - (float)(v104 * 0.0);
      v164 = 0.0 - (float)(*((float *)&v162 + 3) * 0.0);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v168,
        (const struct D2D1::Matrix3x2F *)&v153,
        (const struct D2D1::Matrix3x2F *)&v162);
      v148 = v168;
      D2DMatrixHelper::GetScaleDimensions(
        (D2DMatrixHelper *)&v148,
        (const struct D2D_MATRIX_3X2_F *)&v146,
        (float *)&v146 + 1,
        v117);
      v88 = *(float *)&v146;
      v105 = *((float *)&v146 + 1);
    }
    v162 = 0LL;
    v20 = (*(__int64 (__fastcall **)(unsigned __int64, __int128 *, _QWORD))(*(_QWORD *)v22 + 32LL))(v22, &v162, 0LL);
    LODWORD(v22) = v20;
    if ( v20 < 0 )
    {
      v141 = 947;
      goto LABEL_145;
    }
    if ( (float)((float)(*((float *)&v162 + 2) - *(float *)&v162) * v88) <= 0.015625
      || (float)((float)(*((float *)&v162 + 3) - *((float *)&v162 + 1)) * v105) <= 0.015625 )
    {
      CShapePtr::Release((CShapePtr *)&v165);
      v10 = *(const struct CShape **)&v165.left;
      right_low = LOBYTE(v165.right);
    }
  }
LABEL_16:
  if ( !v10 || (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)v10 + 16LL))(v10) )
    goto LABEL_61;
  if ( a3 )
  {
    v18 = *(_OWORD *)a3;
    LOBYTE(v181) = *((_BYTE *)a3 + 16);
  }
  else
  {
    v18 = _xmm;
  }
  v180 = v18;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, int *))(*(_QWORD *)v10 + 40LL))(v10, &v154)
    && v154 == 1 )
  {
    v169 = 0LL;
    (*(void (__fastcall **)(const struct CShape *, struct D2D_RECT_F *, __int64))(*(_QWORD *)v10 + 48LL))(
      v10,
      &v169,
      1LL);
    v19 = (CDrawListEntryBuilder *)((char *)this + 104);
    v165 = v169;
    v20 = Mesh::CreateRectangleMesh(
            (CDrawListEntryBuilder *)((char *)this + 104),
            (const struct Mesh::ContentInfo *)&v180,
            &v165,
            v4);
    LODWORD(v22) = v20;
    if ( v20 >= 0 )
    {
LABEL_23:
      if ( (_DWORD)v22 )
        goto LABEL_60;
      v23 = *v14;
      v146 = 0LL;
      GeometryCount = Mesh::GetGeometryCount(v19, (v23 & 2) != 0, (v23 & 4) != 0, (int *)&v146 + 1, (int *)&v146);
      LODWORD(v22) = GeometryCount;
      if ( GeometryCount < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, GeometryCount, 0x480u, 0LL);
LABEL_147:
        v118 = v22;
        v141 = 1063;
        goto LABEL_148;
      }
      if ( (int)v146 <= 0 )
      {
LABEL_60:
        CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
          this,
          a3,
          (const struct D2D1::Matrix3x2F *)&matrix,
          (const struct D2D1::Matrix3x2F *)&v153,
          v155);
        v17 = v149;
LABEL_61:
        ++*((_DWORD *)this + 568);
        if ( !v145[0] )
          goto LABEL_62;
        if ( **((_QWORD **)this + 2) )
          ++*((_DWORD *)this + 24);
        if ( !v17 )
        {
          ++dword_180345358;
          goto LABEL_63;
        }
        v136 = v17 - 1;
        if ( !v136 )
        {
          ++dword_18034535C;
          goto LABEL_63;
        }
        if ( v136 == 1 )
LABEL_62:
          ++dword_180345354;
LABEL_63:
        v6 = right_low;
LABEL_64:
        LODWORD(v22) = 0;
        goto LABEL_65;
      }
      v22 = (unsigned __int64)this + 192;
      v26 = *((_QWORD *)this + 24);
      v27 = (__int64 *)((char *)this + 1184);
      v28 = *((_QWORD *)this + 25);
      v29 = 8 * *(_DWORD *)this + 16;
      v30 = (v28 - v26) >> 4;
      v167[0] = (CShape *)((__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4);
      v31 = *((_QWORD *)this + 274) - *((_QWORD *)this + 273);
      LODWORD(v152) = v29;
      LODWORD(v150.m11) = v29 >> 4;
      v32 = HIDWORD(v146) * (v29 >> 4);
      *(_QWORD *)&v150.m[1][1] = v26;
      *(_QWORD *)&v156 = v30;
      *(_QWORD *)&v169.left = v31 >> 1;
      v33 = (unsigned int)v32;
      *(_QWORD *)&v162 = (unsigned int)v32;
      *(_QWORD *)&v165.left = v32 + v30;
      if ( v32 + v30 <= v30 )
      {
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
          v22,
          *(_QWORD *)&v165.left);
        v27 = (__int64 *)((char *)this + 1184);
      }
      else
      {
        if ( (*((_QWORD *)this + 26) - v28) >> 4 < (unsigned __int64)(unsigned int)v32 )
        {
          v74 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)((*((_QWORD *)this + 26) - v26) >> 4),
                  (*((_QWORD *)this + 26) - v26) >> 4,
                  v32 + v30);
          v75 = operator new(saturated_mul(v74, 0x10uLL));
          v76 = *((_QWORD *)this + 25);
          v77 = *((_QWORD *)this + 24);
          *(_QWORD *)&v148.m11 = v75;
          v78 = v75;
          *(_OWORD *)&v148.m[1][0] = (unsigned __int64)v156;
          *(_QWORD *)&v168.m[2][0] = 0LL;
          *(_OWORD *)&v168.m11 = *(_OWORD *)&v148.m11;
          std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
            &v148,
            v77,
            v76,
            &v168);
          v79 = (CDrawListEntryBuilder *)*((_QWORD *)this + 24);
          *((_QWORD *)this + 24) = v78;
          v22 = (unsigned __int64)this + 192;
          if ( v79 == (CDrawListEntryBuilder *)((char *)this + 224) )
            v79 = 0LL;
          operator delete(v79);
          v26 = *(_QWORD *)v22;
          v27 = (__int64 *)((char *)this + 1184);
          v33 = v162;
          v28 = *(_QWORD *)v22 + 16 * v156;
          v80 = *(_QWORD *)v22 + 16 * v74;
          *(_QWORD *)&v150.m[1][1] = *(_QWORD *)v22;
          *((_QWORD *)this + 26) = v80;
          v30 = v156;
          *((_QWORD *)this + 25) = v28;
        }
        *(_OWORD *)&v148.m[1][0] = (unsigned __int64)v33;
        v34 = (v28 - v26) >> 4;
        v35 = v34 - v30;
        v36 = 16 * v34 + *(_QWORD *)&v150.m[1][1];
        *(_QWORD *)&v148.m11 = v36;
        *(_QWORD *)&v170.left = v36;
        if ( v33 )
        {
          *(_QWORD *)&v170.left = 16 * v34 + *(_QWORD *)&v150.m[1][1];
          if ( !v36 )
            goto LABEL_223;
        }
        *(_QWORD *)&v148.m[2][0] = v33;
        v37 = v34 - v30;
        if ( v33 < v35 )
          v37 = v33;
        v165 = *(struct D2D_RECT_F *)&v148.m11;
        v38 = 16 * v37;
        v39 = v28 - v38;
        v166 = (_OWORD *)v33;
        if ( v28 != v28 - v38 )
        {
          *(_QWORD *)&v170.left += 16 * v33;
          v151 = v166;
          do
          {
            v36 = v28 - 16;
            v28 -= 16LL;
            if ( !*(_QWORD *)&v165.left )
              goto LABEL_223;
            if ( !v151 )
              goto LABEL_223;
            v151 = (_OWORD *)((char *)v151 - 1);
            *(_QWORD *)&v170.left -= 16LL;
            v22 = (unsigned __int64)this + 192;
            if ( (unsigned __int64)v151 >= *(_QWORD *)&v165.right )
              goto LABEL_223;
            **(_OWORD **)&v170.left = *(_OWORD *)v36;
          }
          while ( v28 != v39 );
        }
        if ( v35 > v33 )
        {
          v36 = *(_QWORD *)&v150.m[1][1];
          *(_QWORD *)&v148.m11 = *(_QWORD *)&v150.m[1][1];
          *(_QWORD *)&v148.m[1][0] = v34;
          v131 = v34 < 0;
          if ( v34 )
          {
            if ( !*(_QWORD *)&v150.m[1][1] )
              goto LABEL_223;
            v131 = v34 < 0;
          }
          if ( v131 && v34 )
            goto LABEL_223;
          *(_QWORD *)&v148.m[2][0] = v34;
          v40 = 16 * v30;
          *(_OWORD *)&v168.m11 = *(_OWORD *)&v148.m11;
          *(_QWORD *)&v168.m[2][0] = v34;
          std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
            &v148,
            *(_QWORD *)&v150.m[1][1] + v40,
            *(_QWORD *)&v150.m[1][1] + 16 * (v34 - v33),
            &v168,
            v140,
            v142);
          v33 = v162;
          v27 = (__int64 *)((char *)this + 1184);
        }
        else
        {
          v40 = 16 * v30;
        }
        v41 = (_OWORD *)(*(_QWORD *)&v150.m[1][1] + v40);
        *(_QWORD *)(v22 + 8) += 16 * v33;
        if ( v33 )
        {
          *v41 = 0LL;
          qmemcpy(v41 + 1, v41, 8 * ((unsigned __int64)(16 * v33 - 9) >> 3));
        }
      }
      v42 = *v27;
      v43 = v27[1];
      *(_QWORD *)&v165.left = v42;
      v44 = (char *)v167[0] + (unsigned int)(HIDWORD(v146) * LODWORD(v150.m11));
      v22 = (v43 - v42) >> 4;
      *(_QWORD *)&v170.left = v22;
      if ( (unsigned __int64)v44 <= v22 )
      {
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
          v27,
          v44);
      }
      else
      {
        v45 = v27[2];
        v33 = (__int64)&v44[-v22];
        *(_QWORD *)&v162 = &v44[-v22];
        v46 = (v45 - v43) >> 4;
        if ( v46 < (unsigned __int64)&v44[-v22] )
        {
          v81 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)v46,
                  (v45 - v42) >> 4,
                  (unsigned __int64)v167[0] + (unsigned int)(HIDWORD(v146) * LODWORD(v150.m11)));
          v82 = operator new(saturated_mul(v81, 0x10uLL));
          v83 = *((_QWORD *)this + 149);
          v84 = *((_QWORD *)this + 148);
          *(_QWORD *)&v148.m11 = v82;
          v85 = v82;
          *(_OWORD *)&v148.m[1][0] = *(unsigned __int64 *)&v170.left;
          *(_QWORD *)&v168.m[2][0] = 0LL;
          *(_OWORD *)&v168.m11 = *(_OWORD *)&v148.m11;
          std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
            &v148,
            v84,
            v83,
            &v168);
          v86 = (CDrawListEntryBuilder *)*((_QWORD *)this + 148);
          *((_QWORD *)this + 148) = v85;
          if ( v86 == (CDrawListEntryBuilder *)((char *)this + 1216) )
            v86 = 0LL;
          operator delete(v86);
          v22 = *(_QWORD *)&v170.left;
          v27 = (__int64 *)((char *)this + 1184);
          v42 = *((_QWORD *)this + 148);
          v33 = v162;
          v43 = v42 + 16LL * *(_QWORD *)&v170.left;
          *(_QWORD *)&v165.left = v42;
          *((_QWORD *)this + 150) = v42 + 16 * v81;
          *((_QWORD *)this + 149) = v43;
        }
        v36 = 0LL;
        *(_OWORD *)&v148.m[1][0] = (unsigned __int64)v33;
        v47 = (v43 - v42) >> 4;
        v48 = v47 - v22;
        *(_QWORD *)&v148.m11 = v42 + 16 * v47;
        v49 = v33 < 0;
        if ( v33 )
        {
          if ( !(v42 + 16 * v47) )
            goto LABEL_223;
          v49 = v33 < 0;
        }
        if ( v49 && v33 )
          goto LABEL_223;
        *(_QWORD *)&v148.m[2][0] = v33;
        v50 = ((v43 - v42) >> 4) - v22;
        if ( v33 < v48 )
          v50 = v33;
        *(_OWORD *)&v168.m11 = *(_OWORD *)&v148.m11;
        v36 = 16 * v50;
        v51 = v43 - v36;
        *(_QWORD *)&v168.m[2][0] = v33;
        if ( v43 != v43 - v36 )
        {
          v151 = (_OWORD *)(*(_QWORD *)&v148.m11 + 16 * v33);
          *(_QWORD *)&v150.m[1][1] = *(_QWORD *)&v168.m[2][0];
          do
          {
            v36 = v43 - 16;
            v43 -= 16LL;
            if ( !*(_QWORD *)&v168.m11 )
              goto LABEL_223;
            if ( !*(_QWORD *)&v150.m[1][1] )
              goto LABEL_223;
            --*(_QWORD *)&v150.m[1][1];
            --v151;
            v22 = *(_QWORD *)&v170.left;
            if ( *(_QWORD *)&v150.m[1][1] >= *(_QWORD *)&v168.m[1][0] )
              goto LABEL_223;
            v132 = *(_OWORD *)v36;
            v36 = (__int64)v151;
            *v151 = v132;
          }
          while ( v43 != v51 );
        }
        if ( v48 > v33 )
        {
          *(_QWORD *)&v168.m11 = v42;
          *(_QWORD *)&v168.m[1][0] = v47;
          v133 = v47 < 0;
          if ( v47 )
          {
            if ( !v42 )
              goto LABEL_223;
            v133 = v47 < 0;
          }
          if ( v133 && v47 )
            goto LABEL_223;
          *(_QWORD *)&v168.m[2][0] = v47;
          v52 = 16 * v22;
          *(_OWORD *)&v148.m11 = *(_OWORD *)&v168.m11;
          *(_QWORD *)&v148.m[2][0] = v47;
          std::move_backward<std::move_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *>>(
            &v168,
            v42 + v52,
            v42 + 16 * (v47 - v33),
            &v148,
            v140,
            v142);
          v33 = v162;
          v27 = (__int64 *)((char *)this + 1184);
          v42 = *(_QWORD *)&v165.left;
        }
        else
        {
          v52 = 16 * v22;
        }
        v53 = (_OWORD *)(v42 + v52);
        v27[1] += 16 * v33;
        if ( v33 )
        {
          *v53 = 0LL;
          qmemcpy(v53 + 1, v53, 8 * ((unsigned __int64)(16 * v33 - 9) >> 3));
        }
      }
      v22 = *(_QWORD *)&v169.left;
      v147[0] = 0;
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
        (char *)this + 2184,
        *(_QWORD *)&v169.left + (int)v146,
        v147);
      v54 = v156;
      *(_QWORD *)&v162 = *((_QWORD *)this + 24) + 16 * v156;
      *(_QWORD *)&v165.left = *((_QWORD *)this + 148) + 16 * (__int64)v167[0];
      v55 = *((_QWORD *)this + 273);
      *((_QWORD *)&v162 + 1) = __PAIR64__(HIDWORD(v146), (unsigned int)v152);
      LODWORD(v165.right) = (_DWORD)v152;
      v165.bottom = *((FLOAT *)&v146 + 1);
      Geometry = Mesh::GenerateGeometry(
                   (CDrawListEntryBuilder *)((char *)this + 104),
                   (__int64)&v165,
                   (__int64)&v146 + 4,
                   *((_WORD *)this + 1088),
                   (unsigned __int16 *)(v55 + 2 * v22),
                   (__int64)&v146);
      LODWORD(v22) = Geometry;
      if ( Geometry < 0 )
      {
LABEL_226:
        MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, Geometry, 0x4AAu, 0LL);
        goto LABEL_147;
      }
      v58 = HIDWORD(v146);
      *((_DWORD *)this + 544) += HIDWORD(v146);
      m11 = v150.m11;
      v60 = *((_QWORD *)this + 25);
      v61 = *((_QWORD *)this + 24);
      v170 = 0LL;
      v36 = v54 + (unsigned int)(LODWORD(v150.m11) * v58);
      v62 = (v60 - v61) >> 4;
      if ( v36 > v62 )
      {
        *(_QWORD *)&v165.left = v60;
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
          (_DWORD)this + 192,
          (unsigned int)&v162,
          (unsigned int)&v165,
          v36 - v62,
          (__int64)&v170);
      }
      else
      {
        v22 = (v60 - 16 * v36 - v61) >> 4;
        v33 = v36 + v22;
        if ( v36 + v22 > v62 )
        {
LABEL_225:
          std::_Xoverflow_error("overflow");
          __debugbreak();
          goto LABEL_226;
        }
        if ( v33 != v62 )
        {
          *(_QWORD *)&v168.m11 = v61;
          *(_QWORD *)&v168.m[1][0] = (v60 - v61) >> 4;
          v134 = v36 < 0;
          if ( v36 )
          {
            if ( !v61 )
              goto LABEL_223;
            v134 = v36 < 0;
          }
          if ( v134 && v36 )
            goto LABEL_223;
          *(_QWORD *)&v168.m[2][0] = v36;
          *(_OWORD *)&v148.m11 = *(_OWORD *)&v168.m11;
          *(_QWORD *)&v148.m[2][0] = v36;
          std::uninitialized_copy<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
            &v168,
            v61 + 16 * v33,
            v61 + 16 * v62,
            &v148,
            v140,
            v142,
            v143);
          v60 = *((_QWORD *)this + 25);
        }
        *((_QWORD *)this + 25) = v60 - 16 * v22;
      }
      v36 = *((_QWORD *)this + 149);
      v63 = *((_QWORD *)this + 148);
      v64 = (v36 - v63) >> 4;
      v65 = (__int64)v167[0] + (unsigned int)(HIDWORD(v146) * LODWORD(m11));
      *(_OWORD *)v167 = 0LL;
      if ( v65 > v64 )
      {
        *(_QWORD *)&v165.left = v36;
        detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
          (_DWORD)this + 1184,
          (unsigned int)&v162,
          (unsigned int)&v165,
          v65 - v64,
          (__int64)v167);
        goto LABEL_59;
      }
      v22 = (v36 - 16 * v65 - v63) >> 4;
      v33 = v22 + v65;
      if ( v22 + v65 <= v64 )
      {
        v66 = v63 + 16 * v64;
        if ( v33 == v64 )
        {
LABEL_58:
          *((_QWORD *)this + 149) = v36 - 16 * v22;
LABEL_59:
          v147[0] = 0;
          detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
            (char *)this + 2184,
            *(_QWORD *)&v169.left + (int)v146,
            v147);
          goto LABEL_60;
        }
        *(_QWORD *)&v168.m11 = v63;
        *(_QWORD *)&v168.m[1][0] = (v36 - v63) >> 4;
        v135 = v65 < 0;
        if ( !v65 )
        {
LABEL_221:
          if ( !v135 || !v65 )
            goto LABEL_224;
          goto LABEL_223;
        }
        if ( v63 )
        {
          v135 = v65 < 0;
          goto LABEL_221;
        }
LABEL_223:
        _o__invalid_parameter_noinfo_noreturn(v36, v33);
        __debugbreak();
LABEL_224:
        *(_QWORD *)&v168.m[2][0] = v65;
        *(_OWORD *)&v148.m11 = *(_OWORD *)&v168.m11;
        *(_QWORD *)&v148.m[2][0] = v65;
        std::uninitialized_copy<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
          &v168,
          v63 + 16 * v33,
          v66,
          &v148,
          v140,
          v142,
          v143);
        v36 = *((_QWORD *)this + 149);
        goto LABEL_58;
      }
      goto LABEL_225;
    }
    v141 = 1015;
  }
  else
  {
    v121 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
    if ( !v121 )
    {
      v122 = DefaultHeap::Alloc(0xB0uLL);
      if ( v122 )
      {
        v122[3] = 0;
        memset_0(v122 + 8, 0, 0x90uLL);
        *(_QWORD *)v122 = &CDrawListPolygonBuilder::`vftable'{for `CMILCOMBase'};
        *((_QWORD *)v122 + 2) = &CDrawListPolygonBuilder::`vftable'{for `ID2D1GeometrySink'};
        v122[2] = 0;
        *((_QWORD *)v122 + 3) = v122 + 12;
        *((_QWORD *)v122 + 4) = v122 + 12;
        *((_QWORD *)v122 + 5) = v122 + 44;
      }
      else
      {
        v122 = 0LL;
      }
      wil::com_ptr_t<CColorGradientStop,wil::err_returncode_policy>::operator=((char *)this + 184, v122);
      v121 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
      if ( !v121 )
      {
        LODWORD(v22) = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x3FEu, 0LL);
        goto LABEL_152;
      }
    }
    v20 = CDrawListPolygonBuilder::Build(v121, v10);
    LODWORD(v22) = v20;
    if ( v20 >= 0 )
    {
      v123 = v145[0];
      if ( *((_DWORD *)this + 3) == 1 || v145[0] && !*((_BYTE *)this + 28) )
        v124 = 0LL;
      else
        v124 = 3LL;
      v182 = (enum D2D1_EDGE_FLAGS *)v185;
      v183 = v185;
      v184 = &v186;
      v125 = *((_QWORD *)this + 23);
      v126 = *(_QWORD *)(v125 + 24);
      v127 = (*(_QWORD *)(v125 + 32) - v126) >> 3;
      if ( !v126 && (_DWORD)v127 )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v127,
          0LL,
          v124);
        __debugbreak();
      }
      *(_QWORD *)&v165.left = (unsigned int)v127;
      *(_QWORD *)&v165.right = v126;
      CEdgeFlagsMap::ResolveEdgeFlags((_DWORD)v152, (unsigned int)&v165, v124, (unsigned int)&v182, (__int64)v145);
      if ( !v123 || (v11 = v145[0] == 0, v145[0] = 1, v11) )
        v145[0] = 0;
      v19 = (CDrawListEntryBuilder *)((char *)this + 104);
      PolygonMesh = Mesh::CreatePolygonMesh(
                      (CDrawListEntryBuilder *)((char *)this + 104),
                      (const struct Mesh::ContentInfo *)&v180,
                      *(const struct D2D_POINT_2F **)(*((_QWORD *)this + 23) + 24LL),
                      v182,
                      (__int64)(*(_QWORD *)(*((_QWORD *)this + 23) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 23) + 24LL)) >> 3);
      LODWORD(v22) = PolygonMesh;
      if ( PolygonMesh < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v129, 0LL, 0, PolygonMesh, 0x421u, 0LL);
        v119 = v182;
        if ( (v183 - (_BYTE *)v182) >> 2 )
        {
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
            &v182,
            0LL);
          v119 = v182;
        }
        v182 = 0LL;
        if ( v119 == (enum D2D1_EDGE_FLAGS *)v185 )
          v119 = 0LL;
        operator delete(v119);
        goto LABEL_152;
      }
      v130 = v182;
      if ( (v183 - (_BYTE *)v182) >> 2 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
          &v182,
          0LL);
        v130 = v182;
      }
      v182 = 0LL;
      if ( v130 == (enum D2D1_EDGE_FLAGS *)v185 )
        v130 = 0LL;
      operator delete(v130);
      goto LABEL_23;
    }
    v141 = 1025;
  }
LABEL_145:
  v118 = v20;
LABEL_148:
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v118, v141, 0LL);
LABEL_152:
  v6 = right_low;
LABEL_65:
  v67 = lpMem;
  if ( (v196 - (_BYTE *)lpMem) >> 3 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
    v67 = lpMem;
  }
  lpMem = 0LL;
  if ( v67 != v198 && v67 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v67);
  }
  v68 = v191;
  if ( (v192 - (_BYTE *)v191) >> 3 )
  {
    detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(&v191);
    v68 = v191;
  }
  v191 = 0LL;
  if ( v68 != v194 && v68 )
  {
    v138 = GetProcessHeap();
    HeapFree(v138, 0, v68);
  }
  v69 = v187;
  if ( (v188 - (_BYTE *)v187) >> 2 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v187);
    v69 = v187;
  }
  v187 = 0LL;
  if ( v69 != v190 && v69 )
  {
    v139 = GetProcessHeap();
    HeapFree(v139, 0, v69);
  }
  v70 = v173;
  v71 = v174;
  v171 = &CRectanglesShape::`vftable';
  HIDWORD(v176) = 0;
  if ( v173 != v174 )
  {
    operator delete(v173);
    v71 = v174;
    v70 = v174;
    v173 = v174;
    LODWORD(v176) = v175;
  }
  if ( v178 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v178 + 16LL))(v178);
    v71 = v174;
    v70 = v173;
    v178 = 0LL;
  }
  if ( v70 != v71 )
  {
    operator delete(v70);
    v173 = 0LL;
  }
  v72 = v172;
  if ( v172 )
  {
    v172 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
  }
  if ( v6 && v10 )
    (**(void (__fastcall ***)(const struct CShape *, __int64))v10)(v10, 1LL);
  return (unsigned int)v22;
}

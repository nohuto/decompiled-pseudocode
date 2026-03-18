/*
 * XREFs of ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180089D74 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800542C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18007E708 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180080A78 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180089958 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18008A630 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008EE3C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18008EE7C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008EF54 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18008EFF4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180094480 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180094700 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AF4F4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AF764 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800AF97C (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800B0158 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800D193C (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180105110 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801117F6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x180194AE0 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?Pop@?$CWatermarkStack@I$0EA@$01$09@@QEAA_NPEAI@Z @ 0x1801B2D40 (-Pop@-$CWatermarkStack@I$0EA@$01$09@@QEAA_NPEAI@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1801B42D0 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1801B43F8 (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x1802A17AC (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CShapeDrawingContext::Render(CShapeDrawingContext *this)
{
  struct D2D_MATRIX_3X2_F *v1; // r13
  int v3; // eax
  __int64 v4; // rcx
  CDrawListCache *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  CGeometry *v15; // rcx
  int ShapeData; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  FLOAT m12; // xmm1_4
  CDrawingContext *v24; // rcx
  FLOAT m21; // xmm0_4
  FLOAT m22; // xmm1_4
  FLOAT dy; // xmm0_4
  FLOAT dx; // xmm1_4
  int v29; // eax
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rsi
  int v33; // eax
  float v34; // xmm1_4
  __int64 *v35; // rdi
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  int v39; // r12d
  int v40; // ecx
  __int64 v41; // rdi
  unsigned int v42; // r12d
  __int64 v43; // rdx
  CGeometryOnlyDrawListBrush *v44; // rcx
  int v45; // esi
  __int64 v46; // rcx
  CGeometryOnlyDrawListBrush *v47; // rcx
  CGeometry *v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  int v55; // eax
  FLOAT v56; // xmm1_4
  CDrawingContext *v57; // rcx
  FLOAT v58; // xmm0_4
  FLOAT v59; // xmm1_4
  FLOAT v60; // xmm0_4
  FLOAT v61; // xmm1_4
  int v62; // eax
  __int64 v63; // rcx
  int v64; // edi
  __int64 v65; // rdi
  CGeometryOnlyDrawListBrush *v66; // rcx
  __int64 (__fastcall *v67)(__int64, _QWORD, __int64, CGeometryOnlyDrawListBrush **); // rsi
  int v68; // eax
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rcx
  CGeometryOnlyDrawListBrush *v72; // rcx
  CGeometry *v73; // rcx
  int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 (__fastcall *v79)(__int64, _QWORD, __int64, CGeometryOnlyDrawListBrush **); // rdi
  int v80; // eax
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rcx
  CGeometry *v84; // rcx
  int v85; // eax
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // eax
  float v91; // xmm1_4
  float v92; // xmm3_4
  int v93; // eax
  __int64 v94; // rcx
  float v95; // xmm6_4
  float v96; // xmm7_4
  struct CDrawingContext *v97; // rdx
  int v98; // eax
  __int64 v99; // rcx
  int v100; // eax
  __int64 v101; // rcx
  CGeometryOnlyDrawListBrush *v102; // rcx
  int v103; // edi
  __int64 v104; // rcx
  int v105; // xmm1_4
  CGeometryOnlyDrawListBrush *v106; // rax
  bool v107; // zf
  __int64 v108; // xmm1_8
  CGeometryOnlyDrawListBrush *v109; // rcx
  int v110; // edi
  __m128 v111; // xmm0
  __m128 v112; // xmm0
  __m128 v113; // xmm0
  __m128 v114; // xmm0
  int DrawList; // eax
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rcx
  int v119; // ecx
  struct ID2D1PrivateCompositorRenderer *v120; // rsi
  int v121; // eax
  __int64 v122; // rcx
  unsigned int v123; // ebx
  CD2DTarget *v124; // rdx
  CD2DTarget *v125; // rax
  unsigned int v126; // eax
  int v127; // eax
  __int64 v128; // rcx
  int v129; // r8d
  int v130; // r9d
  unsigned int v131; // eax
  struct CShape **v132; // rcx
  __int64 v133; // rcx
  __int64 v134; // rcx
  struct ID2D1StrokeStyle1 *v135; // [rsp+20h] [rbp-E0h]
  unsigned int v136; // [rsp+20h] [rbp-E0h]
  CGeometryOnlyDrawListBrush *v137; // [rsp+30h] [rbp-D0h] BYREF
  int v138; // [rsp+38h] [rbp-C8h]
  CGeometryOnlyDrawListBrush *v139; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v140; // [rsp+48h] [rbp-B8h]
  CGeometryOnlyDrawListBrush *v141; // [rsp+50h] [rbp-B0h] BYREF
  struct CShape *v142; // [rsp+58h] [rbp-A8h] BYREF
  char v143; // [rsp+60h] [rbp-A0h]
  __int64 *v144; // [rsp+68h] [rbp-98h] BYREF
  char v145; // [rsp+70h] [rbp-90h]
  struct CShape *v146; // [rsp+78h] [rbp-88h] BYREF
  char v147; // [rsp+80h] [rbp-80h]
  CDrawListCache *v148; // [rsp+88h] [rbp-78h] BYREF
  CD2DTarget *v149; // [rsp+90h] [rbp-70h]
  struct CShape *v150; // [rsp+98h] [rbp-68h] BYREF
  char v151; // [rsp+A0h] [rbp-60h]
  struct D2D_SIZE_F v152; // [rsp+A8h] [rbp-58h] BYREF
  CGeometryOnlyDrawListBrush *v153; // [rsp+B0h] [rbp-50h]
  __m128 v154; // [rsp+B8h] [rbp-48h]
  __int64 v155; // [rsp+C8h] [rbp-38h]
  __int128 v156; // [rsp+D0h] [rbp-30h]
  __int128 v157; // [rsp+E0h] [rbp-20h]
  __int128 v158; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v159; // [rsp+100h] [rbp+0h]
  _QWORD v160[2]; // [rsp+110h] [rbp+10h] BYREF
  int v161; // [rsp+120h] [rbp+20h]
  int v162; // [rsp+16Ch] [rbp+6Ch]
  char v163; // [rsp+170h] [rbp+70h]
  struct CGeometryOnlyDrawListBrush *v164[2]; // [rsp+180h] [rbp+80h] BYREF
  int v165; // [rsp+190h] [rbp+90h]
  int v166; // [rsp+194h] [rbp+94h]
  FLOAT m11; // [rsp+1A0h] [rbp+A0h] BYREF
  FLOAT v168; // [rsp+1A4h] [rbp+A4h]
  __int64 v169; // [rsp+1A8h] [rbp+A8h]
  FLOAT v170; // [rsp+1B0h] [rbp+B0h]
  FLOAT v171; // [rsp+1B4h] [rbp+B4h]
  __int64 v172; // [rsp+1B8h] [rbp+B8h]
  __int128 v173; // [rsp+1C0h] [rbp+C0h]
  FLOAT v174; // [rsp+1D0h] [rbp+D0h]
  FLOAT v175; // [rsp+1D4h] [rbp+D4h]
  int v176; // [rsp+1D8h] [rbp+D8h]
  __int64 v177; // [rsp+1DCh] [rbp+DCh]
  int v178; // [rsp+1E8h] [rbp+E8h]
  int v179; // [rsp+1F0h] [rbp+F0h] BYREF
  int v180; // [rsp+1F8h] [rbp+F8h]
  int v181; // [rsp+1FCh] [rbp+FCh]
  struct _D3DCOLORVALUE v182; // [rsp+200h] [rbp+100h] BYREF
  __int128 v183; // [rsp+210h] [rbp+110h] BYREF
  struct D2D_MATRIX_3X2_F v184; // [rsp+220h] [rbp+120h] BYREF
  __int128 v185; // [rsp+238h] [rbp+138h] BYREF
  __int64 v186; // [rsp+248h] [rbp+148h]
  __int128 v187; // [rsp+250h] [rbp+150h] BYREF
  __int64 v188; // [rsp+260h] [rbp+160h]
  _BYTE v189[4432]; // [rsp+270h] [rbp+170h] BYREF

  v1 = &v184;
  *((_BYTE *)this + 528) = 0;
  *((_BYTE *)this + 530) = 0;
  *(_OWORD *)&v184.m11 = *(_OWORD *)&_xmm;
  *(_QWORD *)&v184.m[2][0] = 0LL;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v189);
  v148 = 0LL;
  v3 = CDrawListCache::Create(&v148);
  v5 = v148;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x39u);
    goto LABEL_7;
  }
  v6 = *((_QWORD *)this + 64);
  v7 = *((_QWORD *)this + 63);
  v140 = v6;
  if ( v7 == v6 )
    goto LABEL_7;
  v8 = v6;
  while ( *(_DWORD *)v7 == 1 )
  {
    v1 = (struct D2D_MATRIX_3X2_F *)(v7 + 8);
    *((_BYTE *)this + 528) = 1;
LABEL_6:
    v7 += 56LL;
    if ( v7 == v8 )
      goto LABEL_7;
  }
  if ( *(_DWORD *)v7 == 2 )
  {
    v145 = 0;
    v15 = *(CGeometry **)(v7 + 8);
    v144 = 0LL;
    ShapeData = CGeometry::GetShapeData(v15, 0LL, (struct CShapePtr *)&v144);
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, ShapeData, 0x4Bu);
      CShapePtr::Release((CShapePtr *)&v144);
      goto LABEL_7;
    }
    if ( !v1 )
    {
      if ( *((_BYTE *)this + 530) )
      {
        CDrawingContext::PopTransformInternal(*((CDrawingContext **)this + 41), 1);
        *((_BYTE *)this + 530) = 0;
      }
      goto LABEL_37;
    }
    if ( *((_BYTE *)this + 528) )
    {
      if ( !*((_BYTE *)this + 530) )
      {
LABEL_35:
        m12 = v1->m12;
        v24 = (CDrawingContext *)*((_QWORD *)this + 41);
        m11 = v1->m11;
        m21 = v1->m21;
        v177 = 1065353216LL;
        v170 = m21;
        v168 = m12;
        m22 = v1->m22;
        v173 = _xmm;
        dy = v1->dy;
        v171 = m22;
        dx = v1->dx;
        v175 = dy;
        v174 = dx;
        v169 = 0LL;
        v172 = 0LL;
        v176 = 0;
        WORD2(v177) = 5124;
        v29 = CDrawingContext::PushTransformInternal(v24, 0LL, (const struct CMILMatrix *)&m11, 1, 1);
        v31 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x186u);
          MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0LL, v31, 0x50u);
          CShapePtr::Release((CShapePtr *)&v144);
          goto LABEL_7;
        }
        *((_BYTE *)this + 528) = 0;
        *((_BYTE *)this + 530) = 1;
LABEL_37:
        v32 = *((_QWORD *)this + 41);
        v183 = *(_OWORD *)(v7 + 16);
        v33 = *(_DWORD *)(v32 + 3104);
        if ( v33 )
          v34 = *(float *)(*(_QWORD *)(v32 + 3120) + 4LL * (unsigned int)(v33 - 1));
        else
          v34 = *(float *)&FLOAT_1_0;
        v35 = v144;
        *((float *)&v183 + 3) = *((float *)&v183 + 3) * v34;
        v155 = *(_QWORD *)(*(_QWORD *)(v32 + 40) + 328LL);
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v155 + 64LL))(v155, &v183);
        v36 = *v35;
        v141 = 0LL;
        v37 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, CGeometryOnlyDrawListBrush **))(v36 + 24))(v35, 0LL, &v141);
        v39 = v37;
        if ( v37 < 0 )
        {
          v136 = 2516;
        }
        else
        {
          v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v32 + 16) + 112LL))(v32 + 16);
          v39 = v37;
          if ( v37 >= 0 )
          {
            v40 = *(_DWORD *)(v32 + 328);
            v41 = *(_QWORD *)(v32 + 40);
            v138 = 0;
            if ( v40 )
            {
              v119 = v40 - 1;
              if ( v119 )
              {
                if ( v119 == 3 )
                  v138 = 2;
              }
              else
              {
                v138 = 1;
              }
            }
            else
            {
              v138 = 0;
            }
            v42 = *(_DWORD *)(v32 + 304) != 0;
            v43 = *(_QWORD *)(v41 + 152);
            v44 = (CGeometryOnlyDrawListBrush *)(v32 + 24);
            v153 = v141;
            v139 = (CGeometryOnlyDrawListBrush *)(v32 + 24);
            if ( v43 )
            {
              if ( *(_QWORD *)(v41 + 160) )
              {
                CBatchOptimizer::Flush(*(CBatchOptimizer **)(v41 + 160));
                v43 = *(_QWORD *)(v41 + 152);
                v44 = v139;
              }
              *(_DWORD *)(v43 + 52) = *(_DWORD *)(v41 + 48);
              *(_QWORD *)(v43 + 40) = 0LL;
              v120 = *(struct ID2D1PrivateCompositorRenderer **)(v41 + 152);
              *(_QWORD *)(v41 + 152) = 0LL;
              if ( v120 )
              {
                v121 = CD2DContext::DrawCustomCallbackRendererInternal((CD2DContext *)(v41 + 16), v120);
                if ( v121 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v122, 0LL, 0LL, v121, 0x21Eu);
                CMILRefCountBaseT<IMILRefCount>::InternalRelease((char *)v120 + 8);
                v44 = v139;
              }
            }
            v45 = 0;
            if ( !*(_BYTE *)(v41 + 453) )
            {
              v149 = 0LL;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
                McTemplateU0qq_EventWriteTransfer(
                  Microsoft_Windows_Dwm_Core_Provider_Context,
                  &EVTDESC_ETWGUID_DRAWEVENT_Start,
                  16LL,
                  0LL);
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v41 + 216) + 384LL))(*(_QWORD *)(v41 + 216));
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
                McTemplateU0qq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, "3", 16LL, 0LL);
              v107 = *(_DWORD *)(v41 + 368) == 0;
              LODWORD(v137) = 0;
              if ( !v107 )
              {
                v123 = (unsigned int)v137;
                v124 = v149;
                do
                {
                  v125 = *(CD2DTarget **)(*(_QWORD *)(v41 + 344) + 8LL * v123);
                  v149 = v125;
                  if ( v124 )
                    *((_BYTE *)v124 + 73) = 0;
                  CD2DTarget::ApplyState(v125, (struct CD2DContext *)(v41 + 16));
                  v124 = v149;
                  ++v123;
                }
                while ( v123 < *(_DWORD *)(v41 + 368) );
                v5 = v148;
              }
              v44 = v139;
              *(_BYTE *)(v41 + 453) = 1;
            }
            *(_BYTE *)(v41 + 454) = 1;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
            {
              v126 = (*(__int64 (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v44 + 24LL))(v44);
              McTemplateU0qq_EventWriteTransfer(
                Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_ETWGUID_DRAWEVENT_Start,
                3LL,
                v126);
              v44 = v139;
            }
            (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *, __int128 *))(*(_QWORD *)v44 + 8LL))(v44, &v185);
            (*(void (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(v41 + 216) + 240LL))(
              *(_QWORD *)(v41 + 216),
              &v185);
            if ( v138 != *(_DWORD *)(v41 + 412) )
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v41 + 216) + 624LL))(*(_QWORD *)(v41 + 216));
              *(_DWORD *)(v41 + 412) = v138;
            }
            if ( v42 != *(_DWORD *)(v41 + 408) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v41 + 216) + 256LL))(*(_QWORD *)(v41 + 216), v42);
              *(_DWORD *)(v41 + 408) = v42;
            }
            v187 = v185;
            v188 = v186;
            if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
            {
              v127 = (*(__int64 (__fastcall **)(CGeometryOnlyDrawListBrush *, __int128 *, int *))(*(_QWORD *)v153 + 32LL))(
                       v153,
                       &v187,
                       &v179);
              v45 = v127;
              v39 = v127;
              if ( v127 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v128, 0LL, 0LL, v127, 0x448u);
LABEL_153:
                MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0LL, v45, 0x9DCu);
LABEL_55:
                v47 = v141;
                if ( v141 )
                  (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v141 + 16LL))(v141);
                if ( v39 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v47, 0LL, 0LL, v39, 0x56u);
                  CShapePtr::Release((CShapePtr *)&v144);
                  goto LABEL_7;
                }
                if ( v145 && v144 )
                  (*(void (__fastcall **)(__int64 *, __int64))*v144)(v144, 1LL);
                v144 = 0LL;
                v145 = 0;
                goto LABEL_60;
              }
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
                McTemplateU0ffff_EventWriteTransfer(
                  (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
                  (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
                  v129,
                  v130,
                  v180,
                  v181);
            }
            (*(void (__fastcall **)(_QWORD, CGeometryOnlyDrawListBrush *, __int64, _QWORD))(**(_QWORD **)(v41 + 216)
                                                                                          + 184LL))(
              *(_QWORD *)(v41 + 216),
              v153,
              v155,
              0LL);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
            {
              v131 = (*(__int64 (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v139 + 24LL))(v139);
              McTemplateU0qq_EventWriteTransfer(Microsoft_Windows_Dwm_Core_Provider_Context, "3", 3LL, v131);
            }
            v39 = v45;
            if ( v45 >= 0 )
              goto LABEL_55;
            goto LABEL_153;
          }
          v136 = 2518;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0LL, v37, v136);
        goto LABEL_55;
      }
      v18 = *((_QWORD *)this + 41);
      v19 = *(_DWORD *)(v18 + 336);
      if ( v19 )
      {
        v20 = (unsigned int)(v19 - 1);
        *(_DWORD *)(v18 + 336) = v20;
        v156 = *(_OWORD *)(*(_QWORD *)(v18 + 352) + 16 * v20);
      }
      if ( *((_QWORD *)&v156 + 1) )
        CWatermarkStack<unsigned int,64,2,10>::Pop(v18 + 432);
      v21 = *(_DWORD *)(v18 + 368);
      if ( v21 )
        *(_DWORD *)(v18 + 368) = v21 - 1;
      v22 = *(_DWORD *)(v18 + 400);
      if ( v22 )
        *(_DWORD *)(v18 + 400) = v22 - 1;
      *((_BYTE *)this + 530) = 0;
    }
    if ( *((_BYTE *)this + 530) )
      goto LABEL_37;
    goto LABEL_35;
  }
  if ( *(_DWORD *)v7 == 3 )
  {
    v143 = 0;
    v48 = *(CGeometry **)(v7 + 8);
    v137 = 0LL;
    v142 = 0LL;
    v49 = CGeometry::GetShapeData(v48, 0LL, (struct CShapePtr *)&v142);
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0LL, v49, 0x62u);
LABEL_181:
      v132 = &v142;
      goto LABEL_182;
    }
    if ( !v1 )
    {
      if ( *((_BYTE *)this + 530) )
      {
        CDrawingContext::PopTransformInternal(*((CDrawingContext **)this + 41), 1);
        *((_BYTE *)this + 530) = 0;
      }
      goto LABEL_78;
    }
    if ( *((_BYTE *)this + 528) )
    {
      if ( !*((_BYTE *)this + 530) )
      {
LABEL_76:
        v56 = v1->m12;
        v57 = (CDrawingContext *)*((_QWORD *)this + 41);
        m11 = v1->m11;
        v58 = v1->m21;
        v177 = 1065353216LL;
        v170 = v58;
        v168 = v56;
        v59 = v1->m22;
        v173 = _xmm;
        v60 = v1->dy;
        v171 = v59;
        v61 = v1->dx;
        v175 = v60;
        v174 = v61;
        v169 = 0LL;
        v172 = 0LL;
        v176 = 0;
        WORD2(v177) = 5124;
        v62 = CDrawingContext::PushTransformInternal(v57, 0LL, (const struct CMILMatrix *)&m11, 1, 1);
        v64 = v62;
        if ( v62 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0LL, v62, 0x186u);
          MilInstrumentationCheckHR_MaybeFailFast(v133, 0LL, 0LL, v64, 0x67u);
          CShapePtr::Release((CShapePtr *)&v142);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v137);
          goto LABEL_7;
        }
        *((_BYTE *)this + 528) = 0;
        *((_BYTE *)this + 530) = 1;
LABEL_78:
        v65 = *(_QWORD *)(v7 + 32);
        v66 = v137;
        v67 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v65 + 344LL);
        if ( v137 )
        {
          v137 = 0LL;
          (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v66 + 16LL))(v66);
        }
        v68 = v67(v65, *((_QWORD *)this + 41), v7 + 16, &v137);
        if ( v68 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0LL, v68, 0x6Bu);
        }
        else
        {
          (*(void (**)(void))(*(_QWORD *)v137 + 32LL))();
          v70 = CDrawingContext::FillShapeWithBrush(*((CDrawingContext **)this + 41), v142, v137);
          if ( v70 >= 0 )
          {
            if ( v143 && v142 )
              (**(void (__fastcall ***)(struct CShape *, __int64))v142)(v142, 1LL);
            v72 = v137;
            v142 = 0LL;
            v143 = 0;
            if ( v137 )
            {
              v137 = 0LL;
              (*(void (__fastcall **)(CGeometryOnlyDrawListBrush *))(*(_QWORD *)v72 + 16LL))(v72);
              v8 = v140;
              goto LABEL_6;
            }
            goto LABEL_60;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0LL, v70, 0x6Fu);
        }
        goto LABEL_181;
      }
      v51 = *((_QWORD *)this + 41);
      v52 = *(_DWORD *)(v51 + 336);
      if ( v52 )
      {
        v53 = (unsigned int)(v52 - 1);
        *(_DWORD *)(v51 + 336) = v53;
        v157 = *(_OWORD *)(*(_QWORD *)(v51 + 352) + 16 * v53);
      }
      if ( *((_QWORD *)&v157 + 1) )
        CWatermarkStack<unsigned int,64,2,10>::Pop(v51 + 432);
      v54 = *(_DWORD *)(v51 + 368);
      if ( v54 )
        *(_DWORD *)(v51 + 368) = v54 - 1;
      v55 = *(_DWORD *)(v51 + 400);
      if ( v55 )
        *(_DWORD *)(v51 + 400) = v55 - 1;
      *((_BYTE *)this + 530) = 0;
    }
    if ( *((_BYTE *)this + 530) )
      goto LABEL_78;
    goto LABEL_76;
  }
  if ( *(_DWORD *)v7 != 4 )
  {
    if ( *(_DWORD *)v7 == 5 )
    {
      v84 = *(CGeometry **)(v7 + 8);
      v150 = 0LL;
      v151 = 0;
      v85 = CGeometry::GetShapeData(v84, 0LL, (struct CShapePtr *)&v150);
      if ( v85 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0LL, v85, 0xBBu);
      }
      else
      {
        v87 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
        if ( v87 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0LL, v87, 0xC0u);
        }
        else
        {
          v89 = *((_QWORD *)this + 41);
          *(struct _D3DCOLORVALUE *)&v182.r = *(struct _D3DCOLORVALUE *)(v7 + 16);
          v90 = *(_DWORD *)(v89 + 3104);
          if ( v90 )
            v91 = *(float *)(*(_QWORD *)(v89 + 3120) + 4LL * (unsigned int)(v90 - 1));
          else
            v91 = *(float *)&FLOAT_1_0;
          v92 = *(float *)(v7 + 32);
          v135 = *(struct ID2D1StrokeStyle1 **)(v7 + 40);
          v182.a = v182.a * v91;
          v93 = CDrawingContext::StrokeShapeWithColor((CDrawingContext *)v89, v150, &v182, v92, v135);
          if ( v93 >= 0 )
          {
            CShapePtr::Release((CShapePtr *)&v150);
            goto LABEL_60;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0LL, v93, 0xC9u);
        }
      }
      CShapePtr::Release((CShapePtr *)&v150);
      goto LABEL_7;
    }
    if ( *(_DWORD *)v7 == 6 )
    {
      v73 = *(CGeometry **)(v7 + 8);
      v137 = 0LL;
      v146 = 0LL;
      v147 = 0;
      v74 = CGeometry::GetShapeData(v73, 0LL, (struct CShapePtr *)&v146);
      if ( v74 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0LL, v74, 0xD5u);
      }
      else
      {
        v76 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, v1);
        if ( v76 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0LL, v76, 0xDAu);
        }
        else
        {
          v78 = *(_QWORD *)(v7 + 32);
          v79 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, CGeometryOnlyDrawListBrush **))(*(_QWORD *)v78
                                                                                                  + 344LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v137);
          v80 = v79(v78, *((_QWORD *)this + 41), v7 + 16, &v137);
          if ( v80 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0LL, v80, 0xDEu);
          }
          else
          {
            (*(void (**)(void))(*(_QWORD *)v137 + 32LL))();
            v82 = CDrawingContext::StrokeShapeWithBrush(
                    *((CDrawingContext **)this + 41),
                    v146,
                    v137,
                    *(float *)(v7 + 40),
                    *(struct ID2D1StrokeStyle1 **)(v7 + 48));
            if ( v82 >= 0 )
            {
              CShapePtr::Release((CShapePtr *)&v146);
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v137);
              goto LABEL_60;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0LL, v82, 0xE4u);
          }
        }
      }
      v132 = &v146;
LABEL_182:
      CShapePtr::Release((CShapePtr *)v132);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v137);
      goto LABEL_7;
    }
LABEL_60:
    v8 = v140;
    goto LABEL_6;
  }
  v95 = *(float *)(v7 + 16) - *(float *)(v7 + 8);
  v96 = *(float *)(v7 + 20) - *(float *)(v7 + 12);
  v97 = (struct CDrawingContext *)*((_QWORD *)this + 41);
  v137 = 0LL;
  v152.width = v95;
  v152.height = v96;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)&m11, v97, &v152);
  v98 = (*(__int64 (__fastcall **)(_QWORD, FLOAT *))(**(_QWORD **)(v7 + 24) + 320LL))(*(_QWORD *)(v7 + 24), &m11);
  if ( v98 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0LL, v98, 0x80u);
    goto LABEL_175;
  }
  v100 = CShapeDrawingContext::ApplyTransformToDrawingContext(this, 0LL);
  if ( v100 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v101, 0LL, 0LL, v100, 0x82u);
    goto LABEL_175;
  }
  if ( v178 )
  {
LABEL_112:
    v105 = *(_DWORD *)(v7 + 12);
    *(_OWORD *)v164 = *(_OWORD *)&_xmm;
    v165 = *(_DWORD *)(v7 + 8);
    v166 = v105;
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v158,
      (const struct D2D1::Matrix3x2F *)v164,
      (const struct D2D1::Matrix3x2F *)v1);
    v107 = *((_BYTE *)v106 + 52) == 0;
    v108 = v159;
    *(_OWORD *)((char *)v106 + 8) = v158;
    *((_QWORD *)v106 + 3) = v108;
    if ( !v107 )
    {
      v164[1] = 0LL;
      v164[0] = (struct CGeometryOnlyDrawListBrush *)&v137;
      LOBYTE(v165) = 1;
      v110 = CGeometryOnlyDrawListBrush::Create(&v164[1]);
      if ( (_BYTE)v165 )
      {
        v109 = *(CGeometryOnlyDrawListBrush **)v164[0];
        *(_QWORD *)v164[0] = v164[1];
        if ( v109 )
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v109, 1);
      }
      if ( v110 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v109, 0LL, 0LL, v110, 0x9Du);
        goto LABEL_175;
      }
      v106 = v137;
    }
    v154.m128_u64[0] = 0LL;
    v111 = v154;
    *((_BYTE *)v106 + 52) = 1;
    *((_DWORD *)v106 + 12) = 50529027;
    v112 = _mm_shuffle_ps(v111, v111, 210);
    v112.m128_f32[0] = v95;
    v160[1] = 0LL;
    v113 = _mm_shuffle_ps(v112, v112, 39);
    v113.m128_f32[0] = v96;
    v161 = 0;
    v114 = _mm_shuffle_ps(v113, v113, 57);
    *((__m128 *)v106 + 2) = v114;
    v160[0] = v137;
    v154 = v114;
    v162 = 257;
    v163 = 0;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&m11,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v160,
                 (struct CDrawListEntryBuilder *)v189);
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0LL, DrawList, 0xACu);
      goto LABEL_175;
    }
    CDrawListCache::Update(v5, *((struct CDrawingContext **)this + 41), (struct CDrawListEntryBuilder *)v189);
    v117 = CDrawingContext::EmitDrawListCache(*((CDrawingContext **)this + 41), v5);
    if ( v117 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0LL, v117, 0xAFu);
      goto LABEL_175;
    }
    CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)v189);
    CDrawListCache::Invalidate(v5);
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&m11);
    if ( v137 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v137, 1);
    goto LABEL_60;
  }
  v139 = 0LL;
  v164[0] = (struct CGeometryOnlyDrawListBrush *)&v139;
  v164[1] = 0LL;
  LOBYTE(v165) = 1;
  v103 = CGeometryOnlyDrawListBrush::Create(&v164[1]);
  if ( (_BYTE)v165 )
  {
    v102 = *(CGeometryOnlyDrawListBrush **)v164[0];
    *(_QWORD *)v164[0] = v164[1];
    if ( v102 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v102, 1);
  }
  if ( v103 >= 0 )
  {
    v141 = v139;
    v139 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&m11, 0, &v141);
    if ( v141 )
      std::default_delete<CDrawListBrush>::operator()(v104, (__int64 (__fastcall ***)(_QWORD, __int64))v141);
    if ( v139 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v139, 1);
    goto LABEL_112;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v102, 0LL, 0LL, v103, 0x88u);
  if ( v139 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v139, 1);
LABEL_175:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&m11);
  if ( v137 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v137, 1);
LABEL_7:
  if ( *((_BYTE *)this + 530) )
  {
    v9 = *((_QWORD *)this + 41);
    v10 = *(_DWORD *)(v9 + 336);
    if ( v10 )
    {
      v11 = (unsigned int)(v10 - 1);
      *(_DWORD *)(v9 + 336) = v11;
      v156 = *(_OWORD *)(*(_QWORD *)(v9 + 352) + 16 * v11);
    }
    if ( *((_QWORD *)&v156 + 1) )
      CWatermarkStack<unsigned int,64,2,10>::Pop(v9 + 432);
    v12 = *(_DWORD *)(v9 + 368);
    if ( v12 )
      *(_DWORD *)(v9 + 368) = v12 - 1;
    v13 = *(_DWORD *)(v9 + 400);
    if ( v13 )
      *(_DWORD *)(v9 + 400) = v13 - 1;
    *((_BYTE *)this + 530) = 0;
  }
  if ( v5 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v5);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v189);
  return 0LL;
}

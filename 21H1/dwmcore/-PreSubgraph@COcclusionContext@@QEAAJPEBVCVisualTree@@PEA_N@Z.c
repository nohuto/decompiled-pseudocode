/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005CE00
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180062E20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x180006400 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180006448 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18000C84C (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18001825C (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18002C9E8 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180054780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x1800591F0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18005C3D0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006FEEC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180084CC0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800AB79C (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180226680 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  bool v6; // r13
  __int64 v8; // r14
  __int64 *v9; // rbx
  _QWORD *v10; // rbx
  unsigned int v11; // r12d
  struct CComposition *v12; // r8
  _BYTE *v13; // rax
  float *v14; // rdx
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  CMILMatrix *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm5_4
  float v25; // xmm2_4
  int v26; // eax
  float v27; // xmm0_4
  __int32 v28; // xmm3_4
  float v29; // xmm7_4
  __int32 v30; // xmm4_4
  float v31; // xmm6_4
  __int32 v32; // xmm1_4
  float v33; // xmm2_4
  unsigned __int64 v34; // rdx
  unsigned int m; // ecx
  float v36; // xmm3_4
  float v37; // xmm9_4
  float *v38; // rax
  float v39; // xmm6_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  bool v42; // bl
  bool v43; // r13
  _DWORD *v44; // r8
  char v45; // al
  _DWORD *v46; // r8
  float v47; // xmm6_4
  __int64 v48; // rax
  float v49; // xmm1_4
  _DWORD *v50; // r8
  bool v51; // bl
  _BYTE *v52; // rbx
  _DWORD *v53; // r8
  int v54; // ecx
  __int64 v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // eax
  _BYTE *v58; // rax
  char *v59; // rbx
  int v60; // r13d
  __int64 v61; // rax
  __int64 i1; // rcx
  char *v63; // r12
  CVisual **v64; // rax
  struct CTreeData *v65; // rbx
  _BYTE *v66; // rdx
  _DWORD *v67; // r8
  unsigned __int64 v68; // rax
  __m128 v69; // xmm6
  __int64 v70; // rdx
  int v71; // eax
  __m128 v72; // xmm7
  __m128 v73; // xmm8
  __m128 v74; // xmm9
  int v75; // ebx
  CGeometry *v76; // rcx
  __int64 v77; // rcx
  int v78; // eax
  __int64 result; // rax
  __int64 v80; // rax
  void **v81; // r12
  unsigned int mm; // r14d
  unsigned int v83; // edx
  __int64 v84; // rcx
  char v85; // dl
  float v86; // xmm1_4
  float v87; // xmm5_4
  float v88; // xmm2_4
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // r12d
  __int64 v93; // rdx
  int v94; // eax
  unsigned int v95; // eax
  __int64 v96; // rax
  _BYTE *v97; // rdx
  __int64 kk; // rcx
  __int64 *v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int128 v102; // xmm1
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  int v105; // eax
  __int64 v106; // rcx
  int v107; // r12d
  void (__fastcall ***v108)(_QWORD, __int64); // rcx
  char v109; // bl
  CGeometry *v110; // rcx
  int ShapeData; // eax
  __int64 v112; // rcx
  int v113; // r12d
  __int64 v114; // rcx
  int v115; // eax
  int v116; // eax
  __int128 v117; // xmm0
  __int64 v118; // rcx
  unsigned int v119; // eax
  unsigned int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rcx
  unsigned int v123; // eax
  unsigned int v124; // eax
  __int64 v125; // rcx
  bool v126; // zf
  __int64 v127; // rcx
  unsigned int v128; // eax
  unsigned int v129; // eax
  __int128 *v130; // r13
  void *v131; // rbx
  _BYTE *v132; // rax
  __int64 v133; // r8
  _BYTE *v134; // r9
  _DWORD *v135; // r8
  unsigned __int8 IsEqual; // al
  __int64 v137; // rax
  _BYTE *v138; // rdx
  __int64 n; // rcx
  _QWORD *v140; // rcx
  __int64 v141; // rax
  _BYTE *v142; // rdx
  unsigned int ii; // ecx
  float **v144; // rbx
  float *v145; // rbx
  __int64 v146; // rax
  _BYTE *v147; // rdx
  unsigned int jj; // ecx
  CFilterEffect **v149; // rbx
  CFilterEffect *v150; // rbx
  __int64 v151; // r8
  __int64 v152; // rax
  _BYTE *v153; // rdx
  __int64 i; // rcx
  __int64 ****v155; // rax
  __int64 ***v156; // rax
  __int64 **j; // rcx
  __int64 v158; // r8
  __int64 v159; // rax
  _BYTE *v160; // rdx
  __int64 k; // rcx
  _QWORD **v162; // rax
  _QWORD *v163; // rax
  _QWORD *v164; // rcx
  __int64 *TreeDataListHead; // rax
  __int64 *v166; // rax
  __int64 v167; // rcx
  unsigned int nn; // r9d
  _QWORD **v169; // rcx
  _QWORD *v170; // rcx
  CVisual *v171; // rax
  struct CTreeData *TreeData; // rax
  __int64 v173; // rdx
  _BYTE *LightAtNoRef; // rax
  int v175; // eax
  int v176; // edx
  int *v177; // rcx
  __int64 v178; // rax
  _BYTE *v179; // rdx
  _QWORD *v180; // rax
  unsigned int v181; // r12d
  int v182; // eax
  __int64 v183; // rcx
  unsigned __int64 v184; // rcx
  void *v185; // rbx
  unsigned int v186; // eax
  int v187; // eax
  unsigned __int64 v188; // rax
  void *v189; // rbx
  unsigned int v190; // r12d
  int v191; // eax
  __int64 v192; // rcx
  unsigned __int64 v193; // rax
  void *v194; // rbx
  unsigned int v195; // r12d
  __int64 v196; // rcx
  unsigned __int64 v197; // rax
  void *v198; // rbx
  unsigned int v199; // r12d
  int v200; // eax
  __int64 v201; // rcx
  void *v202; // rbx
  float v203; // xmm1_4
  void *v204; // rbx
  HANDLE ProcessHeap; // rax
  CComposition *v206; // rbx
  int ManipulationManager; // eax
  __int64 v208; // rcx
  void *v209; // rbx
  HANDLE v210; // rax
  __int64 v211; // rcx
  void *v212; // rbx
  HANDLE v213; // rax
  __int64 v214; // rcx
  void *v215; // r12
  HANDLE v216; // rax
  void *v217; // rbx
  HANDLE v218; // rax
  bool v219; // [rsp+40h] [rbp-C0h]
  int v220; // [rsp+44h] [rbp-BCh]
  char v221; // [rsp+48h] [rbp-B8h] BYREF
  bool v222; // [rsp+49h] [rbp-B7h] BYREF
  char v223; // [rsp+4Ah] [rbp-B6h] BYREF
  char v224; // [rsp+4Bh] [rbp-B5h]
  void *lpMem[2]; // [rsp+50h] [rbp-B0h] BYREF
  __m128 v226; // [rsp+60h] [rbp-A0h]
  __m128 v227; // [rsp+70h] [rbp-90h]
  __m128 v228; // [rsp+80h] [rbp-80h]
  __m128 v229; // [rsp+90h] [rbp-70h]
  int v230; // [rsp+A0h] [rbp-60h]
  _BYTE v231[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v232; // [rsp+F0h] [rbp-10h]
  _BYTE v233[64]; // [rsp+100h] [rbp+0h] BYREF
  int v234; // [rsp+140h] [rbp+40h]
  _BYTE v235[64]; // [rsp+150h] [rbp+50h] BYREF
  int v236; // [rsp+190h] [rbp+90h]
  CVisual *v237[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v238; // [rsp+1B0h] [rbp+B0h] BYREF
  __m128 v239; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v240; // [rsp+1D0h] [rbp+D0h]

  v3 = *((_QWORD *)this + 8);
  v126 = *((_DWORD *)this + 365) == 0;
  LODWORD(v237[0]) = *((_DWORD *)this + 365);
  v5 = *(_QWORD *)a2;
  v6 = v126;
  lpMem[0] = a3;
  v220 = 0;
  v219 = v126;
  v8 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v5 + 200))(a2) )
  {
    v9 = (__int64 *)(v3 + 320);
LABEL_3:
    if ( v9 )
    {
      v8 = v9[4];
      if ( !v8 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9[3] + 352LL))(v9[3]);
        v9[4] = v8;
      }
    }
    goto LABEL_6;
  }
  v151 = *(_QWORD *)(v3 + 224);
  if ( *(int *)v151 < 0 )
  {
    v152 = *(unsigned int *)(v151 + 4);
    v153 = (_BYTE *)(v151 + 8);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v152; ++v153 )
    {
      if ( *v153 == 1 )
        break;
      i = (unsigned int)(i + 1);
    }
    v155 = (unsigned int)i >= (unsigned int)v152
         ? 0LL
         : (__int64 ****)(v151 + v152 + 15 + 8 * i - (((_BYTE)v152 + 15) & 7));
    v156 = *v155;
    if ( v156 )
    {
      for ( j = *v156; j != (__int64 **)v156; j = (__int64 **)*j )
      {
        v9 = (__int64 *)(j - 36);
        if ( j[4] == (__int64 *)a2 )
          goto LABEL_3;
      }
    }
  }
LABEL_6:
  *(_QWORD *)&v238 = *((_QWORD *)this + 9);
  v10 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
  {
    v10 = (_QWORD *)(v3 + 320);
  }
  else
  {
    v158 = *(_QWORD *)(v3 + 224);
    if ( *(int *)v158 < 0 )
    {
      v159 = *(unsigned int *)(v158 + 4);
      v160 = (_BYTE *)(v158 + 8);
      for ( k = 0LL; (unsigned int)k < (unsigned int)v159; ++v160 )
      {
        if ( *v160 == 1 )
          break;
        k = (unsigned int)(k + 1);
      }
      v162 = (unsigned int)k >= (unsigned int)v159
           ? 0LL
           : (_QWORD **)(v159 + 15 + v158 + 8 * k - (((_BYTE)v159 + 15) & 7));
      v163 = *v162;
      if ( v163 )
      {
        v164 = (_QWORD *)*v163;
        if ( (_QWORD *)*v163 != v163 )
        {
          while ( (const struct CVisualTree *)v164[4] != a2 )
          {
            v164 = (_QWORD *)*v164;
            if ( v164 == v163 )
              goto LABEL_8;
          }
          v10 = v164 - 36;
        }
      }
    }
  }
LABEL_8:
  v11 = -1;
  if ( !v8 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x101u, 0LL);
    return 2147942414LL;
  }
  *(_BYTE *)(v8 + 8) &= 0xF0u;
  v12 = g_pComposition;
  *(_DWORD *)(v8 + 12) = *((_DWORD *)this + 364);
  v13 = lpMem[0];
  *(_BYTE *)lpMem[0] = 1;
  if ( !*((_BYTE *)v12 + 1129) || (*(_BYTE *)(v3 + 95) & 4) == 0 )
  {
    v14 = (float *)((char *)a2 + 64);
    if ( v3 != *((_QWORD *)a2 + 7) )
      v14 = (float *)(v3 + 140);
    v15 = (v14[5] <= v14[4]) + 1;
    if ( v14[2] > *v14 )
      v15 = v14[5] <= v14[4];
    v16 = v15 + 1;
    if ( v14[3] > v14[1] )
      v16 = v15;
    if ( v16 <= 1 )
    {
      v17 = *((_DWORD *)this + 376);
      if ( v17 )
        v11 = *(_DWORD *)(*((_QWORD *)this + 190) + 4LL * (unsigned int)(v17 - 1));
      if ( !v11 )
        goto LABEL_122;
      v18 = *((_DWORD *)this + 6);
      v240 = 0LL;
      v239 = 0LL;
      if ( v18 )
        v19 = (CMILMatrix *)(*((_QWORD *)this + 5) + 68LL * (unsigned int)(v18 - 1));
      else
        v19 = (CMILMatrix *)&CMILMatrix::Identity;
      v20 = *((_QWORD *)this + 1);
      v21 = v20 + 64;
      if ( v3 != *(_QWORD *)(v20 + 56) )
        v21 = v3 + 140;
      CMILMatrix::Transform3DBoundsHelper<1>(v19, v21, &v239);
      v22 = v239.m128_f32[2];
      v23 = v239.m128_f32[0];
      if ( v239.m128_f32[2] > v239.m128_f32[0] )
      {
        v24 = v239.m128_f32[3];
        v25 = v239.m128_f32[1];
        if ( v239.m128_f32[3] > v239.m128_f32[1] )
        {
          v26 = *((_DWORD *)this + 34);
          if ( v26 )
          {
            v239 = *(__m128 *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v26 - 1));
            v27 = v239.m128_f32[0];
            if ( v23 > v239.m128_f32[0] )
              v27 = v23;
            v28 = v239.m128_i32[1];
            v29 = v239.m128_f32[1];
            if ( v25 > v239.m128_f32[1] )
            {
              *(float *)&v28 = v25;
              v29 = v25;
            }
            v30 = v239.m128_i32[2];
            v31 = v239.m128_f32[2];
            if ( v239.m128_f32[2] > v22 )
            {
              *(float *)&v30 = v22;
              v31 = v22;
            }
            v32 = v239.m128_i32[3];
            v33 = v239.m128_f32[3];
            if ( v239.m128_f32[3] > v24 )
            {
              *(float *)&v32 = v24;
              v33 = v24;
            }
            if ( v31 <= v27 || v33 <= v29 )
            {
              *(float *)&v32 = 0.0;
              *(float *)&v30 = 0.0;
              *(float *)&v28 = 0.0;
              v27 = 0.0;
            }
            v23 = v27;
            v25 = *(float *)&v28;
            v22 = *(float *)&v30;
            v24 = *(float *)&v32;
          }
          v34 = *((_QWORD *)this + 133);
          for ( m = 0; m < v34; ++m )
          {
            if ( ((v11 >> m) & 1) != 0 )
            {
              v36 = v23;
              v37 = v25;
              v38 = (float *)((char *)this + 16 * m + 1072);
              if ( *v38 > v23 )
                v36 = *v38;
              v39 = v25;
              if ( v38[1] > v25 )
              {
                v37 = v38[1];
                v39 = v37;
              }
              v40 = v22;
              if ( v22 > v38[2] )
                v40 = v38[2];
              v41 = v24;
              if ( v24 > v38[3] )
                v41 = v38[3];
              if ( v40 > v36 && v41 > v39 && v40 > v36 && v41 > v37 )
              {
                if ( LODWORD(v237[0]) )
                  goto LABEL_74;
                if ( (*(_BYTE *)(v3 + 94) & 4) == 0
                  && (*(_DWORD *)(v3 + 88) & 0x100) != 0
                  && (*(_BYTE *)(v3 + 93) & 0x60) == 0
                  && ((*(_DWORD *)(v3 + 192) - 2) & 0xFFFFFFFD) != 0 )
                {
                  v42 = *(_DWORD *)(v3 + 100) == 1;
                  v43 = (_QWORD)v238 && *(_DWORD *)(v238 + 100) == 1;
                  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 224LL))(v3) )
                    goto LABEL_233;
                  v44 = *(_DWORD **)(v3 + 224);
                  if ( (*v44 & 0x400000) == 0 )
                    goto LABEL_62;
                  v137 = (unsigned int)v44[1];
                  v138 = v44 + 2;
                  for ( n = 0LL; (unsigned int)n < (unsigned int)v137; ++v138 )
                  {
                    if ( *v138 == 10 )
                      break;
                    n = (unsigned int)(n + 1);
                  }
                  v140 = (unsigned int)n >= (unsigned int)v137
                       ? 0LL
                       : (_QWORD *)((char *)v44 + 8 * n - (((_BYTE)v137 + 15) & 7) + v137 + 15);
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v140 + 56LL))(*v140, 59LL) )
LABEL_233:
                    v45 = 1;
                  else
LABEL_62:
                    v45 = 0;
                  if ( v42 )
                  {
                    if ( v43 )
                    {
                      if ( !v45 )
                        goto LABEL_64;
                    }
                    else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 72)) )
                    {
                      goto LABEL_64;
                    }
                  }
                  else
                  {
LABEL_64:
                    v46 = *(_DWORD **)(v3 + 224);
                    v47 = *(float *)&FLOAT_1_0;
                    if ( (*v46 & 0x400000) != 0 )
                    {
                      v141 = (unsigned int)v46[1];
                      v142 = v46 + 2;
                      for ( ii = 0; ii < (unsigned int)v141; ++v142 )
                      {
                        if ( *v142 == 10 )
                          break;
                        ++ii;
                      }
                      if ( ii >= (unsigned int)v141 )
                        v144 = 0LL;
                      else
                        v144 = (float **)((char *)v46 + 8LL * ii - (((_BYTE)v141 + 15) & 7) + v141 + 15);
                      v145 = *v144;
                      if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v145 + 56LL))(v145, 56LL) )
                        v47 = v145[18];
                    }
                    if ( fminf(1.0, fmaxf(v47, 0.0)) >= 1.0 )
                    {
                      if ( v3 == *((_QWORD *)a2 + 7) )
                        goto LABEL_436;
                      v48 = *(_QWORD *)(v3 + 216);
                      if ( (*(_DWORD *)(v48 + 4) & 0x8000000) != 0 )
                      {
                        v176 = *(_DWORD *)(v48 + 12);
                        v177 = (int *)(v48 + 12);
                        if ( (v176 & 0x7F000000) != 0x5000000 )
                        {
                          do
                          {
                            v177 = (int *)((char *)v177 + (v176 & 0xFFFFFF) + 4);
                            v176 = *v177;
                          }
                          while ( (*v177 & 0x7F000000) != 0x5000000 );
                        }
                        LODWORD(v237[0]) = v177[1];
                        v49 = *(float *)v237;
                      }
                      else
                      {
                        v49 = *(float *)&FLOAT_1_0;
                      }
                      if ( fminf(1.0, fmaxf(v49, 0.0)) >= 1.0 )
                      {
LABEL_436:
                        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 224LL))(v3) )
                        {
                          v50 = *(_DWORD **)(v3 + 224);
                          if ( (*v50 & 0x400000) == 0 )
                            goto LABEL_72;
                          v146 = (unsigned int)v50[1];
                          v147 = v50 + 2;
                          for ( jj = 0; jj < (unsigned int)v146; ++v147 )
                          {
                            if ( *v147 == 10 )
                              break;
                            ++jj;
                          }
                          v149 = jj >= (unsigned int)v146
                               ? 0LL
                               : (CFilterEffect **)((char *)v50 + 8LL * jj - (((_BYTE)v146 + 15) & 7) + v146 + 15);
                          v150 = *v149;
                          if ( !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v150 + 56LL))(
                                  v150,
                                  59LL)
                            || CFilterEffect::IsOpaque(v150, (const struct CVisual *)v3) )
                          {
LABEL_72:
                            v51 = 0;
                            if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
                            {
                              TreeData = CVisual::FindTreeData((CVisual *)v3, a2);
                              if ( TreeData )
                              {
                                v173 = 0LL;
                                if ( g_pComposition )
                                  v173 = *((_QWORD *)g_pComposition + 44);
                                if ( *((_BYTE *)TreeData + 18) )
                                  v51 = *((_QWORD *)TreeData + 35) == v173;
                              }
                            }
                            v6 = v219;
                            if ( !v51 )
                            {
LABEL_74:
                              v52 = lpMem[0];
                              goto LABEL_75;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                v6 = 0;
                v219 = 0;
                goto LABEL_74;
              }
              v11 &= ~(1 << m);
            }
          }
        }
      }
      v12 = g_pComposition;
    }
    v11 = 0;
LABEL_122:
    v6 = 0;
    v80 = 0LL;
    v219 = 0;
    if ( v12 )
      v80 = *((_QWORD *)v12 + 44);
    v126 = v10[1] == v80;
    v52 = lpMem[0];
    if ( !v126 )
      *(_BYTE *)lpMem[0] = 0;
LABEL_75:
    v53 = *(_DWORD **)(v3 + 224);
    if ( (*v53 & 0x2000000) != 0 )
      goto LABEL_160;
    v54 = *(_DWORD *)(*(_QWORD *)(v3 + 216) + 4LL);
    if ( (v54 & 0x2000000) != 0 || (v54 & 0x4000000) != 0 )
      goto LABEL_160;
    if ( (*v53 & 0x400000) != 0 )
    {
      v96 = (unsigned int)v53[1];
      v97 = v53 + 2;
      for ( kk = 0LL; (unsigned int)kk < (unsigned int)v96; ++v97 )
      {
        if ( *v97 == 10 )
          break;
        kk = (unsigned int)(kk + 1);
      }
      v99 = (unsigned int)kk >= (unsigned int)v96
          ? 0LL
          : (__int64 *)((char *)v53 + v96 + 8 * kk - (((_BYTE)v96 + 15) & 7) + 15);
      v100 = *v99;
      if ( v100 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v100 + 56LL))(v100, 59LL) )
          goto LABEL_160;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 91LL)
      && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 224LL))(v3) || *(_QWORD *)(v3 + 616)) )
    {
LABEL_160:
      ++*((_DWORD *)this + 366);
    }
    if ( *v52 != 1 )
      goto LABEL_113;
    v55 = *((unsigned int *)this + 377);
    v56 = *((_DWORD *)this + 376);
    lpMem[0] = 0LL;
    if ( v56 != (_DWORD)v55 )
      goto LABEL_82;
    v186 = 2 * v55;
    v237[0] = (CVisual *)(2 * v55);
    if ( (unsigned __int64)(2 * v55) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_85;
    }
    if ( v186 <= 0x40 )
    {
      v186 = 64;
      v237[0] = (CVisual *)64;
    }
    v187 = HrMalloc(4uLL, v186, lpMem);
    if ( v187 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v187, 0x53u, 0LL);
    }
    else
    {
      v188 = 4LL * *((unsigned int *)this + 376);
      if ( v188 <= 0xFFFFFFFF )
      {
        v189 = lpMem[0];
        memcpy_0(lpMem[0], *((const void **)this + 190), (unsigned int)v188);
        operator delete(*((void **)this + 190));
        *((_DWORD *)this + 377) = v237[0];
        v56 = *((_DWORD *)this + 376);
        *((_QWORD *)this + 190) = v189;
LABEL_82:
        *(_DWORD *)(*((_QWORD *)this + 190) + 4LL * v56) = v11;
        v57 = *((_DWORD *)this + 382);
        if ( v57 <= ++*((_DWORD *)this + 376) )
          v57 = *((_DWORD *)this + 376);
        *((_DWORD *)this + 382) = v57;
        goto LABEL_85;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v204 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v204);
    }
LABEL_85:
    *(_BYTE *)(v8 + 8) |= 1u;
    if ( !v11 )
    {
LABEL_113:
      if ( v6
        && ((unsigned int)((__int64)(*(_QWORD *)(v3 + 280) - *(_QWORD *)(v3 + 272)) >> 4)
         || (unsigned int)((__int64)(*(_QWORD *)(v3 + 304) - *(_QWORD *)(v3 + 296)) >> 4)) )
      {
        lpMem[0] = (void *)0x100000000LL;
        v81 = lpMem;
LABEL_129:
        for ( mm = 0; ; ++mm )
        {
          if ( mm >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v3, *(_DWORD *)v81) )
          {
            v81 = (void **)((char *)v81 + 4);
            if ( v81 == &lpMem[1] )
              goto LABEL_114;
            goto LABEL_129;
          }
          LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v84, mm, v83);
          *(_QWORD *)&v238 = LightAtNoRef;
          if ( LightAtNoRef[162] )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                                 + 256LL))(
                   LightAtNoRef,
                   a2,
                   v3) )
            {
              v175 = CLightStack::Push((__int64)this + 168, v238, *(_DWORD *)v81);
              if ( v175 < 0 )
                break;
            }
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v175, 0x4Bu, 0LL);
      }
LABEL_114:
      result = (unsigned int)v220;
      if ( v220 < 0 )
        return result;
      goto LABEL_115;
    }
    v58 = v235;
    v59 = (char *)*((_QWORD *)this + 8);
    if ( !*(_QWORD *)(v3 + 240) )
      v58 = 0LL;
    v230 = 0;
    *(_QWORD *)&v238 = v58;
    v60 = -2003292412;
    v61 = *(_QWORD *)a2;
    v236 = 0;
    lpMem[0] = v59;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v61 + 200))(a2) )
    {
      v63 = v59 + 320;
    }
    else
    {
      TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v59);
      if ( !TreeDataListHead )
        goto LABEL_398;
      i1 = *TreeDataListHead;
      if ( (__int64 *)*TreeDataListHead == TreeDataListHead )
        goto LABEL_398;
      while ( 1 )
      {
        v63 = (char *)(i1 - 288);
        if ( *(const struct CVisualTree **)(i1 + 32) == a2 )
          break;
        i1 = *(_QWORD *)i1;
        if ( (__int64 *)i1 == TreeDataListHead )
          goto LABEL_398;
      }
    }
    if ( v63 )
    {
      v64 = (CVisual **)lpMem[0];
      v65 = 0LL;
      v60 = 0;
      v224 = 0;
      if ( lpMem[0] == *((void **)a2 + 7) )
        goto LABEL_247;
      v66 = 0LL;
      if ( g_pComposition )
        v66 = (_BYTE *)*((_QWORD *)g_pComposition + 44);
      if ( !v63[18] || *((_BYTE **)v63 + 35) != v66 )
      {
        v67 = (_DWORD *)*((_QWORD *)lpMem[0] + 28);
        if ( (*v67 & 0x1000000) != 0 )
        {
          v167 = (unsigned int)v67[1];
          v66 = v67 + 2;
          for ( nn = 0; nn < (unsigned int)v167; ++v66 )
          {
            if ( *v66 == 8 )
              break;
            ++nn;
          }
          if ( nn >= (unsigned int)v167 )
          {
            v169 = 0LL;
          }
          else
          {
            v66 = (_BYTE *)(v167 + 15);
            v64 = (CVisual **)lpMem[0];
            v169 = (_QWORD **)((char *)v67 + v167 + 8LL * nn - (((_BYTE)v167 + 15) & 7) + 15);
          }
          v170 = *v169;
          if ( v170 )
          {
            v171 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v170 + 200LL))(*v170);
            if ( v171 )
            {
              v224 = 1;
              v65 = CVisual::FindTreeData(v171, a2);
              goto LABEL_98;
            }
            v64 = (CVisual **)lpMem[0];
          }
        }
      }
      v237[0] = v64[10];
      v65 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, _BYTE *))(*(_QWORD *)a2 + 200LL))(a2, v66) )
      {
        v65 = (CVisual *)((char *)v237[0] + 320);
      }
      else
      {
        v166 = (__int64 *)CVisual::GetTreeDataListHead(v237[0]);
        if ( v166 )
        {
          i1 = *v166;
          if ( (__int64 *)*v166 != v166 )
          {
            while ( *(const struct CVisualTree **)(i1 + 32) != a2 )
            {
              i1 = *(_QWORD *)i1;
              if ( (__int64 *)i1 == v166 )
                goto LABEL_98;
            }
            v65 = (struct CTreeData *)(i1 - 288);
          }
        }
      }
LABEL_98:
      if ( v65 )
      {
        v68 = *((_QWORD *)v65 + 15);
LABEL_100:
        if ( *((_QWORD *)v63 + 15) < v68 )
        {
          v130 = (__int128 *)((char *)v65 + 40);
          v126 = v65 == 0LL;
          v232 = 0;
          v131 = lpMem[0];
          v132 = v233;
          if ( v126 )
            v130 = 0LL;
          v234 = 0;
          if ( !*((_QWORD *)lpMem[0] + 30) )
            v132 = 0LL;
          CVisual::CalcCpuClippingTransform(
            (__int64)lpMem[0],
            5,
            (__int64)a2,
            v130,
            &v223,
            (CMILMatrix *)v231,
            (__int64)v132);
          if ( v224 || !v130 )
          {
            LOBYTE(v133) = 1;
          }
          else if ( v223 )
          {
            IsEqual = CMILMatrix::IsEqualTo<0>(v130, v231);
            v133 = IsEqual;
            LOBYTE(v133) = IsEqual ^ 1;
          }
          else
          {
            LOBYTE(v133) = 0;
          }
          v134 = v233;
          if ( !*((_QWORD *)v131 + 30) )
            v134 = 0LL;
          v60 = (*(__int64 (__fastcall **)(char *, _BYTE *, __int64, _BYTE *))(*(_QWORD *)v63 + 48LL))(
                  v63,
                  v231,
                  v133,
                  v134);
          if ( v60 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(i1, 0LL, 0, v60, 0x7D2u, 0LL);
          }
          else
          {
            v135 = (_DWORD *)*((_QWORD *)v131 + 28);
            if ( (*v135 & 0x800000) != 0 )
            {
              v178 = (unsigned int)v135[1];
              v179 = v135 + 2;
              for ( i1 = 0LL; (unsigned int)i1 < (unsigned int)v178; ++v179 )
              {
                if ( *v179 == 9 )
                  break;
                i1 = (unsigned int)(i1 + 1);
              }
              if ( (unsigned int)i1 >= (unsigned int)v178 )
              {
                v180 = 0LL;
              }
              else
              {
                i1 = 8 * i1 - (((_BYTE)v178 + 15) & 7);
                v180 = (_QWORD *)((char *)v135 + i1 + v178 + 15);
              }
              if ( *v180 && (*((_BYTE *)v131 + 94) & 1) != 0 )
              {
                v206 = (CComposition *)*((_QWORD *)v131 + 2);
                v237[0] = 0LL;
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v237);
                ManipulationManager = CComposition::GetManipulationManager(v206, v237);
                if ( ManipulationManager >= 0 )
                  CManipulationManager::NotifyVisualPropertyChange(
                    v237[0],
                    (struct CVisual *)lpMem[0],
                    (const struct CMILMatrix *)v231);
                Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v237);
              }
            }
          }
          if ( v60 >= 0 )
            goto LABEL_102;
          MilInstrumentationCheckHR_MaybeFailFast(i1, 0LL, 0, v60, 0x793u, 0LL);
        }
        if ( v60 >= 0 )
        {
LABEL_102:
          if ( !*((_QWORD *)v63 + 15) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(i1, 0LL, 0, -2003292412, 0x65u, 0LL);
            v60 = -2003292412;
            MilInstrumentationCheckHR_MaybeFailFast(v208, 0LL, 0, -2003292412, 0x6E2u, 0LL);
            v220 = -2003292412;
            goto LABEL_396;
          }
          v69 = *(__m128 *)(v63 + 56);
          v70 = v238;
          v71 = *((_DWORD *)v63 + 26);
          i1 = (unsigned __int8)v63[17];
          v227 = v69;
          v230 = v71;
          v72 = *(__m128 *)(v63 + 88);
          v73 = *(__m128 *)(v63 + 40);
          v229 = v72;
          v74 = *(__m128 *)(v63 + 72);
          if ( (_QWORD)v238 )
          {
            v101 = *((_QWORD *)v63 + 14);
            v102 = *(_OWORD *)(v101 + 16);
            *(_OWORD *)v238 = *(_OWORD *)v101;
            v103 = *(_OWORD *)(v101 + 32);
            *(_OWORD *)(v70 + 16) = v102;
            v104 = *(_OWORD *)(v101 + 48);
            LODWORD(v101) = *(_DWORD *)(v101 + 64);
            *(_OWORD *)(v70 + 32) = v103;
            *(_OWORD *)(v70 + 48) = v104;
            *(_DWORD *)(v70 + 64) = v101;
          }
          v75 = 0;
          v223 = i1;
          v60 = 0;
LABEL_106:
          v220 = v60;
          if ( v60 >= 0 )
          {
            if ( !v223 )
              goto LABEL_108;
            v6 = v219;
            if ( !v219 )
            {
LABEL_145:
              v89 = *((unsigned int *)this + 6);
              v90 = *((unsigned int *)this + 7);
              lpMem[0] = 0LL;
              if ( (_DWORD)v89 != (_DWORD)v90 )
              {
LABEL_146:
                v91 = *((_QWORD *)this + 5);
                v92 = 0;
                v93 = 68 * v89;
                v94 = v230;
                v220 = 0;
                *(__m128 *)(v93 + v91) = v73;
                *(__m128 *)(v93 + v91 + 16) = v69;
                *(__m128 *)(v93 + v91 + 32) = v74;
                *(__m128 *)(v93 + v91 + 48) = v72;
                *(_DWORD *)(v93 + v91 + 64) = v94;
                v95 = *((_DWORD *)this + 12);
                if ( v95 <= ++*((_DWORD *)this + 6) )
                  v95 = *((_DWORD *)this + 6);
                *((_DWORD *)this + 12) = v95;
                goto LABEL_149;
              }
              v181 = 2 * v90;
              if ( (unsigned __int64)(2 * v90) > 0xFFFFFFFF )
              {
                v92 = -2147024362;
                v220 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x4Cu, 0LL);
                goto LABEL_410;
              }
              if ( v181 <= 8 )
                v181 = 8;
              v182 = HrMalloc(0x44uLL, v181, lpMem);
              v220 = v182;
              if ( v182 < 0 )
              {
                v92 = v182;
                MilInstrumentationCheckHR_MaybeFailFast(v183, 0LL, 0, v182, 0x53u, 0LL);
              }
              else
              {
                v184 = 68LL * *((unsigned int *)this + 6);
                if ( v184 <= 0xFFFFFFFF )
                {
                  v185 = lpMem[0];
                  memcpy_0(lpMem[0], *((const void **)this + 5), (unsigned int)v184);
                  operator delete(*((void **)this + 5));
                  v89 = *((unsigned int *)this + 6);
                  *((_QWORD *)this + 5) = v185;
                  v75 = 0;
                  *((_DWORD *)this + 7) = v181;
                  goto LABEL_146;
                }
                v92 = -2147024362;
                v220 = -2147024362;
                MilInstrumentationCheckHR_MaybeFailFast(v184, 0LL, 0, -2147024362, 0x55u, 0LL);
              }
              v209 = lpMem[0];
              if ( lpMem[0] )
              {
                v210 = GetProcessHeap();
                HeapFree(v210, 0, v209);
              }
              v75 = 0;
LABEL_149:
              if ( v92 >= 0 )
              {
                *(_BYTE *)(v8 + 8) |= 4u;
LABEL_108:
                v76 = *(CGeometry **)(v3 + 240);
                if ( !v76 )
                  goto LABEL_109;
                v6 = v219;
                if ( !v219 )
                {
LABEL_177:
                  v110 = *(CGeometry **)(v3 + 240);
                  v239.m128_u64[0] = 0LL;
                  v239.m128_i8[8] = 0;
                  v238 = 0LL;
                  ShapeData = CGeometry::GetShapeData(
                                v110,
                                (const struct D2D_SIZE_F *)(v3 + 132),
                                (struct CShapePtr *)&v239);
                  v220 = ShapeData;
                  v113 = ShapeData;
                  if ( ShapeData < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, ShapeData, 0x60Cu, 0LL);
                  }
                  else
                  {
                    v114 = v239.m128_u64[0];
                    v113 = -2003292412;
                    v220 = -2003292412;
                    if ( v239.m128_u64[0] )
                    {
                      v115 = (*(__int64 (__fastcall **)(unsigned __int64, __int128 *, _QWORD))(*(_QWORD *)v239.m128_u64[0]
                                                                                             + 32LL))(
                               v239.m128_u64[0],
                               &v238,
                               0LL);
                      v220 = v115;
                      v113 = v115;
                      if ( v115 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v115, 0x115u, 0LL);
                    }
                    if ( v113 >= 0 )
                    {
                      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v235, (__int64)&v238, (float *)&v238);
                      v116 = *((_DWORD *)this + 34);
                      *(_OWORD *)v237 = 0LL;
                      if ( v116 )
                        v117 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v116 - 1));
                      else
                        v117 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                      *(_OWORD *)v237 = v117;
                      *(_OWORD *)lpMem = v238;
                      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v237, lpMem);
                      v118 = *((unsigned int *)this + 35);
                      v119 = *((_DWORD *)this + 34);
                      lpMem[0] = 0LL;
                      if ( v119 != (_DWORD)v118 )
                        goto LABEL_185;
                      v190 = 2 * v118;
                      if ( (unsigned __int64)(2 * v118) > 0xFFFFFFFF )
                      {
                        v113 = -2147024362;
                        v220 = -2147024362;
                        MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, -2147024362, 0x4Cu, 0LL);
                        goto LABEL_419;
                      }
                      if ( v190 <= 8 )
                        v190 = 8;
                      v191 = HrMalloc(0x10uLL, v190, lpMem);
                      v220 = v191;
                      if ( v191 < 0 )
                      {
                        v113 = v191;
                        MilInstrumentationCheckHR_MaybeFailFast(v192, 0LL, 0, v191, 0x53u, 0LL);
                      }
                      else
                      {
                        v193 = 16LL * *((unsigned int *)this + 34);
                        if ( v193 <= 0xFFFFFFFF )
                        {
                          v194 = lpMem[0];
                          memcpy_0(lpMem[0], *((const void **)this + 19), (unsigned int)v193);
                          operator delete(*((void **)this + 19));
                          v119 = *((_DWORD *)this + 34);
                          *((_QWORD *)this + 19) = v194;
                          v75 = 0;
                          *((_DWORD *)this + 35) = v190;
LABEL_185:
                          v113 = 0;
                          v220 = 0;
                          *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * v119) = *(_OWORD *)v237;
                          v120 = *((_DWORD *)this + 40);
                          v121 = (unsigned int)++*((_DWORD *)this + 34);
                          if ( v120 <= (unsigned int)v121 )
                            v120 = *((_DWORD *)this + 34);
                          *((_DWORD *)this + 40) = v120;
                          goto LABEL_188;
                        }
                        v113 = -2147024362;
                        v220 = -2147024362;
                        MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x55u, 0LL);
                      }
                      v212 = lpMem[0];
                      if ( lpMem[0] )
                      {
                        v213 = GetProcessHeap();
                        HeapFree(v213, 0, v212);
                      }
                      v75 = 0;
LABEL_188:
                      if ( v113 >= 0 )
                      {
                        v122 = *((unsigned int *)this + 369);
                        v123 = *((_DWORD *)this + 368);
                        lpMem[0] = 0LL;
                        if ( v123 != (_DWORD)v122 )
                        {
LABEL_190:
                          *(_DWORD *)(*((_QWORD *)this + 186) + 4LL * v123) = 0;
                          v124 = *((_DWORD *)this + 374);
                          v125 = (unsigned int)++*((_DWORD *)this + 368);
                          if ( v124 <= (unsigned int)v125 )
                            v124 = *((_DWORD *)this + 368);
                          *((_DWORD *)this + 374) = v124;
                          goto LABEL_193;
                        }
                        v195 = 2 * v122;
                        if ( (unsigned __int64)(2 * v122) > 0xFFFFFFFF )
                        {
                          v75 = -2147024362;
                          MilInstrumentationCheckHR_MaybeFailFast(v122, 0LL, 0, -2147024362, 0x4Cu, 0LL);
                          v113 = -2147024362;
                          v220 = -2147024362;
LABEL_425:
                          MilInstrumentationCheckHR_MaybeFailFast(v125, 0LL, 0, v75, 0x616u, 0LL);
                          goto LABEL_194;
                        }
                        if ( v195 <= 0x40 )
                          v195 = 64;
                        v75 = HrMalloc(4uLL, v195, lpMem);
                        if ( v75 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v196, 0LL, 0, v75, 0x53u, 0LL);
                        }
                        else
                        {
                          v197 = 4LL * *((unsigned int *)this + 368);
                          if ( v197 <= 0xFFFFFFFF )
                          {
                            v198 = lpMem[0];
                            memcpy_0(lpMem[0], *((const void **)this + 186), (unsigned int)v197);
                            operator delete(*((void **)this + 186));
                            v123 = *((_DWORD *)this + 368);
                            *((_QWORD *)this + 186) = v198;
                            v75 = 0;
                            *((_DWORD *)this + 369) = v195;
                            goto LABEL_190;
                          }
                          v75 = -2147024362;
                          MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x55u, 0LL);
                        }
                        v215 = lpMem[0];
                        if ( lpMem[0] )
                        {
                          v216 = GetProcessHeap();
                          HeapFree(v216, 0, v215);
                        }
LABEL_193:
                        v220 = v75;
                        v113 = v75;
                        if ( v75 >= 0 )
                          goto LABEL_194;
                        goto LABEL_425;
                      }
LABEL_419:
                      MilInstrumentationCheckHR_MaybeFailFast(v121, 0LL, 0, v113, 0x31u, 0LL);
                      MilInstrumentationCheckHR_MaybeFailFast(v214, 0LL, 0, v113, 0x615u, 0LL);
                      goto LABEL_194;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v113, 0x611u, 0LL);
                  }
LABEL_194:
                  if ( v239.m128_i8[8] )
                  {
                    v125 = v239.m128_u64[0];
                    if ( v239.m128_u64[0] )
                      (**(void (__fastcall ***)(unsigned __int64, __int64))v239.m128_u64[0])(v239.m128_u64[0], 1LL);
                  }
                  if ( v113 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v125, 0LL, 0, v113, 0x19Cu, 0LL);
                    goto LABEL_114;
                  }
                  *(_BYTE *)(v8 + 8) |= 2u;
LABEL_109:
                  v77 = *(_QWORD *)(v3 + 248);
                  v221 = 1;
                  v222 = 0;
                  if ( !v77
                    || ((*(void (__fastcall **)(__int64, char *, bool *))(*(_QWORD *)v77 + 280LL))(v77, &v221, &v222),
                        v221) )
                  {
                    v78 = *(_DWORD *)(v3 + 96);
                    if ( (v78 & 0x10) != 0 )
                    {
                      v126 = *(_DWORD *)(v3 + 192) == 0;
                    }
                    else
                    {
                      if ( (v78 & 4) == 0 )
                      {
LABEL_112:
                        v6 = v219;
                        goto LABEL_113;
                      }
                      v126 = (v78 & 0x78000) == 0;
                    }
                    v222 = !v126;
                    v221 = 0;
                  }
                  v127 = *((unsigned int *)this + 385);
                  v128 = *((_DWORD *)this + 384);
                  lpMem[0] = 0LL;
                  if ( v128 == (_DWORD)v127 )
                  {
                    v199 = 2 * v127;
                    if ( (unsigned __int64)(2 * v127) > 0xFFFFFFFF )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v127, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_205:
                      *(_BYTE *)(v8 + 8) |= 8u;
                      goto LABEL_112;
                    }
                    if ( v199 <= 0x40 )
                      v199 = 64;
                    v200 = HrMalloc(1uLL, v199, lpMem);
                    if ( v200 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v201, 0LL, 0, v200, 0x53u, 0LL);
                      v217 = lpMem[0];
                      if ( lpMem[0] )
                      {
                        v218 = GetProcessHeap();
                        HeapFree(v218, 0, v217);
                      }
                      goto LABEL_205;
                    }
                    v202 = lpMem[0];
                    memcpy_0(lpMem[0], *((const void **)this + 194), *((unsigned int *)this + 384));
                    operator delete(*((void **)this + 194));
                    v128 = *((_DWORD *)this + 384);
                    *((_QWORD *)this + 194) = v202;
                    *((_DWORD *)this + 385) = v199;
                  }
                  *(_BYTE *)(v128 + *((_QWORD *)this + 194)) = v222;
                  v129 = *((_DWORD *)this + 390);
                  if ( v129 <= ++*((_DWORD *)this + 384) )
                    v129 = *((_DWORD *)this + 384);
                  *((_DWORD *)this + 390) = v129;
                  goto LABEL_205;
                }
                *(_QWORD *)&v238 = 0LL;
                BYTE8(v238) = 0;
                v105 = CGeometry::GetShapeData(v76, (const struct D2D_SIZE_F *)(v3 + 132), (struct CShapePtr *)&v238);
                v220 = v105;
                v107 = v105;
                if ( v105 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v106, 0LL, 0, v105, 0x5F2u, 0LL);
                  v109 = v223;
                  goto LABEL_169;
                }
                v108 = (void (__fastcall ***)(_QWORD, __int64))v238;
                if ( (_QWORD)v238 )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v238 + 16LL))(v238) )
                  {
LABEL_304:
                    v108 = (void (__fastcall ***)(_QWORD, __int64))v238;
                    goto LABEL_305;
                  }
                  v108 = (void (__fastcall ***)(_QWORD, __int64))v238;
                  if ( (_QWORD)v238 )
                  {
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CVisual **))(*(_QWORD *)v238 + 40LL))(v238, v237)
                      && LODWORD(v237[0]) == 1 )
                    {
                      v109 = 1;
LABEL_169:
                      v108 = (void (__fastcall ***)(_QWORD, __int64))v238;
                      goto LABEL_170;
                    }
                    goto LABEL_304;
                  }
                }
LABEL_305:
                v109 = 0;
LABEL_170:
                if ( BYTE8(v238) && v108 )
                  (**v108)(v108, 1LL);
                if ( v107 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v108, 0LL, 0, v107, 0x192u, 0LL);
                  goto LABEL_114;
                }
                if ( !v109 )
                {
                  v6 = 0;
                  v219 = 0;
                }
                v75 = 0;
                goto LABEL_177;
              }
LABEL_410:
              MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v92, 0x36u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(v211, 0LL, 0, v92, 0x185u, 0LL);
              goto LABEL_114;
            }
            if ( SBYTE1(v230) >> 6 )
            {
              if ( SBYTE1(v230) >> 6 == 1 )
                goto LABEL_143;
              goto LABEL_224;
            }
            v85 = 0;
            LODWORD(v86) = COERCE_UNSIGNED_INT(_mm_shuffle_ps(v73, v73, 170).m128_f32[0] - 0.0) & _xmm;
            if ( v86 >= 0.000081380211 )
            {
              v87 = v227.m128_f32[2];
            }
            else
            {
              v87 = _mm_shuffle_ps(v69, v69, 170).m128_f32[0];
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v87 - 0.0) & _xmm) < 0.000081380211 )
              {
                v88 = _mm_shuffle_ps(v72, v72, 170).m128_f32[0];
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v88 - 0.0) & _xmm) < 0.000081380211 )
                {
LABEL_140:
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                      (float)((float)((float)(COERCE_FLOAT(_mm_shuffle_ps(v69, v69, 255).m128_u32[0] & _xmm)
                                                            * 61440.0)
                                                    + (float)(COERCE_FLOAT(_mm_shuffle_ps(v73, v73, 255).m128_u32[0] & _xmm)
                                                            * 61440.0))
                                            + COERCE_FLOAT(_mm_shuffle_ps(v72, v72, 255).m128_u32[0] & _xmm))
                                    - 1.0) & _xmm) < 0.000081380211 )
                    v85 = 1;
LABEL_142:
                  BYTE1(v230) = BYTE1(v230) & 0x3F | ((v85 << 7) - 64);
                  if ( v85 )
                  {
LABEL_143:
                    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v73, v73, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
                      && COERCE_FLOAT(COERCE_UNSIGNED_INT(v69.m128_f32[0] - 0.0) & _xmm) < 0.000081380211 )
                    {
                      goto LABEL_145;
                    }
                  }
LABEL_224:
                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v73.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
                    || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v69, v69, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
                  {
                    v6 = 0;
                    v219 = 0;
                  }
                  goto LABEL_145;
                }
LABEL_351:
                if ( v86 >= 0.000081380211 )
                  goto LABEL_142;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v87 - 0.0) & _xmm) >= 0.000081380211 )
                  goto LABEL_142;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v74.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
                  goto LABEL_142;
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v74, v74, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211 )
                  goto LABEL_142;
                v203 = _mm_shuffle_ps(v74, v74, 170).m128_f32[0];
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v203 - 0.0) & _xmm) >= 0.000081380211
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(v203 - 1.0) & _xmm) >= 0.000081380211 )
                {
                  goto LABEL_142;
                }
                if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v74, v74, 255).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
                  || COERCE_FLOAT(COERCE_UNSIGNED_INT(v88 - 0.0) & _xmm) >= 0.000081380211 )
                {
                  goto LABEL_142;
                }
                goto LABEL_140;
              }
            }
            v88 = v229.m128_f32[2];
            goto LABEL_351;
          }
LABEL_396:
          MilInstrumentationCheckHR_MaybeFailFast(i1, 0LL, 0, v60, 0x174u, 0LL);
          v6 = v219;
          goto LABEL_114;
        }
        v75 = 0;
        MilInstrumentationCheckHR_MaybeFailFast(i1, 0LL, 0, v60, 0x6DDu, 0LL);
LABEL_399:
        v72 = v229;
        v74 = v228;
        v69 = v227;
        v73 = v226;
        goto LABEL_106;
      }
LABEL_247:
      v68 = 1LL;
      goto LABEL_100;
    }
LABEL_398:
    v75 = 0;
    goto LABEL_399;
  }
  *v13 = 0;
  result = 0LL;
LABEL_115:
  if ( !v6 )
    ++*((_DWORD *)this + 365);
  return result;
}

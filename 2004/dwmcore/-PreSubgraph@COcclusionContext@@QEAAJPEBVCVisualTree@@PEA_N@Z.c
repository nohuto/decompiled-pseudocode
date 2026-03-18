/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180070DE0
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18006E330 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x1800049C0 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180004A08 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1800104DC (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180017ADC (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180066514 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18006D3D0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18007905C (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18008DB00 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18008E7F0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18009A50C (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@details@wil@@QEAA_NXZ @ 0x1800E9134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@d.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180223CB0 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v3; // edi
  __int64 v4; // rax
  __int64 v6; // r14
  unsigned __int8 (__fastcall *v8)(const struct CVisualTree *); // rax
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r15d
  __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  unsigned int i; // eax
  _QWORD **v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  _BYTE *v25; // rcx
  unsigned int j; // eax
  _QWORD **v27; // rdx
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  _BYTE *v30; // r10
  struct CComposition *v31; // r8
  bool v32; // di
  float *v33; // rdx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // eax
  int v37; // eax
  int v38; // eax
  void *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  float v42; // xmm7_4
  float v43; // xmm9_4
  float v44; // xmm8_4
  float v45; // xmm5_4
  int v46; // eax
  float v47; // xmm2_4
  float v48; // xmm1_4
  float v49; // xmm6_4
  float v50; // xmm0_4
  float v51; // xmm5_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  unsigned __int64 v54; // rdx
  unsigned int v55; // ecx
  float v56; // xmm2_4
  float v57; // xmm6_4
  float *v58; // rax
  float v59; // xmm4_4
  float v60; // xmm1_4
  float v61; // xmm0_4
  int v62; // edi
  bool v63; // bl
  _DWORD *v64; // r8
  __int64 v65; // rdx
  _BYTE *v66; // rcx
  unsigned int k; // eax
  _QWORD *v68; // rcx
  char v69; // al
  bool v70; // zf
  _DWORD *v71; // r8
  float v72; // xmm6_4
  __int64 v73; // rdx
  _BYTE *v74; // rcx
  unsigned int m; // eax
  float **v76; // rbx
  float *v77; // rbx
  __int64 v78; // rcx
  float v79; // xmm1_4
  int v80; // edx
  int *v81; // rcx
  _DWORD *v82; // r8
  __int64 v83; // rdx
  _BYTE *v84; // rcx
  unsigned int n; // eax
  CFilterEffect **v86; // rbx
  CFilterEffect *v87; // rbx
  bool v88; // bl
  struct CTreeData *TreeData; // rax
  __int64 v90; // rdx
  _DWORD *v91; // r8
  int v92; // ecx
  __int64 v93; // rdx
  _BYTE *v94; // rcx
  unsigned int ii; // eax
  __int64 *v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rdx
  unsigned int v101; // eax
  unsigned __int64 v102; // rdi
  int v103; // eax
  __int64 v104; // rcx
  unsigned __int64 v105; // rax
  void *v106; // rbx
  unsigned int v107; // eax
  _BYTE *v108; // rax
  int v109; // r15d
  struct CVisualTree *v110; // rsi
  __int64 v111; // r12
  _BYTE *v112; // rcx
  struct _LIST_ENTRY *v113; // rdi
  struct CTreeData *v114; // rbx
  struct _LIST_ENTRY *v115; // rcx
  _DWORD *v116; // r8
  __int64 v117; // rdx
  _BYTE *v118; // rcx
  unsigned int jj; // eax
  _QWORD **v120; // rcx
  void *v121; // rbx
  HANDLE ProcessHeap; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v124; // r10
  struct _LIST_ENTRY *Flink; // rax
  __m128 v126; // xmm9
  __m128 v127; // xmm6
  __m128 v128; // xmm8
  __m128 v129; // xmm7
  char v130; // cl
  _QWORD *v131; // rcx
  CVisual *v132; // rax
  CVisual *v133; // rsi
  struct _LIST_ENTRY *v134; // rax
  struct _LIST_ENTRY *v135; // r10
  struct _LIST_ENTRY *v136; // rax
  unsigned __int64 v137; // rax
  __int128 *v138; // rsi
  _BYTE *v139; // rax
  __int64 v140; // r8
  unsigned __int8 IsEqual; // al
  _BYTE *v142; // r9
  int v143; // eax
  _DWORD *v144; // r8
  __int64 v145; // rdx
  unsigned int kk; // eax
  __int64 v147; // rdx
  _QWORD *v148; // rax
  CComposition *v149; // rbx
  struct _LIST_ENTRY *v150; // rsi
  int Blink; // eax
  char v152; // bl
  struct _LIST_ENTRY *v153; // rax
  int v154; // eax
  struct _LIST_ENTRY v155; // xmm1
  struct _LIST_ENTRY v156; // xmm0
  struct _LIST_ENTRY v157; // xmm1
  struct _LIST_ENTRY v158; // xmm1
  __int64 v159; // rcx
  float v160; // xmm1_4
  float v161; // xmm1_4
  __int64 v162; // rax
  __int64 v163; // rcx
  unsigned __int64 v164; // rdi
  int v165; // eax
  __int64 v166; // rcx
  unsigned __int64 v167; // rcx
  void *v168; // rbx
  int v169; // edx
  __int64 v170; // rcx
  __int64 v171; // rax
  unsigned int v172; // eax
  __int64 v173; // r15
  void *v174; // rbx
  HANDLE v175; // rax
  __int64 v176; // rcx
  CGeometry *v177; // rcx
  int ShapeData; // eax
  __int64 v179; // rcx
  void (__fastcall ***v180)(void *, __int64); // rcx
  char v181; // bl
  CGeometry *v182; // rcx
  int v183; // eax
  __int64 v184; // rcx
  __int64 v185; // rcx
  int v186; // eax
  int v187; // eax
  __int128 v188; // xmm0
  __int64 v189; // rcx
  unsigned int v190; // eax
  unsigned __int64 v191; // rdi
  int v192; // eax
  __int64 v193; // rcx
  unsigned __int64 v194; // rax
  void *v195; // rbx
  __int64 v196; // rcx
  __int64 v197; // rax
  unsigned int v198; // eax
  __int64 v199; // rcx
  __int64 v200; // rcx
  unsigned int v201; // eax
  unsigned __int64 v202; // rdi
  int v203; // eax
  __int64 v204; // rcx
  int v205; // ebx
  unsigned __int64 v206; // rax
  void *v207; // rbx
  unsigned int v208; // eax
  void *v209; // rbx
  HANDLE v210; // rax
  void *v211; // rdi
  HANDLE v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rcx
  __int64 v215; // rcx
  int v216; // eax
  bool v217; // zf
  __int64 v218; // rcx
  unsigned int v219; // eax
  unsigned __int64 v220; // rdi
  int v221; // eax
  __int64 v222; // rcx
  void *v223; // rbx
  unsigned int v224; // eax
  int *v225; // r15
  unsigned int v226; // esi
  unsigned int v227; // edi
  _BYTE *LightAtNoRef; // rax
  __int64 v229; // rbx
  int v230; // eax
  void *v231; // rbx
  HANDLE v232; // rax
  bool v233; // [rsp+40h] [rbp-C0h]
  char v234; // [rsp+41h] [rbp-BFh] BYREF
  bool v235; // [rsp+42h] [rbp-BEh] BYREF
  char v236; // [rsp+43h] [rbp-BDh] BYREF
  int v237; // [rsp+44h] [rbp-BCh]
  char v238; // [rsp+48h] [rbp-B8h]
  void *lpMem[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct CVisualTree *v240; // [rsp+60h] [rbp-A0h]
  __m128 v241; // [rsp+70h] [rbp-90h]
  __m128 v242; // [rsp+80h] [rbp-80h]
  __m128 v243; // [rsp+90h] [rbp-70h]
  __m128 v244; // [rsp+A0h] [rbp-60h]
  int v245; // [rsp+B0h] [rbp-50h]
  _BYTE v246[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v247; // [rsp+100h] [rbp+0h]
  _BYTE v248[64]; // [rsp+110h] [rbp+10h] BYREF
  int v249; // [rsp+150h] [rbp+50h]
  _BYTE v250[64]; // [rsp+160h] [rbp+60h] BYREF
  int v251; // [rsp+1A0h] [rbp+A0h]
  struct CManipulationManager *v252[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v253[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v254; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v255; // [rsp+1E0h] [rbp+E0h]

  v3 = *((_DWORD *)this + 365);
  v4 = *(_QWORD *)a2;
  v6 = *((_QWORD *)this + 8);
  lpMem[0] = a3;
  v240 = a2;
  v8 = *(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v4 + 200);
  v9 = 0;
  v237 = 0;
  v233 = v3 == 0;
  *(_QWORD *)v253 = 0LL;
  if ( v8(a2) )
  {
    v10 = v6 + 320;
  }
  else
  {
    v16 = *(_QWORD *)(v6 + 224);
    if ( *(int *)v16 >= 0 )
      goto LABEL_6;
    v17 = *(unsigned int *)(v16 + 4);
    v18 = (_BYTE *)(v16 + 8);
    for ( i = 0; i < (unsigned int)v17; ++v18 )
    {
      if ( *v18 == 1 )
        break;
      ++i;
    }
    v20 = i >= (unsigned int)v17 ? 0LL : (_QWORD **)(v16 + v17 + 15 + 8LL * i - (((_BYTE)v17 + 15) & 7));
    v21 = *v20;
    if ( !v21 )
      goto LABEL_6;
    v22 = (_QWORD *)*v21;
    if ( (_QWORD *)*v21 == v21 )
      goto LABEL_6;
    while ( 1 )
    {
      v10 = (__int64)(v22 - 36);
      if ( (const struct CVisualTree *)v22[4] == a2 )
        break;
      v22 = (_QWORD *)*v22;
      if ( v22 == v21 )
        goto LABEL_6;
    }
  }
  if ( v10 )
  {
    *(_QWORD *)v253 = *(_QWORD *)(v10 + 32);
    if ( !*(_QWORD *)v253 )
    {
      *(_QWORD *)v253 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 24) + 360LL))(*(_QWORD *)(v10 + 24));
      *(_QWORD *)(v10 + 32) = *(_QWORD *)v253;
    }
  }
LABEL_6:
  v11 = *((_QWORD *)this + 9);
  v12 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
  {
    v12 = v6 + 320;
  }
  else
  {
    v23 = *(_QWORD *)(v6 + 224);
    if ( *(int *)v23 < 0 )
    {
      v24 = *(unsigned int *)(v23 + 4);
      v25 = (_BYTE *)(v23 + 8);
      for ( j = 0; j < (unsigned int)v24; ++v25 )
      {
        if ( *v25 == 1 )
          break;
        ++j;
      }
      v27 = j >= (unsigned int)v24 ? 0LL : (_QWORD **)(v23 + 8LL * j - (((_BYTE)v24 + 15) & 7) + v24 + 15);
      v28 = *v27;
      if ( v28 )
      {
        v29 = (_QWORD *)*v28;
        if ( (_QWORD *)*v28 != v28 )
        {
          while ( (const struct CVisualTree *)v29[4] != a2 )
          {
            v29 = (_QWORD *)*v29;
            if ( v29 == v28 )
              goto LABEL_8;
          }
          v12 = (__int64)(v29 - 36);
        }
      }
    }
  }
LABEL_8:
  v13 = *(_QWORD *)v253;
  v14 = -1;
  if ( !*(_QWORD *)v253 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x103u, 0LL);
    return 2147942414LL;
  }
  *(_BYTE *)(*(_QWORD *)v253 + 8LL) &= 0xF0u;
  v30 = lpMem[0];
  v31 = g_pComposition;
  *(_DWORD *)(v13 + 12) = *((_DWORD *)this + 364);
  *v30 = 1;
  if ( *((_BYTE *)v31 + 1129) && (*(_BYTE *)(v6 + 95) & 4) != 0 )
  {
    v32 = v3 == 0;
    *v30 = 0;
    goto LABEL_411;
  }
  v33 = (float *)((char *)v240 + 64);
  v34 = 0;
  if ( v6 != *((_QWORD *)v240 + 7) )
    v33 = (float *)(v6 + 140);
  if ( v33[5] <= v33[4] )
    v34 = 1;
  v35 = v34 + 1;
  if ( v33[2] > *v33 )
    v35 = v34;
  v36 = v35 + 1;
  if ( v33[3] > v33[1] )
    v36 = v35;
  if ( v36 > 1 )
  {
    v14 = 0;
LABEL_157:
    v233 = 0;
    v97 = 0LL;
    if ( v31 )
      v97 = *((_QWORD *)v31 + 44);
    if ( *(_QWORD *)(v12 + 8) != v97 )
      *v30 = 0;
    goto LABEL_148;
  }
  v37 = *((_DWORD *)this + 376);
  if ( v37 )
    v14 = *(_DWORD *)(*((_QWORD *)this + 190) + 4LL * (unsigned int)(v37 - 1));
  if ( !v14 )
    goto LABEL_157;
  v38 = *((_DWORD *)this + 6);
  v255 = 0LL;
  v254 = 0LL;
  if ( v38 )
    v39 = (void *)(*((_QWORD *)this + 5) + 68LL * (unsigned int)(v38 - 1));
  else
    v39 = &CMILMatrix::Identity;
  v40 = *((_QWORD *)this + 1);
  v41 = v40 + 64;
  if ( v6 != *(_QWORD *)(v40 + 56) )
    v41 = v6 + 140;
  CMILMatrix::Transform3DBoundsHelper<1>(v39, v41, &v254);
  v42 = *((float *)&v254 + 2);
  v43 = *(float *)&v254;
  if ( *((float *)&v254 + 2) <= *(float *)&v254 )
    goto LABEL_87;
  v44 = *((float *)&v254 + 3);
  v45 = *((float *)&v254 + 1);
  if ( *((float *)&v254 + 3) <= *((float *)&v254 + 1) )
    goto LABEL_87;
  v46 = *((_DWORD *)this + 34);
  if ( v46 )
  {
    v254 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v46 - 1));
    v47 = *(float *)&v254;
    if ( v43 > *(float *)&v254 )
      v47 = v43;
    v48 = *((float *)&v254 + 1);
    v49 = *((float *)&v254 + 1);
    if ( v45 > *((float *)&v254 + 1) )
    {
      v48 = v45;
      v49 = v45;
    }
    v50 = *((float *)&v254 + 2);
    v51 = *((float *)&v254 + 2);
    if ( *((float *)&v254 + 2) > v42 )
    {
      v50 = v42;
      v51 = v42;
    }
    v52 = *((float *)&v254 + 3);
    v53 = *((float *)&v254 + 3);
    if ( *((float *)&v254 + 3) > v44 )
    {
      v52 = v44;
      v53 = v44;
    }
    if ( v51 <= v47 || v53 <= v49 )
    {
      v52 = 0.0;
      v50 = 0.0;
      v48 = 0.0;
      v47 = 0.0;
    }
    v43 = v47;
    v45 = v48;
    v42 = v50;
    v44 = v52;
  }
  v54 = *((_QWORD *)this + 133);
  v55 = 0;
  if ( !v54 )
  {
LABEL_87:
    v31 = g_pComposition;
    v30 = lpMem[0];
    v14 = 0;
    goto LABEL_157;
  }
  while ( ((v14 >> v55) & 1) == 0 )
  {
LABEL_86:
    if ( ++v55 >= v54 )
      goto LABEL_87;
  }
  v56 = v43;
  v57 = v45;
  v58 = (float *)((char *)this + 16 * v55 + 1072);
  if ( *v58 > v43 )
    v56 = *v58;
  v59 = v45;
  if ( v58[1] > v45 )
  {
    v57 = v58[1];
    v59 = v57;
  }
  v60 = v42;
  if ( v42 > v58[2] )
    v60 = v58[2];
  v61 = v44;
  if ( v44 > v58[3] )
    v61 = v58[3];
  if ( v60 <= v56 || v61 <= v59 || v60 <= v56 || v61 <= v57 )
  {
    v14 &= ~(1 << v55);
    goto LABEL_86;
  }
  if ( !v3 )
  {
    if ( (*(_BYTE *)(v6 + 94) & 4) != 0
      || (*(_DWORD *)(v6 + 88) & 0x100) == 0
      || (*(_BYTE *)(v6 + 93) & 0x60) != 0
      || ((*(_DWORD *)(v6 + 192) - 2) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_147;
    }
    v62 = *(_DWORD *)(v6 + 100);
    v63 = v11 && *(_DWORD *)(v11 + 100) == 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 232LL))(v6) )
      goto LABEL_107;
    v64 = *(_DWORD **)(v6 + 224);
    if ( (*v64 & 0x400000) == 0 )
      goto LABEL_106;
    v65 = (unsigned int)v64[1];
    v66 = v64 + 2;
    for ( k = 0; k < (unsigned int)v65; ++v66 )
    {
      if ( *v66 == 10 )
        break;
      ++k;
    }
    v68 = k >= (unsigned int)v65 ? 0LL : (_QWORD *)((char *)v64 + 8LL * k - (((_BYTE)v65 + 15) & 7) + v65 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v68 + 56LL))(*v68, 59LL) )
LABEL_107:
      v69 = 1;
    else
LABEL_106:
      v69 = 0;
    if ( v62 == 1 )
    {
      v70 = v63 ? v69 == 0 : (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v6 + 72)) == 0;
      if ( !v70 )
        goto LABEL_147;
    }
    v71 = *(_DWORD **)(v6 + 224);
    v72 = *(float *)&FLOAT_1_0;
    if ( (*v71 & 0x400000) != 0 )
    {
      v73 = (unsigned int)v71[1];
      v74 = v71 + 2;
      for ( m = 0; m < (unsigned int)v73; ++v74 )
      {
        if ( *v74 == 10 )
          break;
        ++m;
      }
      if ( m >= (unsigned int)v73 )
        v76 = 0LL;
      else
        v76 = (float **)((char *)v71 + 8LL * m - (((_BYTE)v73 + 15) & 7) + v73 + 15);
      v77 = *v76;
      if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v77 + 56LL))(v77, 56LL) )
        v72 = v77[18];
    }
    if ( fminf(1.0, fmaxf(v72, 0.0)) < 1.0 )
      goto LABEL_147;
    if ( v6 != *((_QWORD *)v240 + 7) )
    {
      v78 = *(_QWORD *)(v6 + 216);
      if ( (*(_DWORD *)(v78 + 4) & 0x8000000) != 0 )
      {
        v80 = *(_DWORD *)(v78 + 12);
        v81 = (int *)(v78 + 12);
        if ( (v80 & 0x7F000000) != 0x5000000 )
        {
          do
          {
            v81 = (int *)((char *)v81 + (v80 & 0xFFFFFF) + 4);
            v80 = *v81;
          }
          while ( (*v81 & 0x7F000000) != 0x5000000 );
        }
        LODWORD(v252[0]) = v81[1];
        v79 = *(float *)v252;
      }
      else
      {
        v79 = *(float *)&FLOAT_1_0;
      }
      if ( fminf(1.0, fmaxf(v79, 0.0)) < 1.0 )
        goto LABEL_147;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 232LL))(v6) )
      goto LABEL_147;
    v82 = *(_DWORD **)(v6 + 224);
    if ( (*v82 & 0x400000) != 0 )
    {
      v83 = (unsigned int)v82[1];
      v84 = v82 + 2;
      for ( n = 0; n < (unsigned int)v83; ++v84 )
      {
        if ( *v84 == 10 )
          break;
        ++n;
      }
      v86 = n >= (unsigned int)v83
          ? 0LL
          : (CFilterEffect **)((char *)v82 + 8LL * n - (((_BYTE)v83 + 15) & 7) + v83 + 15);
      v87 = *v86;
      if ( (*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v87 + 56LL))(v87, 59LL) )
      {
        if ( !CFilterEffect::IsOpaque(v87, (const struct CVisual *)v6) )
          goto LABEL_147;
      }
    }
    v88 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v240 + 200LL))(v240) )
    {
      TreeData = CVisual::FindTreeData((CVisual *)v6, v240);
      if ( TreeData )
      {
        v90 = 0LL;
        if ( g_pComposition )
          v90 = *((_QWORD *)g_pComposition + 44);
        if ( *((_BYTE *)TreeData + 18) )
          v88 = *((_QWORD *)TreeData + 35) == v90;
      }
    }
    if ( v88 )
LABEL_147:
      v233 = 0;
  }
LABEL_148:
  v91 = *(_DWORD **)(v6 + 224);
  if ( (*v91 & 0x2000000) != 0 )
    goto LABEL_167;
  v92 = *(_DWORD *)(*(_QWORD *)(v6 + 216) + 4LL);
  if ( (v92 & 0x2000000) != 0 || (v92 & 0x4000000) != 0 )
    goto LABEL_167;
  if ( (*v91 & 0x400000) != 0 )
  {
    v93 = (unsigned int)v91[1];
    v94 = v91 + 2;
    for ( ii = 0; ii < (unsigned int)v93; ++v94 )
    {
      if ( *v94 == 10 )
        break;
      ++ii;
    }
    v96 = ii >= (unsigned int)v93 ? 0LL : (__int64 *)((char *)v91 + v93 + 8LL * ii - (((_BYTE)v93 + 15) & 7) + 15);
    v98 = *v96;
    if ( v98 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v98 + 56LL))(v98, 59LL) )
        goto LABEL_167;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 91LL)
    && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 232LL))(v6) || *(_QWORD *)(v6 + 616)) )
  {
LABEL_167:
    ++*((_DWORD *)this + 366);
  }
  if ( *(_BYTE *)lpMem[0] != 1 )
  {
LABEL_393:
    v32 = v233;
    if ( v233 )
    {
      if ( (unsigned int)((__int64)(*(_QWORD *)(v6 + 280) - *(_QWORD *)(v6 + 272)) >> 4)
        || (unsigned int)((__int64)(*(_QWORD *)(v6 + 304) - *(_QWORD *)(v6 + 296)) >> 4) )
      {
        lpMem[0] = (void *)0x100000000LL;
        v225 = (int *)lpMem;
        while ( 1 )
        {
          v226 = *v225;
          v227 = 0;
          if ( (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, *v225) )
            break;
LABEL_402:
          if ( ++v225 == (int *)&lpMem[1] )
            goto LABEL_408;
        }
        while ( 1 )
        {
          LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v6, v227, v226);
          v229 = (__int64)LightAtNoRef;
          if ( LightAtNoRef[162] )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                           + 256LL))(
                   LightAtNoRef,
                   v240,
                   v6) )
            {
              v230 = CLightStack::Push((__int64)this + 168, v229, v226);
              if ( v230 < 0 )
                break;
            }
          }
          if ( ++v227 >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, v226) )
            goto LABEL_402;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v230, 0x4Bu, 0LL);
LABEL_408:
        v32 = v233;
      }
      v9 = v237;
    }
    goto LABEL_410;
  }
  v99 = *((unsigned int *)this + 377);
  v100 = 64LL;
  v101 = *((_DWORD *)this + 376);
  lpMem[0] = 0LL;
  if ( v101 != (_DWORD)v99 )
    goto LABEL_176;
  v102 = 2LL * (unsigned int)v99;
  if ( v102 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    goto LABEL_179;
  }
  if ( (unsigned int)v102 <= 0x40 )
    LODWORD(v102) = 64;
  v103 = HrMalloc(4uLL, (unsigned int)v102, lpMem);
  if ( v103 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v104, 0LL, 0, v103, 0x53u, 0LL);
LABEL_198:
    v121 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v121);
    }
    goto LABEL_179;
  }
  v105 = 4LL * *((unsigned int *)this + 376);
  if ( v105 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v104, 0LL, 0, -2147024362, 0x55u, 0LL);
    goto LABEL_198;
  }
  v106 = lpMem[0];
  memcpy_0(lpMem[0], *((const void **)this + 190), (unsigned int)v105);
  operator delete(*((void **)this + 190));
  v101 = *((_DWORD *)this + 376);
  *((_QWORD *)this + 190) = v106;
  *((_DWORD *)this + 377) = v102;
LABEL_176:
  *(_DWORD *)(*((_QWORD *)this + 190) + 4LL * v101) = v14;
  v107 = *((_DWORD *)this + 382);
  if ( v107 <= ++*((_DWORD *)this + 376) )
    v107 = *((_DWORD *)this + 376);
  *((_DWORD *)this + 382) = v107;
LABEL_179:
  *(_BYTE *)(*(_QWORD *)v253 + 8LL) |= 1u;
  if ( !v14 )
    goto LABEL_393;
  v70 = *(_QWORD *)(v6 + 240) == 0LL;
  v108 = v250;
  v245 = 0;
  v109 = -2003292412;
  if ( v70 )
    v108 = 0LL;
  v251 = 0;
  v110 = v240;
  v111 = *((_QWORD *)this + 8);
  lpMem[0] = v108;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, __int64))(*(_QWORD *)v240 + 200LL))(v240, v100) )
  {
    v113 = (struct _LIST_ENTRY *)(v111 + 320);
    goto LABEL_184;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v111);
  v124 = TreeDataListHead;
  if ( !TreeDataListHead )
    goto LABEL_205;
  Flink = TreeDataListHead->Flink;
  if ( Flink == v124 )
    goto LABEL_205;
  while ( 1 )
  {
    v113 = Flink - 18;
    if ( (struct CVisualTree *)Flink[2].Flink == v110 )
      break;
    Flink = Flink->Flink;
    if ( Flink == v124 )
      goto LABEL_205;
  }
LABEL_184:
  if ( !v113 )
  {
LABEL_205:
    v126 = v244;
    v127 = v243;
    v128 = v242;
    v129 = v241;
    goto LABEL_206;
  }
  v114 = 0LL;
  v109 = 0;
  v238 = 0;
  if ( v111 == *((_QWORD *)v110 + 7) )
    goto LABEL_225;
  v115 = 0LL;
  if ( g_pComposition )
    v115 = (struct _LIST_ENTRY *)*((_QWORD *)g_pComposition + 44);
  if ( BYTE2(v113[1].Flink) && v113[17].Blink == v115 )
    goto LABEL_215;
  v116 = *(_DWORD **)(v111 + 224);
  if ( (*v116 & 0x1000000) == 0 )
    goto LABEL_215;
  v117 = (unsigned int)v116[1];
  v118 = v116 + 2;
  for ( jj = 0; jj < (unsigned int)v117; ++v118 )
  {
    if ( *v118 == 8 )
      break;
    ++jj;
  }
  v120 = jj >= (unsigned int)v117 ? 0LL : (_QWORD **)((char *)v116 + v117 + 8LL * jj - (((_BYTE)v117 + 15) & 7) + 15);
  v131 = *v120;
  if ( v131 && (v132 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v131 + 200LL))(*v131)) != 0LL )
  {
    v238 = 1;
    v114 = CVisual::FindTreeData(v132, v110);
  }
  else
  {
LABEL_215:
    v114 = 0LL;
    v133 = *(CVisual **)(v111 + 80);
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v240 + 200LL))(v240) )
    {
      v114 = (CVisual *)((char *)v133 + 320);
    }
    else
    {
      v134 = CVisual::GetTreeDataListHead(v133);
      v135 = v134;
      if ( v134 )
      {
        v136 = v134->Flink;
        if ( v136 != v135 )
        {
          while ( (struct CVisualTree *)v136[2].Flink != v240 )
          {
            v136 = v136->Flink;
            if ( v136 == v135 )
              goto LABEL_223;
          }
          v114 = (struct CTreeData *)&v136[-18];
        }
      }
    }
  }
LABEL_223:
  if ( !v114 )
LABEL_225:
    v137 = 1LL;
  else
    v137 = *((_QWORD *)v114 + 15);
  if ( v113[7].Blink >= (struct _LIST_ENTRY *)v137 )
  {
LABEL_255:
    if ( v109 >= 0 )
      goto LABEL_256;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v112, 0LL, 0, v109, 0x6DDu, 0LL);
    goto LABEL_205;
  }
  v138 = (__int128 *)((char *)v114 + 40);
  v139 = v248;
  v247 = 0;
  v249 = 0;
  if ( !v114 )
    v138 = 0LL;
  if ( !*(_QWORD *)(v111 + 240) )
    v139 = 0LL;
  CVisual::CalcCpuClippingTransform(v111, 5, (__int64)v240, v138, &v236, (CMILMatrix *)v246, (__int64)v139);
  if ( v238 || !v138 )
  {
    LOBYTE(v140) = 1;
  }
  else if ( v236 )
  {
    IsEqual = CMILMatrix::IsEqualTo<0>(v138, v246);
    v140 = IsEqual;
    LOBYTE(v140) = IsEqual ^ 1;
  }
  else
  {
    LOBYTE(v140) = 0;
  }
  v142 = v248;
  if ( !*(_QWORD *)(v111 + 240) )
    v142 = 0LL;
  v143 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, _BYTE *, __int64, _BYTE *))v113->Flink[3].Flink)(
           v113,
           v246,
           v140,
           v142);
  v109 = v143;
  if ( v143 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v112, 0LL, 0, v143, 0x7D2u, 0LL);
  }
  else
  {
    v144 = *(_DWORD **)(v111 + 224);
    if ( (*v144 & 0x800000) != 0 )
    {
      v145 = (unsigned int)v144[1];
      v112 = v144 + 2;
      for ( kk = 0; kk < (unsigned int)v145; ++v112 )
      {
        if ( *v112 == 9 )
          break;
        ++kk;
      }
      if ( kk >= (unsigned int)v145 )
      {
        v148 = 0LL;
      }
      else
      {
        v147 = v145 + 15;
        v112 = (_BYTE *)(8LL * kk - (v147 & 7));
        v148 = &v112[(_QWORD)v144 + v147];
      }
      if ( *v148 && (*(_BYTE *)(v111 + 94) & 1) != 0 )
      {
        v252[0] = 0LL;
        v149 = *(CComposition **)(v111 + 16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v252);
        if ( (int)CComposition::GetManipulationManager(v149, v252) >= 0 )
          CManipulationManager::NotifyVisualPropertyChange(
            v252[0],
            (struct CVisual *)v111,
            (const struct CMILMatrix *)v246);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v252);
      }
    }
  }
  if ( v109 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v112, 0LL, 0, v109, 0x793u, 0LL);
    goto LABEL_255;
  }
LABEL_256:
  if ( !v113[7].Blink )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v112, 0LL, 0, -2003292412, 0x74u, 0LL);
    v109 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v159, 0LL, 0, -2003292412, 0x6E2u, 0LL);
    v9 = -2003292412;
LABEL_265:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v112, 0LL, 0, v109, 0x176u, 0LL);
    v32 = v233;
    goto LABEL_410;
  }
  v128 = *(__m128 *)&v113[3].Blink;
  v150 = (struct _LIST_ENTRY *)lpMem[0];
  Blink = (int)v113[6].Blink;
  v152 = BYTE1(v113[1].Flink);
  v242 = v128;
  v245 = Blink;
  v126 = *(__m128 *)&v113[5].Blink;
  v129 = *(__m128 *)&v113[2].Blink;
  v244 = v126;
  v127 = *(__m128 *)&v113[4].Blink;
  if ( lpMem[0] )
  {
    v70 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_HitTesting_32337248>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_HitTesting_32337248>::GetImpl'::`2'::impl) == 0;
    v153 = v113[7].Flink;
    if ( v70 || v153 )
    {
      v158 = v153[1];
      *v150 = *v153;
      v156 = v153[2];
      v150[1] = v158;
      v157 = v153[3];
      v154 = (int)v153[4].Flink;
    }
    else
    {
      v154 = (int)v113[6].Blink;
      v155 = *(struct _LIST_ENTRY *)&v113[3].Blink;
      *v150 = *(struct _LIST_ENTRY *)((char *)v113 + 40);
      v156 = *(struct _LIST_ENTRY *)&v113[4].Blink;
      v150[1] = v155;
      v157 = *(struct _LIST_ENTRY *)&v113[5].Blink;
    }
    v150[2] = v156;
    v150[3] = v157;
    LODWORD(v150[4].Flink) = v154;
  }
  v236 = v152;
  v109 = 0;
LABEL_206:
  v237 = v109;
  v9 = v109;
  if ( v109 < 0 )
    goto LABEL_265;
  if ( v236 )
  {
    if ( v233 )
    {
      if ( SBYTE1(v245) >> 6 )
      {
        v130 = SBYTE1(v245) >> 6 == 1;
      }
      else
      {
        v130 = 0;
        LODWORD(v160) = COERCE_UNSIGNED_INT(_mm_shuffle_ps(v129, v129, 170).m128_f32[0] - 0.0) & _xmm;
        if ( v160 < 0.000081380211 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v242.m128_f32[2] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v244.m128_f32[2] - 0.0) & _xmm) < 0.000081380211
            || v160 < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v242.m128_f32[2] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v127.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v127, v127, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && ((v161 = _mm_shuffle_ps(v127, v127, 170).m128_f32[0],
                 COERCE_FLOAT(COERCE_UNSIGNED_INT(v161 - 0.0) & _xmm) < 0.000081380211)
             || COERCE_FLOAT(COERCE_UNSIGNED_INT(v161 - 1.0) & _xmm) < 0.000081380211)
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v127, v127, 255).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v244.m128_f32[2] - 0.0) & _xmm) < 0.000081380211 )
          {
            v130 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(_mm_shuffle_ps(v128, v128, 255).m128_u32[0] & _xmm)
                                                        * 61440.0)
                                                + (float)(COERCE_FLOAT(_mm_shuffle_ps(v129, v129, 255).m128_u32[0] & _xmm)
                                                        * 61440.0))
                                        + COERCE_FLOAT(_mm_shuffle_ps(v126, v126, 255).m128_u32[0] & _xmm))
                                - 1.0) & _xmm) < 0.000081380211;
          }
        }
        BYTE1(v245) = BYTE1(v245) & 0x3F | ((v130 << 7) - 64);
      }
      if ( (!v130
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v129, v129, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(v128.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211)
        && (COERCE_FLOAT(COERCE_UNSIGNED_INT(v129.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v128, v128, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211) )
      {
        v233 = 0;
      }
    }
    v162 = *((unsigned int *)this + 6);
    v163 = *((unsigned int *)this + 7);
    lpMem[0] = 0LL;
    if ( (_DWORD)v162 != (_DWORD)v163 )
    {
LABEL_293:
      v169 = v245;
      v9 = 0;
      v170 = 68 * v162;
      v171 = *((_QWORD *)this + 5);
      v237 = 0;
      *(__m128 *)(v170 + v171) = v129;
      *(__m128 *)(v170 + v171 + 16) = v128;
      *(__m128 *)(v170 + v171 + 32) = v127;
      *(__m128 *)(v170 + v171 + 48) = v126;
      *(_DWORD *)(v170 + v171 + 64) = v169;
      v172 = *((_DWORD *)this + 12);
      if ( v172 <= ++*((_DWORD *)this + 6) )
        v172 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 12) = v172;
      goto LABEL_296;
    }
    v164 = 2LL * (unsigned int)v163;
    if ( v164 > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      v237 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v163, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_297;
    }
    if ( (unsigned int)v164 <= 8 )
      LODWORD(v164) = 8;
    v165 = HrMalloc(0x44uLL, (unsigned int)v164, lpMem);
    v237 = v165;
    v9 = v165;
    if ( v165 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v166, 0LL, 0, v165, 0x53u, 0LL);
    }
    else
    {
      v167 = 68LL * *((unsigned int *)this + 6);
      if ( v167 <= 0xFFFFFFFF )
      {
        v168 = lpMem[0];
        memcpy_0(lpMem[0], *((const void **)this + 5), (unsigned int)v167);
        operator delete(*((void **)this + 5));
        v162 = *((unsigned int *)this + 6);
        *((_QWORD *)this + 5) = v168;
        *((_DWORD *)this + 7) = v164;
        goto LABEL_293;
      }
      v9 = -2147024362;
      v237 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v167, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v174 = lpMem[0];
    if ( lpMem[0] )
    {
      v175 = GetProcessHeap();
      HeapFree(v175, 0, v174);
    }
LABEL_296:
    if ( v9 < 0 )
    {
LABEL_297:
      MilInstrumentationCheckHR_MaybeFailFast(v170, 0LL, 0, v9, 0x36u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0, v9, 0x187u, 0LL);
      goto LABEL_304;
    }
    v173 = *(_QWORD *)v253;
    *(_BYTE *)(*(_QWORD *)v253 + 8LL) |= 4u;
  }
  else
  {
    v173 = *(_QWORD *)v253;
  }
  v177 = *(CGeometry **)(v6 + 240);
  if ( !v177 )
  {
LABEL_375:
    v215 = *(_QWORD *)(v6 + 248);
    v234 = 1;
    v235 = 0;
    if ( !v215
      || ((*(void (__fastcall **)(__int64, char *, bool *))(*(_QWORD *)v215 + 280LL))(v215, &v234, &v235), v234) )
    {
      v216 = *(_DWORD *)(v6 + 96);
      if ( (v216 & 0x10) != 0 )
      {
        v217 = *(_DWORD *)(v6 + 192) == 0;
      }
      else
      {
        if ( (v216 & 4) == 0 )
          goto LABEL_393;
        v217 = (v216 & 0x78000) == 0;
      }
      v235 = !v217;
      v234 = 0;
    }
    v218 = *((unsigned int *)this + 385);
    v219 = *((_DWORD *)this + 384);
    lpMem[0] = 0LL;
    if ( v219 == (_DWORD)v218 )
    {
      v220 = 2LL * (unsigned int)v218;
      if ( v220 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v218, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_392:
        *(_BYTE *)(v173 + 8) |= 8u;
        goto LABEL_393;
      }
      if ( (unsigned int)v220 <= 0x40 )
        LODWORD(v220) = 64;
      v221 = HrMalloc(1uLL, (unsigned int)v220, lpMem);
      if ( v221 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v222, 0LL, 0, v221, 0x53u, 0LL);
        v231 = lpMem[0];
        if ( lpMem[0] )
        {
          v232 = GetProcessHeap();
          HeapFree(v232, 0, v231);
        }
        goto LABEL_392;
      }
      v223 = lpMem[0];
      memcpy_0(lpMem[0], *((const void **)this + 194), *((unsigned int *)this + 384));
      operator delete(*((void **)this + 194));
      v219 = *((_DWORD *)this + 384);
      *((_QWORD *)this + 194) = v223;
      *((_DWORD *)this + 385) = v220;
    }
    *(_BYTE *)(v219 + *((_QWORD *)this + 194)) = v235;
    v224 = *((_DWORD *)this + 390);
    if ( v224 <= ++*((_DWORD *)this + 384) )
      v224 = *((_DWORD *)this + 384);
    *((_DWORD *)this + 390) = v224;
    goto LABEL_392;
  }
  v32 = v233;
  if ( !v233 )
    goto LABEL_325;
  lpMem[0] = 0LL;
  LOBYTE(lpMem[1]) = 0;
  ShapeData = CGeometry::GetShapeData(v177, (const struct D2D_SIZE_F *)(v6 + 132), (struct CShapePtr *)lpMem);
  v9 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v179, 0LL, 0, ShapeData, 0x5F4u, 0LL);
    v181 = v236;
LABEL_318:
    v180 = (void (__fastcall ***)(void *, __int64))lpMem[0];
  }
  else
  {
    v180 = (void (__fastcall ***)(void *, __int64))lpMem[0];
    if ( lpMem[0] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)lpMem[0] + 16LL))(lpMem[0]) )
        goto LABEL_315;
      v180 = (void (__fastcall ***)(void *, __int64))lpMem[0];
      if ( lpMem[0] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(void *, struct CManipulationManager **))(*(_QWORD *)lpMem[0] + 40LL))(
               lpMem[0],
               v252)
          && LODWORD(v252[0]) == 1 )
        {
          v181 = 1;
          goto LABEL_318;
        }
LABEL_315:
        v180 = (void (__fastcall ***)(void *, __int64))lpMem[0];
      }
    }
    v181 = 0;
  }
  if ( LOBYTE(lpMem[1]) && v180 )
    (**v180)(v180, 1LL);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v180, 0LL, 0, v9, 0x194u, 0LL);
    goto LABEL_410;
  }
  if ( !v181 )
    v233 = 0;
LABEL_325:
  v182 = *(CGeometry **)(v6 + 240);
  *(_QWORD *)&v254 = 0LL;
  BYTE8(v254) = 0;
  *(_OWORD *)v253 = 0LL;
  v183 = CGeometry::GetShapeData(v182, (const struct D2D_SIZE_F *)(v6 + 132), (struct CShapePtr *)&v254);
  v237 = v183;
  v9 = v183;
  if ( v183 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v184, 0LL, 0, v183, 0x60Eu, 0LL);
    goto LABEL_370;
  }
  v185 = v254;
  v9 = -2003292412;
  v237 = -2003292412;
  if ( (_QWORD)v254 )
  {
    v186 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD))(*(_QWORD *)v254 + 32LL))(v254, v253, 0LL);
    v237 = v186;
    v9 = v186;
    if ( v186 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v185, 0LL, 0, v186, 0x115u, 0LL);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v185, 0LL, 0, v9, 0x613u, 0LL);
    goto LABEL_370;
  }
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v250);
  v187 = *((_DWORD *)this + 34);
  *(_OWORD *)v252 = 0LL;
  if ( v187 )
    v188 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v187 - 1));
  else
    v188 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  *(_OWORD *)v252 = v188;
  *(_OWORD *)lpMem = *(_OWORD *)v253;
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v252, lpMem);
  v189 = *((unsigned int *)this + 35);
  v190 = *((_DWORD *)this + 34);
  lpMem[0] = 0LL;
  if ( v190 != (_DWORD)v189 )
  {
LABEL_341:
    v196 = v190;
    v9 = 0;
    v197 = *((_QWORD *)this + 19);
    v237 = 0;
    *(_OWORD *)(v197 + 16 * v196) = *(_OWORD *)v252;
    v198 = *((_DWORD *)this + 40);
    v199 = (unsigned int)++*((_DWORD *)this + 34);
    if ( v198 <= (unsigned int)v199 )
      v198 = *((_DWORD *)this + 34);
    *((_DWORD *)this + 40) = v198;
    goto LABEL_344;
  }
  v191 = 2LL * (unsigned int)v189;
  if ( v191 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v237 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v189, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    goto LABEL_345;
  }
  if ( (unsigned int)v191 <= 8 )
    LODWORD(v191) = 8;
  v192 = HrMalloc(0x10uLL, (unsigned int)v191, lpMem);
  v237 = v192;
  v9 = v192;
  if ( v192 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v193, 0LL, 0, v192, 0x53u, 0LL);
  }
  else
  {
    v194 = 16LL * *((unsigned int *)this + 34);
    if ( v194 <= 0xFFFFFFFF )
    {
      v195 = lpMem[0];
      memcpy_0(lpMem[0], *((const void **)this + 19), (unsigned int)v194);
      operator delete(*((void **)this + 19));
      v190 = *((_DWORD *)this + 34);
      *((_QWORD *)this + 19) = v195;
      *((_DWORD *)this + 35) = v191;
      goto LABEL_341;
    }
    v9 = -2147024362;
    v237 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v193, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v209 = lpMem[0];
  if ( lpMem[0] )
  {
    v210 = GetProcessHeap();
    HeapFree(v210, 0, v209);
  }
LABEL_344:
  if ( v9 >= 0 )
  {
    v200 = *((unsigned int *)this + 369);
    v201 = *((_DWORD *)this + 368);
    lpMem[0] = 0LL;
    if ( v201 == (_DWORD)v200 )
    {
      v202 = 2LL * (unsigned int)v200;
      if ( v202 > 0xFFFFFFFF )
      {
        v205 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v200, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        v9 = -2147024362;
        v237 = -2147024362;
        goto LABEL_357;
      }
      if ( (unsigned int)v202 <= 0x40 )
        LODWORD(v202) = 64;
      v203 = HrMalloc(4uLL, (unsigned int)v202, lpMem);
      v205 = v203;
      if ( v203 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v204, 0LL, 0, v203, 0x53u, 0LL);
      }
      else
      {
        v206 = 4LL * *((unsigned int *)this + 368);
        if ( v206 <= 0xFFFFFFFF )
        {
          v207 = lpMem[0];
          memcpy_0(lpMem[0], *((const void **)this + 186), (unsigned int)v206);
          operator delete(*((void **)this + 186));
          v201 = *((_DWORD *)this + 368);
          *((_QWORD *)this + 186) = v207;
          *((_DWORD *)this + 369) = v202;
          goto LABEL_353;
        }
        v205 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v204, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v211 = lpMem[0];
      if ( lpMem[0] )
      {
        v212 = GetProcessHeap();
        HeapFree(v212, 0, v211);
      }
LABEL_356:
      v237 = v205;
      v9 = v205;
      if ( v205 >= 0 )
        goto LABEL_370;
LABEL_357:
      MilInstrumentationCheckHR_MaybeFailFast(v214, 0LL, 0, v205, 0x618u, 0LL);
      goto LABEL_370;
    }
LABEL_353:
    v205 = 0;
    *(_DWORD *)(*((_QWORD *)this + 186) + 4LL * v201) = 0;
    v208 = *((_DWORD *)this + 374);
    v214 = (unsigned int)++*((_DWORD *)this + 368);
    if ( v208 <= (unsigned int)v214 )
      v208 = *((_DWORD *)this + 368);
    *((_DWORD *)this + 374) = v208;
    goto LABEL_356;
  }
LABEL_345:
  MilInstrumentationCheckHR_MaybeFailFast(v199, 0LL, 0, v9, 0x31u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v213, 0LL, 0, v9, 0x617u, 0LL);
LABEL_370:
  if ( BYTE8(v254) )
  {
    v214 = v254;
    if ( (_QWORD)v254 )
      (**(void (__fastcall ***)(_QWORD, __int64))v254)(v254, 1LL);
  }
  if ( v9 >= 0 )
  {
    *(_BYTE *)(v173 + 8) |= 2u;
    goto LABEL_375;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v214, 0LL, 0, v9, 0x19Eu, 0LL);
LABEL_304:
  v32 = v233;
LABEL_410:
  if ( v9 < 0 )
    return (unsigned int)v9;
LABEL_411:
  result = (unsigned int)v9;
  if ( !v32 )
    ++*((_DWORD *)this + 365);
  return result;
}

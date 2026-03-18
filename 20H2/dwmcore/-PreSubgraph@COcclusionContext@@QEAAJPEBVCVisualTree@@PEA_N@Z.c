/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008FBC0
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18008D110 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x1800060C0 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180006108 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18000FC9C (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800178CC (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004EEC0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D9E8 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180085320 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18008C1B0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180091760 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180092390 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x180097EF8 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B2B50 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B3840 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B6AF0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801773B0 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x180222800 (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
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
  _DWORD *v13; // rcx
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
  struct CComposition *v30; // r8
  bool v31; // di
  float *v32; // rdx
  float v33; // xmm0_4
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // eax
  int v37; // eax
  void *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  float v41; // xmm7_4
  float v42; // xmm9_4
  float v43; // xmm8_4
  float v44; // xmm5_4
  int v45; // eax
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm6_4
  float v49; // xmm0_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  unsigned __int64 v53; // rdx
  unsigned int v54; // ecx
  float v55; // xmm2_4
  float v56; // xmm6_4
  float *v57; // rax
  float v58; // xmm4_4
  float v59; // xmm1_4
  float v60; // xmm0_4
  int v61; // edi
  bool v62; // bl
  _DWORD *v63; // r8
  __int64 v64; // rdx
  _BYTE *v65; // rcx
  unsigned int k; // eax
  _QWORD *v67; // rcx
  char v68; // al
  bool v69; // zf
  _DWORD *v70; // r8
  float v71; // xmm6_4
  __int64 v72; // rdx
  _BYTE *v73; // rcx
  unsigned int m; // eax
  float **v75; // rbx
  float *v76; // rbx
  __int64 v77; // rcx
  float v78; // xmm1_4
  int v79; // edx
  int *v80; // rcx
  _DWORD *v81; // r8
  __int64 v82; // rdx
  _BYTE *v83; // rcx
  unsigned int n; // eax
  CFilterEffect **v85; // rbx
  CFilterEffect *v86; // rbx
  bool v87; // bl
  struct CTreeData *TreeData; // rax
  __int64 v89; // rdx
  _BYTE *v90; // rbx
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
  struct CTreeData *v109; // rbx
  int v110; // r15d
  __int64 v111; // r12
  __int64 v112; // rcx
  __int64 v113; // rdi
  __int64 v114; // rcx
  _DWORD *v115; // r8
  __int64 v116; // rdx
  _BYTE *v117; // rcx
  unsigned int jj; // eax
  _QWORD **v119; // rcx
  void *v120; // rbx
  HANDLE ProcessHeap; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v123; // r10
  struct _LIST_ENTRY *Flink; // rax
  _QWORD *v125; // rcx
  CVisual *v126; // rax
  CVisual *v127; // rsi
  struct _LIST_ENTRY *v128; // rax
  struct _LIST_ENTRY *v129; // r10
  struct _LIST_ENTRY *v130; // rax
  unsigned __int64 v131; // rax
  __int128 *v132; // rsi
  _BYTE *v133; // rax
  __int64 v134; // r8
  unsigned __int8 IsEqual; // al
  _BYTE *v136; // r9
  int v137; // eax
  _DWORD *v138; // r8
  __int64 v139; // rdx
  unsigned int kk; // eax
  __int64 v141; // rdx
  _QWORD *v142; // rax
  CComposition *v143; // rbx
  __m128 v144; // xmm8
  __int64 v145; // rdx
  int v146; // r12d
  __m128 v147; // xmm9
  __m128 v148; // xmm7
  __m128 v149; // xmm6
  __int128 *v150; // rax
  __int128 v151; // xmm0
  __int128 v152; // xmm1
  __int128 v153; // xmm0
  __int128 v154; // xmm1
  int v155; // eax
  __int64 v156; // rcx
  char v157; // cl
  float v158; // xmm1_4
  float v159; // xmm1_4
  __int64 v160; // rax
  __int64 v161; // rcx
  unsigned __int64 v162; // rdi
  int v163; // eax
  __int64 v164; // rcx
  unsigned __int64 v165; // rcx
  void *v166; // rbx
  __int64 v167; // rcx
  __int64 v168; // rax
  unsigned int v169; // eax
  void *v170; // rbx
  HANDLE v171; // rax
  _BYTE *v172; // r15
  __int64 v173; // rcx
  CGeometry *v174; // rcx
  int ShapeData; // eax
  __int64 v176; // rcx
  void (__fastcall ***v177)(void *, __int64); // rcx
  char v178; // bl
  CGeometry *v179; // rcx
  int v180; // eax
  __int64 v181; // rcx
  __int64 v182; // rcx
  int v183; // eax
  int v184; // eax
  __int128 v185; // xmm0
  __int64 v186; // rcx
  unsigned int v187; // eax
  unsigned __int64 v188; // rdi
  int v189; // eax
  __int64 v190; // rcx
  unsigned __int64 v191; // rax
  void *v192; // rbx
  __int64 v193; // rcx
  __int64 v194; // rax
  unsigned int v195; // eax
  __int64 v196; // rcx
  __int64 v197; // rcx
  unsigned int v198; // eax
  unsigned __int64 v199; // rdi
  int v200; // eax
  __int64 v201; // rcx
  int v202; // ebx
  unsigned __int64 v203; // rax
  void *v204; // rbx
  unsigned int v205; // eax
  void *v206; // rbx
  HANDLE v207; // rax
  void *v208; // rdi
  HANDLE v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rcx
  __int64 v212; // rcx
  int v213; // eax
  bool v214; // zf
  __int64 v215; // rcx
  unsigned int v216; // eax
  unsigned __int64 v217; // rdi
  int v218; // eax
  __int64 v219; // rcx
  void *v220; // rbx
  unsigned int v221; // eax
  int *v222; // r15
  unsigned int v223; // esi
  unsigned int v224; // edi
  _BYTE *LightAtNoRef; // rax
  __int64 v226; // rbx
  int v227; // eax
  void *v228; // rbx
  HANDLE v229; // rax
  bool v230; // [rsp+40h] [rbp-C0h]
  char v231; // [rsp+41h] [rbp-BFh] BYREF
  bool v232; // [rsp+42h] [rbp-BEh] BYREF
  char v233; // [rsp+43h] [rbp-BDh] BYREF
  int v234; // [rsp+44h] [rbp-BCh]
  char v235; // [rsp+48h] [rbp-B8h]
  void *v236[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct CVisualTree *v237; // [rsp+60h] [rbp-A0h]
  __m128 v238; // [rsp+70h] [rbp-90h]
  __m128 v239; // [rsp+80h] [rbp-80h]
  __m128 v240; // [rsp+90h] [rbp-70h]
  __m128 v241; // [rsp+A0h] [rbp-60h]
  int v242; // [rsp+B0h] [rbp-50h]
  _BYTE v243[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v244; // [rsp+100h] [rbp+0h]
  _BYTE v245[64]; // [rsp+110h] [rbp+10h] BYREF
  int v246; // [rsp+150h] [rbp+50h]
  _BYTE v247[64]; // [rsp+160h] [rbp+60h] BYREF
  int v248; // [rsp+1A0h] [rbp+A0h]
  void *lpMem[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v250; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v251; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v252; // [rsp+1E0h] [rbp+E0h]

  v3 = *((_DWORD *)this + 365);
  v4 = *(_QWORD *)a2;
  v6 = *((_QWORD *)this + 8);
  lpMem[0] = a3;
  v237 = a2;
  v8 = *(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v4 + 200);
  v9 = 0;
  v234 = 0;
  v230 = v3 == 0;
  v236[0] = 0LL;
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
    v236[0] = *(void **)(v10 + 32);
    if ( !v236[0] )
    {
      v236[0] = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 24) + 360LL))(*(_QWORD *)(v10 + 24));
      *(void **)(v10 + 32) = v236[0];
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
  v13 = v236[0];
  v14 = -1;
  if ( !v236[0] )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x103u, 0LL);
    return 2147942414LL;
  }
  *((_BYTE *)v236[0] + 8) &= 0xF0u;
  v30 = g_pComposition;
  v13[3] = *((_DWORD *)this + 364);
  *(_BYTE *)lpMem[0] = 1;
  if ( *((_BYTE *)v30 + 1129) )
  {
    if ( CVisual::HasProtectedContent((CVisual *)v6) )
    {
      v31 = v3 == 0;
      *(_BYTE *)lpMem[0] = 0;
      goto LABEL_410;
    }
    v30 = g_pComposition;
  }
  v32 = (float *)((char *)v237 + 64);
  if ( v6 != *((_QWORD *)v237 + 7) )
    v32 = (float *)(v6 + 140);
  v33 = v32[5];
  v34 = (v33 <= v32[4]) + 1;
  if ( v32[2] > *v32 )
    v34 = v33 <= v32[4];
  v35 = v34 + 1;
  if ( v32[3] > v32[1] )
    v35 = v34;
  if ( v35 > 1 )
  {
    v14 = 0;
LABEL_157:
    v230 = 0;
    v97 = 0LL;
    if ( v30 )
      v97 = *((_QWORD *)v30 + 44);
    v69 = *(_QWORD *)(v12 + 8) == v97;
    v90 = lpMem[0];
    if ( !v69 )
      *(_BYTE *)lpMem[0] = 0;
    goto LABEL_148;
  }
  v36 = *((_DWORD *)this + 376);
  if ( v36 )
    v14 = *(_DWORD *)(*((_QWORD *)this + 190) + 4LL * (unsigned int)(v36 - 1));
  if ( !v14 )
    goto LABEL_157;
  v37 = *((_DWORD *)this + 6);
  v252 = 0LL;
  v251 = 0LL;
  if ( v37 )
    v38 = (void *)(*((_QWORD *)this + 5) + 68LL * (unsigned int)(v37 - 1));
  else
    v38 = &CMILMatrix::Identity;
  v39 = *((_QWORD *)this + 1);
  v40 = v39 + 64;
  if ( v6 != *(_QWORD *)(v39 + 56) )
    v40 = v6 + 140;
  CMILMatrix::Transform3DBoundsHelper<1>(v38, v40, &v251);
  v41 = *((float *)&v251 + 2);
  v42 = *(float *)&v251;
  if ( *((float *)&v251 + 2) <= *(float *)&v251 )
    goto LABEL_86;
  v43 = *((float *)&v251 + 3);
  v44 = *((float *)&v251 + 1);
  if ( *((float *)&v251 + 3) <= *((float *)&v251 + 1) )
    goto LABEL_86;
  v45 = *((_DWORD *)this + 34);
  if ( v45 )
  {
    v251 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v45 - 1));
    v46 = *(float *)&v251;
    if ( v42 > *(float *)&v251 )
      v46 = v42;
    v47 = *((float *)&v251 + 1);
    v48 = *((float *)&v251 + 1);
    if ( v44 > *((float *)&v251 + 1) )
    {
      v47 = v44;
      v48 = v44;
    }
    v49 = *((float *)&v251 + 2);
    v50 = *((float *)&v251 + 2);
    if ( *((float *)&v251 + 2) > v41 )
    {
      v49 = v41;
      v50 = v41;
    }
    v51 = *((float *)&v251 + 3);
    v52 = *((float *)&v251 + 3);
    if ( *((float *)&v251 + 3) > v43 )
    {
      v51 = v43;
      v52 = v43;
    }
    if ( v50 <= v46 || v52 <= v48 )
    {
      v51 = 0.0;
      v49 = 0.0;
      v47 = 0.0;
      v46 = 0.0;
    }
    v42 = v46;
    v44 = v47;
    v41 = v49;
    v43 = v51;
  }
  v53 = *((_QWORD *)this + 133);
  v54 = 0;
  if ( !v53 )
  {
LABEL_86:
    v30 = g_pComposition;
    v14 = 0;
    goto LABEL_157;
  }
  while ( ((v14 >> v54) & 1) == 0 )
  {
LABEL_85:
    if ( ++v54 >= v53 )
      goto LABEL_86;
  }
  v55 = v42;
  v56 = v44;
  v57 = (float *)((char *)this + 16 * v54 + 1072);
  if ( *v57 > v42 )
    v55 = *v57;
  v58 = v44;
  if ( v57[1] > v44 )
  {
    v56 = v57[1];
    v58 = v56;
  }
  v59 = v41;
  if ( v41 > v57[2] )
    v59 = v57[2];
  v60 = v43;
  if ( v43 > v57[3] )
    v60 = v57[3];
  if ( v59 <= v55 || v60 <= v58 || v59 <= v55 || v60 <= v56 )
  {
    v14 &= ~(1 << v54);
    goto LABEL_85;
  }
  if ( !v3 )
  {
    if ( (*(_BYTE *)(v6 + 94) & 4) != 0
      || (*(_DWORD *)(v6 + 88) & 0x100) == 0
      || (*(_BYTE *)(v6 + 93) & 0x60) != 0
      || ((*(_DWORD *)(v6 + 192) - 2) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_146;
    }
    v61 = *(_DWORD *)(v6 + 100);
    v62 = v11 && *(_DWORD *)(v11 + 100) == 1;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 232LL))(v6) )
      goto LABEL_106;
    v63 = *(_DWORD **)(v6 + 224);
    if ( (*v63 & 0x400000) == 0 )
      goto LABEL_105;
    v64 = (unsigned int)v63[1];
    v65 = v63 + 2;
    for ( k = 0; k < (unsigned int)v64; ++v65 )
    {
      if ( *v65 == 10 )
        break;
      ++k;
    }
    v67 = k >= (unsigned int)v64 ? 0LL : (_QWORD *)((char *)v63 + 8LL * k - (((_BYTE)v64 + 15) & 7) + v64 + 15);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v67 + 56LL))(*v67, 59LL) )
LABEL_106:
      v68 = 1;
    else
LABEL_105:
      v68 = 0;
    if ( v61 == 1 )
    {
      v69 = v62 ? v68 == 0 : (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v6 + 72)) == 0;
      if ( !v69 )
        goto LABEL_146;
    }
    v70 = *(_DWORD **)(v6 + 224);
    v71 = *(float *)&FLOAT_1_0;
    if ( (*v70 & 0x400000) != 0 )
    {
      v72 = (unsigned int)v70[1];
      v73 = v70 + 2;
      for ( m = 0; m < (unsigned int)v72; ++v73 )
      {
        if ( *v73 == 10 )
          break;
        ++m;
      }
      if ( m >= (unsigned int)v72 )
        v75 = 0LL;
      else
        v75 = (float **)((char *)v70 + 8LL * m - (((_BYTE)v72 + 15) & 7) + v72 + 15);
      v76 = *v75;
      if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v76 + 56LL))(v76, 56LL) )
        v71 = v76[18];
    }
    if ( fminf(1.0, fmaxf(v71, 0.0)) < 1.0 )
      goto LABEL_146;
    if ( v6 != *((_QWORD *)v237 + 7) )
    {
      v77 = *(_QWORD *)(v6 + 216);
      if ( (*(_DWORD *)(v77 + 4) & 0x8000000) != 0 )
      {
        v79 = *(_DWORD *)(v77 + 12);
        v80 = (int *)(v77 + 12);
        if ( (v79 & 0x7F000000) != 0x5000000 )
        {
          do
          {
            v80 = (int *)((char *)v80 + (v79 & 0xFFFFFF) + 4);
            v79 = *v80;
          }
          while ( (*v80 & 0x7F000000) != 0x5000000 );
        }
        LODWORD(v250) = v80[1];
        v78 = *(float *)&v250;
      }
      else
      {
        v78 = *(float *)&FLOAT_1_0;
      }
      if ( fminf(1.0, fmaxf(v78, 0.0)) < 1.0 )
        goto LABEL_146;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 232LL))(v6) )
      goto LABEL_146;
    v81 = *(_DWORD **)(v6 + 224);
    if ( (*v81 & 0x400000) != 0 )
    {
      v82 = (unsigned int)v81[1];
      v83 = v81 + 2;
      for ( n = 0; n < (unsigned int)v82; ++v83 )
      {
        if ( *v83 == 10 )
          break;
        ++n;
      }
      v85 = n >= (unsigned int)v82
          ? 0LL
          : (CFilterEffect **)((char *)v81 + 8LL * n - (((_BYTE)v82 + 15) & 7) + v82 + 15);
      v86 = *v85;
      if ( (*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v86 + 56LL))(v86, 59LL) )
      {
        if ( !CFilterEffect::IsOpaque(v86, (const struct CVisual *)v6) )
          goto LABEL_146;
      }
    }
    v87 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v237 + 200LL))(v237) )
    {
      TreeData = CVisual::FindTreeData((CVisual *)v6, v237);
      if ( TreeData )
      {
        v89 = 0LL;
        if ( g_pComposition )
          v89 = *((_QWORD *)g_pComposition + 44);
        if ( *((_BYTE *)TreeData + 18) )
          v87 = *((_QWORD *)TreeData + 35) == v89;
      }
    }
    if ( v87 )
LABEL_146:
      v230 = 0;
  }
  v90 = lpMem[0];
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
  if ( *v90 != 1 )
  {
LABEL_392:
    v31 = v230;
    if ( v230 )
    {
      if ( (unsigned int)((__int64)(*(_QWORD *)(v6 + 280) - *(_QWORD *)(v6 + 272)) >> 4)
        || (unsigned int)((__int64)(*(_QWORD *)(v6 + 304) - *(_QWORD *)(v6 + 296)) >> 4) )
      {
        v236[0] = (void *)0x100000000LL;
        v222 = (int *)v236;
        while ( 1 )
        {
          v223 = *v222;
          v224 = 0;
          if ( (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, *v222) )
            break;
LABEL_401:
          if ( ++v222 == (int *)&v236[1] )
            goto LABEL_407;
        }
        while ( 1 )
        {
          LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v6, v224, v223);
          v226 = (__int64)LightAtNoRef;
          if ( LightAtNoRef[162] )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                           + 256LL))(
                   LightAtNoRef,
                   v237,
                   v6) )
            {
              v227 = CLightStack::Push((__int64)this + 168, v226, v223);
              if ( v227 < 0 )
                break;
            }
          }
          if ( ++v224 >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, v223) )
            goto LABEL_401;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v227, 0x4Bu, 0LL);
LABEL_407:
        v31 = v230;
      }
      v9 = v234;
    }
    goto LABEL_409;
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
    v120 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v120);
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
  *((_BYTE *)v236[0] + 8) |= 1u;
  if ( !v14 )
    goto LABEL_392;
  v69 = *(_QWORD *)(v6 + 240) == 0LL;
  v108 = v247;
  v109 = 0LL;
  v242 = 0;
  if ( v69 )
    v108 = 0LL;
  v248 = 0;
  v110 = -2003292412;
  v111 = *((_QWORD *)this + 8);
  *(_QWORD *)&v250 = v108;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, __int64))(*(_QWORD *)v237 + 200LL))(v237, v100) )
  {
    v113 = v111 + 320;
    goto LABEL_184;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v111);
  v123 = TreeDataListHead;
  if ( !TreeDataListHead )
    goto LABEL_260;
  Flink = TreeDataListHead->Flink;
  if ( Flink == v123 )
    goto LABEL_260;
  while ( 1 )
  {
    v113 = (__int64)&Flink[-18];
    if ( (struct CVisualTree *)Flink[2].Flink == v237 )
      break;
    Flink = Flink->Flink;
    if ( Flink == v123 )
      goto LABEL_260;
  }
LABEL_184:
  if ( !v113 )
  {
LABEL_260:
    v147 = v241;
    v149 = v240;
    v144 = v239;
    v148 = v238;
    v146 = v242;
    goto LABEL_261;
  }
  v110 = 0;
  v235 = 0;
  if ( v111 == *((_QWORD *)v237 + 7) )
    goto LABEL_220;
  v114 = 0LL;
  if ( g_pComposition )
    v114 = *((_QWORD *)g_pComposition + 44);
  if ( *(_BYTE *)(v113 + 18) && *(_QWORD *)(v113 + 280) == v114 )
    goto LABEL_210;
  v115 = *(_DWORD **)(v111 + 224);
  if ( (*v115 & 0x1000000) == 0 )
    goto LABEL_210;
  v116 = (unsigned int)v115[1];
  v117 = v115 + 2;
  for ( jj = 0; jj < (unsigned int)v116; ++v117 )
  {
    if ( *v117 == 8 )
      break;
    ++jj;
  }
  v119 = jj >= (unsigned int)v116 ? 0LL : (_QWORD **)((char *)v115 + v116 + 8LL * jj - (((_BYTE)v116 + 15) & 7) + 15);
  v125 = *v119;
  if ( v125 && (v126 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v125 + 200LL))(*v125)) != 0LL )
  {
    v235 = 1;
    v109 = CVisual::FindTreeData(v126, v237);
  }
  else
  {
LABEL_210:
    v127 = *(CVisual **)(v111 + 80);
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v237 + 200LL))(v237) )
    {
      v109 = (CVisual *)((char *)v127 + 320);
    }
    else
    {
      v128 = CVisual::GetTreeDataListHead(v127);
      v129 = v128;
      if ( v128 )
      {
        v130 = v128->Flink;
        if ( v130 != v129 )
        {
          while ( (struct CVisualTree *)v130[2].Flink != v237 )
          {
            v130 = v130->Flink;
            if ( v130 == v129 )
              goto LABEL_218;
          }
          v109 = (struct CTreeData *)&v130[-18];
        }
      }
    }
  }
LABEL_218:
  if ( !v109 )
LABEL_220:
    v131 = 1LL;
  else
    v131 = *((_QWORD *)v109 + 15);
  if ( *(_QWORD *)(v113 + 120) >= v131 )
  {
LABEL_250:
    if ( v110 >= 0 )
      goto LABEL_251;
    MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v110, 0x6DDu, 0LL);
    goto LABEL_260;
  }
  v132 = (__int128 *)((char *)v109 + 40);
  v244 = 0;
  v246 = 0;
  if ( !v109 )
    v132 = 0LL;
  v133 = v245;
  if ( !*(_QWORD *)(v111 + 240) )
    v133 = 0LL;
  CVisual::CalcCpuClippingTransform(v111, 5, (__int64)v237, v132, &v233, (CMILMatrix *)v243, (__int64)v133);
  if ( v235 || !v132 )
  {
    LOBYTE(v134) = 1;
  }
  else if ( v233 )
  {
    IsEqual = CMILMatrix::IsEqualTo<0>(v132, v243);
    v134 = IsEqual;
    LOBYTE(v134) = IsEqual ^ 1;
  }
  else
  {
    LOBYTE(v134) = 0;
  }
  v136 = v245;
  if ( !*(_QWORD *)(v111 + 240) )
    v136 = 0LL;
  v137 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, _BYTE *))(*(_QWORD *)v113 + 48LL))(
           v113,
           v243,
           v134,
           v136);
  v110 = v137;
  if ( v137 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v137, 0x7D2u, 0LL);
  }
  else
  {
    v138 = *(_DWORD **)(v111 + 224);
    if ( (*v138 & 0x800000) != 0 )
    {
      v139 = (unsigned int)v138[1];
      v112 = (__int64)(v138 + 2);
      for ( kk = 0; kk < (unsigned int)v139; ++v112 )
      {
        if ( *(_BYTE *)v112 == 9 )
          break;
        ++kk;
      }
      if ( kk >= (unsigned int)v139 )
      {
        v142 = 0LL;
      }
      else
      {
        v141 = v139 + 15;
        v112 = 8LL * kk - (v141 & 7);
        v142 = (_QWORD *)((char *)v138 + v112 + v141);
      }
      if ( *v142 && (*(_BYTE *)(v111 + 94) & 1) != 0 )
      {
        lpMem[0] = 0LL;
        v143 = *(CComposition **)(v111 + 16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(lpMem);
        if ( (int)CComposition::GetManipulationManager(v143, (struct CManipulationManager **)lpMem) >= 0 )
          CManipulationManager::NotifyVisualPropertyChange(
            (CManipulationManager *)lpMem[0],
            (struct CVisual *)v111,
            (const struct CMILMatrix *)v243);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(lpMem);
      }
    }
  }
  if ( v110 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v110, 0x793u, 0LL);
    goto LABEL_250;
  }
LABEL_251:
  if ( !*(_QWORD *)(v113 + 120) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, -2003292412, 0x69u, 0LL);
    v110 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v156, 0LL, 0, -2003292412, 0x6E2u, 0LL);
    v9 = -2003292412;
LABEL_258:
    MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v110, 0x176u, 0LL);
    v31 = v230;
    goto LABEL_409;
  }
  v144 = *(__m128 *)(v113 + 56);
  v145 = v250;
  v146 = *(_DWORD *)(v113 + 104);
  v112 = *(unsigned __int8 *)(v113 + 17);
  v239 = v144;
  v242 = v146;
  v147 = *(__m128 *)(v113 + 88);
  v148 = *(__m128 *)(v113 + 40);
  v241 = v147;
  v149 = *(__m128 *)(v113 + 72);
  if ( (_QWORD)v250 )
  {
    v150 = *(__int128 **)(v113 + 112);
    if ( v150 )
    {
      v151 = *v150;
      v233 = v112;
      v152 = v150[1];
      v110 = 0;
      *(_OWORD *)v250 = v151;
      v153 = v150[2];
      *(_OWORD *)(v145 + 16) = v152;
      v154 = v150[3];
      v155 = *((_DWORD *)v150 + 16);
      *(_OWORD *)(v145 + 32) = v153;
      *(_OWORD *)(v145 + 48) = v154;
      *(_DWORD *)(v145 + 64) = v155;
      goto LABEL_261;
    }
    *(__m128 *)v250 = v148;
    *(__m128 *)(v145 + 16) = v144;
    *(__m128 *)(v145 + 32) = v149;
    *(__m128 *)(v145 + 48) = v147;
    *(_DWORD *)(v145 + 64) = v146;
  }
  v233 = v112;
  v110 = 0;
LABEL_261:
  v234 = v110;
  v9 = v110;
  if ( v110 < 0 )
    goto LABEL_258;
  if ( v233 )
  {
    if ( v230 )
    {
      if ( SBYTE1(v242) >> 6 )
      {
        v157 = SBYTE1(v242) >> 6 == 1;
      }
      else
      {
        v157 = 0;
        LODWORD(v158) = COERCE_UNSIGNED_INT(_mm_shuffle_ps(v148, v148, 170).m128_f32[0] - 0.0) & _xmm;
        if ( v158 < 0.000081380211 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v239.m128_f32[2] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v241.m128_f32[2] - 0.0) & _xmm) < 0.000081380211
            || v158 < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v239.m128_f32[2] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v149.m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v149, v149, 85).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && ((v159 = _mm_shuffle_ps(v149, v149, 170).m128_f32[0],
                 COERCE_FLOAT(COERCE_UNSIGNED_INT(v159 - 0.0) & _xmm) < 0.000081380211)
             || COERCE_FLOAT(COERCE_UNSIGNED_INT(v159 - 1.0) & _xmm) < 0.000081380211)
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v149, v149, 255).m128_f32[0] - 0.0) & _xmm) < 0.000081380211
            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v241.m128_f32[2] - 0.0) & _xmm) < 0.000081380211 )
          {
            v157 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)((float)(COERCE_FLOAT(_mm_shuffle_ps(v144, v144, 255).m128_u32[0] & _xmm)
                                                        * 61440.0)
                                                + (float)(COERCE_FLOAT(_mm_shuffle_ps(v148, v148, 255).m128_u32[0] & _xmm)
                                                        * 61440.0))
                                        + COERCE_FLOAT(_mm_shuffle_ps(v147, v147, 255).m128_u32[0] & _xmm))
                                - 1.0) & _xmm) < 0.000081380211;
          }
        }
        BYTE1(v242) = BYTE1(v242) & 0x3F | ((v157 << 7) - 64);
        v146 = v242;
      }
      if ( (!v157
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v148, v148, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(v144.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211)
        && (COERCE_FLOAT(COERCE_UNSIGNED_INT(v148.m128_f32[0] - 0.0) & _xmm) >= 0.000081380211
         || COERCE_FLOAT(COERCE_UNSIGNED_INT(_mm_shuffle_ps(v144, v144, 85).m128_f32[0] - 0.0) & _xmm) >= 0.000081380211) )
      {
        v230 = 0;
      }
    }
    v160 = *((unsigned int *)this + 6);
    v161 = *((unsigned int *)this + 7);
    lpMem[0] = 0LL;
    if ( (_DWORD)v160 != (_DWORD)v161 )
    {
LABEL_292:
      v167 = 68 * v160;
      v168 = *((_QWORD *)this + 5);
      v9 = 0;
      v234 = 0;
      *(__m128 *)(v167 + v168) = v148;
      *(__m128 *)(v167 + v168 + 16) = v144;
      *(__m128 *)(v167 + v168 + 32) = v149;
      *(__m128 *)(v167 + v168 + 48) = v147;
      *(_DWORD *)(v167 + v168 + 64) = v146;
      v169 = *((_DWORD *)this + 12);
      if ( v169 <= ++*((_DWORD *)this + 6) )
        v169 = *((_DWORD *)this + 6);
      *((_DWORD *)this + 12) = v169;
      goto LABEL_299;
    }
    v162 = 2LL * (unsigned int)v161;
    if ( v162 > 0xFFFFFFFF )
    {
      v9 = -2147024362;
      v234 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      goto LABEL_300;
    }
    if ( (unsigned int)v162 <= 8 )
      LODWORD(v162) = 8;
    v163 = HrMalloc(0x44uLL, (unsigned int)v162, lpMem);
    v234 = v163;
    v9 = v163;
    if ( v163 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v164, 0LL, 0, v163, 0x53u, 0LL);
    }
    else
    {
      v165 = 68LL * *((unsigned int *)this + 6);
      if ( v165 <= 0xFFFFFFFF )
      {
        v166 = lpMem[0];
        memcpy_0(lpMem[0], *((const void **)this + 5), (unsigned int)v165);
        operator delete(*((void **)this + 5));
        v160 = *((unsigned int *)this + 6);
        *((_QWORD *)this + 5) = v166;
        *((_DWORD *)this + 7) = v162;
        goto LABEL_292;
      }
      v9 = -2147024362;
      v234 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v165, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v170 = lpMem[0];
    if ( lpMem[0] )
    {
      v171 = GetProcessHeap();
      HeapFree(v171, 0, v170);
    }
LABEL_299:
    if ( v9 < 0 )
    {
LABEL_300:
      MilInstrumentationCheckHR_MaybeFailFast(v167, 0LL, 0, v9, 0x36u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v173, 0LL, 0, v9, 0x187u, 0LL);
      goto LABEL_303;
    }
    v172 = v236[0];
    *((_BYTE *)v236[0] + 8) |= 4u;
  }
  else
  {
    v172 = v236[0];
  }
  v174 = *(CGeometry **)(v6 + 240);
  if ( !v174 )
  {
LABEL_374:
    v212 = *(_QWORD *)(v6 + 248);
    v231 = 1;
    v232 = 0;
    if ( !v212
      || ((*(void (__fastcall **)(__int64, char *, bool *))(*(_QWORD *)v212 + 288LL))(v212, &v231, &v232), v231) )
    {
      v213 = *(_DWORD *)(v6 + 96);
      if ( (v213 & 0x10) != 0 )
      {
        v214 = *(_DWORD *)(v6 + 192) == 0;
      }
      else
      {
        if ( (v213 & 4) == 0 )
          goto LABEL_392;
        v214 = (v213 & 0x78000) == 0;
      }
      v232 = !v214;
      v231 = 0;
    }
    v215 = *((unsigned int *)this + 385);
    v216 = *((_DWORD *)this + 384);
    v236[0] = 0LL;
    if ( v216 == (_DWORD)v215 )
    {
      v217 = 2LL * (unsigned int)v215;
      if ( v217 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v215, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_391:
        v172[8] |= 8u;
        goto LABEL_392;
      }
      if ( (unsigned int)v217 <= 0x40 )
        LODWORD(v217) = 64;
      v218 = HrMalloc(1uLL, (unsigned int)v217, v236);
      if ( v218 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v219, 0LL, 0, v218, 0x53u, 0LL);
        v228 = v236[0];
        if ( v236[0] )
        {
          v229 = GetProcessHeap();
          HeapFree(v229, 0, v228);
        }
        goto LABEL_391;
      }
      v220 = v236[0];
      memcpy_0(v236[0], *((const void **)this + 194), *((unsigned int *)this + 384));
      operator delete(*((void **)this + 194));
      v216 = *((_DWORD *)this + 384);
      *((_QWORD *)this + 194) = v220;
      *((_DWORD *)this + 385) = v217;
    }
    *(_BYTE *)(v216 + *((_QWORD *)this + 194)) = v232;
    v221 = *((_DWORD *)this + 390);
    if ( v221 <= ++*((_DWORD *)this + 384) )
      v221 = *((_DWORD *)this + 384);
    *((_DWORD *)this + 390) = v221;
    goto LABEL_391;
  }
  v31 = v230;
  if ( !v230 )
    goto LABEL_324;
  v236[0] = 0LL;
  LOBYTE(v236[1]) = 0;
  ShapeData = CGeometry::GetShapeData(v174, (const struct D2D_SIZE_F *)(v6 + 132), (struct CShapePtr *)v236);
  v9 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0, ShapeData, 0x5F4u, 0LL);
    v178 = v233;
LABEL_317:
    v177 = (void (__fastcall ***)(void *, __int64))v236[0];
  }
  else
  {
    v177 = (void (__fastcall ***)(void *, __int64))v236[0];
    if ( v236[0] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v236[0] + 16LL))(v236[0]) )
        goto LABEL_314;
      v177 = (void (__fastcall ***)(void *, __int64))v236[0];
      if ( v236[0] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(void *, __int128 *))(*(_QWORD *)v236[0] + 40LL))(v236[0], &v250)
          && (_DWORD)v250 == 1 )
        {
          v178 = 1;
          goto LABEL_317;
        }
LABEL_314:
        v177 = (void (__fastcall ***)(void *, __int64))v236[0];
      }
    }
    v178 = 0;
  }
  if ( LOBYTE(v236[1]) && v177 )
    (**v177)(v177, 1LL);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v177, 0LL, 0, v9, 0x194u, 0LL);
    goto LABEL_409;
  }
  if ( !v178 )
    v230 = 0;
LABEL_324:
  v179 = *(CGeometry **)(v6 + 240);
  *(_QWORD *)&v251 = 0LL;
  BYTE8(v251) = 0;
  *(_OWORD *)lpMem = 0LL;
  v180 = CGeometry::GetShapeData(v179, (const struct D2D_SIZE_F *)(v6 + 132), (struct CShapePtr *)&v251);
  v234 = v180;
  v9 = v180;
  if ( v180 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v181, 0LL, 0, v180, 0x60Eu, 0LL);
    goto LABEL_369;
  }
  v182 = v251;
  v9 = -2003292412;
  v234 = -2003292412;
  if ( (_QWORD)v251 )
  {
    v183 = (*(__int64 (__fastcall **)(_QWORD, void **, _QWORD))(*(_QWORD *)v251 + 32LL))(v251, lpMem, 0LL);
    v234 = v183;
    v9 = v183;
    if ( v183 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v182, 0LL, 0, v183, 0x115u, 0LL);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v182, 0LL, 0, v9, 0x613u, 0LL);
    goto LABEL_369;
  }
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v247);
  v184 = *((_DWORD *)this + 34);
  v250 = 0LL;
  if ( v184 )
    v185 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v184 - 1));
  else
    v185 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v250 = v185;
  *(_OWORD *)v236 = *(_OWORD *)lpMem;
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v250, v236);
  v186 = *((unsigned int *)this + 35);
  v187 = *((_DWORD *)this + 34);
  v236[0] = 0LL;
  if ( v187 != (_DWORD)v186 )
  {
LABEL_340:
    v193 = v187;
    v9 = 0;
    v194 = *((_QWORD *)this + 19);
    v234 = 0;
    *(_OWORD *)(v194 + 16 * v193) = v250;
    v195 = *((_DWORD *)this + 40);
    v196 = (unsigned int)++*((_DWORD *)this + 34);
    if ( v195 <= (unsigned int)v196 )
      v195 = *((_DWORD *)this + 34);
    *((_DWORD *)this + 40) = v195;
    goto LABEL_343;
  }
  v188 = 2LL * (unsigned int)v186;
  if ( v188 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v234 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v186, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    goto LABEL_344;
  }
  if ( (unsigned int)v188 <= 8 )
    LODWORD(v188) = 8;
  v189 = HrMalloc(0x10uLL, (unsigned int)v188, v236);
  v234 = v189;
  v9 = v189;
  if ( v189 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v190, 0LL, 0, v189, 0x53u, 0LL);
  }
  else
  {
    v191 = 16LL * *((unsigned int *)this + 34);
    if ( v191 <= 0xFFFFFFFF )
    {
      v192 = v236[0];
      memcpy_0(v236[0], *((const void **)this + 19), (unsigned int)v191);
      operator delete(*((void **)this + 19));
      v187 = *((_DWORD *)this + 34);
      *((_QWORD *)this + 19) = v192;
      *((_DWORD *)this + 35) = v188;
      goto LABEL_340;
    }
    v9 = -2147024362;
    v234 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v190, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v206 = v236[0];
  if ( v236[0] )
  {
    v207 = GetProcessHeap();
    HeapFree(v207, 0, v206);
  }
LABEL_343:
  if ( v9 >= 0 )
  {
    v197 = *((unsigned int *)this + 369);
    v198 = *((_DWORD *)this + 368);
    v236[0] = 0LL;
    if ( v198 == (_DWORD)v197 )
    {
      v199 = 2LL * (unsigned int)v197;
      if ( v199 > 0xFFFFFFFF )
      {
        v202 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v197, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        v9 = -2147024362;
        v234 = -2147024362;
        goto LABEL_356;
      }
      if ( (unsigned int)v199 <= 0x40 )
        LODWORD(v199) = 64;
      v200 = HrMalloc(4uLL, (unsigned int)v199, v236);
      v202 = v200;
      if ( v200 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v201, 0LL, 0, v200, 0x53u, 0LL);
      }
      else
      {
        v203 = 4LL * *((unsigned int *)this + 368);
        if ( v203 <= 0xFFFFFFFF )
        {
          v204 = v236[0];
          memcpy_0(v236[0], *((const void **)this + 186), (unsigned int)v203);
          operator delete(*((void **)this + 186));
          v198 = *((_DWORD *)this + 368);
          *((_QWORD *)this + 186) = v204;
          *((_DWORD *)this + 369) = v199;
          goto LABEL_352;
        }
        v202 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v201, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v208 = v236[0];
      if ( v236[0] )
      {
        v209 = GetProcessHeap();
        HeapFree(v209, 0, v208);
      }
LABEL_355:
      v234 = v202;
      v9 = v202;
      if ( v202 >= 0 )
        goto LABEL_369;
LABEL_356:
      MilInstrumentationCheckHR_MaybeFailFast(v211, 0LL, 0, v202, 0x618u, 0LL);
      goto LABEL_369;
    }
LABEL_352:
    v202 = 0;
    *(_DWORD *)(*((_QWORD *)this + 186) + 4LL * v198) = 0;
    v205 = *((_DWORD *)this + 374);
    v211 = (unsigned int)++*((_DWORD *)this + 368);
    if ( v205 <= (unsigned int)v211 )
      v205 = *((_DWORD *)this + 368);
    *((_DWORD *)this + 374) = v205;
    goto LABEL_355;
  }
LABEL_344:
  MilInstrumentationCheckHR_MaybeFailFast(v196, 0LL, 0, v9, 0x31u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v210, 0LL, 0, v9, 0x617u, 0LL);
LABEL_369:
  if ( BYTE8(v251) )
  {
    v211 = v251;
    if ( (_QWORD)v251 )
      (**(void (__fastcall ***)(_QWORD, __int64))v251)(v251, 1LL);
  }
  if ( v9 >= 0 )
  {
    v172[8] |= 2u;
    goto LABEL_374;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v211, 0LL, 0, v9, 0x19Eu, 0LL);
LABEL_303:
  v31 = v230;
LABEL_409:
  if ( v9 < 0 )
    return (unsigned int)v9;
LABEL_410:
  result = (unsigned int)v9;
  if ( !v31 )
    ++*((_DWORD *)this + 365);
  return result;
}

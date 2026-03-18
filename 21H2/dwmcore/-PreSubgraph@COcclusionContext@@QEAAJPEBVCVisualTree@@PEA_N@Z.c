/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009C700 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x180012D84 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180012DCC (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800144FC (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008EBAC (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180093FA0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C4DE0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x1800C8B9C (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C8ED0 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x1800C8FB8 (--R-$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$01@@QEAAJAEB_N@Z @ 0x1800D2684 (-Push@-$CWatermarkStack@_N$0EA@$01$01@@QEAAJAEB_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18017CDBC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801B2C98 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x1802052F4 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  struct _LIST_ENTRY *v5; // r13
  __int64 v6; // rdi
  bool v7; // r12
  __int64 v8; // rax
  _QWORD *v9; // r8
  __int64 *v10; // r15
  __int64 *i; // rax
  __int64 v12; // r14
  __int64 j; // rcx
  struct _LIST_ENTRY *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  unsigned int v17; // ebx
  struct CComposition *v18; // r8
  __int128 *v19; // r9
  __int64 v20; // rax
  float *v21; // rdx
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  void *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm8_4
  float v32; // xmm3_4
  int v33; // eax
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm5_4
  float v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm4_4
  float v40; // xmm3_4
  unsigned __int64 v41; // rdx
  unsigned int m; // ecx
  float v43; // xmm4_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  _DWORD *v47; // rdx
  char v48; // r12
  bool v49; // bl
  bool v50; // r15
  bool v51; // al
  float v52; // xmm7_4
  struct CVisualTree *v53; // r15
  __int64 v54; // rax
  float v55; // xmm1_4
  _BYTE *v56; // rbx
  _DWORD *v57; // r8
  int v58; // ecx
  __int64 v59; // rcx
  unsigned int v60; // eax
  int v61; // edx
  unsigned int v62; // eax
  _BYTE *v63; // rax
  struct CVisualTree *v64; // r12
  __int64 **TreeData; // rbx
  __int64 v66; // r13
  struct _LIST_ENTRY *v67; // rcx
  struct _LIST_ENTRY *v68; // r15
  _DWORD *v69; // rdx
  struct _LIST_ENTRY *v70; // rdx
  CVisual *v71; // r12
  __int64 *v72; // rax
  __int64 v73; // rdx
  int Blink; // eax
  char v75; // cl
  __int128 v76; // xmm0
  bool v77; // r13
  CGeometry *v78; // rcx
  __int64 v79; // rcx
  int v80; // eax
  struct CVisualTree *v81; // r13
  __int64 *v82; // rbx
  unsigned int v83; // r12d
  unsigned int k; // r14d
  __int64 v85; // rcx
  _QWORD *v86; // r10
  _QWORD *v87; // r11
  _QWORD *v88; // rbx
  unsigned int v89; // r12d
  __int64 v91; // rbx
  __int64 v92; // r15
  __int64 v93; // rbx
  _QWORD *v94; // r11
  __int64 v95; // rax
  __int64 v96; // r11
  bool v97; // cl
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int128 v101; // xmm1
  __int64 v102; // rdx
  int v103; // eax
  __int128 v104; // xmm0
  __int128 v105; // xmm1
  unsigned int v106; // eax
  struct _LIST_ENTRY *v107; // rax
  int v108; // eax
  __int64 v109; // rcx
  void (__fastcall ***v110)(_QWORD, __int64); // rcx
  bool v111; // bl
  CGeometry *v112; // rcx
  int ShapeData; // eax
  __int64 v114; // rcx
  __int64 v115; // rcx
  int v116; // ebx
  int v117; // eax
  __int128 v118; // xmm0
  __int64 v119; // rcx
  unsigned int v120; // eax
  unsigned int v121; // eax
  struct _LIST_ENTRY *v122; // rax
  struct _LIST_ENTRY v123; // xmm1
  struct _LIST_ENTRY v124; // xmm0
  struct _LIST_ENTRY v125; // xmm1
  int v126; // eax
  const struct CMILMatrix *v127; // r12
  struct CMILMatrix *v128; // rax
  _BOOL8 v129; // r8
  _BYTE *v130; // r9
  _DWORD *v131; // rdx
  __int64 v132; // rcx
  _BYTE *v133; // r8
  unsigned int v134; // eax
  _QWORD *v135; // r8
  __int64 v136; // rdx
  __int64 v137; // rax
  _BYTE *v138; // rcx
  __int64 v139; // rdx
  _QWORD *v140; // rdx
  bool v141; // zf
  bool IsEqual; // al
  __int64 *v143; // rcx
  __int64 v144; // rax
  struct CEffect *EffectInternal; // rax
  struct CEffect *v146; // rbx
  CFilterEffect *v147; // rbx
  __int64 v148; // rcx
  _BYTE *v149; // r8
  unsigned int v150; // eax
  _QWORD **v151; // r8
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v154; // rax
  struct _LIST_ENTRY *v155; // rax
  struct _LIST_ENTRY *v156; // rcx
  struct _LIST_ENTRY *v157; // rax
  struct _LIST_ENTRY *v158; // rcx
  _QWORD *v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r8
  __int64 **v162; // rax
  __int64 v163; // rax
  _BYTE *v164; // rcx
  __int64 v165; // r8
  __int64 *v166; // r8
  __int64 v167; // rdx
  float v168; // xmm0_4
  int v169; // ecx
  unsigned int v170; // eax
  float v171; // edx
  float *v172; // rcx
  __int64 *v173; // rax
  unsigned int v174; // r15d
  int v175; // eax
  __int64 v176; // rcx
  unsigned __int64 v177; // rax
  void *v178; // rbx
  unsigned int v179; // r15d
  int v180; // eax
  __int64 v181; // rcx
  unsigned __int64 v182; // rcx
  void *v183; // rbx
  unsigned int v184; // r15d
  int v185; // eax
  __int64 v186; // rcx
  int v187; // r12d
  unsigned __int64 v188; // rax
  void *v189; // rbx
  _BYTE *LightAtNoRef; // rax
  __int64 v191; // r15
  int v192; // eax
  __int64 v193; // rcx
  char v194; // dl
  HANDLE ProcessHeap; // rax
  __int64 v196; // rcx
  int v197; // eax
  __int128 v198; // xmm0
  __int64 v199; // rcx
  unsigned int v200; // eax
  unsigned int v201; // eax
  unsigned int v202; // r15d
  int v203; // eax
  __int64 v204; // rcx
  unsigned __int64 v205; // rax
  void *v206; // rbx
  HANDLE v207; // rax
  __int64 v208; // rcx
  int v209; // eax
  HANDLE v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rcx
  unsigned int v213; // eax
  unsigned int v214; // eax
  __int64 v215; // rcx
  int v216; // eax
  unsigned int v217; // r15d
  __int64 v218; // rcx
  int v219; // ebx
  unsigned __int64 v220; // rax
  void *v221; // rbx
  void *v222; // rbx
  HANDLE v223; // rax
  CComposition *v224; // rbx
  int ManipulationManager; // eax
  __int128 v226; // xmm1
  void *v227; // r15
  __int64 v228; // rcx
  void *v229; // r15
  int v230; // r9d
  void *v231; // r15
  __int64 v232; // rcx
  void *v233; // r15
  HANDLE v234; // rax
  unsigned int v235; // [rsp+20h] [rbp-E0h]
  bool v236; // [rsp+30h] [rbp-D0h]
  int v237; // [rsp+34h] [rbp-CCh]
  char v238; // [rsp+38h] [rbp-C8h] BYREF
  bool v239; // [rsp+39h] [rbp-C7h] BYREF
  bool v240; // [rsp+3Ah] [rbp-C6h] BYREF
  char v241; // [rsp+3Bh] [rbp-C5h]
  int v242; // [rsp+3Ch] [rbp-C4h]
  void *lpMem[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v244; // [rsp+50h] [rbp-B0h] BYREF
  float v245; // [rsp+58h] [rbp-A8h] BYREF
  struct CVisualTree *v246; // [rsp+60h] [rbp-A0h]
  __int128 v247; // [rsp+70h] [rbp-90h] BYREF
  __int128 v248; // [rsp+80h] [rbp-80h]
  __int128 v249; // [rsp+90h] [rbp-70h]
  __int128 v250; // [rsp+A0h] [rbp-60h]
  int v251; // [rsp+B0h] [rbp-50h]
  float v252[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v253[64]; // [rsp+110h] [rbp+10h] BYREF
  int v254; // [rsp+150h] [rbp+50h]
  _BYTE v255[64]; // [rsp+160h] [rbp+60h] BYREF
  int v256; // [rsp+1A0h] [rbp+A0h]
  __int128 v257; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v258; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v259; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v260; // [rsp+1E0h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  lpMem[0] = a3;
  v246 = a2;
  v237 = 0;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 9);
  v7 = *((_DWORD *)this + 358) == 0;
  v245 = *((float *)this + 358);
  v236 = v7;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    v5 = (struct _LIST_ENTRY *)(v6 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v6);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_3;
        }
        v5 = Flink - 24;
      }
    }
  }
LABEL_3:
  v8 = *((_QWORD *)this + 177);
  if ( v8 )
    v9 = (_QWORD *)(v8 + 1888);
  else
    v9 = &CBackdropVisualImageKey::sc_NoBVIKey;
  v10 = (__int64 *)&v5[14];
  for ( i = (__int64 *)v5[14].Flink; ; ++i )
  {
    if ( i == (__int64 *)v5[14].Blink )
      goto LABEL_240;
    v12 = *i;
    if ( *(_QWORD *)(*i + 8) == *v9 && *(_QWORD *)(v12 + 16) == v9[1] )
      break;
  }
  if ( v12 )
  {
LABEL_10:
    *(_BYTE *)(v12 + 25) = 10;
    goto LABEL_11;
  }
LABEL_240:
  ((void (__fastcall *)(struct _LIST_ENTRY *, __int64 *, _QWORD *))v5[18].Flink->Flink[21].Blink)(
    v5[18].Flink,
    &v244,
    v9);
  v12 = v244;
  v143 = (__int64 *)detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::reserve_region(
                      &v5[14],
                      ((char *)v5[14].Blink - (char *)v5[14].Flink) >> 3);
  v144 = v244;
  v244 = 0LL;
  *v143 = v144;
  if ( v244 )
    std::default_delete<COcclusionInfo>::operator()();
  if ( v12 )
    goto LABEL_10;
LABEL_11:
  j = (__int64)v5[18].Flink[1].Flink;
  v14 = *(struct _LIST_ENTRY **)(j + 496);
  if ( v5[16].Blink != v14 )
  {
    v5[16].Blink = v14;
    v15 = *v10;
    while ( (struct _LIST_ENTRY *)v15 != v5[14].Blink )
    {
      j = *(_QWORD *)v15;
      if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
        && *(_QWORD *)(j + 16) == qword_1803D73D8
        || (v141 = *(_BYTE *)(j + 25) == 1, --*(_BYTE *)(j + 25), !v141) )
      {
        v15 += 8LL;
      }
      else
      {
        v91 = (v15 - *v10) >> 3;
        detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
          &v5[14],
          v91);
        v15 = *v10 + 8 * v91;
      }
    }
  }
  v141 = *((_QWORD *)this + 177) == 0LL;
  v16 = *((_QWORD *)this + 10);
  v17 = -1;
  *(_QWORD *)&v257 = v16;
  v242 = -1;
  if ( v141 )
    goto LABEL_18;
  v92 = *((_QWORD *)this + 2);
  v93 = *(_QWORD *)(*(_QWORD *)(v92 + 8) - 8LL);
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v93 + 184LL))(v93) )
  {
    v94 = (_QWORD *)(v6 + 336);
LABEL_144:
    if ( v94 )
    {
      for ( j = v94[24]; j != v94[25]; j += 8LL )
      {
        v159 = *(_QWORD **)v92;
        v160 = *(_QWORD *)(*(_QWORD *)j + 1792LL);
        if ( (((*(_QWORD *)(v92 + 8) - *(_QWORD *)v92) ^ (*(_QWORD *)(*(_QWORD *)j + 1800LL) - v160)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        {
          v161 = v160 - (_QWORD)v159;
          while ( (_QWORD *)((char *)v159 + v161) != *(_QWORD **)(*(_QWORD *)j + 1800LL) )
          {
            if ( *(_QWORD *)((char *)v159 + v161) != *v159 || *(_QWORD *)((char *)v159 + v161 + 8) != v159[1] )
              goto LABEL_399;
            v159 += 2;
          }
          *(_QWORD *)(*(_QWORD *)j + 1984LL) = *(_QWORD *)(*(_QWORD *)(v94[36] + 16LL) + 496LL);
          v95 = *(_QWORD *)j;
          goto LABEL_148;
        }
LABEL_399:
        ;
      }
    }
    goto LABEL_147;
  }
  v173 = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v6);
  if ( v173 )
  {
    for ( j = *v173; (__int64 *)j != v173; j = *(_QWORD *)j )
    {
      v94 = (_QWORD *)(j - 384);
      if ( *(_QWORD *)(j + 32) == v93 )
        goto LABEL_144;
    }
  }
LABEL_147:
  v95 = 0LL;
LABEL_148:
  v96 = *((_QWORD *)this + 177);
  if ( v95 == v96 )
  {
    *((_BYTE *)this + 1424) = 1;
    goto LABEL_134;
  }
  if ( !*((_BYTE *)this + 1424) )
  {
    v86 = *(_QWORD **)(v96 + 1960);
    v87 = *(_QWORD **)(v96 + 1968);
    if ( v86 == v87 )
      goto LABEL_134;
    v88 = (_QWORD *)*((_QWORD *)this + 2);
    while ( 1 )
    {
      if ( v6 == *v86 )
      {
        j = v86[1];
        if ( (((v86[2] - j) ^ (v88[1] - *v88)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          break;
      }
LABEL_133:
      v86 += 8;
      if ( v86 == v87 )
        goto LABEL_134;
    }
    v136 = *v88 - j;
    while ( v136 + j != v88[1] )
    {
      if ( *(_QWORD *)(v136 + j) != *(_QWORD *)j || *(_QWORD *)(v136 + j + 8) != *(_QWORD *)(j + 8) )
        goto LABEL_133;
      j += 16LL;
    }
  }
  v16 = v257;
  v17 = v242;
LABEL_18:
  if ( !v12 )
  {
    v89 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(j, 0LL, 0LL, -2147024882, 0x10Eu);
    return v89;
  }
  *(_BYTE *)(v12 + 24) &= 0xF0u;
  v18 = g_pComposition;
  *(_DWORD *)(v12 + 28) = *((_DWORD *)this + 357);
  *(_BYTE *)lpMem[0] = 1;
  if ( !*((_BYTE *)v18 + 1274) )
  {
LABEL_20:
    v19 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v20 = *((_QWORD *)v246 + 8);
    if ( v6 == v20 )
    {
      if ( v20 )
        v21 = (float *)((char *)v246 + 72);
      else
        v21 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      v21 = (float *)(v6 + 148);
    }
    v22 = (v21[5] <= v21[4]) + 1;
    if ( v21[2] > *v21 )
      v22 = v21[5] <= v21[4];
    v23 = v22 + 1;
    if ( v21[3] > v21[1] )
      v23 = v22;
    if ( v23 <= 1 )
    {
      v24 = *((_DWORD *)this + 368);
      if ( v24 )
      {
        v17 = *(_DWORD *)(*((_QWORD *)this + 186) + 4LL * (unsigned int)(v24 - 1));
        v242 = v17;
        if ( !v17 )
        {
LABEL_163:
          if ( !*((_BYTE *)this + 1206) )
          {
            v7 = 0;
            v107 = 0LL;
            v236 = 0;
            if ( v18 )
              v107 = (struct _LIST_ENTRY *)*((_QWORD *)v18 + 62);
            v56 = lpMem[0];
            if ( v5[16].Flink != v107 )
              *(_BYTE *)lpMem[0] = 0;
LABEL_86:
            v57 = *(_DWORD **)(v6 + 232);
            if ( (*v57 & 0x2000000) != 0 )
              goto LABEL_411;
            v58 = *(_DWORD *)(*(_QWORD *)(v6 + 224) + 4LL);
            if ( (v58 & 0x2000000) != 0 || (v58 & 0x4000000) != 0 )
              goto LABEL_411;
            if ( (*v57 & 0x400000) == 0 )
            {
LABEL_90:
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 91LL)
                || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6) && !*(_QWORD *)(v6 + 728) )
              {
LABEL_91:
                if ( *v56 != 1 )
                  goto LABEL_122;
                v59 = *((unsigned int *)this + 369);
                v60 = *((_DWORD *)this + 368);
                lpMem[0] = 0LL;
                if ( v60 != (_DWORD)v59 )
                  goto LABEL_93;
                v174 = 2 * v59;
                if ( (unsigned __int64)(2 * v59) > 0xFFFFFFFF )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0LL, -2147024362, 0x64u);
                }
                else
                {
                  if ( v174 <= 0x40 )
                    v174 = 64;
                  v175 = HrMalloc(4uLL, v174, lpMem);
                  if ( v175 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0LL, v175, 0x6Bu);
                  }
                  else
                  {
                    v177 = 4LL * *((unsigned int *)this + 368);
                    if ( v177 <= 0xFFFFFFFF )
                    {
                      v178 = lpMem[0];
                      memcpy_0(lpMem[0], *((const void **)this + 186), (unsigned int)v177);
                      DefaultHeap::Free(*((void **)this + 186));
                      v60 = *((_DWORD *)this + 368);
                      *((_QWORD *)this + 186) = v178;
                      *((_DWORD *)this + 369) = v174;
LABEL_93:
                      v61 = v242;
                      *(_DWORD *)(*((_QWORD *)this + 186) + 4LL * v60) = v242;
                      v62 = *((_DWORD *)this + 374);
                      if ( v62 <= ++*((_DWORD *)this + 368) )
                        v62 = *((_DWORD *)this + 368);
                      *((_DWORD *)this + 374) = v62;
LABEL_96:
                      *(_BYTE *)(v12 + 24) |= 1u;
                      if ( !v61 && !*((_BYTE *)this + 1206) )
                      {
LABEL_122:
                        if ( v7 )
                        {
                          if ( (unsigned int)((__int64)(*(_QWORD *)(v6 + 288) - *(_QWORD *)(v6 + 280)) >> 4)
                            || (unsigned int)((__int64)(*(_QWORD *)(v6 + 312) - *(_QWORD *)(v6 + 304)) >> 4) )
                          {
                            v81 = v246;
                            v82 = &v244;
                            v244 = 0x100000000LL;
LABEL_126:
                            v83 = *(_DWORD *)v82;
                            for ( k = 0; ; ++k )
                            {
                              if ( k >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, v83) )
                              {
                                v82 = (__int64 *)((char *)v82 + 4);
                                if ( v82 == (__int64 *)&v245 )
                                  return (unsigned int)v237;
                                goto LABEL_126;
                              }
                              LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v85, k, v83);
                              v191 = (__int64)LightAtNoRef;
                              if ( LightAtNoRef[170] )
                              {
                                if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef + 240LL))(
                                       LightAtNoRef,
                                       v81,
                                       v6) )
                                {
                                  v192 = CLightStack::Push((__int64)this + 208, v191, v83);
                                  if ( v192 < 0 )
                                    break;
                                }
                              }
                            }
                            MilInstrumentationCheckHR_MaybeFailFast(v193, 0LL, 0LL, v192, 0x4Bu);
                          }
                          return (unsigned int)v237;
                        }
                        goto LABEL_139;
                      }
                      v63 = v253;
                      v64 = v246;
                      TreeData = 0LL;
                      if ( !*(_QWORD *)(v6 + 248) )
                        v63 = 0LL;
                      v251 = 0;
                      *(_QWORD *)&v257 = v63;
                      v254 = 0;
                      v66 = *((_QWORD *)this + 9);
                      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v246 + 184LL))(v246) )
                      {
                        v68 = (struct _LIST_ENTRY *)(v66 + 336);
                      }
                      else
                      {
                        v154 = CVisual::GetTreeDataListHead((CVisual *)v66);
                        if ( !v154 )
                          goto LABEL_421;
                        v67 = v154->Flink;
                        if ( v154->Flink == v154 )
                          goto LABEL_421;
                        while ( 1 )
                        {
                          v68 = v67 - 24;
                          if ( (struct CVisualTree *)v67[2].Flink == v64 )
                            break;
                          v67 = v67->Flink;
                          if ( v67 == v154 )
                            goto LABEL_421;
                        }
                      }
                      if ( v68 )
                      {
                        v241 = 0;
                        if ( v66 == *((_QWORD *)v64 + 8) )
                          goto LABEL_255;
                        v69 = *(_DWORD **)(v66 + 232);
                        if ( (*v69 & 0x1000000) == 0 )
                        {
LABEL_104:
                          if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v64 + 184LL))(v64) )
                          {
                            v70 = (struct _LIST_ENTRY *)(v66 + 336);
                          }
                          else
                          {
                            v155 = CVisual::GetTreeDataListHead((CVisual *)v66);
                            if ( !v155 )
                              goto LABEL_109;
                            v156 = v155->Flink;
                            if ( v155->Flink == v155 )
                              goto LABEL_109;
                            while ( 1 )
                            {
                              v70 = v156 - 24;
                              if ( (struct CVisualTree *)v156[2].Flink == v64 )
                                break;
                              v156 = v156->Flink;
                              if ( v156 == v155 )
                                goto LABEL_109;
                            }
                          }
                          if ( v70 && v70[17].Blink != v70[18].Flink[1].Flink[31].Flink && TreeData )
                          {
                            TreeData = CVisual::FindTreeData((CVisual *)TreeData, v64);
                            v241 = 1;
                            goto LABEL_111;
                          }
LABEL_109:
                          v71 = *(CVisual **)(v66 + 88);
                          TreeData = 0LL;
                          if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v246 + 184LL))(v246) )
                          {
                            TreeData = (__int64 **)((char *)v71 + 336);
                          }
                          else
                          {
                            v157 = CVisual::GetTreeDataListHead(v71);
                            if ( v157 )
                            {
                              v158 = v157->Flink;
                              if ( v157->Flink != v157 )
                              {
                                while ( (struct CVisualTree *)v158[2].Flink != v246 )
                                {
                                  v158 = v158->Flink;
                                  if ( v158 == v157 )
                                    goto LABEL_111;
                                }
                                TreeData = (__int64 **)&v158[-24];
                              }
                            }
                          }
LABEL_111:
                          if ( TreeData )
                          {
                            v72 = TreeData[34];
                            goto LABEL_113;
                          }
LABEL_255:
                          v72 = 0LL;
                          if ( g_pComposition )
                            v72 = (__int64 *)*((_QWORD *)g_pComposition + 62);
LABEL_113:
                          if ( v68[17].Flink >= (struct _LIST_ENTRY *)v72 )
                            goto LABEL_114;
                          v127 = (const struct CMILMatrix *)(TreeData + 39);
                          v128 = (struct CMILMatrix *)v255;
                          if ( !TreeData )
                            v127 = 0LL;
                          v252[16] = 0.0;
                          v141 = *(_QWORD *)(v66 + 248) == 0LL;
                          v256 = 0;
                          if ( v141 )
                            v128 = 0LL;
                          CVisual::CalcTransform(
                            (CVisual *)v66,
                            (CVisual **)v246,
                            v127,
                            &v240,
                            (struct CMILMatrix *)v252,
                            v128);
                          if ( v241 || !v127 )
                          {
                            LOBYTE(v129) = 1;
                          }
                          else if ( v240 )
                          {
                            IsEqual = CMILMatrix::IsEqualTo<0>((float *)v127, v252);
                            v129 = IsEqual;
                            LOBYTE(v129) = !IsEqual;
                          }
                          else
                          {
                            LOBYTE(v129) = 0;
                          }
                          v130 = v255;
                          if ( !*(_QWORD *)(v66 + 248) )
                            v130 = 0LL;
                          if ( !((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, float *, _BOOL8, _BYTE *))v68->Flink[3].Flink)(
                                  v68,
                                  v252,
                                  v129,
                                  v130) )
                            goto LABEL_114;
                          v131 = *(_DWORD **)(v66 + 232);
                          if ( (*v131 & 0x800000) == 0 )
                            goto LABEL_114;
                          v132 = (unsigned int)v131[1];
                          v133 = v131 + 2;
                          v134 = 0;
                          if ( (_DWORD)v132 )
                          {
                            while ( *v133 != 9 )
                            {
                              ++v134;
                              ++v133;
                              if ( v134 >= (unsigned int)v132 )
                                goto LABEL_376;
                            }
                          }
                          else
                          {
LABEL_376:
                            if ( v134 >= (unsigned int)v132 )
                            {
                              v135 = 0LL;
                              goto LABEL_213;
                            }
                          }
                          v135 = (_QWORD *)((char *)v131 + 8LL * v134 - (((_BYTE)v132 + 15) & 7) + v132 + 15);
LABEL_213:
                          if ( *v135 && *(char *)(v66 + 101) < 0 )
                          {
                            lpMem[0] = 0LL;
                            v224 = *(CComposition **)(v66 + 16);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(lpMem);
                            ManipulationManager = CComposition::GetManipulationManager(
                                                    v224,
                                                    (struct CManipulationManager **)lpMem);
                            if ( ManipulationManager >= 0 )
                              CManipulationManager::NotifyVisualPropertyChange(
                                (CManipulationManager *)lpMem[0],
                                (struct CVisual *)v66,
                                (const struct CMILMatrix *)v252);
                            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(lpMem);
                          }
LABEL_114:
                          if ( !v68[17].Flink )
                            ModuleFailFastForHRESULT(2291674884LL, retaddr);
                          v73 = v257;
                          Blink = (int)v68[23].Blink;
                          v75 = BYTE3(v68->Blink);
                          v247 = *(_OWORD *)&v68[19].Blink;
                          v251 = Blink;
                          v76 = *(_OWORD *)&v68[21].Blink;
                          v248 = *(_OWORD *)&v68[20].Blink;
                          v249 = v76;
                          v250 = *(_OWORD *)&v68[22].Blink;
                          if ( (_QWORD)v257 )
                          {
                            v122 = v68[18].Blink;
                            if ( v122 )
                            {
                              v123 = v122[1];
                              *(struct _LIST_ENTRY *)v257 = *v122;
                              v124 = v122[2];
                              *(struct _LIST_ENTRY *)(v73 + 16) = v123;
                              v125 = v122[3];
                              v126 = (int)v122[4].Flink;
                            }
                            else
                            {
                              v126 = (int)v68[23].Blink;
                              v226 = *(_OWORD *)&v68[20].Blink;
                              *(struct _LIST_ENTRY *)v257 = *(struct _LIST_ENTRY *)((char *)v68 + 312);
                              v124 = *(struct _LIST_ENTRY *)&v68[21].Blink;
                              *(_OWORD *)(v73 + 16) = v226;
                              v125 = *(struct _LIST_ENTRY *)&v68[22].Blink;
                            }
                            *(struct _LIST_ENTRY *)(v73 + 32) = v124;
                            *(struct _LIST_ENTRY *)(v73 + 48) = v125;
                            *(_DWORD *)(v73 + 64) = v126;
                          }
LABEL_116:
                          v77 = v236;
                          if ( !v75 )
                            goto LABEL_117;
                          if ( v236 )
                          {
                            if ( (char)v251 >> 6 )
                            {
                              v97 = (char)v251 >> 6 == 1;
                            }
                            else
                            {
                              if ( CMILMatrix::IsAffine<1>((__int64)&v247, 1)
                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v247 + 1) - 0.0) & _xmm) < 0.000081380211
                                && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v248 - 0.0) & _xmm) < 0.000081380211 )
                              {
                                v97 = 1;
                                v194 = 64;
                              }
                              else
                              {
                                v97 = 0;
                                v194 = -64;
                              }
                              LOBYTE(v251) = v194 | v251 & 0x3F;
                            }
                            if ( !v97
                              && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(&v247) )
                            {
                              v77 = 0;
                            }
                            v236 = v77;
                          }
                          v98 = *((unsigned int *)this + 8);
                          v99 = *((unsigned int *)this + 9);
                          lpMem[0] = 0LL;
                          if ( (_DWORD)v98 != (_DWORD)v99 )
                            goto LABEL_159;
                          v179 = 2 * v99;
                          if ( (unsigned __int64)(2 * v99) > 0xFFFFFFFF )
                          {
                            v237 = -2147024362;
                            MilInstrumentationCheckHR_MaybeFailFast(v99, 0LL, 0LL, -2147024362, 0x64u);
                            v209 = -2147024362;
                          }
                          else
                          {
                            if ( v179 <= 8 )
                              v179 = 8;
                            v180 = HrMalloc(0x44uLL, v179, lpMem);
                            v237 = v180;
                            if ( v180 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v181, 0LL, 0LL, v180, 0x6Bu);
                            }
                            else
                            {
                              v182 = 68LL * *((unsigned int *)this + 8);
                              if ( v182 <= 0xFFFFFFFF )
                              {
                                v183 = lpMem[0];
                                memcpy_0(lpMem[0], *((const void **)this + 6), (unsigned int)v182);
                                DefaultHeap::Free(*((void **)this + 6));
                                v98 = *((unsigned int *)this + 8);
                                *((_QWORD *)this + 6) = v183;
                                *((_DWORD *)this + 9) = v179;
LABEL_159:
                                v100 = *((_QWORD *)this + 6);
                                v101 = v248;
                                v102 = 68 * v98;
                                v103 = v251;
                                v237 = 0;
                                *(_OWORD *)(v102 + v100) = v247;
                                v104 = v249;
                                *(_OWORD *)(v102 + v100 + 16) = v101;
                                v105 = v250;
                                *(_OWORD *)(v102 + v100 + 32) = v104;
                                *(_OWORD *)(v102 + v100 + 48) = v105;
                                *(_DWORD *)(v102 + v100 + 64) = v103;
                                v106 = *((_DWORD *)this + 14);
                                if ( v106 <= ++*((_DWORD *)this + 8) )
                                  v106 = *((_DWORD *)this + 8);
                                *((_DWORD *)this + 14) = v106;
                                *(_BYTE *)(v12 + 24) |= 4u;
LABEL_117:
                                v78 = *(CGeometry **)(v6 + 248);
                                if ( !v78 )
                                  goto LABEL_118;
                                if ( !v77 )
                                {
LABEL_184:
                                  v112 = *(CGeometry **)(v6 + 248);
                                  *(_QWORD *)&v259 = 0LL;
                                  BYTE8(v259) = 0;
                                  v257 = 0LL;
                                  ShapeData = CGeometry::GetShapeData(
                                                v112,
                                                (const struct D2D_SIZE_F *)(v6 + 140),
                                                (struct CShapePtr *)&v259);
                                  v237 = ShapeData;
                                  if ( ShapeData < 0 )
                                  {
                                    v230 = ShapeData;
                                    v235 = 1408;
                                    goto LABEL_443;
                                  }
                                  v115 = v259;
                                  v116 = -2003292412;
                                  if ( (_QWORD)v259
                                    && (v237 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v259 + 48LL))(
                                                 v259,
                                                 &v257,
                                                 0LL),
                                        v116 = v237,
                                        v237 < 0) )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(v115, 0LL, 0LL, v237, 0x140u);
                                  }
                                  else
                                  {
                                    v237 = v116;
                                    if ( v116 >= 0 )
                                    {
                                      CMILMatrix::Transform2DBoundsHelper<0>(v253, &v257, &v257);
                                      v117 = *((_DWORD *)this + 36);
                                      v258 = 0LL;
                                      if ( v117 )
                                        v118 = *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)(v117 - 1));
                                      else
                                        v118 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                                      v258 = v118;
                                      *(_OWORD *)lpMem = v257;
                                      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                        &v258,
                                        lpMem);
                                      v119 = *((unsigned int *)this + 37);
                                      v120 = *((_DWORD *)this + 36);
                                      lpMem[0] = 0LL;
                                      if ( v120 != (_DWORD)v119 )
                                        goto LABEL_191;
                                      v184 = 2 * v119;
                                      if ( (unsigned __int64)(2 * v119) > 0xFFFFFFFF )
                                      {
                                        v187 = -2147024362;
                                        v237 = -2147024362;
                                        MilInstrumentationCheckHR_MaybeFailFast(v119, 0LL, 0LL, -2147024362, 0x64u);
                                      }
                                      else
                                      {
                                        if ( v184 <= 8 )
                                          v184 = 8;
                                        v185 = HrMalloc(0x10uLL, v184, lpMem);
                                        v237 = v185;
                                        v187 = v185;
                                        if ( v185 < 0 )
                                        {
                                          MilInstrumentationCheckHR_MaybeFailFast(v186, 0LL, 0LL, v185, 0x6Bu);
                                        }
                                        else
                                        {
                                          v188 = 16LL * *((unsigned int *)this + 36);
                                          if ( v188 <= 0xFFFFFFFF )
                                          {
                                            v189 = lpMem[0];
                                            memcpy_0(lpMem[0], *((const void **)this + 20), (unsigned int)v188);
                                            DefaultHeap::Free(*((void **)this + 20));
                                            v120 = *((_DWORD *)this + 36);
                                            *((_QWORD *)this + 20) = v189;
                                            *((_DWORD *)this + 37) = v184;
LABEL_191:
                                            *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * v120) = v258;
                                            v121 = *((_DWORD *)this + 42);
                                            if ( v121 <= ++*((_DWORD *)this + 36) )
                                              v121 = *((_DWORD *)this + 36);
                                            *((_DWORD *)this + 42) = v121;
                                            goto LABEL_360;
                                          }
                                          v187 = -2147024362;
                                          v237 = -2147024362;
                                          MilInstrumentationCheckHR_MaybeFailFast(v186, 0LL, 0LL, -2147024362, 0x6Du);
                                        }
                                        v229 = lpMem[0];
                                        if ( lpMem[0] )
                                        {
                                          ProcessHeap = GetProcessHeap();
                                          HeapFree(ProcessHeap, 0, v229);
                                          v237 = v187;
                                          if ( v187 >= 0 )
                                          {
LABEL_360:
                                            if ( (_QWORD)v259 )
                                            {
                                              v237 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v259 + 88LL))(
                                                       v259,
                                                       &v257);
                                              v187 = v237;
                                              if ( v237 >= 0 )
                                              {
                                                CMILMatrix::Transform2DBoundsHelper<0>(v253, &v257, &v257);
                                                v197 = *((_DWORD *)this + 44);
                                                v258 = 0LL;
                                                if ( v197 )
                                                  v198 = *(_OWORD *)(*((_QWORD *)this + 24)
                                                                   + 16LL * (unsigned int)(v197 - 1));
                                                else
                                                  v198 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                                                v258 = v198;
                                                *(_OWORD *)lpMem = v257;
                                                TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                                  &v258,
                                                  lpMem);
                                                v199 = *((unsigned int *)this + 45);
                                                v200 = *((_DWORD *)this + 44);
                                                lpMem[0] = 0LL;
                                                if ( v200 != (_DWORD)v199 )
                                                  goto LABEL_365;
                                                v202 = 2 * v199;
                                                if ( (unsigned __int64)(2 * v199) > 0xFFFFFFFF )
                                                {
                                                  v187 = -2147024362;
                                                  v237 = -2147024362;
                                                  MilInstrumentationCheckHR_MaybeFailFast(
                                                    v199,
                                                    0LL,
                                                    0LL,
                                                    -2147024362,
                                                    0x64u);
                                                }
                                                else
                                                {
                                                  if ( v202 <= 8 )
                                                    v202 = 8;
                                                  v203 = HrMalloc(0x10uLL, v202, lpMem);
                                                  v237 = v203;
                                                  v187 = v203;
                                                  if ( v203 < 0 )
                                                  {
                                                    MilInstrumentationCheckHR_MaybeFailFast(v204, 0LL, 0LL, v203, 0x6Bu);
                                                  }
                                                  else
                                                  {
                                                    v205 = 16LL * *((unsigned int *)this + 44);
                                                    if ( v205 <= 0xFFFFFFFF )
                                                    {
                                                      v206 = lpMem[0];
                                                      memcpy_0(
                                                        lpMem[0],
                                                        *((const void **)this + 24),
                                                        (unsigned int)v205);
                                                      DefaultHeap::Free(*((void **)this + 24));
                                                      v200 = *((_DWORD *)this + 44);
                                                      *((_QWORD *)this + 24) = v206;
                                                      *((_DWORD *)this + 45) = v202;
LABEL_365:
                                                      *(_OWORD *)(*((_QWORD *)this + 24) + 16LL * v200) = v258;
                                                      v201 = *((_DWORD *)this + 50);
                                                      if ( v201 <= ++*((_DWORD *)this + 44) )
                                                        v201 = *((_DWORD *)this + 44);
                                                      *((_DWORD *)this + 50) = v201;
                                                      goto LABEL_381;
                                                    }
                                                    v187 = -2147024362;
                                                    v237 = -2147024362;
                                                    MilInstrumentationCheckHR_MaybeFailFast(
                                                      v204,
                                                      0LL,
                                                      0LL,
                                                      -2147024362,
                                                      0x6Du);
                                                  }
                                                  v231 = lpMem[0];
                                                  if ( lpMem[0] )
                                                  {
                                                    v210 = GetProcessHeap();
                                                    HeapFree(v210, 0, v231);
                                                    v237 = v187;
                                                    if ( v187 >= 0 )
                                                    {
LABEL_381:
                                                      v212 = *((unsigned int *)this + 361);
                                                      v213 = *((_DWORD *)this + 360);
                                                      lpMem[0] = 0LL;
                                                      if ( v213 != (_DWORD)v212 )
                                                      {
LABEL_382:
                                                        v237 = 0;
                                                        *(_DWORD *)(*((_QWORD *)this + 182) + 4LL * v213) = 0;
                                                        v214 = *((_DWORD *)this + 366);
                                                        v215 = (unsigned int)++*((_DWORD *)this + 360);
                                                        if ( v214 <= (unsigned int)v215 )
                                                          v214 = *((_DWORD *)this + 360);
                                                        *((_DWORD *)this + 366) = v214;
                                                        v216 = 0;
                                                        goto LABEL_385;
                                                      }
                                                      v217 = 2 * v212;
                                                      if ( (unsigned __int64)(2 * v212) > 0xFFFFFFFF )
                                                      {
                                                        v219 = -2147024362;
                                                        MilInstrumentationCheckHR_MaybeFailFast(
                                                          v212,
                                                          0LL,
                                                          0LL,
                                                          -2147024362,
                                                          0x64u);
                                                        v237 = -2147024362;
                                                      }
                                                      else
                                                      {
                                                        if ( v217 <= 0x40 )
                                                          v217 = 64;
                                                        v219 = HrMalloc(4uLL, v217, lpMem);
                                                        if ( v219 < 0 )
                                                        {
                                                          MilInstrumentationCheckHR_MaybeFailFast(
                                                            v218,
                                                            0LL,
                                                            0LL,
                                                            v219,
                                                            0x6Bu);
                                                        }
                                                        else
                                                        {
                                                          v220 = 4LL * *((unsigned int *)this + 360);
                                                          if ( v220 <= 0xFFFFFFFF )
                                                          {
                                                            v221 = lpMem[0];
                                                            memcpy_0(
                                                              lpMem[0],
                                                              *((const void **)this + 182),
                                                              (unsigned int)v220);
                                                            DefaultHeap::Free(*((void **)this + 182));
                                                            v213 = *((_DWORD *)this + 360);
                                                            *((_QWORD *)this + 182) = v221;
                                                            *((_DWORD *)this + 361) = v217;
                                                            goto LABEL_382;
                                                          }
                                                          v219 = -2147024362;
                                                          MilInstrumentationCheckHR_MaybeFailFast(
                                                            v218,
                                                            0LL,
                                                            0LL,
                                                            -2147024362,
                                                            0x6Du);
                                                        }
                                                        v233 = lpMem[0];
                                                        if ( lpMem[0] )
                                                        {
                                                          v234 = GetProcessHeap();
                                                          HeapFree(v234, 0, v233);
                                                        }
                                                        v237 = v219;
                                                      }
                                                      MilInstrumentationCheckHR_MaybeFailFast(
                                                        v232,
                                                        0LL,
                                                        0LL,
                                                        v219,
                                                        0x58Fu);
                                                      goto LABEL_434;
                                                    }
                                                  }
                                                }
                                                MilInstrumentationCheckHR_MaybeFailFast(v211, 0LL, 0LL, v187, 0x31u);
                                                v235 = 1421;
                                                goto LABEL_441;
                                              }
                                            }
                                            else
                                            {
                                              wil::details::in1diag3::Return_Hr(
                                                retaddr,
                                                (void *)0x12E,
                                                (int)"onecoreuap\\Windows\\DWM\\dwmcore\\geometry\\Shape.h",
                                                (const char *)0x88982F04LL);
                                              v187 = -2003292412;
                                              v237 = -2003292412;
                                            }
                                            v235 = 1419;
LABEL_441:
                                            v230 = v187;
LABEL_443:
                                            MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0LL, v230, v235);
                                            v216 = v237;
LABEL_385:
                                            if ( BYTE8(v259) )
                                            {
                                              v215 = v259;
                                              if ( (_QWORD)v259 )
                                              {
                                                (**(void (__fastcall ***)(_QWORD, __int64))v259)(v259, 1LL);
                                                v216 = v237;
                                              }
                                            }
                                            if ( v216 < 0 )
                                            {
                                              MilInstrumentationCheckHR_MaybeFailFast(v215, 0LL, 0LL, v216, 0x1C1u);
                                              return (unsigned int)v237;
                                            }
                                            *(_BYTE *)(v12 + 24) |= 2u;
LABEL_118:
                                            v79 = *(_QWORD *)(v6 + 256);
                                            v238 = 1;
                                            v239 = 0;
                                            if ( !v79
                                              || ((*(void (__fastcall **)(__int64, char *, bool *))(*(_QWORD *)v79
                                                                                                  + 280LL))(
                                                    v79,
                                                    &v238,
                                                    &v239),
                                                  v238) )
                                            {
                                              v80 = *(_DWORD *)(v6 + 104);
                                              if ( (v80 & 0x10) != 0 )
                                              {
                                                v141 = *(_DWORD *)(v6 + 200) == 0;
                                              }
                                              else
                                              {
                                                if ( (v80 & 4) == 0 )
                                                {
LABEL_121:
                                                  v7 = v236;
                                                  goto LABEL_122;
                                                }
                                                v141 = (v80 & 0x78000) == 0;
                                              }
                                              v239 = !v141;
                                              v238 = 0;
                                            }
                                            CWatermarkStack<bool,64,2,2>::Push((char *)this + 1504, &v239);
                                            *(_BYTE *)(v12 + 24) |= 8u;
                                            goto LABEL_121;
                                          }
                                        }
                                      }
                                      MilInstrumentationCheckHR_MaybeFailFast(v196, 0LL, 0LL, v187, 0x31u);
                                      v235 = 1414;
                                      goto LABEL_441;
                                    }
                                  }
                                  MilInstrumentationCheckHR_MaybeFailFast(v115, 0LL, 0LL, v116, 0x584u);
LABEL_434:
                                  v216 = v237;
                                  goto LABEL_385;
                                }
                                *(_QWORD *)&v257 = 0LL;
                                BYTE8(v257) = 0;
                                v108 = CGeometry::GetShapeData(
                                         v78,
                                         (const struct D2D_SIZE_F *)(v6 + 140),
                                         (struct CShapePtr *)&v257);
                                v89 = v108;
                                if ( v108 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0LL, v108, 0x56Eu);
                                  v111 = v240;
                                  goto LABEL_177;
                                }
                                v110 = (void (__fastcall ***)(_QWORD, __int64))v257;
                                if ( (_QWORD)v257 )
                                {
                                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v257 + 16LL))(v257) )
                                  {
LABEL_333:
                                    v110 = (void (__fastcall ***)(_QWORD, __int64))v257;
                                    goto LABEL_334;
                                  }
                                  v110 = (void (__fastcall ***)(_QWORD, __int64))v257;
                                  if ( (_QWORD)v257 )
                                  {
                                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v257 + 72LL))(v257) )
                                    {
                                      v111 = 1;
LABEL_177:
                                      v110 = (void (__fastcall ***)(_QWORD, __int64))v257;
                                      goto LABEL_178;
                                    }
                                    goto LABEL_333;
                                  }
                                }
LABEL_334:
                                v111 = 0;
LABEL_178:
                                if ( BYTE8(v257) && v110 )
                                  (**v110)(v110, 1LL);
                                if ( (v89 & 0x80000000) != 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast((__int64)v110, 0LL, 0LL, v89, 0x1B7u);
                                  return v89;
                                }
                                if ( !v111 )
                                  v236 = 0;
                                goto LABEL_184;
                              }
                              v237 = -2147024362;
                              MilInstrumentationCheckHR_MaybeFailFast(v182, 0LL, 0LL, -2147024362, 0x6Du);
                            }
                            v227 = lpMem[0];
                            v209 = v237;
                            if ( lpMem[0] )
                            {
                              v207 = GetProcessHeap();
                              HeapFree(v207, 0, v227);
                              v209 = v237;
                              if ( v237 >= 0 )
                              {
                                *(_BYTE *)(v12 + 24) |= 4u;
                                goto LABEL_117;
                              }
                            }
                          }
                          MilInstrumentationCheckHR_MaybeFailFast(v208, 0LL, 0LL, v209, 0x36u);
                          v89 = v237;
                          MilInstrumentationCheckHR_MaybeFailFast(v228, 0LL, 0LL, v237, 0x1AAu);
                          return v89;
                        }
                        v148 = (unsigned int)v69[1];
                        v149 = v69 + 2;
                        v150 = 0;
                        if ( (_DWORD)v148 )
                        {
                          while ( *v149 != 8 )
                          {
                            ++v150;
                            ++v149;
                            if ( v150 >= (unsigned int)v148 )
                              goto LABEL_313;
                          }
                        }
                        else
                        {
LABEL_313:
                          if ( v150 >= (unsigned int)v148 )
                          {
                            v151 = 0LL;
LABEL_261:
                            if ( *v151 )
                              TreeData = (__int64 **)(*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD **, _QWORD))(*(_QWORD *)**v151 + 184LL))(
                                                       **v151,
                                                       v69,
                                                       v151,
                                                       0LL);
                            goto LABEL_104;
                          }
                        }
                        v151 = (_QWORD **)((char *)v69 + 8LL * v150 - (((_BYTE)v148 + 15) & 7) + v148 + 15);
                        goto LABEL_261;
                      }
LABEL_421:
                      MilInstrumentationCheckHR_MaybeFailFast((__int64)v67, 0LL, 0LL, -2003292412, 0x68Du);
                      v75 = v240;
                      goto LABEL_116;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v176, 0LL, 0LL, -2147024362, 0x6Du);
                  }
                  v222 = lpMem[0];
                  if ( lpMem[0] )
                  {
                    v223 = GetProcessHeap();
                    HeapFree(v223, 0, v222);
                  }
                }
                v61 = v242;
                goto LABEL_96;
              }
LABEL_411:
              ++*((_DWORD *)this + 359);
              *((_BYTE *)this + 1206) = 0;
              goto LABEL_91;
            }
            v137 = (unsigned int)v57[1];
            v138 = v57 + 2;
            v139 = 0LL;
            if ( (_DWORD)v137 )
            {
              while ( *v138 != 10 )
              {
                v139 = (unsigned int)(v139 + 1);
                ++v138;
                if ( (unsigned int)v139 >= (unsigned int)v137 )
                  goto LABEL_318;
              }
            }
            else
            {
LABEL_318:
              if ( (unsigned int)v139 >= (unsigned int)v137 )
              {
                v140 = 0LL;
                goto LABEL_228;
              }
            }
            v140 = (_QWORD *)((char *)v57 + v137 + 8 * v139 - (((_BYTE)v137 + 15) & 7) + 15);
LABEL_228:
            if ( *v140 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v140 + 56LL))(*v140, 59LL) )
              goto LABEL_411;
            goto LABEL_90;
          }
LABEL_61:
          if ( v245 != 0.0 )
          {
LABEL_85:
            v56 = lpMem[0];
            goto LABEL_86;
          }
          v47 = *(_DWORD **)(v6 + 232);
          v48 = 0;
          if ( (*v47 & 0x200000) == 0 )
          {
LABEL_63:
            if ( (*(_BYTE *)(v6 + 102) & 4) != 0
              || (*(_DWORD *)(v6 + 96) & 0x100) == 0
              || (*(_BYTE *)(v6 + 101) & 0x30) != 0
              || ((*(_DWORD *)(v6 + 200) - 2) & 0xFFFFFFFD) == 0 )
            {
              goto LABEL_291;
            }
            v49 = *(_DWORD *)(v6 + 108) == 1;
            v50 = v16 && *(_DWORD *)(v16 + 108) == 1;
            v51 = 1;
            if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6) )
            {
              if ( (**(_DWORD **)(v6 + 232) & 0x400000) == 0
                || (EffectInternal = CVisual::GetEffectInternal((CVisual *)v6),
                    !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                       EffectInternal,
                       59LL)) )
              {
                v51 = 0;
              }
            }
            if ( v49 )
            {
              if ( v50 )
              {
                if ( v51 )
                  goto LABEL_291;
              }
              else if ( (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v6 + 80)) )
              {
                goto LABEL_291;
              }
            }
            v52 = *(float *)&FLOAT_1_0;
            if ( (**(_DWORD **)(v6 + 232) & 0x400000) != 0 )
            {
              v146 = CVisual::GetEffectInternal((CVisual *)v6);
              if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v146 + 56LL))(v146, 56LL) )
                v52 = *((float *)v146 + 20);
            }
            if ( fminf(1.0, fmaxf(v52, 0.0)) >= 1.0 )
            {
              v53 = v246;
              if ( v6 == *((_QWORD *)v246 + 8) )
                goto LABEL_462;
              v54 = *(_QWORD *)(v6 + 224);
              if ( (*(_DWORD *)(v54 + 4) & 0x8000000) != 0 )
              {
                v171 = *(float *)(v54 + 12);
                v172 = (float *)(v54 + 12);
                if ( (LODWORD(v171) & 0x7F000000) != 0x5000000 )
                {
                  do
                  {
                    v172 = (float *)((char *)v172 + (LODWORD(v171) & 0xFFFFFF) + 4);
                    v171 = *v172;
                  }
                  while ( (*(_DWORD *)v172 & 0x7F000000) != 0x5000000 );
                }
                v245 = v172[1];
                v55 = v245;
              }
              else
              {
                v55 = *(float *)&FLOAT_1_0;
              }
              if ( fminf(1.0, fmaxf(v55, 0.0)) >= 1.0 )
              {
LABEL_462:
                if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6) )
                {
                  if ( (**(_DWORD **)(v6 + 232) & 0x400000) == 0
                    || (v147 = CVisual::GetEffectInternal((CVisual *)v6),
                        !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v147 + 56LL))(
                           v147,
                           59LL))
                    || CFilterEffect::IsOpaque(v147, (const struct CVisual *)v6) )
                  {
                    if ( ((*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v53 + 184LL))(v53)
                       || (v162 = CVisual::FindTreeData((CVisual *)v6, v53)) == 0LL
                       || v162[35] != *(__int64 **)(v162[36][2] + 496))
                      && !v48 )
                    {
                      v7 = v236;
                      goto LABEL_85;
                    }
                  }
                }
              }
            }
LABEL_291:
            v7 = 0;
            v236 = 0;
            goto LABEL_85;
          }
          v163 = (unsigned int)v47[1];
          v164 = v47 + 2;
          v165 = 0LL;
          if ( (_DWORD)v163 )
          {
            while ( *v164 != 11 )
            {
              v165 = (unsigned int)(v165 + 1);
              ++v164;
              if ( (unsigned int)v165 >= (unsigned int)v163 )
                goto LABEL_321;
            }
          }
          else
          {
LABEL_321:
            if ( (unsigned int)v165 >= (unsigned int)v163 )
            {
              v166 = 0LL;
LABEL_303:
              v167 = *v166;
              if ( *v166 )
              {
                v168 = *(float *)(v167 + 108);
                v169 = (v168 <= *(float *)(v167 + 104)) + 1;
                if ( *(float *)(v167 + 96) > *(float *)(v167 + 88) )
                  v169 = v168 <= *(float *)(v167 + 104);
                v170 = v169 + 1;
                if ( *(float *)(v167 + 100) > *(float *)(v167 + 92) )
                  v170 = v169;
                if ( v170 <= 1 && *(_BYTE *)(v167 + 302) )
                  v48 = 1;
              }
              goto LABEL_63;
            }
          }
          v166 = (__int64 *)((char *)v47 + v163 + 8 * v165 - (((_BYTE)v163 + 15) & 7) + 15);
          goto LABEL_303;
        }
      }
      v25 = *((_DWORD *)this + 8);
      v260 = 0LL;
      v259 = 0LL;
      if ( v25 )
        v26 = (void *)(*((_QWORD *)this + 6) + 68LL * (unsigned int)(v25 - 1));
      else
        v26 = &CMILMatrix::Identity;
      v27 = *((_QWORD *)this + 1);
      v28 = *(_QWORD *)(v27 + 64);
      if ( v6 == v28 )
      {
        if ( v28 )
          v19 = (__int128 *)(v27 + 72);
      }
      else
      {
        v19 = (__int128 *)(v6 + 148);
      }
      CMILMatrix::Transform3DBoundsHelper<1>(v26, v19, &v259);
      v29 = *((float *)&v259 + 2);
      v30 = *(float *)&v259;
      if ( *((float *)&v259 + 2) > *(float *)&v259 )
      {
        v31 = *((float *)&v259 + 3);
        v32 = *((float *)&v259 + 1);
        if ( *((float *)&v259 + 3) > *((float *)&v259 + 1) )
        {
          v33 = *((_DWORD *)this + 36);
          v242 = v17;
          if ( v33 )
          {
            v259 = *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)(v33 - 1));
            v34 = *(float *)&v259;
            if ( v30 > *(float *)&v259 )
              v34 = v30;
            v35 = *((float *)&v259 + 1);
            v36 = *((float *)&v259 + 1);
            if ( v32 > *((float *)&v259 + 1) )
            {
              v35 = v32;
              v36 = v32;
            }
            v37 = *((float *)&v259 + 2);
            v38 = *((float *)&v259 + 2);
            if ( *((float *)&v259 + 2) > v29 )
            {
              v37 = v29;
              v38 = v29;
            }
            v39 = *((float *)&v259 + 3);
            v40 = *((float *)&v259 + 3);
            if ( *((float *)&v259 + 3) > v31 )
            {
              v39 = v31;
              v40 = v31;
            }
            if ( v38 <= v34 || v40 <= v36 )
            {
              v39 = 0.0;
              v37 = 0.0;
              v35 = 0.0;
              v34 = 0.0;
            }
            v30 = v34;
            v32 = v35;
            v29 = v37;
            v31 = v39;
          }
          v41 = *((_QWORD *)this + 128);
          for ( m = 0; m < v41; ++m )
          {
            if ( ((v17 >> m) & 1) != 0 )
            {
              v43 = v30;
              v44 = v32;
              if ( *((float *)this + 4 * m + 258) > v30 )
                v43 = *((float *)this + 4 * m + 258);
              if ( *((float *)this + 4 * m + 259) > v32 )
                v44 = *((float *)this + 4 * m + 259);
              v45 = v29;
              if ( v29 > *((float *)this + 4 * m + 260) )
                v45 = *((float *)this + 4 * m + 260);
              v46 = v31;
              if ( v31 > *((float *)this + 4 * m + 261) )
                v46 = *((float *)this + 4 * m + 261);
              if ( v45 > v43 && v46 > v44 && v45 > v43 && v46 > v44 )
                goto LABEL_61;
              v17 &= ~(1 << m);
              v242 = v17;
            }
          }
        }
      }
      v18 = g_pComposition;
    }
    v242 = 0;
    goto LABEL_163;
  }
  if ( !CVisual::HasProtectedContent((CVisual *)v6) )
  {
    v18 = g_pComposition;
    goto LABEL_20;
  }
LABEL_134:
  *(_BYTE *)lpMem[0] = 0;
  if ( !v7 )
LABEL_139:
    ++*((_DWORD *)this + 358);
  return (unsigned int)v237;
}

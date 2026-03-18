/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009C700 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x180012D84 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180012DCC (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x180014384 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x18001501C (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800156A8 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18007EDE8 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180088480 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x180089450 (-AddMultipleAndSet@-$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACB5C (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800ACDF0 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD4A4 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AE6D8 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C4DE0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C8ED0 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800D2A70 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?IsPassiveUpdateMode@CVisual@@QEBA_NXZ @ 0x1800D3C18 (-IsPassiveUpdateMode@CVisual@@QEBA_NXZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D9B88 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1801018BC (_o_ceilf_0.c)
 *     floorf @ 0x1801018F8 (floorf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180112CF6 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801B2C98 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1802602C4 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v3; // r13d
  const struct CVisualTree *v4; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  struct _LIST_ENTRY **p_Flink; // r15
  struct _LIST_ENTRY *v9; // r14
  __int64 *v10; // r12
  struct _LIST_ENTRY *v11; // rsi
  struct _LIST_ENTRY *j; // rax
  struct _LIST_ENTRY *v13; // rdx
  struct _LIST_ENTRY *v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r9d
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  char Blink; // al
  _DWORD *v26; // r8
  int v27; // edx
  __int64 v28; // rax
  float *v29; // rdx
  int v30; // ecx
  unsigned int v31; // eax
  float v32; // xmm6_4
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm0_4
  __int64 result; // rax
  int v37; // ecx
  _QWORD *v38; // r10
  _QWORD *v39; // r11
  _QWORD *v40; // rsi
  char v41; // r15
  __int64 v42; // r14
  struct _LIST_ENTRY *v43; // rsi
  struct _LIST_ENTRY *v44; // r11
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v46; // rax
  struct _LIST_ENTRY *v47; // rdx
  char v48; // cl
  __int64 ***v49; // rsi
  __int64 ***v50; // r12
  __int64 **v51; // r14
  __int64 *v52; // rcx
  __int64 v53; // r15
  int v54; // eax
  __int128 v55; // xmm0
  __int64 *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  float v59; // xmm2_4
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // al
  char v69; // cl
  char v70; // cl
  char v71; // cl
  char v72; // cl
  bool v73; // dl
  bool v74; // cl
  char v75; // dl
  char v76; // al
  __int128 *v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  float v80; // xmm0_4
  float v81; // xmm0_4
  float v82; // xmm0_4
  int v83; // eax
  __int64 v84; // rcx
  int v85; // r15d
  int v86; // eax
  int v87; // eax
  int v88; // eax
  _QWORD *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rax
  _BYTE *v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // rdx
  int v95; // eax
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  int v100; // r15d
  unsigned int v101; // r12d
  char *v102; // rcx
  __int64 v103; // rax
  float v104; // xmm1_4
  float v105; // xmm6_4
  float v106; // xmm7_4
  float v107; // xmm8_4
  __int64 v108; // rax
  unsigned int v109; // r8d
  __int64 v110; // rcx
  struct CEffect *EffectInternal; // rsi
  struct _LIST_ENTRY *v112; // rax
  struct _LIST_ENTRY *v113; // rcx
  char *v114; // rdx
  struct _LIST_ENTRY *v115; // r8
  __int64 v116; // r8
  int v117; // edx
  int *v118; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v121; // rdx
  __int128 *Bounds; // rax
  __int128 *v123; // r14
  unsigned int v124; // r12d
  unsigned int k; // r15d
  __int64 v126; // rcx
  __int64 v127; // rax
  int v128; // eax
  __int64 v129; // rcx
  const struct tagRECT *v130; // rax
  int v131; // eax
  _BYTE *LightAtNoRef; // rax
  int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // r15
  __int64 v136; // rcx
  bool v137; // zf
  __int64 v138; // r15
  int v139; // eax
  __int64 v140; // rcx
  int v141; // r15d
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int128 v145; // xmm0
  __int128 v146; // xmm4
  float v147; // xmm1_4
  float v148; // xmm2_4
  float v149; // xmm3_4
  __int128 v150; // xmm0
  __int128 v151; // xmm4
  float v152; // xmm6_4
  float v153; // xmm7_4
  float v154; // xmm7_4
  __int128 *v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rcx
  unsigned int v158; // [rsp+48h] [rbp-C0h]
  __int128 v159; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v160; // [rsp+68h] [rbp-A0h]
  __int128 v161; // [rsp+78h] [rbp-90h]
  __int128 v162; // [rsp+88h] [rbp-80h]
  int v163; // [rsp+98h] [rbp-70h]
  char v164[64]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v165; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v166; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v167; // [rsp+108h] [rbp+0h] BYREF
  __int128 v168; // [rsp+118h] [rbp+10h] BYREF
  float v169; // [rsp+128h] [rbp+20h]
  __int128 v170; // [rsp+130h] [rbp+28h] BYREF
  __int64 v171; // [rsp+140h] [rbp+38h]
  __int128 v172; // [rsp+148h] [rbp+40h] BYREF
  __int128 v173; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v174[3]; // [rsp+168h] [rbp+60h] BYREF
  void *retaddr; // [rsp+220h] [rbp+118h]

  v3 = *((_DWORD *)this + 358);
  v4 = a2;
  *a3 = 1;
  v6 = *((_QWORD *)this + 177);
  v7 = *((_QWORD *)this + 9);
  *(_QWORD *)&v165 = a2;
  v158 = 0;
  if ( !v6 )
  {
LABEL_2:
    p_Flink = (struct _LIST_ENTRY **)&CBackdropVisualImageKey::sc_NoBVIKey;
    goto LABEL_3;
  }
  v38 = *(_QWORD **)(v6 + 1960);
  v39 = *(_QWORD **)(v6 + 1968);
  if ( v38 == v39 )
  {
LABEL_70:
    v41 = 0;
  }
  else
  {
    v40 = (_QWORD *)*((_QWORD *)this + 2);
    while ( 1 )
    {
      if ( v7 == *v38 )
      {
        v89 = (_QWORD *)v38[1];
        if ( (((v38[2] - (_QWORD)v89) ^ (v40[1] - *v40)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          break;
      }
LABEL_69:
      v38 += 8;
      if ( v38 == v39 )
        goto LABEL_70;
    }
    v90 = *v40 - (_QWORD)v89;
    while ( (_QWORD *)((char *)v89 + v90) != (_QWORD *)v40[1] )
    {
      if ( *(_QWORD *)((char *)v89 + v90) != *v89 || *(_QWORD *)((char *)v89 + v90 + 8) != v89[1] )
        goto LABEL_69;
      v89 += 2;
    }
    v41 = 1;
  }
  v42 = *((_QWORD *)this + 2);
  v43 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v42 + 8) - 8LL);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v43->Flink[11].Blink)(v43) )
  {
    v44 = (struct _LIST_ENTRY *)(v7 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v7);
    if ( !TreeDataListHead )
      goto LABEL_76;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_76;
    while ( 1 )
    {
      v44 = Flink - 24;
      if ( Flink[2].Flink == v43 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_76;
    }
  }
  if ( v44 )
  {
    for ( i = v44[12].Flink; i != v44[12].Blink; i = (struct _LIST_ENTRY *)((char *)i + 8) )
    {
      v114 = *(char **)v42;
      v115 = i->Flink[112].Flink;
      if ( ((((char *)i->Flink[112].Blink - (char *)v115) ^ (*(_QWORD *)(v42 + 8) - *(_QWORD *)v42)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v116 = (char *)v115 - v114;
        while ( &v114[v116] != (char *)i->Flink[112].Blink )
        {
          if ( *(_QWORD *)&v114[v116] != *(_QWORD *)v114 || *(_QWORD *)&v114[v116 + 8] != *((_QWORD *)v114 + 1) )
            goto LABEL_217;
          v114 += 16;
        }
        i->Flink[124].Flink = v44[18].Flink[1].Flink[31].Flink;
        v46 = i->Flink;
        goto LABEL_77;
      }
LABEL_217:
      ;
    }
  }
LABEL_76:
  v46 = 0LL;
LABEL_77:
  v47 = (struct _LIST_ENTRY *)*((_QWORD *)this + 177);
  if ( v46 == v47 )
    goto LABEL_40;
  v48 = *((_BYTE *)this + 1424);
  if ( !v48 && !v41 )
    goto LABEL_40;
  if ( !v48 && v41 )
    *((_BYTE *)this + 1424) = 1;
  if ( !v47 )
    goto LABEL_2;
  p_Flink = &v47[118].Flink;
LABEL_3:
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v4 + 184LL))(v4) )
  {
    v9 = (struct _LIST_ENTRY *)(v7 + 336);
    goto LABEL_5;
  }
  v112 = CVisual::GetTreeDataListHead((CVisual *)v7);
  if ( v112 )
  {
    v113 = v112->Flink;
    if ( v112->Flink != v112 )
    {
      while ( 1 )
      {
        v9 = v113 - 24;
        if ( (const struct CVisualTree *)v113[2].Flink == v4 )
          break;
        v113 = v113->Flink;
        if ( v113 == v112 )
          goto LABEL_40;
      }
LABEL_5:
      if ( !v9 )
        goto LABEL_40;
      v10 = (__int64 *)&v9[14];
      v11 = 0LL;
      for ( j = v9[14].Flink; j != v9[14].Blink; j = (struct _LIST_ENTRY *)((char *)j + 8) )
      {
        v13 = j->Flink;
        if ( j->Flink->Blink == *p_Flink && v13[1].Flink == p_Flink[1] )
        {
          v11 = j->Flink;
          if ( v13 )
            BYTE1(v13[1].Blink) = 10;
          break;
        }
      }
      v14 = v9[18].Flink[1].Flink[31].Flink;
      if ( v9[16].Blink != v14 )
      {
        v9[16].Blink = v14;
        v135 = *v10;
        while ( (struct _LIST_ENTRY *)v135 != v9[14].Blink )
        {
          v136 = *(_QWORD *)v135;
          if ( *(_QWORD *)(*(_QWORD *)v135 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
            && *(_QWORD *)(v136 + 16) == qword_1803D73D8
            || (v137 = *(_BYTE *)(v136 + 25) == 1, --*(_BYTE *)(v136 + 25), !v137) )
          {
            v135 += 8LL;
          }
          else
          {
            v138 = (v135 - *v10) >> 3;
            detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
              &v9[14],
              v138);
            v135 = *v10 + 8 * v138;
          }
        }
      }
      if ( !v11 )
        goto LABEL_39;
      ((void (__fastcall *)(struct _LIST_ENTRY *, _QWORD))v11->Flink->Blink)(v11, *((unsigned int *)this + 357));
      if ( *((_BYTE *)g_pComposition + 1274) )
      {
        if ( CVisual::HasProtectedContent((CVisual *)v7) )
          goto LABEL_39;
      }
      if ( !v3 )
      {
        *((_QWORD *)this + 149) = v7;
        v15 = (*(__int64 (__fastcall **)(__int64, COcclusionContext *, struct _LIST_ENTRY *))(*(_QWORD *)v7 + 232LL))(
                v7,
                this,
                v11);
        v158 = v15;
        v19 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v15, 0x2C3u);
          *((_QWORD *)this + 149) = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0LL, v19, 0x227u);
          v4 = (const struct CVisualTree *)v165;
          *((_BYTE *)this + 1206) = 0;
          v158 = v19;
          goto LABEL_42;
        }
        v20 = (__int64)(*((_QWORD *)this + 106) - *((_QWORD *)this + 105)) >> 4;
        if ( (_DWORD)v20 )
        {
          while ( 1 )
          {
            v100 = *((_DWORD *)this + 357);
            v101 = v20 - 1;
            *((_DWORD *)this + 357) = v100 + 2;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              McTemplateU0dffffq_EventWriteTransfer(
                2 * v101,
                v16,
                v100,
                v18,
                *(_DWORD *)(*((_QWORD *)this + 105) + 16LL * v101 + 4),
                *(_DWORD *)(*((_QWORD *)this + 105) + 16LL * v101 + 8),
                *(_DWORD *)(*((_QWORD *)this + 105) + 16LL * v101 + 12));
            if ( *((_BYTE *)this + 1204) )
              v102 = (char *)this + 1208;
            else
              v102 = 0LL;
            v103 = *((_QWORD *)this + 105) + 16LL * v101;
            LODWORD(v168) = v100;
            v167 = 0LL;
            v104 = *(float *)v103;
            v105 = *(float *)(v103 + 4);
            v106 = *(float *)(v103 + 8);
            v107 = *(float *)(v103 + 12);
            DWORD1(v168) = *(_DWORD *)v103;
            *((_QWORD *)&v168 + 1) = __PAIR64__(LODWORD(v106), LODWORD(v105));
            v169 = v107;
            if ( v102 )
            {
              CMILMatrix::Transform2DBoundsHelper<0>(v102, (char *)&v168 + 4, &v167);
              v104 = *(float *)&v167;
              v107 = *((float *)&v167 + 3);
              v106 = *((float *)&v167 + 2);
              v105 = *((float *)&v167 + 1);
            }
            if ( COERCE_FLOAT(LODWORD(v104) & _xmm) < 8388608.0 )
              v104 = (float)(int)o_ceilf_0(v104);
            *(float *)&v167 = v104;
            if ( COERCE_FLOAT(LODWORD(v105) & _xmm) < 8388608.0 )
              v105 = (float)(int)o_ceilf_0(v105);
            *((float *)&v167 + 1) = v105;
            if ( COERCE_FLOAT(LODWORD(v106) & _xmm) < 8388608.0 )
              v106 = (float)(int)floorf(v106);
            *((float *)&v167 + 2) = v106;
            if ( COERCE_FLOAT(LODWORD(v107) & _xmm) < 8388608.0 )
              v107 = (float)(int)floorf(v107);
            v108 = *((unsigned int *)this + 118);
            *((float *)&v167 + 3) = v107;
            v109 = v108 + 1;
            if ( (int)v108 + 1 < (unsigned int)v108 )
              break;
            if ( v109 > *((_DWORD *)this + 117) )
            {
              v139 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 448, 36LL, 1LL, &v167);
              v141 = v139;
              if ( v139 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0LL, v139, 0xC0u);
                goto LABEL_229;
              }
            }
            else
            {
              v110 = *((_QWORD *)this + 56);
              v16 = 9 * v108;
              *(_OWORD *)(v110 + 4 * v16) = v167;
              *(_OWORD *)(v110 + 4 * v16 + 16) = v168;
              *(float *)(v110 + 4 * v16 + 32) = v169;
              *((_DWORD *)this + 118) = v109;
            }
            LODWORD(v20) = v101;
            if ( !v101 )
              goto LABEL_18;
          }
          v141 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v102, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_229:
          MilInstrumentationCheckHR_MaybeFailFast(v142, 0LL, 0LL, v141, 0x25u);
          MilInstrumentationCheckHR_MaybeFailFast(v143, 0LL, 0LL, v141, 0x2F5u);
        }
LABEL_18:
        v21 = (__int64)(*((_QWORD *)this + 106) - *((_QWORD *)this + 105)) >> 4;
        if ( v21 )
          *((_QWORD *)this + 106) -= 16 * v21;
        *((_QWORD *)this + 149) = 0LL;
      }
      if ( ((__int64)v11[1].Blink & 1) != 0 )
      {
        v22 = *((_DWORD *)this + 368);
        if ( v22 )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 186) + 4LL * (unsigned int)(v22 - 1)) )
          {
            v23 = *((_DWORD *)this + 376);
            if ( v23 )
            {
              if ( *(_BYTE *)((unsigned int)(v23 - 1) + *((_QWORD *)this + 190)) )
              {
                v127 = *(_QWORD *)v7;
                v173 = 0LL;
                v128 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v127 + 224))(v7, &v173);
                v158 = v128;
                if ( v128 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v129, 0LL, 0LL, v128, 0x239u);
LABEL_39:
                  v4 = (const struct CVisualTree *)v165;
                  goto LABEL_40;
                }
                v172 = *(_OWORD *)COcclusionContext::GetDestinationRect((__int64)this, (__int64)&v172);
                v130 = (const struct tagRECT *)PixelAlign(&v166, (__int64)&v172);
                v131 = CRegion::TryAddRectangle((COcclusionContext *)((char *)this + 1344), v130);
                if ( v131 < 0 )
                  ModuleFailFastForHRESULT((unsigned int)v131, retaddr);
              }
            }
          }
        }
        v24 = *((_DWORD *)this + 368);
        if ( v24 )
          *((_DWORD *)this + 368) = v24 - 1;
      }
      Blink = (char)v11[1].Blink;
      if ( (Blink & 4) != 0 )
      {
        v37 = *((_DWORD *)this + 8);
        if ( v37 )
        {
          *((_DWORD *)this + 8) = v37 - 1;
          Blink = (char)v11[1].Blink;
        }
      }
      if ( (Blink & 2) != 0 )
      {
        v86 = *((_DWORD *)this + 360);
        if ( v86 )
          *((_DWORD *)this + 360) = v86 - 1;
        v87 = *((_DWORD *)this + 36);
        if ( v87 )
          *((_DWORD *)this + 36) = v87 - 1;
        v88 = *((_DWORD *)this + 44);
        if ( v88 )
          *((_DWORD *)this + 44) = v88 - 1;
      }
      if ( ((__int64)v11[1].Blink & 8) != 0 )
      {
        v95 = *((_DWORD *)this + 376);
        if ( v95 )
          *((_DWORD *)this + 376) = v95 - 1;
      }
      if ( !v3
        && ((unsigned int)((__int64)(*(_QWORD *)(v7 + 288) - *(_QWORD *)(v7 + 280)) >> 4)
         || (unsigned int)((__int64)(*(_QWORD *)(v7 + 312) - *(_QWORD *)(v7 + 304)) >> 4)) )
      {
        *(_QWORD *)&v166 = 0x100000000LL;
        v123 = &v166;
        while ( 2 )
        {
          v124 = *(_DWORD *)v123;
          for ( k = 0; k < (unsigned int)CVisual::GetLightsCount((_QWORD *)v7, v124); ++k )
          {
            LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v126, k, v124);
            if ( LightAtNoRef[170] )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)LightAtNoRef + 240LL))(
                     LightAtNoRef,
                     v165,
                     v7) )
              {
                v133 = CLightStack::Pop((COcclusionContext *)((char *)this + 208));
                if ( v133 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0LL, v133, 0x69u);
                  goto LABEL_34;
                }
              }
            }
          }
          v123 = (__int128 *)((char *)v123 + 4);
          if ( v123 != (__int128 *)((char *)&v166 + 8) )
            continue;
          break;
        }
      }
LABEL_34:
      v26 = *(_DWORD **)(v7 + 232);
      if ( (*v26 & 0x2000000) != 0 )
        goto LABEL_233;
      v27 = *(_DWORD *)(*(_QWORD *)(v7 + 224) + 4LL);
      if ( (v27 & 0x2000000) != 0 || (v27 & 0x4000000) != 0 )
        goto LABEL_233;
      if ( (*v26 & 0x400000) == 0 )
        goto LABEL_38;
      v91 = (unsigned int)v26[1];
      v92 = v26 + 2;
      v93 = 0LL;
      if ( (_DWORD)v91 )
      {
        while ( *v92 != 10 )
        {
          v93 = (unsigned int)(v93 + 1);
          ++v92;
          if ( (unsigned int)v93 >= (unsigned int)v91 )
            goto LABEL_192;
        }
      }
      else
      {
LABEL_192:
        if ( (unsigned int)v93 >= (unsigned int)v91 )
        {
          v94 = 0LL;
          goto LABEL_135;
        }
      }
      v94 = (_QWORD *)((char *)v26 + 8 * v93 - (((_BYTE)v91 + 15) & 7) + v91 + 15);
LABEL_135:
      if ( !*v94 || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v94 + 56LL))(*v94, 59LL) )
      {
LABEL_38:
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 56LL))(v7, 91LL)
          || !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7) && !*(_QWORD *)(v7 + 728) )
        {
          goto LABEL_39;
        }
      }
LABEL_233:
      --*((_DWORD *)this + 359);
      goto LABEL_39;
    }
  }
LABEL_40:
  *((_BYTE *)this + 1206) = 0;
  if ( v3 )
    --*((_DWORD *)this + 358);
LABEL_42:
  if ( *((_BYTE *)this + 1205)
    && !*((_DWORD *)this + 358)
    && (*(_BYTE *)(v7 + 102) & 4) == 0
    && (*(_DWORD *)(v7 + 96) & 0x100) != 0 )
  {
    v28 = *((_QWORD *)v4 + 8);
    if ( v7 == v28 )
    {
      if ( v28 )
        v29 = (float *)((char *)v4 + 72);
      else
        v29 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    else
    {
      v29 = (float *)(v7 + 148);
    }
    v30 = (v29[5] <= v29[4]) + 1;
    if ( v29[2] > *v29 )
      v30 = v29[5] <= v29[4];
    v31 = v30 + 1;
    if ( v29[3] > v29[1] )
      v31 = v30;
    if ( v31 <= 1 )
    {
      v32 = *(float *)&FLOAT_1_0;
      if ( (**(_DWORD **)(v7 + 232) & 0x400000) != 0 )
      {
        EffectInternal = CVisual::GetEffectInternal((CVisual *)v7);
        if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
               EffectInternal,
               56LL) )
        {
          v32 = *((float *)EffectInternal + 20);
        }
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v32, 0.0))) & _xmm) >= 0.0000011920929 )
      {
        if ( v7 == *((_QWORD *)v4 + 8) )
        {
          v35 = *(float *)&FLOAT_1_0;
        }
        else
        {
          v33 = *(_QWORD *)(v7 + 224);
          if ( (*(_DWORD *)(v33 + 4) & 0x8000000) != 0 )
          {
            v117 = *(_DWORD *)(v33 + 12);
            v118 = (int *)(v33 + 12);
            if ( (v117 & 0x7F000000) != 0x5000000 )
            {
              do
              {
                v118 = (int *)((char *)v118 + (v117 & 0xFFFFFF) + 4);
                v117 = *v118;
              }
              while ( (*v118 & 0x7F000000) != 0x5000000 );
            }
            LODWORD(v165) = v118[1];
            v34 = *(float *)&v165;
          }
          else
          {
            v34 = *(float *)&FLOAT_1_0;
          }
          v35 = fminf(1.0, fmaxf(v34, 0.0));
        }
        if ( COERCE_FLOAT(LODWORD(v35) & _xmm) >= 0.0000011920929
          && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 256LL))(v7) || v3) )
        {
          v49 = (__int64 ***)*((_QWORD *)this + 193);
          v50 = &v49[*((_QWORD *)this + 192)];
          if ( v49 != v50 )
          {
            while ( 1 )
            {
              v51 = *v49;
              if ( !*((_BYTE *)*v49 + 11302) )
                goto LABEL_115;
              v52 = *v51;
              v166 = 0LL;
              v53 = (*(__int64 (__fastcall **)(__int64 *))(*v52 + 168))(v52) + 48;
              v54 = *((_DWORD *)this + 36);
              v55 = v54
                  ? *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)(v54 - 1))
                  : TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              v166 = v55;
              v165 = 0LL;
              CMILMatrix::Transform2DBoundsHelper<0>(v53, &v166, &v165);
              v56 = *v51;
              v57 = **v51;
              v166 = v165;
              v58 = (*(__int64 (__fastcall **)(__int64 *))(v57 + 168))(v56);
              v59 = (float)(int)HIDWORD(*(_QWORD *)(v58 + 20));
              v60 = _mm_srli_si128(*(__m128i *)(v58 + 20), 8).m128i_u64[0];
              *(float *)&v172 = (float)(int)*(_OWORD *)(v58 + 20);
              *((float *)&v172 + 1) = v59;
              *((float *)&v172 + 2) = (float)(int)v60;
              *((float *)&v172 + 3) = (float)SHIDWORD(v60);
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v166, &v172);
              if ( *((float *)&v166 + 2) <= *(float *)&v166 || *((float *)&v166 + 3) <= *((float *)&v166 + 1) )
                goto LABEL_115;
              v64 = *((_DWORD *)this + 8);
              v163 = 0;
              v165 = 0LL;
              if ( v64 )
              {
                v65 = (unsigned int)(v64 - 1);
                v66 = *((_QWORD *)this + 6);
                v67 = 68 * v65;
                v159 = *(_OWORD *)(68 * v65 + v66);
                v160 = *(_OWORD *)(68 * v65 + v66 + 16);
                v161 = *(_OWORD *)(68 * v65 + v66 + 32);
                v162 = *(_OWORD *)(68 * v65 + v66 + 48);
                v163 = *(_DWORD *)(68 * v65 + v66 + 64);
              }
              else
              {
                CMILMatrix::SetToIdentity((CMILMatrix *)&v159);
              }
              v68 = v163;
              v69 = (char)((_BYTE)v163 << 6) >> 6;
              if ( !v69 )
                break;
              v74 = v69 == 1;
LABEL_104:
              if ( v74 )
              {
                v96 = *(_OWORD *)v53;
                v97 = *(_OWORD *)(v53 + 16);
                v163 = *(_DWORD *)(v53 + 64);
                v159 = v96;
                v98 = *(_OWORD *)(v53 + 32);
                v160 = v97;
                v99 = *(_OWORD *)(v53 + 48);
                v161 = v98;
                goto LABEL_143;
              }
              v76 = (char)(*(_BYTE *)(v53 + 64) << 6) >> 6;
              if ( !v76 )
              {
                if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(v53)
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v53 + 48) - 0.0) & _xmm) < 0.000081380211
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v53 + 52) - 0.0) & _xmm) < 0.000081380211
                  && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v53 + 56) - 0.0) & _xmm) < 0.000081380211 )
                {
                  *(_BYTE *)(v53 + 64) &= ~2u;
                  *(_BYTE *)(v53 + 64) |= 1u;
                  goto LABEL_107;
                }
                *(_BYTE *)(v53 + 64) |= 3u;
LABEL_261:
                if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(v53) )
                {
                  CMILMatrix::Translate(
                    (CMILMatrix *)&v159,
                    *(float *)(v53 + 48),
                    *(float *)(v53 + 52),
                    *(float *)(v53 + 56));
                  goto LABEL_107;
                }
                if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(&v159) )
                {
                  v145 = *(_OWORD *)v53;
                  v146 = *(_OWORD *)(v53 + 16);
                  v163 = *(_DWORD *)(v53 + 64);
                  v147 = *(float *)&v162;
                  v148 = *((float *)&v162 + 1);
                  v149 = *((float *)&v162 + 2);
                  v159 = v145;
                  v150 = *(_OWORD *)(v53 + 32);
                  v160 = v146;
                  v151 = *(_OWORD *)(v53 + 48);
                  v161 = v150;
                  v162 = v151;
                  CMILMatrix::PrependTranslate((CMILMatrix *)&v159, v147, v148, v149);
                  goto LABEL_107;
                }
                if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v53) )
                {
                  CMILMatrix::Scale((CMILMatrix *)&v159, *(float *)v53, *(float *)(v53 + 20), *(float *)(v53 + 40));
                  CMILMatrix::Translate(
                    (CMILMatrix *)&v159,
                    *(float *)(v53 + 48),
                    *(float *)(v53 + 52),
                    *(float *)(v53 + 56));
                  goto LABEL_107;
                }
                if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v159)
                  && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v53) )
                {
                  v152 = *((float *)&v161 + 2);
                  v153 = *((float *)&v162 + 2);
                  v174[0] = v159;
                  v174[1] = v160;
                  v174[2] = v162;
                  *(_QWORD *)&v170 = *(_QWORD *)v53;
                  *((_QWORD *)&v170 + 1) = *(_QWORD *)(v53 + 16);
                  v171 = *(_QWORD *)(v53 + 48);
                  D2D1::Matrix3x2F::SetProduct(
                    (D2D1::Matrix3x2F *)&v167,
                    (const struct D2D1::Matrix3x2F *)v174,
                    (const struct D2D1::Matrix3x2F *)&v170);
                  CMILMatrix::Set2DAffineMatrix(
                    (CMILMatrix *)&v159,
                    *(float *)&v167,
                    *((float *)&v167 + 1),
                    *((float *)&v167 + 2),
                    *((float *)&v167 + 3),
                    *(float *)&v168,
                    *((float *)&v168 + 1));
                  v154 = (float)(v153 * *(float *)(v53 + 40)) + *(float *)(v53 + 56);
                  *((float *)&v161 + 2) = v152 * *(float *)(v53 + 40);
                  *((float *)&v162 + 2) = v154;
                  goto LABEL_107;
                }
                v155 = (__int128 *)Windows::Foundation::Numerics::operator*(v164, &v159, v53);
                v159 = *v155;
                v160 = v155[1];
                v161 = v155[2];
                v99 = v155[3];
                v163 = 0;
LABEL_143:
                v162 = v99;
                goto LABEL_107;
              }
              if ( v76 != 1 )
                goto LABEL_261;
LABEL_107:
              v77 = (__int128 *)(v7 + 148);
              if ( *(float *)(v7 + 168) == 0.0 && *(float *)(v7 + 164) == 0.0 )
              {
                v78 = *((_QWORD *)this + 1);
                v79 = *(_QWORD *)(v78 + 64);
                if ( v7 == v79 )
                {
                  v77 = (__int128 *)(v78 + 72);
                  if ( !v79 )
                    v77 = &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
                }
                CMILMatrix::Transform2DBoundsHelper<1>(&v159, v77, &v165);
              }
              else
              {
                v121 = *((_QWORD *)this + 1);
                v171 = 0LL;
                v170 = 0LL;
                Bounds = CVisual::GetBounds(v7, v121);
                CMILMatrix::Transform3DBoundsHelper<1>(&v159, Bounds, &v170);
                v165 = v170;
              }
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v165, &v166);
              if ( *((float *)&v165 + 2) > *(float *)&v165 && *((float *)&v165 + 3) > *((float *)&v165 + 1) )
              {
                v80 = *(float *)&v165 + 6291456.25;
                LODWORD(v173) = (int)(LODWORD(v80) << 10) >> 11;
                v81 = *((float *)&v165 + 1) + 6291456.25;
                DWORD1(v173) = (int)(LODWORD(v81) << 10) >> 11;
                v82 = *((float *)&v165 + 2) + 6291456.25;
                DWORD2(v173) = (int)(LODWORD(v82) << 10) >> 11;
                *(float *)&v165 = *((float *)&v165 + 3) + 6291456.25;
                HIDWORD(v173) = (int)((_DWORD)v165 << 10) >> 11;
                v83 = DynArray<tagRECT,0>::AddMultipleAndSet((__int64)(v51 + 1406), &v173);
                v85 = v83;
                if ( v83 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0LL, v83, 0x5D2u);
                  MilInstrumentationCheckHR_MaybeFailFast(v156, 0LL, 0LL, v85, 0x1BCu);
                  MilInstrumentationCheckHR_MaybeFailFast(v157, 0LL, 0LL, v85, 0x166u);
                  goto LABEL_62;
                }
                if ( *((_BYTE *)v51 + 11311) && !CVisual::IsPassiveUpdateMode((CVisual *)v7) )
                  *((_BYTE *)v51 + 11311) = 0;
              }
LABEL_115:
              if ( ++v49 == v50 )
                goto LABEL_62;
            }
            v70 = (char)(16 * BYTE1(v163)) >> 6;
            if ( v70 )
            {
              if ( v70 != 1 )
                goto LABEL_102;
            }
            else
            {
              if ( !CMILMatrix::IsAffine<1>((__int64)&v159, 0)
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v161 - 0.0) & _xmm) >= 0.000081380211
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v161 + 1) - 0.0) & _xmm) >= 0.000081380211 )
              {
                BYTE1(v163) |= 0xCu;
                v68 = v163;
                goto LABEL_102;
              }
              BYTE1(v163) = BYTE1(v163) & 0xF3 | 4;
              v68 = v163;
            }
            v71 = (char)(16 * v68) >> 6;
            if ( v71 )
            {
              if ( v71 != 1 )
                goto LABEL_102;
            }
            else
            {
              if ( !CMILMatrix::IsAffine<1>((__int64)&v159, 1)
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v159 + 2) - 0.0) & _xmm) >= 0.000081380211
                || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v160 + 2) - 0.0) & _xmm) >= 0.000081380211 )
              {
                v68 = v163 | 0xC;
                goto LABEL_102;
              }
              v68 = v163 & 0xF3 | 4;
              LOBYTE(v163) = v68;
            }
            v72 = (char)(4 * v68) >> 6;
            if ( v72 )
            {
              v73 = v72 == 1;
            }
            else
            {
              v73 = (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(&v159, v67, v61, v62)
                 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v159 - 1.0) & _xmm) < 0.000081380211
                 && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v160 + 1) - 1.0) & _xmm) < 0.000081380211;
              v68 = (v163 ^ (-16 - 32 * v73)) & 0x30 ^ v163;
            }
            if ( v73
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v161 + 2) - 1.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v162 - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v162 + 1) - 0.0) & _xmm) < 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v162 + 2) - 0.0) & _xmm) < 0.000081380211 )
            {
              v74 = 1;
              v75 = 1;
              goto LABEL_103;
            }
LABEL_102:
            v74 = 0;
            v75 = 3;
LABEL_103:
            LOBYTE(v163) = v75 | v68 & 0xFC;
            goto LABEL_104;
          }
        }
      }
    }
  }
LABEL_62:
  result = v158;
  *((_DWORD *)this + 357) += 2;
  return result;
}

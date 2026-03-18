/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180060B20
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180062E20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCOcclusionContext.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x180006400 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180006448 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800176FC (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x180017958 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18001799C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C8EC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18002F62C (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18002F6A8 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18005AFF0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18005C3D0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005E610 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800683F0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180075324 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180077D20 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A6070 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z @ 0x1800A988C (-AddMultipleAndSet@-$DynArray@VCZOrderedRect@@$0A@@@QEAAJPEFBVCZOrderedRect@@I@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800A9A28 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800B3F24 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EBCE7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EBCFF (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x180181800 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180187CF0 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180213108 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v3; // r15d
  int v6; // r13d
  __int64 *v7; // rdi
  _QWORD *v8; // r14
  _BYTE *v9; // rsi
  int v10; // eax
  char v11; // al
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  RECT *DestinationRect; // rax
  bool v16; // zf
  char *v17; // r9
  int v18; // eax
  int v19; // eax
  char v20; // al
  _DWORD *v21; // r8
  int v22; // edx
  float *v23; // rdx
  int v24; // ecx
  unsigned int v25; // eax
  _DWORD *v26; // r8
  float v27; // xmm6_4
  float v28; // xmm7_4
  __int64 v29; // rax
  float v30; // xmm0_4
  _QWORD **v31; // r14
  _QWORD **v32; // r15
  _QWORD *v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rsi
  int v36; // eax
  __int128 v37; // xmm0
  float v38; // xmm7_4
  float v39; // xmm6_4
  float v40; // xmm8_4
  float v41; // xmm10_4
  int *v42; // rax
  float v43; // xmm2_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  char v46; // al
  int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rax
  char v50; // cl
  __int64 v51; // rdx
  __int64 v52; // rax
  float v53; // xmm5_4
  float v54; // xmm4_4
  float v55; // xmm1_4
  float v56; // xmm0_4
  float v57; // xmm7_4
  float v58; // xmm3_4
  float v59; // xmm2_4
  __int64 *v60; // rsi
  float v61; // xmm0_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  unsigned int v64; // r15d
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // r12
  __int64 v68; // rsi
  unsigned int v69; // eax
  unsigned int v70; // edx
  int v71; // r15d
  __int64 v72; // rcx
  int v74; // eax
  __int64 v75; // rcx
  int v76; // r9d
  __int64 v77; // r14
  __int64 v78; // r13
  void *v79; // rcx
  __int128 *v80; // r8
  int v81; // edx
  unsigned int v82; // r14d
  unsigned int v83; // edx
  __int64 v84; // rcx
  int v85; // ecx
  __int128 v86; // xmm0
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int64 v90; // rax
  _BYTE *v91; // rdx
  __int64 j; // rcx
  __int64 *v93; // rcx
  __int64 v94; // rcx
  int v95; // eax
  int v96; // eax
  int v97; // eax
  float v98; // edx
  float *v99; // rcx
  unsigned int v100; // edx
  __int64 v101; // rcx
  CMILMatrix *v102; // rax
  float v103; // xmm1_4
  float v104; // xmm6_4
  float v105; // xmm7_4
  float v106; // xmm8_4
  int v107; // eax
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rax
  _BYTE *v112; // rdx
  unsigned int k; // ecx
  float **v114; // rsi
  float *v115; // rsi
  __int64 *v116; // rax
  __int64 v117; // r8
  __int64 v118; // rax
  _BYTE *v119; // rdx
  __int64 i; // rcx
  _QWORD **v121; // rax
  _QWORD *v122; // rax
  _QWORD *v123; // rcx
  __int64 v124; // rax
  int v125; // eax
  __int64 v126; // rcx
  int v127; // eax
  CMILMatrix *v128; // rcx
  char *v129; // r9
  _BYTE *LightAtNoRef; // rax
  int v131; // eax
  __int64 v132; // rcx
  __int64 v133; // rax
  __int64 v134; // rcx
  float v135; // xmm2_4
  float v136; // xmm1_4
  __int128 *v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rcx
  float v142; // [rsp+48h] [rbp-C0h]
  int v143; // [rsp+48h] [rbp-C0h]
  unsigned int v144; // [rsp+48h] [rbp-C0h]
  int v145; // [rsp+48h] [rbp-C0h]
  __int64 v146; // [rsp+50h] [rbp-B8h] BYREF
  int v147[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v148; // [rsp+68h] [rbp-A0h]
  __int128 v149; // [rsp+78h] [rbp-90h]
  __int128 v150; // [rsp+88h] [rbp-80h]
  int v151; // [rsp+98h] [rbp-70h]
  _QWORD **v152; // [rsp+A8h] [rbp-60h]
  char v153[64]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v154; // [rsp+F0h] [rbp-18h] BYREF
  RECT v155; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v156; // [rsp+110h] [rbp+8h] BYREF
  float v157; // [rsp+118h] [rbp+10h]
  float v158; // [rsp+11Ch] [rbp+14h]
  float v159; // [rsp+120h] [rbp+18h]
  RECT rcSrc1; // [rsp+128h] [rbp+20h] BYREF
  __int128 v161; // [rsp+138h] [rbp+30h] BYREF
  struct tagRECT rcDst; // [rsp+148h] [rbp+40h] BYREF

  v3 = *((_DWORD *)this + 365);
  *a3 = 1;
  v6 = 0;
  v7 = (__int64 *)*((_QWORD *)this + 8);
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
  {
    v8 = v7 + 40;
  }
  else
  {
    v117 = v7[28];
    if ( *(int *)v117 >= 0 )
      goto LABEL_31;
    v118 = *(unsigned int *)(v117 + 4);
    v119 = (_BYTE *)(v117 + 8);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v118; ++v119 )
    {
      if ( *v119 == 1 )
        break;
      i = (unsigned int)(i + 1);
    }
    v121 = (unsigned int)i >= (unsigned int)v118
         ? 0LL
         : (_QWORD **)(v117 + v118 + 15 + 8 * i - (((_BYTE)v118 + 15) & 7));
    v122 = *v121;
    if ( !v122 )
      goto LABEL_31;
    v123 = (_QWORD *)*v122;
    if ( (_QWORD *)*v122 == v122 )
      goto LABEL_31;
    while ( 1 )
    {
      v8 = v123 - 36;
      if ( (const struct CVisualTree *)v123[4] == a2 )
        break;
      v123 = (_QWORD *)*v123;
      if ( v123 == v122 )
        goto LABEL_31;
    }
  }
  if ( v8 )
  {
    v9 = (_BYTE *)v8[4];
    if ( v9
      || (v133 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8[3] + 352LL))(v8[3]),
          v8[4] = v133,
          (v9 = (_BYTE *)v133) != 0LL) )
    {
      (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v9 + 16LL))(v9, *((unsigned int *)this + 364));
      if ( !*((_BYTE *)g_pComposition + 1129) || (*((_BYTE *)v7 + 95) & 4) == 0 )
      {
        if ( (v9[8] & 1) != 0 )
        {
          v10 = *((_DWORD *)this + 376);
          if ( v10 && *(_DWORD *)(*((_QWORD *)this + 190) + 4LL * (unsigned int)(v10 - 1)) )
          {
            if ( (*(_DWORD *)v7[28] & 0x200000) != 0
              && *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v7) + 356) )
            {
              COcclusionContext::GetDestinationRect((__int64)this, (__int64)&v155);
              if ( *((_BYTE *)this + 1244) )
                v129 = (char *)this + 1248;
              else
                v129 = 0LL;
              CArrayBasedCoverageSet::AddAntiOccluderRect(
                (char *)this + 408,
                &v155,
                *((unsigned int *)this + 364),
                v129);
              CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((COcclusionContext *)((char *)this + 1384));
            }
            v11 = *((_BYTE *)v7 + 264);
            if ( (v11 & 1) != 0 && (*((_BYTE *)v7 + 94) & 8) != 0 )
            {
              v12 = *v7;
              v155 = 0LL;
              v13 = (*(__int64 (__fastcall **)(__int64 *, RECT *))(v12 + 240))(v7, &v155);
              v6 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x214u, 0LL);
                goto LABEL_31;
              }
              DestinationRect = (RECT *)COcclusionContext::GetDestinationRect((__int64)this, (__int64)&rcSrc1);
              v16 = *((_BYTE *)this + 1244) == 0;
              rcSrc1 = *DestinationRect;
              if ( v16 )
                v17 = 0LL;
              else
                v17 = (char *)this + 1248;
              CArrayBasedCoverageSet::AddAntiOccluderRect(
                (char *)this + 408,
                &rcSrc1,
                *((unsigned int *)this + 364),
                v17);
              v11 = *((_BYTE *)v7 + 264);
            }
            if ( (v11 & 3) != 0
              || (v18 = *((_DWORD *)this + 384)) != 0 && *(_BYTE *)((unsigned int)(v18 - 1) + *((_QWORD *)this + 194)) )
            {
              v124 = *v7;
              v161 = 0LL;
              v125 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v124 + 240))(v7, &v161);
              v6 = v125;
              if ( v125 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v126, 0LL, 0, v125, 0x229u, 0LL);
                goto LABEL_31;
              }
              v127 = *((_DWORD *)this + 6);
              rcSrc1 = 0LL;
              if ( v127 )
                v128 = (CMILMatrix *)(*((_QWORD *)this + 5) + 68LL * (unsigned int)(v127 - 1));
              else
                v128 = (CMILMatrix *)&CMILMatrix::Identity;
              CMILMatrix::Transform2DBoundsHelper<0>(v128, (__int64)&v161, (float *)&rcSrc1.left);
              CBaseClipStack::Clip((__int64)this + 136, (__m128 *)&v155, (float *)&rcSrc1.left);
              rcSrc1 = v155;
              CRegion::AppendRects<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((COcclusionContext *)((char *)this + 1384));
            }
          }
          v19 = *((_DWORD *)this + 376);
          if ( v19 )
            *((_DWORD *)this + 376) = v19 - 1;
        }
        if ( !v3 )
        {
          *((_QWORD *)this + 154) = v7;
          v74 = (*(__int64 (__fastcall **)(__int64 *, COcclusionContext *, _BYTE *))(*v7 + 248))(v7, this, v9);
          LODWORD(v146) = v74;
          v6 = v74;
          if ( v74 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x2BAu, 0LL);
          }
          else
          {
            LODWORD(v77) = *((_DWORD *)this + 214);
            v78 = *((_QWORD *)this + 104);
            if ( (_DWORD)v77 )
            {
              while ( 1 )
              {
                v100 = *((_DWORD *)this + 364);
                v77 = (unsigned int)(v77 - 1);
                v144 = v100;
                *((_DWORD *)this + 364) = v100 + 2;
                v101 = 5 * v77;
                *(_QWORD *)&v154 = 5 * v77;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                {
                  McTemplateU0dffffq_EventWriteTransfer(
                    v101,
                    v100,
                    v100,
                    v76,
                    *(_DWORD *)(v78 + 20 * v77 + 4),
                    *(_DWORD *)(v78 + 20 * v77 + 8),
                    *(_DWORD *)(v78 + 20 * v77 + 12),
                    *(_DWORD *)(v78 + 20 * v77 + 16));
                  v101 = v154;
                  v100 = v144;
                }
                if ( *((_BYTE *)this + 1244) )
                  v102 = (COcclusionContext *)((char *)this + 1248);
                else
                  v102 = 0LL;
                v103 = *(float *)(v78 + 4 * v101);
                v104 = *(float *)(v78 + 4 * v101 + 4);
                v105 = *(float *)(v78 + 4 * v101 + 8);
                v106 = *(float *)(v78 + 4 * v101 + 12);
                v157 = v104;
                v158 = v105;
                v159 = v106;
                v156 = __PAIR64__(LODWORD(v103), v100);
                v155 = 0LL;
                if ( v102 )
                {
                  CMILMatrix::Transform2DBoundsHelper<0>(v102, (__int64)&v156 + 4, (float *)&v155.left);
                  v103 = *(float *)&v155.left;
                  v106 = *(float *)&v155.bottom;
                  v105 = *(float *)&v155.right;
                  v104 = *(float *)&v155.top;
                }
                if ( COERCE_FLOAT(LODWORD(v103) & _xmm) < 8388608.0 )
                  v103 = (float)(int)ceilf_0(v103);
                *(float *)&v155.left = v103;
                if ( COERCE_FLOAT(LODWORD(v104) & _xmm) < 8388608.0 )
                  v104 = (float)(int)ceilf_0(v104);
                *(float *)&v155.top = v104;
                if ( COERCE_FLOAT(LODWORD(v105) & _xmm) < 8388608.0 )
                  v105 = (float)(int)floorf_0(v105);
                *(float *)&v155.right = v105;
                if ( COERCE_FLOAT(LODWORD(v106) & _xmm) < 8388608.0 )
                  v106 = (float)(int)floorf_0(v106);
                *(float *)&v155.bottom = v106;
                v107 = DynArray<CZOrderedRect,0>::AddMultipleAndSet((char *)this + 408, &v155);
                v145 = v107;
                if ( v107 < 0 )
                  break;
                if ( !(_DWORD)v77 )
                  goto LABEL_104;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v108, 0LL, 0, v107, 0x25u, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, v145, 0x2FCu, 0LL);
            }
LABEL_104:
            v79 = (void *)*((_QWORD *)this + 104);
            *((_DWORD *)this + 214) = 0;
            if ( v79 != *((void **)this + 105) )
            {
              operator delete(v79);
              *((_QWORD *)this + 104) = *((_QWORD *)this + 105);
              *((_DWORD *)this + 213) = *((_DWORD *)this + 212);
            }
            v6 = v146;
          }
          *((_QWORD *)this + 154) = 0LL;
          if ( v6 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v79, 0LL, 0, v6, 0x23Au, 0LL);
            goto LABEL_33;
          }
        }
        v20 = v9[8];
        if ( (v20 & 4) != 0 )
        {
          v85 = *((_DWORD *)this + 6);
          if ( v85 )
          {
            *((_DWORD *)this + 6) = v85 - 1;
            v20 = v9[8];
          }
        }
        if ( (v20 & 2) != 0 )
        {
          v95 = *((_DWORD *)this + 368);
          if ( v95 )
            *((_DWORD *)this + 368) = v95 - 1;
          v96 = *((_DWORD *)this + 34);
          if ( v96 )
            *((_DWORD *)this + 34) = v96 - 1;
        }
        if ( (v9[8] & 8) != 0 )
        {
          v97 = *((_DWORD *)this + 384);
          if ( v97 )
            *((_DWORD *)this + 384) = v97 - 1;
        }
        if ( !v3 && ((unsigned int)((v7[35] - v7[34]) >> 4) || (unsigned int)((v7[38] - v7[37]) >> 4)) )
        {
          v80 = (__int128 *)&v146;
          v146 = 0x100000000LL;
          *(_QWORD *)&v154 = &v146;
          while ( 2 )
          {
            v81 = *(_DWORD *)v80;
            v82 = 0;
            v143 = *(_DWORD *)v80;
            while ( v82 < (unsigned int)CVisual::GetLightsCount(v7, v81) )
            {
              LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v84, v82, v83);
              if ( LightAtNoRef[162] )
              {
                if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64 *))(*(_QWORD *)LightAtNoRef + 256LL))(
                       LightAtNoRef,
                       a2,
                       v7) )
                {
                  v131 = CLightStack::Pop((COcclusionContext *)((char *)this + 168));
                  if ( v131 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, v131, 0x69u, 0LL);
                    goto LABEL_26;
                  }
                }
              }
              v81 = v143;
              ++v82;
            }
            v80 = (__int128 *)(v154 + 4);
            *(_QWORD *)&v154 = v80;
            if ( v80 != (__int128 *)v147 )
              continue;
            break;
          }
        }
LABEL_26:
        v21 = (_DWORD *)v7[28];
        if ( (*v21 & 0x2000000) != 0 )
          goto LABEL_130;
        v22 = *(_DWORD *)(v7[27] + 4);
        if ( (v22 & 0x2000000) != 0 || (v22 & 0x4000000) != 0 )
          goto LABEL_130;
        if ( (*v21 & 0x400000) != 0 )
        {
          v90 = (unsigned int)v21[1];
          v91 = v21 + 2;
          for ( j = 0LL; (unsigned int)j < (unsigned int)v90; ++v91 )
          {
            if ( *v91 == 10 )
              break;
            j = (unsigned int)(j + 1);
          }
          v93 = (unsigned int)j >= (unsigned int)v90
              ? 0LL
              : (__int64 *)((char *)v21 + v90 + 8 * j - (((_BYTE)v90 + 15) & 7) + 15);
          v94 = *v93;
          if ( v94 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v94 + 56LL))(v94, 59LL) )
              goto LABEL_130;
          }
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v7 + 56))(v7, 91LL)
          && ((*(unsigned __int8 (__fastcall **)(__int64 *))(*v7 + 224))(v7) || v7[77]) )
        {
LABEL_130:
          --*((_DWORD *)this + 366);
        }
      }
    }
  }
LABEL_31:
  if ( v3 )
    --*((_DWORD *)this + 365);
LABEL_33:
  if ( !*((_BYTE *)this + 1245) || *((_DWORD *)this + 365) || (*((_BYTE *)v7 + 94) & 4) != 0 || (v7[11] & 0x100) == 0 )
    goto LABEL_101;
  v23 = (float *)((char *)a2 + 64);
  if ( v7 != *((__int64 **)a2 + 7) )
    v23 = (float *)v7 + 35;
  v24 = (v23[5] <= v23[4]) + 1;
  if ( v23[2] > *v23 )
    v24 = v23[5] <= v23[4];
  v25 = v24 + 1;
  if ( v23[3] > v23[1] )
    v25 = v24;
  if ( v25 > 1 )
    goto LABEL_101;
  v26 = (_DWORD *)v7[28];
  v27 = *(float *)&FLOAT_1_0;
  v28 = *(float *)&FLOAT_1_0;
  if ( (*v26 & 0x400000) != 0 )
  {
    v111 = (unsigned int)v26[1];
    v112 = v26 + 2;
    for ( k = 0; k < (unsigned int)v111; ++v112 )
    {
      if ( *v112 == 10 )
        break;
      ++k;
    }
    if ( k >= (unsigned int)v111 )
      v114 = 0LL;
    else
      v114 = (float **)((char *)v26 + 8LL * k - (((_BYTE)v111 + 15) & 7) + v111 + 15);
    v115 = *v114;
    if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v115 + 56LL))(v115, 56LL) )
      v28 = v115[18];
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v28, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_101;
  if ( v7 != *((__int64 **)a2 + 7) )
  {
    v29 = v7[27];
    if ( (*(_DWORD *)(v29 + 4) & 0x8000000) != 0 )
    {
      v98 = *(float *)(v29 + 12);
      v99 = (float *)(v29 + 12);
      if ( (LODWORD(v98) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v99 = (float *)((char *)v99 + (LODWORD(v98) & 0xFFFFFF) + 4);
          v98 = *v99;
        }
        while ( (*(_DWORD *)v99 & 0x7F000000) != 0x5000000 );
      }
      v30 = v99[1];
    }
    else
    {
      v30 = *(float *)&FLOAT_1_0;
    }
    v27 = fminf(1.0, fmaxf(v30, 0.0));
  }
  if ( COERCE_FLOAT(LODWORD(v27) & _xmm) < 0.0000011920929
    || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v7 + 272))(v7) && !v3 )
  {
    goto LABEL_101;
  }
  v31 = (_QWORD **)*((_QWORD *)this + 197);
  v32 = &v31[*((_QWORD *)this + 196)];
  v152 = v32;
  if ( v31 == v32 )
    goto LABEL_101;
  while ( 1 )
  {
    v33 = *v31;
    v146 = (__int64)v33;
    if ( !*((_BYTE *)v33 + 11421) )
      goto LABEL_100;
    v34 = *v33;
    v154 = 0LL;
    v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    v36 = *((_DWORD *)this + 34);
    if ( v36 )
      v37 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v36 - 1));
    else
      v37 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v154 = v37;
    v155 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v35, (__int64)&v154, (float *)&v155.left);
    v38 = *(float *)&v155.left;
    v39 = *(float *)&v155.top;
    v40 = *(float *)&v155.right;
    v41 = *(float *)&v155.bottom;
    v42 = (int *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v33 + 152LL))(*v33);
    if ( (float)*v42 > v38 )
      v38 = (float)*v42;
    v43 = v39;
    if ( (float)v42[1] > v39 )
    {
      v39 = (float)v42[1];
      v43 = v39;
    }
    v44 = v40;
    if ( v40 > (float)v42[2] )
    {
      v40 = (float)v42[2];
      v44 = v40;
    }
    v45 = v41;
    if ( v41 > (float)v42[3] )
    {
      v41 = (float)v42[3];
      v45 = v41;
    }
    if ( v44 <= v38 || v45 <= v43 )
    {
      v41 = 0.0;
      v40 = 0.0;
      v39 = 0.0;
      v38 = 0.0;
    }
    else if ( v44 > v38 && v45 > v39 )
    {
      v46 = 0;
      goto LABEL_70;
    }
    v46 = 1;
LABEL_70:
    if ( v46 )
      goto LABEL_100;
    v47 = *((_DWORD *)this + 6);
    v151 = 0;
    v154 = 0LL;
    if ( v47 )
    {
      v48 = (unsigned int)(v47 - 1);
      v49 = *((_QWORD *)this + 5);
      *(_OWORD *)v147 = *(_OWORD *)(68 * v48 + v49);
      v148 = *(_OWORD *)(68 * v48 + v49 + 16);
      v149 = *(_OWORD *)(68 * v48 + v49 + 32);
      v150 = *(_OWORD *)(68 * v48 + v49 + 48);
      v151 = *(_DWORD *)(68 * v48 + v49 + 64);
    }
    else
    {
      *(_OWORD *)v147 = _xmm;
      v148 = _xmm;
      v149 = _xmm;
      v150 = _xmm;
      LOWORD(v151) = 32085;
    }
    if ( CMILMatrix::IsIdentity<1>((__int64)v147) )
    {
      v86 = *(_OWORD *)v35;
      v87 = *(_OWORD *)(v35 + 16);
      v151 = *(_DWORD *)(v35 + 64);
      *(_OWORD *)v147 = v86;
      v88 = *(_OWORD *)(v35 + 32);
      v148 = v87;
      v89 = *(_OWORD *)(v35 + 48);
      v149 = v88;
LABEL_119:
      v150 = v89;
      goto LABEL_75;
    }
    CMILMatrix::Ensure3DFlags((CMILMatrix *)v35);
    v50 = *(_BYTE *)(v35 + 64);
    if ( (v50 & 3) != 1 )
    {
      if ( (v50 & 0xC) == 4 )
        goto LABEL_228;
      if ( (v50 & 0xC0) == 0x40 )
      {
        v135 = *(float *)(v35 + 20);
        v136 = *(float *)v35;
LABEL_227:
        CMILMatrix::Scale((CMILMatrix *)v147, v136, v135, *(float *)(v35 + 40));
LABEL_228:
        CMILMatrix::Translate((CMILMatrix *)v147, *(float *)(v35 + 48), *(float *)(v35 + 52), *(float *)(v35 + 56));
        goto LABEL_75;
      }
      if ( (*(_BYTE *)(v35 + 65) & 0xC) == 4 )
      {
        CMILMatrix::Rotate90((CMILMatrix *)v147);
        LODWORD(v136) = *(_DWORD *)(v35 + 16) ^ _xmm;
        v135 = *(float *)(v35 + 4);
        goto LABEL_227;
      }
      v137 = Windows::Foundation::Numerics::operator*((__int64)v153, (__int128 *)v147, (_OWORD *)v35);
      *(_OWORD *)v147 = *v137;
      v148 = v137[1];
      v149 = v137[2];
      v89 = v137[3];
      v151 = 0;
      goto LABEL_119;
    }
LABEL_75:
    v51 = (__int64)v7 + 140;
    if ( *((float *)v7 + 40) == 0.0 && *((float *)v7 + 39) == 0.0 )
    {
      v52 = *((_QWORD *)this + 1);
      if ( v7 == *(__int64 **)(v52 + 56) )
        v51 = v52 + 64;
      CMILMatrix::Transform2DBoundsHelper<1>(v147, v51, &v154);
      v53 = *((float *)&v154 + 3);
      v54 = *((float *)&v154 + 2);
      v55 = *((float *)&v154 + 1);
      v56 = *(float *)&v154;
    }
    else
    {
      v110 = *((_QWORD *)this + 1);
      v155 = 0LL;
      v156 = 0LL;
      if ( v7 == *(__int64 **)(v110 + 56) )
        v51 = v110 + 64;
      CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v147, v51, (__m128 *)&v155);
      v56 = *(float *)&v155.left;
      v55 = *(float *)&v155.top;
      v54 = *(float *)&v155.right;
      v53 = *(float *)&v155.bottom;
    }
    if ( v38 > v56 )
      v56 = v38;
    v57 = v55;
    if ( v39 > v55 )
    {
      v55 = v39;
      v57 = v39;
    }
    v58 = v54;
    if ( v54 > v40 )
    {
      v54 = v40;
      v58 = v40;
    }
    v59 = v53;
    if ( v53 > v41 )
    {
      v53 = v41;
      v59 = v41;
    }
    if ( v58 > v56 && v59 > v57 )
      break;
    v154 = 0uLL;
LABEL_100:
    if ( ++v31 == v32 )
      goto LABEL_101;
  }
  if ( v58 <= v56 || v59 <= v55 )
    goto LABEL_100;
  v60 = v33 + 12;
  v61 = v56 + 6291456.25;
  rcSrc1.left = (int)(LODWORD(v61) << 10) >> 11;
  v62 = v55 + 6291456.25;
  rcSrc1.top = (int)(LODWORD(v62) << 10) >> 11;
  v63 = v54 + 6291456.25;
  rcSrc1.right = (int)(LODWORD(v63) << 10) >> 11;
  v142 = v53 + 6291456.25;
  rcSrc1.bottom = (int)(LODWORD(v142) << 10) >> 11;
  v64 = 0;
  while ( 1 )
  {
    v65 = *v60;
    v66 = v33[13] - v33[12];
    if ( v64 >= (unsigned int)(v66 / 224) )
      break;
    v138 = 224LL * v64;
    *(_QWORD *)&v154 = v138;
    if ( *(__int64 **)(v65 + v138 + 8) == v7
      || !*(_BYTE *)(v65 + v138 + 177)
      || *(_BYTE *)(v65 + v138 + 181)
      || !IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v138 + 68 + v65)) )
    {
LABEL_236:
      ++v64;
    }
    else
    {
      v139 = *v60 + v154;
      if ( *(_BYTE *)(v139 + 179) )
      {
        *(_BYTE *)(v139 + 180) = 0;
        goto LABEL_236;
      }
      *(_QWORD *)&v154 = *v60 + v154;
      detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
        v60,
        &v161,
        &v154);
    }
  }
  v67 = v146;
  v68 = v146 + 11376;
  v69 = *(_DWORD *)(v146 + 11400);
  v70 = v69 + 1;
  if ( v69 + 1 < v69 )
  {
    v71 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_239:
    MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0, v71, 0x50Bu, 0LL);
    goto LABEL_98;
  }
  v71 = 0;
  if ( v70 > *(_DWORD *)(v146 + 11396) )
  {
    *(_QWORD *)&v154 = &rcSrc1;
    v71 = DynArrayImpl<0>::Grow((int)v146 + 11376, 16, 1, 0, (__int64)&v154);
    if ( v71 >= 0 )
    {
      v72 = *(_QWORD *)v68;
      *(_OWORD *)((unsigned int)(16 * (*(_DWORD *)(v68 + 24))++) + *(_QWORD *)v68) = *(_OWORD *)v154;
      goto LABEL_97;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v109, 0LL, 0, v71, 0xC0u, 0LL);
    goto LABEL_239;
  }
  v72 = 2LL * v69;
  *(RECT *)(*(_QWORD *)v68 + 16LL * v69) = rcSrc1;
  *(_DWORD *)(v68 + 24) = v70;
LABEL_97:
  if ( *(_BYTE *)(v67 + 11432) )
  {
    v116 = v7;
    while ( (*((_BYTE *)v116 + 94) & 0x10) == 0 )
    {
      v116 = (__int64 *)v116[10];
      if ( !v116 )
      {
        *(_BYTE *)(v67 + 11432) = 0;
        break;
      }
    }
  }
LABEL_98:
  if ( v71 >= 0 )
  {
    v32 = v152;
    goto LABEL_100;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v72, 0LL, 0, v71, 0x852u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v141, 0LL, 0, v71, 0x7FCu, 0LL);
LABEL_101:
  *((_DWORD *)this + 364) += 2;
  return (unsigned int)v6;
}

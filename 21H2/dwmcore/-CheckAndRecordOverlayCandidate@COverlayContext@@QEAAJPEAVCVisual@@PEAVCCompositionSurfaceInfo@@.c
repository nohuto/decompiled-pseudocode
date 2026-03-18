/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N5@Z @ 0x1800074D8
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006CA8 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N777@Z @ 0x180007E04 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIP.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180008350 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x180008390 (--$make_shared@VCRegion@@$$V@std@@YA-AV-$shared_ptr@VCRegion@@@0@XZ.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1800083EC (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@II_N@Z @ 0x1800085D8 (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ @ 0x180008748 (-UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x18000882C (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003EC38 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180068B30 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180069C74 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006A370 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800B84E0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x1800B9CC8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1800BCBA8 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x180111D0C (McTemplateU0x_EventWriteTransfer.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801B7DD8 (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x1801B8AB0 (McTemplateU0xddddd_EventWriteTransfer.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x1801B8B6C (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x1801B8DDC (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x1801B9180 (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x1801DF714 (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        struct CVisual *a2,
        const struct CCompositionSurfaceInfo *a3,
        struct ISwapChainRealization *a4,
        float *a5,
        float *a6,
        _DWORD *a7,
        enum DXGI_MODE_ROTATION a8,
        int a9,
        bool a10,
        char a11)
{
  const struct CCompositionSurfaceInfo *v11; // r13
  float v12; // edi
  COverlayContext *v13; // r12
  struct ISwapChainRealization *v14; // r15
  __int64 v15; // rax
  struct ISwapChainRealization *v16; // rcx
  int v17; // ebx
  char *v18; // rcx
  _DWORD *v19; // rax
  float v20; // xmm0_4
  float v21; // eax
  double v22; // xmm0_8
  int v23; // eax
  double v24; // xmm0_8
  int v25; // eax
  double v26; // xmm0_8
  int v27; // eax
  double v28; // xmm0_8
  int v29; // eax
  double v30; // xmm0_8
  int v31; // eax
  double v32; // xmm0_8
  int v33; // eax
  double v34; // xmm0_8
  int v35; // eax
  LONG v36; // eax
  int v37; // eax
  int v38; // eax
  struct ISwapChainRealization *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  enum DXGI_COLOR_SPACE_TYPE v42; // ebx
  __int64 v43; // rax
  bool v44; // cc
  FastRegion::CRegion *v45; // rbx
  const struct FastRegion::Internal::CRgnData *v46; // rcx
  bool v47; // al
  _DWORD *v48; // rsi
  __int64 v49; // r8
  _DWORD *v50; // rax
  char *v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  bool v54; // si
  unsigned int v55; // eax
  unsigned int v56; // eax
  __int64 v57; // rax
  __int64 (__fastcall ***v58)(_QWORD, struct tagRECT *); // rcx
  bool v59; // zf
  __int64 v60; // rax
  __int64 (__fastcall ***v61)(_QWORD, struct tagRECT *); // rcx
  __int64 v62; // rax
  int v63; // eax
  int v64; // eax
  char v65; // bl
  __int64 v66; // rax
  char *v68; // rcx
  __int64 v69; // rax
  __int64 (__fastcall ***v70)(_QWORD, struct tagRECT *); // rcx
  int v71; // r13d
  struct ISwapChainRealization *v72; // rcx
  int v73; // r12d
  struct ISwapChainRealization *v74; // rcx
  int *v75; // rax
  struct ISwapChainRealization *v76; // rbx
  int v77; // r15d
  char v78; // r14
  char v79; // di
  char v80; // si
  _DWORD *v81; // rax
  _QWORD *v82; // rax
  int v83; // edi
  __int64 v84; // rsi
  __int64 v85; // r8
  __int64 v86; // rdi
  __int64 (__fastcall *v87)(__int64, _DWORD *); // r14
  int v88; // ebx
  _DWORD *v89; // rax
  char v90; // cl
  char *v91; // rsi
  unsigned int RectangleCount; // ebx
  _DWORD *v93; // rax
  void *v94; // rdx
  _DWORD *v95; // rax
  int v96; // edx
  int v97; // r9d
  __int64 v98; // rcx
  __int64 v99; // rax
  LONG v100; // ecx
  __int64 (__fastcall ***v101)(_QWORD, struct tagRECT *); // rcx
  int v102; // esi
  struct ISwapChainRealization *v103; // rcx
  int v104; // edi
  struct ISwapChainRealization *v105; // rcx
  int v106; // ebx
  _DWORD *v107; // rax
  int v108; // edx
  __int64 v109; // rcx
  __int64 v110; // rcx
  int v111; // [rsp+20h] [rbp-140h]
  float v112; // [rsp+E0h] [rbp-80h] BYREF
  unsigned __int8 v113; // [rsp+E4h] [rbp-7Ch]
  char v114; // [rsp+E5h] [rbp-7Bh]
  bool IsIntelWorkaroundNeeded; // [rsp+E6h] [rbp-7Ah]
  __int64 v116; // [rsp+E8h] [rbp-78h] BYREF
  __int64 v117; // [rsp+F0h] [rbp-70h] BYREF
  struct ISwapChainRealization *v118; // [rsp+F8h] [rbp-68h]
  struct CVisual *v119; // [rsp+100h] [rbp-60h]
  FastRegion::CRegion *v120[2]; // [rsp+110h] [rbp-50h] BYREF
  FastRegion::CRegion *v121; // [rsp+120h] [rbp-40h]
  COverlayContext *v122; // [rsp+128h] [rbp-38h]
  const struct CCompositionSurfaceInfo *v123; // [rsp+130h] [rbp-30h]
  _DWORD *v124; // [rsp+138h] [rbp-28h]
  char v125[8]; // [rsp+140h] [rbp-20h] BYREF
  char v126[8]; // [rsp+148h] [rbp-18h] BYREF
  struct tagRECT v127; // [rsp+150h] [rbp-10h] BYREF
  _DWORD v128[6]; // [rsp+168h] [rbp+8h] BYREF
  int v129; // [rsp+180h] [rbp+20h] BYREF
  struct tagRECT v130; // [rsp+184h] [rbp+24h] BYREF
  struct tagRECT v131; // [rsp+194h] [rbp+34h] BYREF
  struct tagRECT v132; // [rsp+1A4h] [rbp+44h] BYREF
  enum DXGI_MODE_ROTATION v133; // [rsp+1B4h] [rbp+54h]
  BOOL v134; // [rsp+1B8h] [rbp+58h]
  __int32 v135; // [rsp+1CCh] [rbp+6Ch]
  int v136; // [rsp+1E0h] [rbp+80h]
  unsigned int v137; // [rsp+1E8h] [rbp+88h]
  struct FastRegion::Internal::CRgnData *v138[10]; // [rsp+1F0h] [rbp+90h] BYREF
  void *retaddr; // [rsp+288h] [rbp+128h]

  v11 = a3;
  v12 = *(float *)&a5;
  v13 = this;
  v14 = a4;
  v119 = a2;
  v123 = a3;
  v122 = this;
  v118 = a4;
  v124 = a7;
  memset_0(&v129, 0, 0x70uLL);
  v15 = *((_QWORD *)v14 + 1);
  *(_OWORD *)v120 = 0LL;
  v16 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(v15 + 12) + 8);
  if ( *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v16)(v16, v128) + 4) != 1 )
  {
    v17 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)v13 + 96LL))(
                        *(_QWORD *)v13,
                        &v127)
                    + 8);
    v18 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8;
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(char *, float *))(*(_QWORD *)v18 + 16LL))(v18, &v112);
    if ( *v19 == DisplayId::None || *v19 == v17 || v17 == DisplayId::All )
    {
      v20 = *a5 + 6291456.25;
      v112 = v20;
      v21 = v20;
      v22 = a5[1];
      v130.left = (int)(LODWORD(v21) << 10) >> 11;
      *(float *)&v22 = v22 + 6291456.25;
      v112 = *(float *)&v22;
      v23 = LODWORD(v22);
      v24 = a5[2];
      v130.top = v23 << 10 >> 11;
      *(float *)&v24 = v24 + 6291456.25;
      v112 = *(float *)&v24;
      v25 = LODWORD(v24);
      v26 = a5[3];
      v130.right = v25 << 10 >> 11;
      *(float *)&v26 = v26 + 6291456.25;
      v112 = *(float *)&v26;
      v27 = LODWORD(v26);
      v28 = *a6;
      v130.bottom = v27 << 10 >> 11;
      *(float *)&v28 = v28 + 6291456.25;
      v112 = *(float *)&v28;
      v29 = LODWORD(v28);
      v30 = a6[1];
      v131.left = v29 << 10 >> 11;
      *(float *)&v30 = v30 + 6291456.25;
      v112 = *(float *)&v30;
      v31 = LODWORD(v30);
      v32 = a6[2];
      v131.top = v31 << 10 >> 11;
      *(float *)&v32 = v32 + 6291456.25;
      v112 = *(float *)&v32;
      v33 = LODWORD(v32);
      v34 = a6[3];
      v131.right = v33 << 10 >> 11;
      *(float *)&v34 = v34 + 6291456.25;
      v112 = *(float *)&v34;
      v35 = LODWORD(v34);
      LODWORD(v34) = *a7;
      v131.bottom = v35 << 10 >> 11;
      *(float *)&v34 = *(float *)&v34 + 6291456.25;
      v112 = *(float *)&v34;
      v36 = (int)(LODWORD(v34) << 10) >> 11;
      LODWORD(v34) = a7[1];
      v132.left = v36;
      *(float *)&v34 = *(float *)&v34 + 6291456.25;
      v112 = *(float *)&v34;
      v37 = LODWORD(v34);
      LODWORD(v34) = a7[2];
      v132.top = v37 << 10 >> 11;
      *(float *)&v34 = *(float *)&v34 + 6291456.25;
      v112 = *(float *)&v34;
      v38 = LODWORD(v34);
      LODWORD(v34) = a7[3];
      v132.right = v38 << 10 >> 11;
      v112 = *(float *)&v34 + 6291456.25;
      v132.bottom = (int)(LODWORD(v112) << 10) >> 11;
      v39 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 12LL) + 8);
      v40 = (**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v39)(v39, v128);
      v41 = *(_QWORD *)v13;
      v135 = *(_DWORD *)(v40 + 8);
      v42 = v135;
      v43 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v41 + 96LL))(v41, &v127);
      v137 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v43 + 16), v42);
      v44 = *((_DWORD *)v13 + 2821) < 2000;
      LOBYTE(v12) = 0;
      v112 = v12;
      if ( v44 && (a9 & 3) != 0 )
      {
        LODWORD(v12) = (unsigned __int8)TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(
                                          &v132,
                                          &v131) == 0;
        v112 = v12;
      }
      IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(v13, &v130, &v131, &v132);
      COverlayContext::UpdateVisitedContentRegion(v13);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v138, &v132);
      v45 = (COverlayContext *)((char *)v13 + 11176);
      v46 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)v13 + 1397);
      v121 = (COverlayContext *)((char *)v13 + 11176);
      if ( !*(_DWORD *)v46
        || !*(_DWORD *)v138[0]
        || (v47 = FastRegion::Internal::CRgnData::Intersects(v46, v138[0]), v113 = 0, !v47) )
      {
        v113 = 1;
      }
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v138);
      v48 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)v13 + 96LL))(
                        *(_QWORD *)v13,
                        &v127);
      v49 = *(int *)(*((_QWORD *)v14 + 1) + 8LL);
      v50 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)((char *)v14 + v49 + 8) + 32LL))(
                        (__int64)v14 + v49 + 8,
                        &v117);
      if ( *v50 == *v48 && v50[1] == v48[1] )
      {
        v51 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 8LL) + 8;
        if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v51 + 24LL))(v51)
          || (v68 = (char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 8LL) + 8,
              v69 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v68 + 8LL))(v68),
              !CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v69 + 16))) )
        {
          v52 = *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8LL;
          v117 = 0LL;
          (**(void (__fastcall ***)(char *, GUID *, __int64 *))((char *)v14 + v52))(
            (char *)v14 + v52,
            &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
            &v117);
          v53 = *(int *)(*((_QWORD *)v14 + 1) + 4LL) + 8LL;
          v116 = 0LL;
          (**(void (__fastcall ***)(char *, GUID *, __int64 *))((char *)v14 + v53))(
            (char *)v14 + v53,
            &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
            &v116);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
          {
            v70 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14
                                                                     + *(int *)(*((_QWORD *)v14 + 1) + 12LL)
                                                                     + 8);
            v71 = *(_DWORD *)(**v70)(v70, &v127);
            v72 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
            v73 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v72)(v72, v125) + 4);
            v74 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
            v75 = (int *)(**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v74)(v74, v126);
            v76 = v118;
            v77 = *v75;
            v78 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v118 + 72LL))(v118);
            v79 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v76 + 64LL))(v76);
            v80 = v116 != 0;
            LODWORD(v76) = (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v76 + 88LL))(v76);
            v81 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v118 + 40LL))(
                              v118,
                              v128);
            McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer(
              *v81,
              v113,
              *v81,
              (_DWORD)v76,
              v80,
              v79,
              v78,
              v113,
              v77,
              v73,
              v71,
              v129,
              v130.left,
              v130.top,
              v130.right,
              v130.bottom,
              v131.left,
              v131.top,
              v131.right,
              v131.bottom,
              v132.left,
              v132.top,
              v132.right,
              v132.bottom,
              v133,
              v134,
              v135);
            v14 = v118;
            v13 = v122;
            v11 = v123;
            v45 = v121;
            LOBYTE(v12) = LOBYTE(v112);
          }
          v54 = a10;
          if ( v117
            || (v55 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 72LL))(v11),
                !COverlayContext::IsCandidateDirectFlipCompatbile(
                   v13,
                   v11,
                   v14,
                   (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v129,
                   a8,
                   v55,
                   a9,
                   a10))
            || CCommonRegistryData::m_dwOverlayTestMode != 5
            && *((_DWORD *)v13 + 12) > 1u
            && *((int *)v13 + 2821) >= 2200 )
          {
            if ( COverlayContext::OverlaysEnabled(v13) )
            {
              v114 = 0;
              if ( v116 )
                v114 = (**(__int64 (__fastcall ***)(__int64))v116)(v116);
              if ( !(*(unsigned __int8 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 128LL))(v11)
                && !LOBYTE(v12)
                && !IsIntelWorkaroundNeeded
                && !v114 )
              {
                if ( a10 && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 72LL))(*(_QWORD *)v13) )
                {
                  if ( v131.left < 0 || v131.top < 0 )
                  {
                    v54 = 0;
                  }
                  else
                  {
                    v128[0] = v131.left;
                    v128[2] = v131.right;
                    v128[1] = v131.top;
                    v98 = *(_QWORD *)v13;
                    v128[3] = v131.bottom;
                    v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 168LL))(v98);
                    if ( *((_BYTE *)v13 + 11025) )
                    {
                      *(_QWORD *)&v127.left = 0LL;
                      v100 = *(_DWORD *)(v99 + 36);
                      v127.bottom = *(_DWORD *)(v99 + 40);
                      v127.right = v100;
                    }
                    else
                    {
                      v127 = *(struct tagRECT *)(v99 + 20);
                    }
                    v54 = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(&v127, v128) & a10;
                  }
                }
                v56 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 72LL))(v11);
                if ( COverlayContext::IsCandidateOverlayCompatbile(
                       v13,
                       v119,
                       v11,
                       v14,
                       (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v129,
                       a8,
                       v56,
                       v54) )
                {
                  v129 = a9;
                  v57 = *((_QWORD *)v14 + 1);
                  v133 = a8;
                  v58 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14 + *(int *)(v57 + 12) + 8);
                  v59 = *(_DWORD *)((**v58)(v58, &v127) + 4) == 1;
                  v60 = *((_QWORD *)v14 + 1);
                  v136 = 2;
                  v134 = v59;
                  v61 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14 + *(int *)(v60 + 12) + 8);
                  v135 = *(_DWORD *)((**v61)(v61, &v127) + 8);
                  v62 = std::make_shared<CRegion,>(&v127);
                  std::shared_ptr<CRegion>::operator=(v120, v62);
                  if ( *(_QWORD *)&v127.right )
                    std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v127.right);
                  v63 = FastRegion::CRegion::Copy(v120[0], v45);
                  if ( v63 < 0 )
                    ModuleFailFastForHRESULT((unsigned int)v63, retaddr);
                  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v138, &v132);
                  v64 = FastRegion::CRegion::Intersect(v120[0], (const struct CRegion *)v138);
                  if ( v64 < 0 )
                    ModuleFailFastForHRESULT((unsigned int)v64, retaddr);
                  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v138);
                  v65 = v117 != 0;
                  v66 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v11 + 64LL))(v11);
                  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool>(
                    (_DWORD)v13 + 88,
                    (_DWORD)v13,
                    (_DWORD)v119,
                    (_DWORD)v11,
                    v66,
                    (__int64)&v129,
                    (__int64)v124,
                    (__int64)v120,
                    v65,
                    v54,
                    a11,
                    v113);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
                  {
                    v101 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v14
                                                                              + *(int *)(*((_QWORD *)v14 + 1) + 12LL)
                                                                              + 8);
                    v102 = *(_DWORD *)(**v101)(v101, &v127);
                    v103 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
                    v104 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _DWORD *))v103)(
                                         v103,
                                         v128)
                                     + 4);
                    v105 = (struct ISwapChainRealization *)((char *)v14 + *(int *)(*((_QWORD *)v14 + 1) + 16LL) + 8);
                    v106 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v105)(
                                        v105,
                                        v126);
                    v107 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, char *))(*(_QWORD *)v14 + 40LL))(
                                       v14,
                                       v125);
                    McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer(
                      *v107,
                      v108,
                      *v107,
                      v106,
                      v104,
                      v102,
                      v129,
                      v130.left,
                      v130.top,
                      v130.right,
                      v130.bottom,
                      v131.left,
                      v131.top,
                      v131.right,
                      v131.bottom,
                      v132.left,
                      v132.top,
                      v132.right,
                      v132.bottom,
                      v133,
                      v134,
                      v135);
                  }
                }
              }
            }
            goto LABEL_30;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
          {
            v82 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v14 + 40LL))(
                              v14,
                              v128);
            McTemplateU0x_EventWriteTransfer(
              *(unsigned int *)v82,
              &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
              *(unsigned int *)v82 | (unsigned __int64)((__int64)(int)HIDWORD(*v82) << 32));
          }
          v83 = 2;
          if ( !v113 )
          {
            if ( v116 )
            {
              v84 = *(_QWORD *)v13;
              v85 = *(int *)(*((_QWORD *)v14 + 1) + 12LL);
              v86 = *(int *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) + 8LL);
              v87 = **(__int64 (__fastcall ***)(__int64, _DWORD *))(*(_QWORD *)v13 + v86 + 8);
              v88 = *(_DWORD *)(**(__int64 (__fastcall ***)(__int64, struct tagRECT *))((char *)v14 + v85 + 8))(
                                 (__int64)v14 + v85 + 8,
                                 &v127);
              v89 = (_DWORD *)v87(v84 + v86 + 8, v128);
              v90 = *((_BYTE *)v13 + 11311);
              if ( v88 == *v89 )
              {
                v91 = (char *)v13 + 11176;
                if ( v90 )
                {
                  v83 = 4;
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0 )
                    goto LABEL_62;
                  v127 = 0LL;
                  FastRegion::CRegion::GetBoundingRect((COverlayContext *)((char *)v13 + 11176), &v127);
                  RectangleCount = FastRegion::CRegion::GetRectangleCount((COverlayContext *)((char *)v13 + 11176));
                  v93 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v14 + 40LL))(
                                    v14,
                                    v128);
                  v94 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
                }
                else
                {
                  v83 = 3;
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) == 0 )
                  {
LABEL_62:
                    CDirectFlipInfo::Init((char *)v13 + 11040, *(_QWORD *)v13, v119, v11, v83, v91);
LABEL_30:
                    if ( v116 )
                    {
                      v109 = *(int *)(*(_QWORD *)(v116 + 8) + 4LL) + v116 + 8;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 16LL))(v109);
                    }
                    goto LABEL_32;
                  }
                  v127 = 0LL;
                  FastRegion::CRegion::GetBoundingRect((COverlayContext *)((char *)v13 + 11176), &v127);
                  RectangleCount = FastRegion::CRegion::GetRectangleCount((COverlayContext *)((char *)v13 + 11176));
                  v93 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v14 + 40LL))(
                                    v14,
                                    v128);
                  v94 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
                }
                McTemplateU0xddddd_EventWriteTransfer(
                  *v93,
                  (_DWORD)v94,
                  *v93,
                  RectangleCount,
                  v127.left,
                  v127.top,
                  v127.right,
                  v127.bottom);
                goto LABEL_62;
              }
              if ( !v90 )
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
                {
                  v127 = 0LL;
                  FastRegion::CRegion::GetBoundingRect(v121, &v127);
                  v95 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _DWORD *))(*(_QWORD *)v14 + 40LL))(
                                    v14,
                                    v128);
                  McTemplateU0xqqdddd_EventWriteTransfer(
                    *v95,
                    v96,
                    *v95,
                    v97,
                    v111,
                    v127.left,
                    v127.top,
                    v127.right,
                    v127.bottom);
                }
                goto LABEL_30;
              }
            }
            else if ( !*((_BYTE *)v13 + 11311) )
            {
LABEL_32:
              if ( v117 )
              {
                v110 = *(int *)(*(_QWORD *)(v117 + 8) + 4LL) + v117 + 8;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 16LL))(v110);
              }
              return 0LL;
            }
            v83 = 1;
          }
          v91 = (char *)v13 + 11176;
          goto LABEL_62;
        }
      }
    }
  }
  return 0LL;
}

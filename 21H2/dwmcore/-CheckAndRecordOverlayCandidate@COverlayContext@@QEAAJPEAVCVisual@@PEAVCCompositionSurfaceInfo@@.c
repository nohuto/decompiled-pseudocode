/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017A340
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180183324 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003057C (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003A990 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006BD88 (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800987FC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800988EC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18009B318 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18009D204 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800C51F4 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1800EBDFC (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016C6EC (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180173D04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N_N_N_N_N_N$$T@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$shared_ptr@VCRegion@@@std@@_N77777$$T@Z @ 0x180179948 (--$emplace_back@PEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIP.c)
 *     ??$make_shared@VCRegion@@$$V@std@@YA?AV?$shared_ptr@VCRegion@@@0@XZ @ 0x180179AEC (--$make_shared@VCRegion@@$$V@std@@YA-AV-$shared_ptr@VCRegion@@@0@XZ.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017C41C (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEBVCCompositionSurfaceInfo@@P.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x18017C998 (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18017CCA8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ @ 0x18017D178 (-UpdateVisitedContentRegion@COverlayContext@@AEAAXXZ.c)
 *     McTemplateU0xddddd_EventWriteTransfer @ 0x18017D71C (McTemplateU0xddddd_EventWriteTransfer.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer @ 0x18017D7D8 (McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer @ 0x18017DA48 (McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer.c)
 *     McTemplateU0xqqdddd_EventWriteTransfer @ 0x18017DDEC (McTemplateU0xqqdddd_EventWriteTransfer.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x18018448C (-Init@CDirectFlipInfo@@QEAAXPEAVIOverlayMonitorTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x18023CF90 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
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
        unsigned int a9,
        bool a10)
{
  const struct CCompositionSurfaceInfo *v10; // r13
  COverlayContext *v11; // r12
  struct ISwapChainRealization *v12; // r15
  __int64 v13; // rax
  struct ISwapChainRealization *v14; // rcx
  float v15; // xmm0_4
  float v16; // eax
  double v17; // xmm0_8
  int v18; // eax
  double v19; // xmm0_8
  int v20; // eax
  double v21; // xmm0_8
  int v22; // eax
  double v23; // xmm0_8
  int v24; // eax
  double v25; // xmm0_8
  int v26; // eax
  double v27; // xmm0_8
  int v28; // eax
  double v29; // xmm0_8
  int v30; // eax
  LONG v31; // eax
  int v32; // eax
  int v33; // eax
  struct ISwapChainRealization *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  enum DXGI_COLOR_SPACE_TYPE v37; // ebx
  __int64 v38; // rax
  int v39; // eax
  bool v40; // bl
  const struct FastRegion::Internal::CRgnData **v41; // rsi
  const struct FastRegion::Internal::CRgnData *v42; // rcx
  char v43; // r14
  char v44; // r14
  _DWORD *v45; // rdi
  __int64 v46; // r8
  _DWORD *v47; // rax
  char *v48; // rcx
  char *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 (__fastcall ***v53)(_QWORD, struct tagRECT *); // rcx
  int v54; // r13d
  struct ISwapChainRealization *v55; // rcx
  int v56; // r12d
  struct ISwapChainRealization *v57; // rcx
  int *v58; // rax
  struct ISwapChainRealization *v59; // rbx
  int v60; // r15d
  char v61; // r14
  char v62; // di
  char v63; // si
  _DWORD *v64; // rax
  _QWORD *v65; // rax
  int v66; // edi
  __int64 v67; // rsi
  __int64 v68; // r8
  __int64 v69; // rdi
  __int64 (__fastcall *v70)(__int64, _BYTE *); // r14
  int v71; // ebx
  _DWORD *v72; // rax
  char v73; // cl
  char *v74; // rsi
  int RectangleCount; // ebx
  _DWORD *v76; // rax
  void *v77; // rdx
  _DWORD *v78; // rax
  int v79; // edx
  int v80; // r9d
  unsigned int v81; // eax
  __int64 v82; // rax
  __int64 (__fastcall ***v83)(_QWORD, struct tagRECT *); // rcx
  int v84; // ebx
  __int64 (__fastcall ***v85)(_QWORD, struct tagRECT *); // rcx
  __int64 v86; // rbx
  __int64 v87; // rdi
  __int64 *v88; // rax
  int v89; // eax
  int v90; // eax
  char v91; // bl
  __int64 v92; // rax
  __int64 (__fastcall ***v93)(_QWORD, struct tagRECT *); // rcx
  int v94; // esi
  struct ISwapChainRealization *v95; // rcx
  int v96; // edi
  struct ISwapChainRealization *v97; // rcx
  int v98; // ebx
  _DWORD *v99; // rax
  int v100; // edx
  __int64 v101; // rcx
  int v103; // [rsp+20h] [rbp-140h]
  unsigned __int8 v104; // [rsp+E0h] [rbp-80h]
  char v105; // [rsp+E0h] [rbp-80h]
  char v106; // [rsp+E0h] [rbp-80h]
  float v107; // [rsp+E4h] [rbp-7Ch]
  bool v108; // [rsp+E4h] [rbp-7Ch]
  bool IsIntelWorkaroundNeeded; // [rsp+E8h] [rbp-78h]
  char v110; // [rsp+E8h] [rbp-78h]
  __int64 (__fastcall ***v111)(_QWORD); // [rsp+F0h] [rbp-70h] BYREF
  __int64 v112; // [rsp+F8h] [rbp-68h] BYREF
  struct CVisual *v113; // [rsp+100h] [rbp-60h]
  struct ISwapChainRealization *v114; // [rsp+108h] [rbp-58h]
  FastRegion::CRegion *v115[2]; // [rsp+110h] [rbp-50h] BYREF
  FastRegion::CRegion *v116; // [rsp+120h] [rbp-40h]
  COverlayContext *v117; // [rsp+128h] [rbp-38h]
  const struct CCompositionSurfaceInfo *v118; // [rsp+130h] [rbp-30h]
  _DWORD *v119; // [rsp+138h] [rbp-28h]
  char v120[8]; // [rsp+140h] [rbp-20h] BYREF
  char v121[8]; // [rsp+148h] [rbp-18h] BYREF
  struct tagRECT v122; // [rsp+150h] [rbp-10h] BYREF
  _BYTE v123[24]; // [rsp+168h] [rbp+8h] BYREF
  unsigned int v124; // [rsp+180h] [rbp+20h] BYREF
  struct tagRECT v125; // [rsp+184h] [rbp+24h] BYREF
  struct tagRECT v126; // [rsp+194h] [rbp+34h] BYREF
  RECT rc1; // [rsp+1A4h] [rbp+44h] BYREF
  enum DXGI_MODE_ROTATION v128; // [rsp+1B4h] [rbp+54h]
  BOOL v129; // [rsp+1B8h] [rbp+58h]
  enum DXGI_COLOR_SPACE_TYPE v130; // [rsp+1CCh] [rbp+6Ch]
  int v131; // [rsp+1E0h] [rbp+80h]
  int v132; // [rsp+1E8h] [rbp+88h]
  struct FastRegion::Internal::CRgnData *v133[10]; // [rsp+1F0h] [rbp+90h] BYREF
  void *retaddr; // [rsp+298h] [rbp+138h]

  v10 = a3;
  v11 = this;
  v12 = a4;
  v113 = a2;
  v118 = a3;
  v117 = this;
  v114 = a4;
  v119 = a7;
  memset_0(&v124, 0, 0x70uLL);
  v13 = *((_QWORD *)v12 + 1);
  *(_OWORD *)v115 = 0LL;
  v14 = (struct ISwapChainRealization *)((char *)v12 + *(int *)(v13 + 12) + 8);
  if ( *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _BYTE *))v14)(v14, v123) + 4) != 1 )
  {
    v15 = *a5 + 6291456.25;
    v16 = v15;
    v17 = a5[1];
    v125.left = (int)(LODWORD(v16) << 10) >> 11;
    *(float *)&v17 = v17 + 6291456.25;
    v18 = LODWORD(v17);
    v19 = a5[2];
    v125.top = v18 << 10 >> 11;
    *(float *)&v19 = v19 + 6291456.25;
    v20 = LODWORD(v19);
    v21 = a5[3];
    v125.right = v20 << 10 >> 11;
    *(float *)&v21 = v21 + 6291456.25;
    v22 = LODWORD(v21);
    v23 = *a6;
    v125.bottom = v22 << 10 >> 11;
    *(float *)&v23 = v23 + 6291456.25;
    v24 = LODWORD(v23);
    v25 = a6[1];
    v126.left = v24 << 10 >> 11;
    *(float *)&v25 = v25 + 6291456.25;
    v26 = LODWORD(v25);
    v27 = a6[2];
    v126.top = v26 << 10 >> 11;
    *(float *)&v27 = v27 + 6291456.25;
    v28 = LODWORD(v27);
    v29 = a6[3];
    v126.right = v28 << 10 >> 11;
    *(float *)&v29 = v29 + 6291456.25;
    v30 = LODWORD(v29);
    LODWORD(v29) = *a7;
    v126.bottom = v30 << 10 >> 11;
    *(float *)&v29 = *(float *)&v29 + 6291456.25;
    v31 = (int)(LODWORD(v29) << 10) >> 11;
    LODWORD(v29) = a7[1];
    rc1.left = v31;
    *(float *)&v29 = *(float *)&v29 + 6291456.25;
    v32 = LODWORD(v29);
    LODWORD(v29) = a7[2];
    rc1.top = v32 << 10 >> 11;
    *(float *)&v29 = *(float *)&v29 + 6291456.25;
    v33 = LODWORD(v29);
    LODWORD(v29) = a7[3];
    rc1.right = v33 << 10 >> 11;
    v107 = *(float *)&v29 + 6291456.25;
    rc1.bottom = (int)(LODWORD(v107) << 10) >> 11;
    v34 = (struct ISwapChainRealization *)((char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 12LL) + 8);
    v35 = (**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _BYTE *))v34)(v34, v123);
    v36 = *(_QWORD *)v11;
    v130 = *(_DWORD *)(v35 + 8);
    v37 = v130;
    v38 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v36 + 80LL))(v36, &v122);
    v39 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(v38 + 16), v37);
    v40 = 0;
    v132 = v39;
    v108 = 0;
    if ( *((int *)v11 + 2853) < 2000 && (a9 & 3) != 0 )
    {
      v40 = !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(
               (__int64)&rc1,
               (__int64)&v126);
      v108 = v40;
    }
    IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(v11, &v125, &v126, &rc1);
    COverlayContext::UpdateVisitedContentRegion(v11);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v133, &rc1);
    v41 = (const struct FastRegion::Internal::CRgnData **)((char *)v11 + 11304);
    v42 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)v11 + 1413);
    v116 = (COverlayContext *)((char *)v11 + 11304);
    if ( *(_DWORD *)v42 && *(_DWORD *)v133[0] )
      v43 = FastRegion::Internal::CRgnData::Intersects(v42, v133[0]);
    else
      v43 = 0;
    v44 = v43 ^ 1;
    v104 = v44;
    FastRegion::CRegion::FreeMemory((void **)v133);
    v45 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**(_QWORD **)v11 + 80LL))(
                      *(_QWORD *)v11,
                      &v122);
    v46 = *(int *)(*((_QWORD *)v12 + 1) + 8LL);
    v47 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)((char *)v12 + v46 + 8) + 32LL))(
                      (__int64)v12 + v46 + 8,
                      &v112);
    if ( *v47 == *v45 && v47[1] == v45[1] )
    {
      v48 = (char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 8LL) + 8;
      if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v48 + 24LL))(v48)
        || (v49 = (char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 8LL) + 8,
            v50 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v49 + 8LL))(v49),
            !CD2DContext::IsHardwareProtectionDisabled((CD2DContext *)(v50 + 16))) )
      {
        v51 = *(int *)(*((_QWORD *)v12 + 1) + 4LL);
        v112 = 0LL;
        (**(void (__fastcall ***)(__int64, GUID *, __int64 *))((char *)v12 + v51 + 8))(
          (__int64)v12 + v51 + 8,
          &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
          &v112);
        v52 = *(int *)(*((_QWORD *)v12 + 1) + 4LL);
        v111 = 0LL;
        (**(void (__fastcall ***)(__int64, GUID *, __int64 (__fastcall ****)(_QWORD)))((char *)v12 + v52 + 8))(
          (__int64)v12 + v52 + 8,
          &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
          &v111);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v53 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v12
                                                                   + *(int *)(*((_QWORD *)v12 + 1) + 12LL)
                                                                   + 8);
          v54 = *(_DWORD *)(**v53)(v53, &v122);
          v55 = (struct ISwapChainRealization *)((char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 16LL) + 8);
          v56 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v55)(v55, v120) + 4);
          v57 = (struct ISwapChainRealization *)((char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 16LL) + 8);
          v58 = (int *)(**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v57)(v57, v121);
          v59 = v114;
          v60 = *v58;
          v61 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v114 + 64LL))(v114);
          v62 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v59 + 56LL))(v59);
          v63 = v111 != 0LL;
          LODWORD(v59) = (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v59 + 80LL))(v59);
          v64 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _BYTE *))(*(_QWORD *)v114 + 32LL))(
                            v114,
                            v123);
          McTemplateU0xdddddddqqddddddddddddqqq_EventWriteTransfer(
            *v64,
            v104,
            *v64,
            (_DWORD)v59,
            v63,
            v62,
            v61,
            v104,
            v60,
            v56,
            v54,
            v124,
            v125.left,
            v125.top,
            v125.right,
            v125.bottom,
            v126.left,
            v126.top,
            v126.right,
            v126.bottom,
            rc1.left,
            rc1.top,
            rc1.right,
            rc1.bottom,
            v128,
            v129,
            v130);
          v12 = v114;
          v11 = v117;
          v10 = v118;
          v41 = (const struct FastRegion::Internal::CRgnData **)v116;
          v44 = v104;
          v40 = v108;
        }
        if ( v112
          || !COverlayContext::IsCandidateDirectFlipCompatbile(
                v11,
                v10,
                v12,
                (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v124,
                a8,
                a9)
          || CCommonRegistryData::m_dwOverlayTestMode != 5 && *((_DWORD *)v11 + 13) > 1u && *((int *)v11 + 2853) >= 2200 )
        {
          if ( COverlayContext::OverlaysEnabled(v11) )
          {
            v105 = 0;
            if ( v111 )
              v105 = (**v111)(v111);
            if ( !(*(unsigned __int8 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v10 + 120LL))(v10)
              && !v40
              && !IsIntelWorkaroundNeeded
              && !v105 )
            {
              v81 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v10 + 72LL))(v10);
              if ( COverlayContext::IsCandidateOverlayCompatbile(
                     v11,
                     v113,
                     v10,
                     v12,
                     (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v124,
                     a8,
                     v81,
                     a10) )
              {
                v124 = a9;
                v82 = *((_QWORD *)v12 + 1);
                v128 = a8;
                v83 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v12 + *(int *)(v82 + 12) + 8);
                v84 = *(_DWORD *)((**v83)(v83, &v122) + 4);
                v131 = 2;
                v110 = v84 == 1;
                v129 = v84 == 1;
                v85 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v12
                                                                         + *(int *)(*((_QWORD *)v12 + 1) + 12LL)
                                                                         + 8);
                v130 = *(_DWORD *)((**v85)(v85, &v122) + 8);
                v106 = 0;
                if ( v84 == 1 )
                {
                  v106 = 1;
                }
                else
                {
                  v86 = *((_QWORD *)v11 + 12);
                  v87 = *((_QWORD *)v11 + 13);
                  while ( v86 != v87 )
                  {
                    if ( *(_BYTE *)(v86 + 177)
                      && !*(_BYTE *)(v86 + 181)
                      && *(_BYTE *)(v86 + 180)
                      && EqualRect(&rc1, (const RECT *)(v86 + 68)) )
                    {
                      *(_QWORD *)(v86 + 184) = v113;
                      *(_WORD *)(v86 + 180) = 256;
                      break;
                    }
                    v86 += 224LL;
                  }
                }
                v88 = std::make_shared<CRegion,>(&v122);
                std::shared_ptr<CRegion>::operator=(v115, v88);
                if ( *(_QWORD *)&v122.right )
                  std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v122.right);
                v89 = FastRegion::CRegion::Copy((const struct FastRegion::Internal::CRgnData **)v115[0], v41);
                if ( v89 < 0 )
                  ModuleFailFastForHRESULT((unsigned int)v89, retaddr);
                FastRegion::CRegion::CRegion((FastRegion::CRegion *)v133, &rc1);
                v90 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v115[0], v133);
                if ( v90 < 0 )
                  ModuleFailFastForHRESULT((unsigned int)v90, retaddr);
                FastRegion::CRegion::FreeMemory((void **)v133);
                v91 = v112 != 0;
                v92 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v10 + 64LL))(v10);
                detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::emplace_back<COverlayContext *,CVisual *,CCompositionSurfaceInfo *,unsigned __int64,DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> *,std::shared_ptr<CRegion>,bool,bool,bool,bool,bool,bool,std::nullptr_t>(
                  (_QWORD *)v11 + 12,
                  (__int64)v11,
                  (__int64)v113,
                  (__int64)v10,
                  v92,
                  (__int64)&v124,
                  (__int64)v119,
                  v115,
                  v91,
                  v110,
                  a10,
                  v44,
                  v106);
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                {
                  v93 = (__int64 (__fastcall ***)(_QWORD, struct tagRECT *))((char *)v12
                                                                           + *(int *)(*((_QWORD *)v12 + 1) + 12LL)
                                                                           + 8);
                  v94 = *(_DWORD *)(**v93)(v93, &v122);
                  v95 = (struct ISwapChainRealization *)((char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 16LL) + 8);
                  v96 = *(_DWORD *)((**(__int64 (__fastcall ***)(struct ISwapChainRealization *, _BYTE *))v95)(
                                      v95,
                                      v123)
                                  + 4);
                  v97 = (struct ISwapChainRealization *)((char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 16LL) + 8);
                  v98 = *(_DWORD *)(**(__int64 (__fastcall ***)(struct ISwapChainRealization *, char *))v97)(v97, v121);
                  v99 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, char *))(*(_QWORD *)v12 + 32LL))(
                                    v12,
                                    v120);
                  McTemplateU0xddqqddddddddddddqqq_EventWriteTransfer(
                    *v99,
                    v100,
                    *v99,
                    v98,
                    v96,
                    v94,
                    v124,
                    v125.left,
                    v125.top,
                    v125.right,
                    v125.bottom,
                    v126.left,
                    v126.top,
                    v126.right,
                    v126.bottom,
                    rc1.left,
                    rc1.top,
                    rc1.right,
                    rc1.bottom,
                    v128,
                    v129,
                    v130);
                }
              }
            }
          }
          goto LABEL_65;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v65 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _BYTE *))(*(_QWORD *)v12 + 32LL))(
                            v12,
                            v123);
          McTemplateU0x_EventWriteTransfer(
            *(unsigned int *)v65,
            &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
            *(unsigned int *)v65 | (unsigned __int64)((__int64)(int)HIDWORD(*v65) << 32));
        }
        v66 = 2;
        if ( !v44 )
        {
          if ( v111 )
          {
            v67 = *(_QWORD *)v11;
            v68 = *(int *)(*((_QWORD *)v12 + 1) + 12LL);
            v69 = *(int *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) + 8LL);
            v70 = **(__int64 (__fastcall ***)(__int64, _BYTE *))(v69 + *(_QWORD *)v11 + 8);
            v71 = *(_DWORD *)(**(__int64 (__fastcall ***)(__int64, struct tagRECT *))((char *)v12 + v68 + 8))(
                               (__int64)v12 + v68 + 8,
                               &v122);
            v72 = (_DWORD *)v70(v69 + v67 + 8, v123);
            v73 = *((_BYTE *)v11 + 11433);
            if ( v71 == *v72 )
            {
              v74 = (char *)v11 + 11304;
              if ( v73 )
              {
                v66 = 4;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
                  goto LABEL_34;
                v122 = 0LL;
                FastRegion::CRegion::GetBoundingRect((LONG **)v11 + 1413, &v122);
                RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v11 + 1413);
                v76 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _BYTE *))(*(_QWORD *)v12 + 32LL))(
                                  v12,
                                  v123);
                v77 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
              }
              else
              {
                v66 = 3;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
                {
LABEL_34:
                  CDirectFlipInfo::Init((char *)v11 + 11176, *(_QWORD *)v11, v113, v10, v66, v74);
                  goto LABEL_65;
                }
                v122 = 0LL;
                FastRegion::CRegion::GetBoundingRect((LONG **)v11 + 1413, &v122);
                RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v11 + 1413);
                v76 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _BYTE *))(*(_QWORD *)v12 + 32LL))(
                                  v12,
                                  v123);
                v77 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
              }
              McTemplateU0xddddd_EventWriteTransfer(
                *v76,
                (_DWORD)v77,
                *v76,
                RectangleCount,
                v122.left,
                v122.top,
                v122.right,
                v122.bottom);
              goto LABEL_34;
            }
            if ( !v73 )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              {
                v122 = 0LL;
                FastRegion::CRegion::GetBoundingRect((LONG **)v116, &v122);
                v78 = (_DWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, _BYTE *))(*(_QWORD *)v12 + 32LL))(
                                  v12,
                                  v123);
                McTemplateU0xqqdddd_EventWriteTransfer(
                  *v78,
                  v79,
                  *v78,
                  v80,
                  v103,
                  v122.left,
                  v122.top,
                  v122.right,
                  v122.bottom);
              }
              goto LABEL_65;
            }
          }
          else if ( !*((_BYTE *)v11 + 11433) )
          {
LABEL_65:
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v111);
            if ( v112 )
            {
              v101 = *(int *)(*(_QWORD *)(v112 + 8) + 4LL) + v112 + 8;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
            }
            return 0LL;
          }
          v66 = 1;
        }
        v74 = (char *)v11 + 11304;
        goto LABEL_34;
      }
    }
  }
  return 0LL;
}

/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801872B4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800B9FDC (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800284CC (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029CD4 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800B8C44 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800BBF74 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180156064 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017E6C0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x18017FF80 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180180730 (-GetVirtualModeClip@COverlayContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     McTemplateU0xdddddddd_EventWriteTransfer @ 0x180187DB4 (McTemplateU0xdddddddd_EventWriteTransfer.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidateForContext(
        __int64 a1,
        COverlayContext *a2,
        struct CVisual *a3,
        const struct CCompositionSurfaceInfo *a4,
        struct ISwapChainRealization *a5,
        __int64 a6,
        CShape *a7)
{
  char v7; // si
  unsigned int v8; // r12d
  CMILMatrix *v9; // r13
  COverlayContext *v10; // rbx
  __int64 v11; // rax
  char *v12; // rcx
  __int64 (__fastcall *v13)(struct ISwapChainRealization *); // rax
  enum DXGI_MODE_ROTATION v14; // xmm0_4
  unsigned int v15; // xmm0_4
  float v16; // xmm0_4
  char v17; // si
  char v18; // di
  char v19; // bl
  unsigned __int8 v20; // al
  __int64 v21; // rax
  void (__fastcall ***v22)(_QWORD, CMILMatrix **); // rcx
  const struct CMILMatrix *v23; // r11
  __int128 v24; // xmm1
  int v25; // eax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _QWORD *v28; // rax
  int v29; // r9d
  __int64 v30; // rax
  __int64 (__fastcall *v31)(struct ISwapChainRealization *); // rax
  char v32; // al
  unsigned int v33; // edi
  float *VirtualModeClip; // rax
  __int64 v35; // r15
  float v36; // xmm1_4
  float v37; // xmm3_4
  float v38; // xmm4_4
  float v39; // xmm2_4
  int v40; // eax
  __int64 v41; // rcx
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm4_4
  float v45; // xmm1_4
  __int64 v46; // rax
  __int64 v47; // rcx
  float v48; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm4_4
  float v51; // xmm3_4
  char *v52; // rcx
  float v53; // xmm1_4
  __int64 v54; // rcx
  CMILMatrix *v55; // rax
  const struct FastRegion::Internal::CRgnData *v56; // rdx
  char v57; // al
  char v58; // bl
  int v59; // eax
  __int64 v60; // rcx
  char *v61; // rcx
  _QWORD *v62; // rax
  bool v64; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v65; // [rsp+64h] [rbp-9Ch] BYREF
  enum DXGI_MODE_ROTATION v66; // [rsp+68h] [rbp-98h] BYREF
  struct CVisual *v67; // [rsp+70h] [rbp-90h] BYREF
  const struct CCompositionSurfaceInfo *v68; // [rsp+78h] [rbp-88h]
  float v69; // [rsp+80h] [rbp-80h]
  float v70; // [rsp+84h] [rbp-7Ch]
  COverlayContext *v71; // [rsp+88h] [rbp-78h]
  _OWORD v72[4]; // [rsp+90h] [rbp-70h] BYREF
  int v73; // [rsp+D0h] [rbp-30h]
  __int64 v74[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v75; // [rsp+F0h] [rbp-10h] BYREF
  CMILMatrix *v76[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v77[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v78; // [rsp+120h] [rbp+20h] BYREF
  __int64 v79[2]; // [rsp+130h] [rbp+30h] BYREF
  struct FastRegion::Internal::CRgnData *v80[2]; // [rsp+140h] [rbp+40h] BYREF
  __int128 v81; // [rsp+150h] [rbp+50h]
  __int128 v82; // [rsp+160h] [rbp+60h]
  __int128 v83; // [rsp+170h] [rbp+70h]
  int v84; // [rsp+180h] [rbp+80h]
  struct tagRECT v85; // [rsp+190h] [rbp+90h] BYREF

  v7 = 0;
  v8 = 0;
  v9 = a7;
  v10 = a2;
  LODWORD(v76[0]) = 0;
  v68 = a4;
  v67 = a3;
  v71 = a2;
  v77[0] = a1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v11 = *((_QWORD *)a5 + 1);
    v73 = 0;
    v75 = 0LL;
    v12 = (char *)a5 + *(int *)(v11 + 16) + 8;
    (*(void (__fastcall **)(char *, _OWORD *, __int128 *))(*(_QWORD *)v12 + 8LL))(v12, v72, &v75);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v13 = *(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 64LL);
      *(float *)&v14 = *((float *)&v75 + 3) + 6291456.25;
      v66 = v14;
      *(float *)&v15 = *((float *)&v75 + 2) + 6291456.25;
      v65 = v15;
      v16 = *((float *)&v75 + 1) + 6291456.25;
      v69 = v16;
      v70 = *(float *)&v75 + 6291456.25;
      v17 = v13(a5);
      v18 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 56LL))(a5);
      v19 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)v68 + 104LL))(v68);
      v20 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 80LL))(a5);
      McTemplateU0xdddddddd_EventWriteTransfer(
        (int)(LODWORD(v70) << 10) >> 11,
        (int)(LODWORD(v69) << 10) >> 11,
        *((_DWORD *)v68 + 10),
        v20,
        v19,
        v18,
        v17,
        (int)(LODWORD(v70) << 10) >> 11,
        (int)(LODWORD(v69) << 10) >> 11,
        (int)(v65 << 10) >> 11,
        v66 << 10 >> 11);
      v10 = v71;
      v7 = 0;
    }
  }
  v21 = *((_QWORD *)a5 + 1);
  v73 = 0;
  v22 = (void (__fastcall ***)(_QWORD, CMILMatrix **))((char *)a5 + *(int *)(v21 + 12) + 8);
  (**v22)(v22, v76);
  v76[0] = (CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10);
  CMatrixStack::Top((CMatrixStack *)(v77[0] + 24), (struct CMILMatrix *)v72);
  CMILMatrix::Multiply((CMILMatrix *)v72, v23);
  if ( a6 )
  {
    v24 = *(_OWORD *)(a6 + 16);
    v25 = *(_DWORD *)(a6 + 64);
    *(_OWORD *)v80 = *(_OWORD *)a6;
    v26 = *(_OWORD *)(a6 + 32);
    v81 = v24;
    v27 = *(_OWORD *)(a6 + 48);
    v82 = v26;
    v83 = v27;
    v84 = v25;
    CMILMatrix::Multiply((CMILMatrix *)v80, (const struct CMILMatrix *)v72);
  }
  else
  {
    *(_OWORD *)v80 = v72[0];
    v81 = v72[1];
    v82 = v72[2];
    v83 = v72[3];
    v84 = v73;
  }
  v65 = 0;
  v64 = 1;
  v66 = DXGI_MODE_ROTATION_IDENTITY;
  if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v72)
    && COverlayContext::DeriveOverlayRotationParameters(v10, (const struct CMILMatrix *)v80, &v66, &v65, &v64) )
  {
    if ( !a7 || CShape::IsAxisAlignedRectangle(a7) )
    {
      v30 = *(_QWORD *)a5;
      *(_OWORD *)v79 = 0LL;
      v31 = *(__int64 (__fastcall **)(struct ISwapChainRealization *))(v30 + 104);
      v78 = 0LL;
      v32 = v31(a5);
      v33 = v65;
      if ( v32 )
        v33 = v65 | 8;
      VirtualModeClip = COverlayContext::GetVirtualModeClip(v10, (float *)&v85.left);
      v35 = v77[0];
      *(_OWORD *)v74 = *(_OWORD *)VirtualModeClip;
      CBaseClipStack::Top((_DWORD *)(v77[0] + 136), v79);
      v75 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v76[0], (__int64)v79, (float *)&v75);
      v36 = *(float *)v74;
      if ( *(float *)&v75 > *(float *)v74 )
      {
        LODWORD(v74[0]) = v75;
        v36 = *(float *)&v75;
      }
      v37 = *((float *)v74 + 1);
      if ( *((float *)&v75 + 1) > *((float *)v74 + 1) )
      {
        HIDWORD(v74[0]) = DWORD1(v75);
        v37 = *((float *)&v75 + 1);
      }
      v38 = *(float *)&v74[1];
      if ( *(float *)&v74[1] > *((float *)&v75 + 2) )
      {
        LODWORD(v74[1]) = DWORD2(v75);
        v38 = *((float *)&v75 + 2);
      }
      v39 = *((float *)&v74[1] + 1);
      if ( *((float *)&v74[1] + 1) > *((float *)&v75 + 3) )
      {
        HIDWORD(v74[1]) = HIDWORD(v75);
        v39 = *((float *)&v75 + 3);
      }
      if ( v38 <= v36 || v39 <= v37 )
      {
        v74[1] = 0LL;
        v74[0] = 0LL;
      }
      if ( a7 )
      {
        v40 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)a7 + 32LL))(a7, &v78, 0LL);
        v9 = 0LL;
        v8 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x782u, 0LL);
          return v8;
        }
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v72, (__int64)&v78, (float *)&v78);
        v42 = *(float *)v74;
        if ( *(float *)&v78 > *(float *)v74 )
        {
          LODWORD(v74[0]) = v78;
          v42 = *(float *)&v78;
        }
        v43 = *((float *)v74 + 1);
        if ( *((float *)&v78 + 1) > *((float *)v74 + 1) )
        {
          HIDWORD(v74[0]) = DWORD1(v78);
          v43 = *((float *)&v78 + 1);
        }
        v44 = *(float *)&v74[1];
        if ( *(float *)&v74[1] > *((float *)&v78 + 2) )
        {
          LODWORD(v74[1]) = DWORD2(v78);
          v44 = *((float *)&v78 + 2);
        }
        v45 = *((float *)&v74[1] + 1);
        if ( *((float *)&v74[1] + 1) > *((float *)&v78 + 3) )
        {
          HIDWORD(v74[1]) = HIDWORD(v78);
          v45 = *((float *)&v78 + 3);
        }
        if ( v44 <= v42 || v45 <= v43 )
        {
          v74[1] = 0LL;
          v74[0] = 0LL;
        }
      }
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v74) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v28 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct CVisual **))(*(_QWORD *)a5 + 32LL))(
                            a5,
                            &v67);
          v29 = 3;
          goto LABEL_82;
        }
      }
      else
      {
        v46 = *((_QWORD *)a5 + 1);
        v73 = (int)v9;
        *(_OWORD *)v79 = 0LL;
        *(_OWORD *)v77 = 0LL;
        v47 = *(int *)(v46 + 4) + 8LL;
        v76[0] = v9;
        if ( (**(int (__fastcall ***)(char *, GUID *, CMILMatrix **))((char *)a5 + v47))(
               (char *)a5 + v47,
               &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
               v76) < 0 )
        {
          v52 = (char *)a5 + *(int *)(*((_QWORD *)a5 + 1) + 16LL) + 8;
          (*(void (__fastcall **)(char *, _OWORD *, __int64 *))(*(_QWORD *)v52 + 8LL))(v52, v72, v79);
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v80, (__int64)v79, (float *)v77);
          v48 = *(float *)v74;
          if ( *(float *)v77 > *(float *)v74 )
          {
            LODWORD(v74[0]) = v77[0];
            v48 = *(float *)v77;
          }
          v49 = *((float *)v74 + 1);
          if ( *((float *)v77 + 1) > *((float *)v74 + 1) )
          {
            HIDWORD(v74[0]) = HIDWORD(v77[0]);
            v49 = *((float *)v77 + 1);
          }
          v50 = *(float *)&v74[1];
          if ( *(float *)&v74[1] > *(float *)&v77[1] )
          {
            LODWORD(v74[1]) = v77[1];
            v50 = *(float *)&v77[1];
          }
          v51 = *((float *)&v77[1] + 1);
        }
        else
        {
          v75 = 0LL;
          (*(void (__fastcall **)(CMILMatrix *, _OWORD *, __int64 *, __int128 *, __int64 *))(*(_QWORD *)v76[0] + 8LL))(
            v76[0],
            v72,
            v79,
            &v75,
            v77);
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v80, (__int64)v77, (float *)v77);
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v80, (__int64)&v75, (float *)&v75);
          v48 = *(float *)v74;
          if ( *(float *)&v75 > *(float *)v74 )
          {
            LODWORD(v74[0]) = v75;
            v48 = *(float *)&v75;
          }
          v49 = *((float *)v74 + 1);
          if ( *((float *)&v75 + 1) > *((float *)v74 + 1) )
          {
            HIDWORD(v74[0]) = DWORD1(v75);
            v49 = *((float *)&v75 + 1);
          }
          v50 = *(float *)&v74[1];
          if ( *(float *)&v74[1] > *((float *)&v75 + 2) )
          {
            LODWORD(v74[1]) = DWORD2(v75);
            v50 = *((float *)&v75 + 2);
          }
          v51 = *((float *)&v75 + 3);
        }
        v53 = *((float *)&v74[1] + 1);
        if ( *((float *)&v74[1] + 1) > v51 )
        {
          *((float *)&v74[1] + 1) = v51;
          v53 = v51;
        }
        if ( v50 <= v48 || v53 <= v49 )
        {
          v74[1] = 0LL;
          v74[0] = 0LL;
        }
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v74) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v62 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct CVisual **))(*(_QWORD *)a5 + 32LL))(
                              a5,
                              &v67);
            McTemplateU0xq_EventWriteTransfer(
              *(unsigned int *)v62,
              &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
              *(unsigned int *)v62 | (unsigned __int64)((__int64)(int)HIDWORD(*v62) << 32),
              3);
          }
        }
        else
        {
          v54 = *(_QWORD *)v10;
          v75 = 0LL;
          v55 = (CMILMatrix *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 136LL))(v54);
          CMILMatrix::Transform2DBoundsHelper<0>(v55, (__int64)v74, (float *)&v75);
          PixelAlign(&v85.left, &v75);
          if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 64LL))(a5)
            || ((FastRegion::CRegion::CRegion((FastRegion::CRegion *)v80, &v85), *(_DWORD *)v80[0] == (_DWORD)v9)
             || (v56 = *(const struct FastRegion::Internal::CRgnData **)(v35 + 1384), *(_DWORD *)v56 == (_DWORD)v9)
              ? (v57 = (char)v9)
              : (v57 = FastRegion::Internal::CRgnData::Intersects(v80[0], v56)),
                v7 = 1,
                v58 = (char)v9,
                !v57) )
          {
            v58 = 1;
          }
          if ( (v7 & 1) != 0 )
            FastRegion::CRegion::FreeMemory((void **)v80);
          if ( v58 )
          {
            v59 = COverlayContext::CheckAndRecordOverlayCandidate(
                    v71,
                    v67,
                    v68,
                    a5,
                    (float *)v79,
                    (float *)v77,
                    v74,
                    v66,
                    v33,
                    v64);
            v8 = v59;
            if ( v59 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x7C8u, v9);
          }
        }
        if ( v76[0] )
        {
          v61 = (char *)v76[0] + *(int *)(*((_QWORD *)v76[0] + 1) + 4LL) + 8;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v61 + 16LL))(v61);
        }
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct CVisual **))(*(_QWORD *)a5 + 32LL))(
                        a5,
                        &v67);
      v29 = 2;
LABEL_82:
      McTemplateU0xq_EventWriteTransfer(
        *(unsigned int *)v28,
        &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
        *(unsigned int *)v28 | (unsigned __int64)((__int64)(int)HIDWORD(*v28) << 32),
        v29);
    }
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v28 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct CVisual **))(*(_QWORD *)a5 + 32LL))(
                      a5,
                      &v67);
    v29 = 1;
    goto LABEL_82;
  }
  return v8;
}

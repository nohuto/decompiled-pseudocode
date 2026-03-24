/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180183324
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180068454 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180030A18 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003A990 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180041AC8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058390 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006BA8C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18006BD4C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077274 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18008CC18 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A8BB0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800C208C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800C51F4 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq_EventWriteTransfer @ 0x180152CC4 (McTemplateU0xq_EventWriteTransfer.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@33W4DXGI_MODE_ROTATION@@I_N@Z @ 0x18017A340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x18017BC00 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     ?GetVirtualModeClip@COverlayContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18017C3B0 (-GetVirtualModeClip@COverlayContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     McTemplateU0xdddddddd_EventWriteTransfer @ 0x180183D14 (McTemplateU0xdddddddd_EventWriteTransfer.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidateForContext(
        __int64 a1,
        CMILMatrix *a2,
        struct CVisual *a3,
        const struct CCompositionSurfaceInfo *a4,
        struct ISwapChainRealization *a5,
        __int64 a6,
        CShape *a7)
{
  char v7; // di
  unsigned int v8; // r15d
  CMILMatrix *v10; // rsi
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
  unsigned int v33; // ebx
  float *VirtualModeClip; // rax
  __int64 v35; // r13
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  void *v40; // rdx
  char *v41; // rcx
  __int64 v42; // rcx
  CMILMatrix *v43; // rax
  int v44; // edx
  LONG v45; // eax
  int v46; // edx
  char v47; // r12
  int v48; // edx
  __int64 (__fastcall ***v49)(_QWORD, CMILMatrix **); // rcx
  __int64 v50; // rax
  const struct FastRegion::Internal::CRgnData *v51; // rdx
  char v52; // al
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  bool v58; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v59; // [rsp+64h] [rbp-9Ch] BYREF
  enum DXGI_MODE_ROTATION v60; // [rsp+68h] [rbp-98h] BYREF
  struct CVisual *v61; // [rsp+70h] [rbp-90h] BYREF
  float v62; // [rsp+78h] [rbp-88h]
  float v63; // [rsp+7Ch] [rbp-84h]
  const struct CCompositionSurfaceInfo *v64; // [rsp+80h] [rbp-80h]
  _OWORD v65[4]; // [rsp+90h] [rbp-70h] BYREF
  int v66; // [rsp+D0h] [rbp-30h]
  __int64 v67[2]; // [rsp+E0h] [rbp-20h] BYREF
  CMILMatrix *v68[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v69; // [rsp+100h] [rbp+0h] BYREF
  __int64 v70[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v71[2]; // [rsp+120h] [rbp+20h] BYREF
  struct tagRECT v72; // [rsp+130h] [rbp+30h] BYREF
  __int128 v73; // [rsp+140h] [rbp+40h] BYREF
  struct FastRegion::Internal::CRgnData *v74[2]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v75; // [rsp+160h] [rbp+60h]
  __int128 v76; // [rsp+170h] [rbp+70h]
  __int128 v77; // [rsp+180h] [rbp+80h]
  int v78; // [rsp+190h] [rbp+90h]

  v7 = 0;
  v8 = 0;
  LODWORD(v69) = 0;
  v10 = a2;
  v64 = a4;
  v61 = a3;
  v68[0] = a2;
  v70[0] = a1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v11 = *((_QWORD *)a5 + 1);
    v66 = 0;
    *(_OWORD *)v67 = 0LL;
    v12 = (char *)a5 + *(int *)(v11 + 16) + 8;
    (*(void (__fastcall **)(char *, _OWORD *, __int64 *))(*(_QWORD *)v12 + 8LL))(v12, v65, v67);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v13 = *(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 64LL);
      *(float *)&v14 = *((float *)&v67[1] + 1) + 6291456.25;
      v60 = v14;
      *(float *)&v15 = *(float *)&v67[1] + 6291456.25;
      v59 = v15;
      v16 = *((float *)v67 + 1) + 6291456.25;
      v62 = v16;
      v63 = *(float *)v67 + 6291456.25;
      v17 = v13(a5);
      v18 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 56LL))(a5);
      v19 = (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)a4 + 104LL))(a4);
      v20 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 80LL))(a5);
      McTemplateU0xdddddddd_EventWriteTransfer(
        (int)(LODWORD(v63) << 10) >> 11,
        (int)(LODWORD(v62) << 10) >> 11,
        *((_DWORD *)v64 + 10),
        v20,
        v19,
        v18,
        v17,
        (int)(LODWORD(v63) << 10) >> 11,
        (int)(LODWORD(v62) << 10) >> 11,
        (int)(v59 << 10) >> 11,
        v60 << 10 >> 11);
      v10 = v68[0];
      v7 = 0;
    }
  }
  v21 = *((_QWORD *)a5 + 1);
  v66 = 0;
  v22 = (void (__fastcall ***)(_QWORD, CMILMatrix **))((char *)a5 + *(int *)(v21 + 12) + 8);
  (**v22)(v22, v68);
  v68[0] = (CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v10 + 16LL))(*(_QWORD *)v10);
  CMatrixStack::Top((CMatrixStack *)(v70[0] + 24), (struct CMILMatrix *)v65);
  CMILMatrix::Multiply((CMILMatrix *)v65, v23);
  if ( a6 )
  {
    v24 = *(_OWORD *)(a6 + 16);
    v25 = *(_DWORD *)(a6 + 64);
    *(_OWORD *)v74 = *(_OWORD *)a6;
    v26 = *(_OWORD *)(a6 + 32);
    v75 = v24;
    v27 = *(_OWORD *)(a6 + 48);
    v76 = v26;
    v77 = v27;
    v78 = v25;
    CMILMatrix::Multiply((CMILMatrix *)v74, (const struct CMILMatrix *)v65);
  }
  else
  {
    *(_OWORD *)v74 = v65[0];
    v75 = v65[1];
    v76 = v65[2];
    v77 = v65[3];
    v78 = v66;
  }
  v59 = 0;
  v58 = 1;
  v60 = DXGI_MODE_ROTATION_IDENTITY;
  if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v65)
    && COverlayContext::DeriveOverlayRotationParameters(v10, (const struct CMILMatrix *)v74, &v60, &v59, &v58) )
  {
    if ( !a7 || CShape::IsAxisAlignedRectangle(a7) )
    {
      v30 = *(_QWORD *)a5;
      v69 = 0LL;
      v31 = *(__int64 (__fastcall **)(struct ISwapChainRealization *))(v30 + 104);
      v73 = 0LL;
      v32 = v31(a5);
      v33 = v59;
      if ( v32 )
        v33 = v59 | 8;
      VirtualModeClip = COverlayContext::GetVirtualModeClip(v10, (float *)&v72.left);
      v35 = v70[0];
      *(_OWORD *)v71 = *(_OWORD *)VirtualModeClip;
      CBaseClipStack::Top((_DWORD *)(v70[0] + 136), &v69);
      *(_OWORD *)v67 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v68[0], (__int64)&v69, (float *)v67);
      v69 = *(_OWORD *)v67;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)v71, (__int64)&v69);
      if ( a7 )
      {
        v36 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)a7 + 32LL))(a7, &v73, 0LL);
        v8 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x784u, 0LL);
          return v8;
        }
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v65, (__int64)&v73, (float *)&v73);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)v71, (__int64)&v73);
      }
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v71) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v28 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct CVisual **))(*(_QWORD *)a5 + 32LL))(
                            a5,
                            &v61);
          v29 = 3;
          goto LABEL_47;
        }
      }
      else
      {
        v38 = *((_QWORD *)a5 + 1);
        v66 = 0;
        *(_OWORD *)v70 = 0LL;
        *(_OWORD *)v67 = 0LL;
        v39 = *(int *)(v38 + 4);
        *(_QWORD *)&v69 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, __int128 *))((char *)a5 + v39 + 8))(
               (__int64)a5 + v39 + 8,
               &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
               &v69) < 0 )
        {
          v41 = (char *)a5 + *(int *)(*((_QWORD *)a5 + 1) + 16LL) + 8;
          (*(void (__fastcall **)(char *, _OWORD *, __int64 *))(*(_QWORD *)v41 + 8LL))(v41, v65, v70);
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v74, (__int64)v70, (float *)v67);
          v40 = v67;
        }
        else
        {
          *(_OWORD *)v68 = 0LL;
          (*(void (__fastcall **)(_QWORD, _OWORD *, __int64 *, CMILMatrix **, __int64 *))(*(_QWORD *)v69 + 8LL))(
            v69,
            v65,
            v70,
            v68,
            v67);
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v74, (__int64)v67, (float *)v67);
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v74, (__int64)v68, (float *)v68);
          v40 = v68;
        }
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)v71, (__int64)v40);
        if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v71) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            v56 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct CVisual **))(*(_QWORD *)a5 + 32LL))(
                              a5,
                              &v61);
            McTemplateU0xq_EventWriteTransfer(
              *(unsigned int *)v56,
              &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
              *(unsigned int *)v56 | (unsigned __int64)((__int64)(int)HIDWORD(*v56) << 32),
              3);
          }
        }
        else
        {
          v42 = *(_QWORD *)v10;
          *(_OWORD *)v68 = 0LL;
          v43 = (CMILMatrix *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 136LL))(v42);
          CMILMatrix::Transform2DBoundsHelper<0>(v43, (__int64)v71, (float *)v68);
          v72.left = PixelAlign(*(float *)v68, 0);
          v45 = PixelAlign(*((float *)v68 + 1), v44);
          v47 = v46 + 1;
          v72.top = v45;
          v72.right = PixelAlign(*(float *)&v68[1], v46 + 1);
          v72.bottom = PixelAlign(*((float *)&v68[1] + 1), v48);
          if ( !(*(unsigned __int8 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a5 + 64LL))(a5) )
          {
            if ( !COverlayContext::s_bXbox
              || (float)((float)(*(float *)&v70[1] - *(float *)v70)
                       * (float)(*((float *)&v70[1] + 1) - *((float *)v70 + 1))) <= 2073600.0
              && (v49 = (__int64 (__fastcall ***)(_QWORD, CMILMatrix **))((char *)a5
                                                                        + *(int *)(*((_QWORD *)a5 + 1) + 12LL)
                                                                        + 8),
                  v50 = (**v49)(v49, v68),
                  !IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v50 + 8))) )
            {
              FastRegion::CRegion::CRegion((FastRegion::CRegion *)v74, &v72);
              if ( *(_DWORD *)v74[0]
                && (v51 = *(const struct FastRegion::Internal::CRgnData **)(v35 + 1384), *(_DWORD *)v51) )
              {
                v52 = FastRegion::Internal::CRgnData::Intersects(v74[0], v51);
              }
              else
              {
                v52 = 0;
              }
              v7 = v47;
              if ( v52 )
                v47 = 0;
            }
          }
          if ( (v7 & 1) != 0 )
            FastRegion::CRegion::FreeMemory((void **)v74);
          if ( v47 )
          {
            v53 = COverlayContext::CheckAndRecordOverlayCandidate(
                    v10,
                    v61,
                    v64,
                    a5,
                    (float *)v70,
                    (float *)v67,
                    v71,
                    v60,
                    v33,
                    v58);
            v8 = v53;
            if ( v53 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x7D8u, 0LL);
          }
        }
        if ( (_QWORD)v69 )
        {
          v55 = *(int *)(*(_QWORD *)(v69 + 8) + 4LL) + v69 + 8;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        }
      }
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v28 = (_QWORD *)(*(__int64 (__fastcall **)(struct ISwapChainRealization *, struct CVisual **))(*(_QWORD *)a5 + 32LL))(
                        a5,
                        &v61);
      v29 = 2;
LABEL_47:
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
                      &v61);
    v29 = 1;
    goto LABEL_47;
  }
  return v8;
}

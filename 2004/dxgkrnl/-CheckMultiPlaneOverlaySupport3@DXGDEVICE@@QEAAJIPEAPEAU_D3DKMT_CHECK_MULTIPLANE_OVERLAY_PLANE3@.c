/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252ED8
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252D18 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0253C04 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0258150 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D090 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00DF510 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F6970 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00F7150 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0108424 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015AF6C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C0210C84 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0213678 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C0214E5C (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C0214F68 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C02519E8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252714 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0255650 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0256CD4 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport3(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        bool a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  __int64 v9; // rsi
  __int64 v11; // r14
  __int64 v12; // r13
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // edi
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int8 v33; // r12
  __int64 v34; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // rcx
  char v41; // al
  unsigned int v42; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v43; // rsi
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v44; // rbx
  unsigned int Rotation; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v54; // r15
  __int64 v55; // r13
  D3DKMT_HANDLE hResource; // ebx
  __int64 v57; // rax
  __int64 v58; // r8
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rax
  struct _EX_RUNDOWN_REF *v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  const struct DXGALLOCATION *Count; // rbx
  __int64 v67; // r13
  void **v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  void *v74; // rax
  ADAPTER_RENDER *v75; // rcx
  int v76; // eax
  __int64 v77; // rdx
  __int64 right; // rcx
  __int64 v79; // r8
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v80; // rdx
  __int64 v81; // rcx
  unsigned int v82; // esi
  __int64 v83; // rbx
  _QWORD *v84; // rax
  unsigned int v85; // eax
  __int64 v86; // rax
  int StretchQuality; // eax
  __int64 v88; // rax
  __int64 v89; // rcx
  int ColorSpace; // eax
  UINT SDRWhiteLevel; // eax
  _QWORD *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdx
  unsigned int v97; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v98; // r14
  __int64 v99; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  DISPLAY_SOURCE *v103; // rsi
  __int64 v104; // r13
  const struct DXGALLOCATION **v105; // r12
  char *v106; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v107; // rsi
  __int64 v108; // rcx
  __int64 v109; // rdx
  DISPLAY_SOURCE *v110; // rbx
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  __int64 v113; // rdx
  _QWORD *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rcx
  _QWORD *v117; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v118; // r9
  int *v119; // rbx
  unsigned int v120; // r9d
  __int128 *v121; // r10
  __int64 v122; // rdx
  char v123; // [rsp+60h] [rbp-A0h]
  unsigned int v124; // [rsp+64h] [rbp-9Ch]
  struct _EX_RUNDOWN_REF *v125; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v126; // [rsp+70h] [rbp-90h]
  unsigned int v127; // [rsp+74h] [rbp-8Ch]
  int v128; // [rsp+78h] [rbp-88h]
  int *v129; // [rsp+80h] [rbp-80h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v130; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v131; // [rsp+90h] [rbp-70h]
  const struct DXGALLOCATION **v132; // [rsp+98h] [rbp-68h]
  void **v133; // [rsp+A0h] [rbp-60h]
  _BYTE v134[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v135; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  char v137; // [rsp+C8h] [rbp-38h] BYREF
  int v138; // [rsp+E0h] [rbp-20h]
  struct _DXGKARG_DESCRIBEALLOCATION v139; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v140; // [rsp+118h] [rbp+18h] BYREF
  char v141; // [rsp+120h] [rbp+20h] BYREF
  int v142; // [rsp+138h] [rbp+38h]
  _BYTE v143[512]; // [rsp+140h] [rbp+40h]
  __int128 v144; // [rsp+340h] [rbp+240h] BYREF

  v9 = 0LL;
  v130 = a5;
  LODWORD(v11) = 0;
  v12 = a2;
  v135 = a8;
  v126 = a4;
  *a7 = 0;
  a8->Value = 0;
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v131 = a3;
  v127 = a2;
  v129 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdWarning(v17);
    return 0LL;
  }
  v140 = 0LL;
  v142 = 0;
  v132 = (const struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                          &v140,
                                          v12);
  if ( !v132 )
  {
    v22 = -1073741801;
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v23[3] = v12;
    v23[4] = -1073741801LL;
    v23[5] = PsGetCurrentProcess(v25, v24);
    WdLogEvent5_WdWarning(v23);
    goto LABEL_174;
  }
  P = 0LL;
  v138 = 0;
  v133 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&P, v12);
  if ( !v133 )
  {
    v22 = -1073741801;
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v29[3] = v12;
    v29[4] = -1073741801LL;
    v29[5] = PsGetCurrentProcess(v31, v30);
    WdLogEvent5_WdWarning(v29);
    goto LABEL_170;
  }
  v32 = *((_DWORD *)this + 464);
  v33 = 1;
  v123 = 1;
  if ( v32 > 0x10 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v27, v26);
    *(_QWORD *)(v34 + 24) = 10524LL;
    WdLogEvent5_WdAssertion(v34);
    v32 = *((_DWORD *)this + 464);
  }
  if ( v32 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v9 >= 0x10 )
      {
LABEL_13:
        v9 = 0LL;
        goto LABEL_14;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 231) + 2696LL),
                          (unsigned int)v9);
      v26 = 0LL;
      if ( !DisplayModeInfo )
        break;
      v37 = *(_DWORD *)DisplayModeInfo;
      v38 = 2LL * (unsigned int)v9;
      v39 = *((_DWORD *)DisplayModeInfo + 1);
      LODWORD(v9) = v9 + 1;
      *(_QWORD *)&v143[8 * v38] = 0LL;
      *(_DWORD *)&v143[8 * v38 + 8] = v37;
      *(_DWORD *)&v143[8 * v38 + 12] = v39;
      *(_OWORD *)&v143[8 * v38 + 256] = *(_OWORD *)&v143[8 * v38];
      if ( (unsigned int)v9 >= *((_DWORD *)this + 464) )
        goto LABEL_13;
    }
    v46 = WdLogNewEntry5_WdError(v36, 0LL);
    *(_QWORD *)(v46 + 24) = this;
    *(_QWORD *)(v46 + 32) = (unsigned int)v9;
    WdLogEvent5_WdError(v46);
    v9 = 0LL;
    v33 = 0;
    v123 = 0;
  }
LABEL_14:
  v128 = -1;
  if ( a4 )
  {
    v40 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v40 + 928) || (v41 = 1, !*(_BYTE *)(v40 + 2642)) )
      v41 = 0;
    v33 &= v41;
    v42 = 0;
    v43 = v130;
    v123 = v33;
    while ( 1 )
    {
      if ( (int)v11 < 0 )
        goto LABEL_42;
      v44 = *v43;
      if ( (*v43)->PostComposition.SrcRect.left >= (*v43)->PostComposition.SrcRect.right
        || v44->PostComposition.SrcRect.top >= v44->PostComposition.SrcRect.bottom
        || v44->PostComposition.DstRect.left >= v44->PostComposition.DstRect.right
        || v44->PostComposition.DstRect.top >= v44->PostComposition.DstRect.bottom )
      {
        break;
      }
      Rotation = v44->PostComposition.Rotation;
      if ( Rotation > 2 )
      {
        if ( Rotation > 4 )
        {
          v47 = WdLogNewEntry5_WdWarning(0LL, v26, v28);
          LODWORD(v11) = -1073741811;
          *(_QWORD *)(v47 + 24) = v44->PostComposition.Rotation;
          *(_QWORD *)(v47 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v47);
        }
        else
        {
          v33 = 0;
          v123 = 0;
        }
      }
      if ( v44->PostComposition.Flags.Value )
        goto LABEL_38;
      VidPnSourceId = v44->VidPnSourceId;
      if ( v44->VidPnSourceId >= *((_DWORD *)this + 464) )
      {
        v50 = WdLogNewEntry5_WdWarning(0LL, v26, v28);
        v9 = 0LL;
        *(_QWORD *)(v50 + 24) = v44->VidPnSourceId;
        *(_QWORD *)(v50 + 32) = 0LL;
        WdLogEvent5_WdWarning(v50);
        goto LABEL_39;
      }
      if ( *(_DWORD *)&v143[16 * VidPnSourceId] > v44->PostComposition.DstRect.left
        || *(_DWORD *)&v143[16 * VidPnSourceId + 8] < v44->PostComposition.DstRect.right
        || *(_DWORD *)&v143[16 * VidPnSourceId + 4] > v44->PostComposition.DstRect.top
        || *(_DWORD *)&v143[16 * VidPnSourceId + 12] < v44->PostComposition.DstRect.bottom )
      {
        v49 = WdLogNewEntry5_WdWarning(2LL * VidPnSourceId, v26, v28);
        *(_QWORD *)(v49 + 24) = this;
        *(_QWORD *)(v49 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v49);
LABEL_38:
        v9 = 0LL;
LABEL_39:
        v33 = 0;
        v123 = 0;
        goto LABEL_43;
      }
      ++v42;
      ++v43;
      *(RECT *)&v143[16 * VidPnSourceId + 256] = v44->PostComposition.SrcRect;
      if ( v42 >= v126 )
        goto LABEL_42;
    }
    v51 = WdLogNewEntry5_WdWarning(0LL, v26, v28);
    *(_QWORD *)(v51 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v51);
    LODWORD(v11) = -1073741811;
LABEL_42:
    v9 = 0LL;
  }
LABEL_43:
  v124 = 0;
  if ( !(_DWORD)v12 )
    goto LABEL_128;
  v52 = 0LL;
  *(_QWORD *)&v144 = 0LL;
  while ( 2 )
  {
    if ( (int)v11 < 0 )
      goto LABEL_128;
    v53 = *((_QWORD *)this + 5);
    v54 = v131[v52];
    v55 = v53 + 208;
    hResource = v54->hResource;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v53 + 208));
    v57 = (hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v57 >= *(_DWORD *)(v53 + 256) )
      goto LABEL_52;
    v58 = *(_QWORD *)(v53 + 240);
    v59 = *(_DWORD *)(v58 + 16 * v57 + 8);
    if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v58 + 16 * v57 + 8) & 0x60)
      || (v59 & 0x2000) != 0
      || (v59 & 0x1F) == 0 )
    {
      goto LABEL_52;
    }
    v60 = v59 & 0x1F;
    if ( (_BYTE)v60 != 4 )
    {
      v61 = WdLogNewEntry5_WdError(v60, 2LL * (unsigned int)v57);
      *(_QWORD *)(v61 + 24) = 267LL;
      WdLogEvent5_WdError(v61);
LABEL_52:
      v9 = 0LL;
      v62 = 0LL;
      goto LABEL_53;
    }
    v62 = *(struct _EX_RUNDOWN_REF **)(v58 + 16LL * (unsigned int)v57);
    v9 = 0LL;
LABEL_53:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v125, v62);
    ExReleasePushLockSharedEx(v55, 0LL);
    KeLeaveCriticalRegion();
    if ( !v125 )
    {
LABEL_152:
      v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, v63, v65);
      v116 = v54->hResource;
      v92[4] = -1073741811LL;
LABEL_148:
      v92[3] = v116;
LABEL_149:
      WdLogEvent5_WdWarning(v92);
      v33 = v9;
      v123 = v9;
      goto LABEL_150;
    }
    Count = (const struct DXGALLOCATION *)v125[3].Count;
    while ( 1 )
    {
      if ( !Count )
        goto LABEL_152;
      if ( *((DXGDEVICE **)Count + 1) != this )
      {
        v117 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, v63, v65);
        v117[3] = v54->hResource;
        v117[4] = *((_QWORD *)Count + 1);
        v117[5] = this;
        v117[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v117);
        goto LABEL_152;
      }
      v9 = *((_QWORD *)Count + 6);
      if ( (*(_DWORD *)(v9 + 4) & 0x200B) != 0 )
        break;
      Count = (const struct DXGALLOCATION *)*((_QWORD *)Count + 8);
      v9 = 0LL;
    }
    v67 = v144;
    v63 = 0LL;
    v132[(_QWORD)v144] = Count;
    if ( !v9 )
      goto LABEL_152;
    v68 = v133;
    v133[v67] = *(void **)(v9 + 16);
    v69 = v54->VidPnSourceId;
    if ( (unsigned int)v69 >= *((_DWORD *)this + 464) )
    {
      v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v69, 0LL, v65);
      v116 = v54->VidPnSourceId;
      v9 = 0LL;
      v92[4] = 0LL;
      goto LABEL_148;
    }
    if ( (_DWORD)v69 != ((*(_DWORD *)(v9 + 4) >> 6) & 0xF) )
    {
      v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_QWORD *)(v70 + 928) || !*(_BYTE *)(v70 + 2642) )
      {
        v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, 0LL, v65);
        v92[3] = v54->VidPnSourceId;
        v93 = (*(_DWORD *)(v9 + 4) >> 6) & 0xF;
LABEL_124:
        v9 = 0LL;
        v92[4] = v93;
        v92[5] = 0LL;
        goto LABEL_149;
      }
    }
    v71 = *((_QWORD *)this + 2);
    v72 = *(unsigned int *)(*(_QWORD *)(v71 + 16) + 2536LL);
    if ( v54->LayerIndex >= (unsigned int)v72 )
    {
      v92 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, 0LL, v71);
      v92[3] = v54->LayerIndex;
      v93 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2536LL);
      goto LABEL_124;
    }
    if ( a6 && !*((_DWORD *)this + 465) )
    {
      v94 = WdLogNewEntry5_WdWarning(v72, 0LL, v71);
      LODWORD(v11) = -1073741790;
      *(_QWORD *)(v94 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v94);
LABEL_126:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v125, v95);
      break;
    }
    pPlaneAttributes = v54->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
      || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
      || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
      || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
      || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
    {
      v115 = WdLogNewEntry5_WdWarning(v72, pPlaneAttributes, v71);
      *(_QWORD *)(v115 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v115);
      LODWORD(v11) = -1073741811;
      goto LABEL_126;
    }
    v74 = v68[v67];
    v75 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    memset(&v139.Width, 0, 40);
    v139.hAllocation = v74;
    v76 = ADAPTER_RENDER::DdiDescribeAllocation(v75, &v139, v71);
    v11 = v76;
    if ( v76 < 0 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(right, v77);
      v114[3] = v11;
      v114[4] = this;
      v114[5] = v68[v124];
      v114[6] = v9;
      WdLogEvent5_WdError(v114);
      goto LABEL_126;
    }
    v80 = v54->pPlaneAttributes;
    v9 = 0LL;
    if ( v80->SrcRect.left < 0
      || (right = (unsigned int)v80->SrcRect.right, (int)v139.Width < (int)right)
      || v80->SrcRect.top < 0
      || (int)v139.Height < v80->SrcRect.bottom )
    {
      v112 = (_QWORD *)WdLogNewEntry5_WdError(right, v80);
      v112[5] = v124;
      v112[3] = -1073741811LL;
      v112[4] = this;
      WdLogEvent5_WdError(v112);
      LODWORD(v11) = -1073741811;
LABEL_150:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v125, v113);
      goto LABEL_128;
    }
    v81 = 2LL * v54->VidPnSourceId;
    if ( *(_DWORD *)&v143[16 * v54->VidPnSourceId + 256] > v80->ClipRect.left
      || *(_DWORD *)&v143[16 * v54->VidPnSourceId + 264] < v80->ClipRect.right
      || *(_DWORD *)&v143[16 * v54->VidPnSourceId + 260] > v80->ClipRect.top
      || *(_DWORD *)&v143[16 * v54->VidPnSourceId + 268] < v80->ClipRect.bottom )
    {
      v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v81, v80, v79);
      v84[3] = 0LL;
      v82 = v124;
      v83 = v124;
      v84[4] = this;
      v84[5] = v124;
      WdLogEvent5_WdWarning(v84);
      v80 = v54->pPlaneAttributes;
      v33 = 0;
      v123 = 0;
    }
    else
    {
      v82 = v124;
      v83 = v124;
    }
    if ( v80->DstRect.left > v80->ClipRect.left
      || v80->DstRect.right < v80->ClipRect.right
      || v80->DstRect.top > v80->ClipRect.top
      || v80->DstRect.bottom < v80->ClipRect.bottom )
    {
      v111 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
      v111[3] = -1073741811LL;
      v111[4] = this;
      v111[5] = v83;
      WdLogEvent5_WdError(v111);
      LODWORD(v11) = -1073741811;
      goto LABEL_126;
    }
    v85 = v80->Rotation;
    if ( v85 > 1 )
    {
      if ( v85 > 4 )
      {
        v86 = WdLogNewEntry5_WdWarning(v81, v80, 0LL);
        *(_QWORD *)(v86 + 24) = v54->pPlaneAttributes->Rotation;
        *(_QWORD *)(v86 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v86);
        v80 = v54->pPlaneAttributes;
        LODWORD(v11) = -1073741811;
      }
      else
      {
        v81 = 0LL;
        if ( (**(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2600LL) & 0x20) == 0 )
          v81 = v33;
        v33 = v81;
        v123 = v81;
      }
    }
    StretchQuality = v80->StretchQuality;
    if ( StretchQuality <= 0 || StretchQuality > 2 )
    {
      v88 = WdLogNewEntry5_WdWarning(v81, v80, 0LL);
      *(_QWORD *)(v88 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v88);
      v80 = v54->pPlaneAttributes;
      LODWORD(v11) = -1073741811;
    }
    v89 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v89 + 896) && (!*(_QWORD *)(v89 + 928) || !*(_BYTE *)(v89 + 2642)) )
    {
      ColorSpace = v80->ColorSpace;
      if ( ColorSpace == -1
        || ColorSpace > 0 && (ColorSpace <= 3 || ColorSpace == 5 || (unsigned int)(ColorSpace - 10) <= 9) )
      {
        v33 = 0;
        v123 = 0;
      }
    }
    SDRWhiteLevel = v80->SDRWhiteLevel;
    if ( SDRWhiteLevel && SDRWhiteLevel != 80 && (*(_DWORD *)(v89 + 348) & 0x200) == 0 )
    {
      if ( *(int *)(v89 + 2328) < 8960 )
        v33 = 0;
      v123 = v33;
    }
    if ( !*(_QWORD *)(v89 + 928) || !*(_BYTE *)(v89 + 2642) )
    {
      if ( v128 == -1 )
      {
        v128 = v54->VidPnSourceId;
      }
      else
      {
        if ( v128 != v54->VidPnSourceId )
          v33 = 0;
        v123 = v33;
      }
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v125, (__int64)v80);
    v52 = v67 + 1;
    v124 = v82 + 1;
    *(_QWORD *)&v144 = v52;
    if ( v82 + 1 < v127 )
    {
      v9 = 0LL;
      continue;
    }
    break;
  }
  v9 = 0LL;
LABEL_128:
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v134,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 231) + 2696LL) + 520LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v134);
  if ( (int)v11 < 0 )
  {
    v119 = v129;
    goto LABEL_167;
  }
  if ( v33 )
  {
    v97 = v9;
    v144 = 0LL;
    if ( v126 )
    {
      v98 = v130;
      v99 = v126;
      do
      {
        v100 = *v98;
        v101 = (*v98)->VidPnSourceId;
        v102 = *(_QWORD *)(*((_QWORD *)this + 231) + 2696LL);
        v103 = (DISPLAY_SOURCE *)(*(_QWORD *)(v102 + 112) + 3968 * v101);
        if ( !*((_BYTE *)&v144 + v101) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v102 + 112) + 3968 * v101));
          v97 = v100->VidPnSourceId;
          *((_BYTE *)&v144 + v100->VidPnSourceId) = 1;
        }
        DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
          v103,
          &v100->PostComposition.SrcRect,
          &v100->PostComposition.DstRect);
        ++v98;
        --v99;
      }
      while ( v99 );
      v33 = v123;
      v9 = 0LL;
    }
    if ( v127 )
    {
      v104 = v127;
      v105 = v132;
      v106 = (char *)((char *)v131 - (char *)v132);
      do
      {
        v107 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v105 + (_QWORD)v106);
        v108 = *(_QWORD *)(*((_QWORD *)this + 231) + 2696LL);
        v109 = v107->VidPnSourceId;
        v110 = (DISPLAY_SOURCE *)(*(_QWORD *)(v108 + 112) + 3968 * v109);
        if ( !*((_BYTE *)&v144 + v109) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v108 + 112) + 3968 * v109));
          v97 = v107->VidPnSourceId;
          *((_BYTE *)&v144 + v97) = 1;
        }
        if ( DXGDEVICE::UseCachedIndependentFlipParameters(this, v110, v107) )
        {
          DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v110, v107->LayerIndex);
        }
        else
        {
          v118 = v107->pPlaneAttributes;
          DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
            v110,
            v107->LayerIndex,
            *v105,
            v118->Flags,
            &v118->SrcRect,
            &v118->DstRect,
            &v118->ClipRect,
            v118->Rotation,
            v118->Blend,
            v118->ColorSpace,
            v118->SDRWhiteLevel);
        }
        ++v105;
        --v104;
      }
      while ( v104 );
      v33 = v123;
      v9 = 0LL;
    }
    v119 = v129;
    LODWORD(v11) = CheckMultiPlaneOverlayInternal3(
                     v97,
                     *((struct ADAPTER_RENDER **)this + 2),
                     *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 231) + 2696LL),
                     v129,
                     v135);
    if ( *v119 == (_DWORD)v9 )
    {
      v120 = v9;
      v121 = &v144;
      do
      {
        if ( *(_BYTE *)v121 != (_BYTE)v9 )
          DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 231)
                                                                                            + 2696LL)
                                                                                + 112LL)
                                                                    + 3968LL * v120));
        ++v120;
        v121 = (__int128 *)((char *)v121 + 1);
      }
      while ( v120 < 0x10 );
    }
  }
  else
  {
    v119 = v129;
  }
  if ( (int)v11 < 0 || !v33 )
LABEL_167:
    LogCheckMutiplaneOverlaySupport(v11, *v119, v127, v131, v133, v126, v130, *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v134, v96);
  v22 = v11;
  if ( v134[8] != (_BYTE)v9 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v134, v122);
LABEL_170:
  if ( P != &v137 && P )
    ExFreePoolWithTag(P, 0);
  P = (PVOID)v9;
  v138 = v9;
LABEL_174:
  if ( v140 != &v141 )
  {
    if ( v140 )
      ExFreePoolWithTag(v140, 0);
  }
  return v22;
}

/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252E98
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0252CD8 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0253C08 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0258450 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D22C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E06C0 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C00EF950 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F73E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01093F4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010B170 (-DxgkUnreferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1C010C968 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015FF1C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C02109B4 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C02133A8 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C0214B8C (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C0214C98 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$02@@QEAA@XZ @ 0x1C0251968 (--1-$PagedPoolZeroedArray@PEAVDXGALLOCATION@@$02@@QEAA@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C02519A8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02526D4 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0255734 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0256E1C (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
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
  __int64 v10; // r14
  __int64 v11; // r12
  ADAPTER_RENDER *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // edi
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned __int8 v32; // r13
  __int64 v33; // rax
  unsigned int v34; // esi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v41; // rbx
  __int64 v42; // rcx
  char v43; // al
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v44; // rsi
  unsigned int v45; // r15d
  unsigned int Rotation; // eax
  __int64 v47; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  RECT SrcRect; // xmm0
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // r15
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v56; // rsi
  D3DKMT_HANDLE hResource; // ebx
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  struct _EX_RUNDOWN_REF *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct _EX_RUNDOWN_REF *v66; // rdx
  ULONG_PTR Count; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  struct _EX_RUNDOWN_REF *i; // rbx
  __int64 v71; // r12
  _QWORD *v72; // rax
  void **v73; // r15
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  void *v79; // rax
  ADAPTER_RENDER *v80; // rcx
  int v81; // eax
  __int64 v82; // rdx
  __int64 right; // rcx
  __int64 v84; // r8
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // r15d
  __int64 v88; // rbx
  _QWORD *v89; // rax
  unsigned int v90; // eax
  __int64 v91; // rax
  int StretchQuality; // eax
  __int64 v93; // rax
  __int64 v94; // rcx
  int ColorSpace; // eax
  UINT SDRWhiteLevel; // eax
  _QWORD *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rdx
  _QWORD *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  unsigned int v108; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v109; // r14
  __int64 v110; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v111; // rbx
  __int64 v112; // rdx
  __int64 v113; // rcx
  DISPLAY_SOURCE *v114; // rsi
  const struct DXGALLOCATION **v115; // r14
  char *v116; // r12
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v117; // rsi
  __int64 v118; // rdx
  __int64 v119; // rcx
  DISPLAY_SOURCE *v120; // rbx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v121; // r9
  int *v122; // r12
  unsigned int v123; // r9d
  __int128 *v124; // r10
  __int64 v125; // rdx
  unsigned int v126; // ecx
  struct _EX_RUNDOWN_REF **v127; // rsi
  __int64 v128; // rdx
  char v129; // [rsp+60h] [rbp-A0h]
  bool v130; // [rsp+64h] [rbp-9Ch]
  struct _EX_RUNDOWN_REF *v131; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v132; // [rsp+70h] [rbp-90h]
  unsigned int v133; // [rsp+74h] [rbp-8Ch]
  unsigned int v134; // [rsp+78h] [rbp-88h]
  int v135; // [rsp+7Ch] [rbp-84h]
  ULONG_PTR v136; // [rsp+80h] [rbp-80h]
  int *v137; // [rsp+88h] [rbp-78h]
  const struct DXGALLOCATION **Elements; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v139; // [rsp+98h] [rbp-68h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v140; // [rsp+A0h] [rbp-60h]
  void **v141; // [rsp+A8h] [rbp-58h]
  _BYTE v142[16]; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v143; // [rsp+C0h] [rbp-40h]
  _BYTE v144[16]; // [rsp+C8h] [rbp-38h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v145; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v146[4]; // [rsp+108h] [rbp+8h] BYREF
  int v147; // [rsp+128h] [rbp+28h]
  _QWORD v148[4]; // [rsp+130h] [rbp+30h] BYREF
  int v149; // [rsp+150h] [rbp+50h]
  _BYTE v150[512]; // [rsp+160h] [rbp+60h]
  __int128 v151; // [rsp+360h] [rbp+260h] BYREF

  v139 = a5;
  LODWORD(v10) = 0;
  v11 = a2;
  v143 = a8;
  v134 = a4;
  *a7 = 0;
  a8->Value = 0;
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v140 = a3;
  v133 = a2;
  v137 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v12) )
  {
    v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdWarning(v16);
    return 0LL;
  }
  v148[0] = 0LL;
  v149 = 0;
  Elements = (const struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                              v148,
                                              v11);
  if ( !Elements )
  {
    v21 = -1073741801;
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v22[3] = v11;
    v22[4] = -1073741801LL;
    v22[5] = PsGetCurrentProcess(v24, v23);
    WdLogEvent5_WdWarning(v22);
    goto LABEL_180;
  }
  v146[0] = 0LL;
  v147 = 0;
  v141 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(v146, v11);
  if ( !v141 )
  {
    v21 = -1073741801;
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
    v28[3] = v11;
    v28[4] = -1073741801LL;
    v28[5] = PsGetCurrentProcess(v30, v29);
    WdLogEvent5_WdWarning(v28);
    goto LABEL_179;
  }
  v31 = *((_DWORD *)this + 464);
  v32 = 1;
  v129 = 1;
  if ( v31 > 0x10 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v26, v25);
    *(_QWORD *)(v33 + 24) = 10649LL;
    WdLogEvent5_WdAssertion(v33);
    v31 = *((_DWORD *)this + 464);
  }
  v34 = 0;
  if ( v31 )
  {
    while ( v34 < 0x10 )
    {
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 231) + 2696LL),
                          v34);
      v25 = 0LL;
      if ( !DisplayModeInfo )
      {
        v40 = WdLogNewEntry5_WdError(v36, 0LL);
        *(_QWORD *)(v40 + 24) = this;
        *(_QWORD *)(v40 + 32) = v34;
        WdLogEvent5_WdError(v40);
        v32 = 0;
        v129 = 0;
        break;
      }
      v37 = *(_DWORD *)DisplayModeInfo;
      v38 = 2LL * v34;
      v39 = *((_DWORD *)DisplayModeInfo + 1);
      ++v34;
      *(_QWORD *)&v150[8 * v38] = 0LL;
      *(_DWORD *)&v150[8 * v38 + 8] = v37;
      *(_DWORD *)&v150[8 * v38 + 12] = v39;
      *(_OWORD *)&v150[8 * v38 + 256] = *(_OWORD *)&v150[8 * v38];
      if ( v34 >= *((_DWORD *)this + 464) )
        break;
    }
  }
  v135 = -1;
  LODWORD(v41) = 0;
  if ( a4 )
  {
    v42 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v42 + 928) || (v43 = 1, !*(_BYTE *)(v42 + 2642)) )
      v43 = 0;
    v44 = v139;
    v32 &= v43;
    v129 = v32;
    v45 = 0;
    while ( 1 )
    {
      if ( (int)v10 < 0 )
        goto LABEL_42;
      v41 = *v44;
      if ( (*v44)->PostComposition.SrcRect.left >= (*v44)->PostComposition.SrcRect.right
        || v41->PostComposition.SrcRect.top >= v41->PostComposition.SrcRect.bottom
        || v41->PostComposition.DstRect.left >= v41->PostComposition.DstRect.right
        || v41->PostComposition.DstRect.top >= v41->PostComposition.DstRect.bottom )
      {
        break;
      }
      Rotation = v41->PostComposition.Rotation;
      if ( Rotation > 2 )
      {
        if ( Rotation > 4 )
        {
          v47 = WdLogNewEntry5_WdWarning(v42, v25, v27);
          LODWORD(v10) = -1073741811;
          *(_QWORD *)(v47 + 24) = v41->PostComposition.Rotation;
          *(_QWORD *)(v47 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v47);
        }
        else
        {
          v32 = 0;
          v129 = 0;
        }
      }
      if ( v41->PostComposition.Flags.Value )
        goto LABEL_38;
      VidPnSourceId = v41->VidPnSourceId;
      if ( v41->VidPnSourceId >= *((_DWORD *)this + 464) )
      {
        v51 = WdLogNewEntry5_WdWarning(v42, v25, v27);
        v52 = v41->VidPnSourceId;
        LODWORD(v41) = 0;
        *(_QWORD *)(v51 + 24) = v52;
        *(_QWORD *)(v51 + 32) = 0LL;
        WdLogEvent5_WdWarning(v51);
        goto LABEL_39;
      }
      v42 = 2LL * VidPnSourceId;
      if ( *(_DWORD *)&v150[16 * VidPnSourceId] > v41->PostComposition.DstRect.left
        || *(_DWORD *)&v150[16 * VidPnSourceId + 8] < v41->PostComposition.DstRect.right
        || *(_DWORD *)&v150[16 * VidPnSourceId + 4] > v41->PostComposition.DstRect.top
        || *(_DWORD *)&v150[16 * VidPnSourceId + 12] < v41->PostComposition.DstRect.bottom )
      {
        v50 = WdLogNewEntry5_WdWarning(v42, v25, v27);
        *(_QWORD *)(v50 + 24) = this;
        *(_QWORD *)(v50 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v50);
LABEL_38:
        LODWORD(v41) = 0;
LABEL_39:
        v32 = 0;
        v129 = 0;
        goto LABEL_42;
      }
      SrcRect = v41->PostComposition.SrcRect;
      LODWORD(v41) = 0;
      ++v45;
      ++v44;
      *(RECT *)&v150[16 * VidPnSourceId + 256] = SrcRect;
      if ( v45 >= v134 )
        goto LABEL_42;
    }
    v53 = WdLogNewEntry5_WdWarning(v42, v25, v27);
    *(_QWORD *)(v53 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v53);
    LODWORD(v41) = 0;
    LODWORD(v10) = -1073741811;
  }
LABEL_42:
  v132 = 0;
  v130 = (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() != 0;
  if ( !(_DWORD)v11 )
    goto LABEL_143;
  v54 = 0LL;
  *(_QWORD *)&v151 = 0LL;
  while ( 1 )
  {
    if ( (int)v10 < 0 )
      goto LABEL_143;
    v55 = *((_QWORD *)this + 5);
    v136 = 0LL;
    v56 = v140[v54];
    hResource = v56->hResource;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v55 + 208));
    v58 = (hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v58 < *(_DWORD *)(v55 + 256) )
    {
      v59 = *(_QWORD *)(v55 + 240);
      v60 = *(_DWORD *)(v59 + 16 * v58 + 8);
      if ( ((hResource >> 25) & 0x60) == (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x60)
        && (v60 & 0x2000) == 0
        && (v60 & 0x1F) != 0 )
      {
        v61 = v60 & 0x1F;
        if ( (_BYTE)v61 == 4 )
        {
          v63 = *(struct _EX_RUNDOWN_REF **)(v59 + 16LL * (unsigned int)v58);
          LODWORD(v41) = 0;
          goto LABEL_52;
        }
        v62 = WdLogNewEntry5_WdError(v61, 2LL * (unsigned int)v58);
        *(_QWORD *)(v62 + 24) = 316LL;
        WdLogEvent5_WdError(v62);
      }
    }
    LODWORD(v41) = 0;
    v63 = 0LL;
LABEL_52:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v131, v63);
    ExReleasePushLockSharedEx(v55 + 208, 0LL);
    KeLeaveCriticalRegion();
    v66 = v131;
    if ( !v131 )
      goto LABEL_139;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v144, (struct DXGFASTMUTEX *const)&v131[10], 0);
    LOBYTE(v69) = v130;
    if ( v130 )
    {
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v144);
      LOBYTE(v69) = v130;
    }
    for ( i = (struct _EX_RUNDOWN_REF *)v131[3].Count; ; i = (struct _EX_RUNDOWN_REF *)i[8].Count )
    {
      if ( !i )
        goto LABEL_65;
      if ( (DXGDEVICE *)i[1].Count != this )
      {
        v72 = (_QWORD *)WdLogNewEntry5_WdWarning(Count, v69, v68);
        v72[3] = v56->hResource;
        v72[4] = i[1].Count;
        v72[5] = this;
        v72[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v72);
LABEL_65:
        v71 = v151;
        goto LABEL_66;
      }
      Count = i[6].Count;
      if ( (*(_DWORD *)(Count + 4) & 0x200B) != 0 )
        break;
    }
    v71 = v151;
    v136 = i[6].Count;
    Elements[(_QWORD)v151] = (const struct DXGALLOCATION *)i;
    if ( (_BYTE)v69 )
      DxgkReferenceDxgAllocation(i);
LABEL_66:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v144);
    v41 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v136;
    v66 = 0LL;
    if ( !v136 )
    {
LABEL_139:
      v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, v66, v65);
      v107 = v56->hResource;
      v97[4] = -1073741811LL;
LABEL_140:
      v97[3] = v107;
      goto LABEL_141;
    }
    v73 = v141;
    v141[v71] = *(void **)(v136 + 16);
    v74 = v56->VidPnSourceId;
    if ( (unsigned int)v74 >= *((_DWORD *)this + 464) )
    {
      v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, 0LL, v65);
      v107 = v56->VidPnSourceId;
      LODWORD(v41) = 0;
      v97[4] = 0LL;
      goto LABEL_140;
    }
    if ( (_DWORD)v74 != ((v41->PostComposition.Flags.Value >> 6) & 0xF) )
    {
      v75 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_QWORD *)(v75 + 928) || !*(_BYTE *)(v75 + 2642) )
      {
        v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v75, 0LL, v65);
        v97[3] = v56->VidPnSourceId;
        v98 = (v41->PostComposition.Flags.Value >> 6) & 0xF;
        goto LABEL_130;
      }
    }
    v76 = *((_QWORD *)this + 2);
    v77 = *(unsigned int *)(*(_QWORD *)(v76 + 16) + 2536LL);
    if ( v56->LayerIndex >= (unsigned int)v77 )
      break;
    if ( a6 && !*((_DWORD *)this + 465) )
    {
      v99 = WdLogNewEntry5_WdWarning(v77, 0LL, v76);
      LODWORD(v10) = -1073741790;
      *(_QWORD *)(v99 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v99);
LABEL_132:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v131, v100);
      LODWORD(v41) = 0;
      goto LABEL_143;
    }
    pPlaneAttributes = v56->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
      || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
      || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
      || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
      || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
    {
      v106 = WdLogNewEntry5_WdWarning(v77, pPlaneAttributes, v76);
      *(_QWORD *)(v106 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v106);
      LODWORD(v10) = -1073741811;
      goto LABEL_132;
    }
    v79 = v73[v71];
    v80 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    memset(&v145.Width, 0, 40);
    v145.hAllocation = v79;
    v81 = ADAPTER_RENDER::DdiDescribeAllocation(v80, &v145, v76);
    v10 = v81;
    if ( v81 < 0 )
    {
      v104 = (_QWORD *)WdLogNewEntry5_WdError(right, v82);
      v105 = v132;
      v104[3] = v10;
      v104[4] = this;
      v104[5] = v73[v105];
      v104[6] = v41;
      WdLogEvent5_WdError(v104);
      goto LABEL_132;
    }
    v85 = v56->pPlaneAttributes;
    LODWORD(v41) = 0;
    if ( v85->SrcRect.left < 0
      || (right = (unsigned int)v85->SrcRect.right, (int)v145.Width < (int)right)
      || v85->SrcRect.top < 0
      || (int)v145.Height < v85->SrcRect.bottom )
    {
      v102 = (_QWORD *)WdLogNewEntry5_WdError(right, v85);
      v102[5] = v132;
      v102[3] = -1073741811LL;
      v102[4] = this;
      WdLogEvent5_WdError(v102);
      LODWORD(v10) = -1073741811;
      goto LABEL_142;
    }
    v86 = 2LL * v56->VidPnSourceId;
    if ( *(_DWORD *)&v150[16 * v56->VidPnSourceId + 256] > v85->ClipRect.left
      || *(_DWORD *)&v150[16 * v56->VidPnSourceId + 264] < v85->ClipRect.right
      || *(_DWORD *)&v150[16 * v56->VidPnSourceId + 260] > v85->ClipRect.top
      || *(_DWORD *)&v150[16 * v56->VidPnSourceId + 268] < v85->ClipRect.bottom )
    {
      v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v85, v84);
      v87 = v132;
      v89[3] = 0LL;
      v88 = v87;
      v89[5] = v87;
      v89[4] = this;
      WdLogEvent5_WdWarning(v89);
      v85 = v56->pPlaneAttributes;
      v32 = 0;
      v129 = 0;
    }
    else
    {
      v87 = v132;
      v88 = v132;
    }
    if ( v85->DstRect.left > v85->ClipRect.left
      || v85->DstRect.right < v85->ClipRect.right
      || v85->DstRect.top > v85->ClipRect.top
      || v85->DstRect.bottom < v85->ClipRect.bottom )
    {
      v101 = (_QWORD *)WdLogNewEntry5_WdError(v86, v85);
      v101[3] = -1073741811LL;
      v101[4] = this;
      v101[5] = v88;
      WdLogEvent5_WdError(v101);
      LODWORD(v10) = -1073741811;
      goto LABEL_132;
    }
    v90 = v85->Rotation;
    if ( v90 > 1 )
    {
      if ( v90 <= 4 )
      {
        LODWORD(v41) = 0;
        v86 = 0LL;
        if ( (**(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2600LL) & 0x20) == 0 )
          v86 = v32;
        v32 = v86;
        v129 = v86;
        goto LABEL_102;
      }
      v91 = WdLogNewEntry5_WdWarning(v86, v85, v84);
      *(_QWORD *)(v91 + 24) = v56->pPlaneAttributes->Rotation;
      *(_QWORD *)(v91 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v91);
      v85 = v56->pPlaneAttributes;
      LODWORD(v10) = -1073741811;
    }
    LODWORD(v41) = 0;
LABEL_102:
    StretchQuality = v85->StretchQuality;
    if ( StretchQuality <= 0 || StretchQuality > 2 )
    {
      v93 = WdLogNewEntry5_WdWarning(v86, v85, v84);
      LODWORD(v10) = -1073741811;
      *(_QWORD *)(v93 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v93);
      v85 = v56->pPlaneAttributes;
    }
    v94 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v94 + 896) && (!*(_QWORD *)(v94 + 928) || !*(_BYTE *)(v94 + 2642)) )
    {
      ColorSpace = v85->ColorSpace;
      if ( ColorSpace == -1
        || ColorSpace > 0 && (ColorSpace <= 3 || ColorSpace == 5 || (unsigned int)(ColorSpace - 10) <= 9) )
      {
        v32 = 0;
        v129 = 0;
      }
    }
    SDRWhiteLevel = v85->SDRWhiteLevel;
    if ( SDRWhiteLevel && SDRWhiteLevel != 80 && (*(_DWORD *)(v94 + 348) & 0x200) == 0 )
    {
      if ( *(int *)(v94 + 2328) < 8960 )
        v32 = 0;
      v129 = v32;
    }
    if ( !*(_QWORD *)(v94 + 928) || !*(_BYTE *)(v94 + 2642) )
    {
      if ( v135 == -1 )
      {
        v135 = v56->VidPnSourceId;
        LODWORD(v41) = 0;
      }
      else
      {
        LODWORD(v41) = 0;
        if ( v135 != v56->VidPnSourceId )
          v32 = 0;
        v129 = v32;
      }
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v131, (__int64)v85);
    v54 = v71 + 1;
    v132 = v87 + 1;
    *(_QWORD *)&v151 = v54;
    if ( v87 + 1 >= v133 )
      goto LABEL_143;
  }
  v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, 0LL, v76);
  v97[3] = v56->LayerIndex;
  v98 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2536LL);
LABEL_130:
  LODWORD(v41) = 0;
  v97[4] = v98;
  v97[5] = 0LL;
LABEL_141:
  WdLogEvent5_WdWarning(v97);
  v32 = (unsigned __int8)v41;
  v129 = (char)v41;
LABEL_142:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v131, v103);
LABEL_143:
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v142,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 231) + 2696LL) + 528LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v142);
  if ( (int)v10 >= 0 && v32 )
  {
    v108 = (unsigned int)v41;
    v151 = 0LL;
    if ( v134 )
    {
      v109 = v139;
      v110 = v134;
      do
      {
        v111 = *v109;
        v112 = (*v109)->VidPnSourceId;
        v113 = *(_QWORD *)(*((_QWORD *)this + 231) + 2696LL);
        v114 = (DISPLAY_SOURCE *)(*(_QWORD *)(v113 + 112) + 3968 * v112);
        if ( !*((_BYTE *)&v151 + v112) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v113 + 112) + 3968 * v112));
          v108 = v111->VidPnSourceId;
          *((_BYTE *)&v151 + v111->VidPnSourceId) = 1;
        }
        DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
          v114,
          &v111->PostComposition.SrcRect,
          &v111->PostComposition.DstRect);
        ++v109;
        --v110;
      }
      while ( v110 );
      v32 = v129;
      LODWORD(v41) = 0;
    }
    if ( v133 )
    {
      v115 = Elements;
      v116 = (char *)((char *)v140 - (char *)Elements);
      v136 = v133;
      do
      {
        v117 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v115 + (_QWORD)v116);
        v118 = v117->VidPnSourceId;
        v119 = *(_QWORD *)(*((_QWORD *)this + 231) + 2696LL);
        v120 = (DISPLAY_SOURCE *)(*(_QWORD *)(v119 + 112) + 3968 * v118);
        if ( !*((_BYTE *)&v151 + v118) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v119 + 112) + 3968 * v118));
          v108 = v117->VidPnSourceId;
          *((_BYTE *)&v151 + v108) = 1;
        }
        if ( DXGDEVICE::UseCachedIndependentFlipParameters(this, v120, v117) )
        {
          DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v120, v117->LayerIndex);
        }
        else
        {
          v121 = v117->pPlaneAttributes;
          DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
            v120,
            v117->LayerIndex,
            *v115,
            v121->Flags,
            &v121->SrcRect,
            &v121->DstRect,
            &v121->ClipRect,
            v121->Rotation,
            v121->Blend,
            v121->ColorSpace,
            v121->SDRWhiteLevel);
        }
        ++v115;
        --v136;
      }
      while ( v136 );
      v32 = v129;
      LODWORD(v41) = 0;
    }
    v122 = v137;
    LODWORD(v10) = CheckMultiPlaneOverlayInternal3(
                     v108,
                     *((struct ADAPTER_RENDER **)this + 2),
                     *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 231) + 2696LL),
                     v137,
                     v143);
    if ( *v122 == (_DWORD)v41 )
    {
      v123 = (unsigned int)v41;
      v124 = &v151;
      do
      {
        if ( *(_BYTE *)v124 != (_BYTE)v41 )
          DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 231)
                                                                                            + 2696LL)
                                                                                + 112LL)
                                                                    + 3968LL * v123));
        ++v123;
        v124 = (__int128 *)((char *)v124 + 1);
      }
      while ( v123 < 0x10 );
    }
  }
  else
  {
    v122 = v137;
  }
  if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
  {
    v126 = v133;
    if ( v133 )
    {
      v127 = (struct _EX_RUNDOWN_REF **)Elements;
      v41 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)v133;
      do
      {
        if ( *v127 )
          DxgkUnreferenceDxgAllocation(*v127);
        ++v127;
        v41 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)((char *)v41 - 1);
      }
      while ( v41 );
      goto LABEL_173;
    }
  }
  else
  {
LABEL_173:
    v126 = v133;
  }
  if ( (int)v10 < 0 || !v32 )
    LogCheckMutiplaneOverlaySupport(v10, *v122, v126, v140, v141, v134, v139, *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142, v125);
  v21 = v10;
  if ( v142[8] != (_BYTE)v41 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v142, v128);
LABEL_179:
  PagedPoolZeroedArray<DXGALLOCATION *,3>::~PagedPoolZeroedArray<DXGALLOCATION *,3>((__int64)v146);
LABEL_180:
  PagedPoolZeroedArray<DXGALLOCATION *,3>::~PagedPoolZeroedArray<DXGALLOCATION *,3>((__int64)v148);
  return v21;
}

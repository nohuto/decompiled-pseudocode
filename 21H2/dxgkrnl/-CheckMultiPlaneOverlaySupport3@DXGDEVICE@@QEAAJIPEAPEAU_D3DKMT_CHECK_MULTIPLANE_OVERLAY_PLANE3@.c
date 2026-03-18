/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015DFB4
 * Callers:
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C015D690 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3E58 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C02E4008 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1C02E93A0 (DxgkCheckSinglePlaneForMultiPlaneOverlaySupport.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C001E0AC (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C015E714 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C015E84C (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C015E960 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C015ED50 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C015FA98 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C015FC10 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C0167908 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C019E94C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01C8E24 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C02BF394 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C02C29E8 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
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
  int v8; // r14d
  __int64 v10; // r12
  __int64 v11; // rbx
  ADAPTER_RENDER *v12; // rcx
  const struct DXGALLOCATION **v13; // r15
  void **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // r9d
  void **v19; // r13
  unsigned int v20; // eax
  unsigned int v21; // edi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v23; // ecx
  __int64 v24; // rbx
  int v25; // eax
  char *v26; // rcx
  void **v27; // rax
  signed __int64 v28; // rdx
  char *v29; // r13
  __int64 v30; // r14
  _QWORD *v31; // r13
  unsigned int v32; // ebx
  __int64 v33; // rax
  struct DXGRESOURCE *v34; // rdx
  _QWORD *i; // rcx
  DXGDEVICE *v36; // r8
  __int64 v37; // r14
  void **v38; // r9
  unsigned int *v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rax
  _DWORD *v42; // rdx
  void *v43; // rax
  ADAPTER_RENDER *v44; // rcx
  int v45; // eax
  int *v46; // rdx
  unsigned int v47; // r13d
  __int64 v48; // rbx
  unsigned int v49; // eax
  int v50; // eax
  int v51; // r10d
  __int64 v52; // r8
  DXGADAPTER *v53; // rcx
  __int64 v54; // r9
  int v55; // eax
  int v56; // r10d
  char v57; // bl
  unsigned int v58; // r14d
  char v59; // r15
  const struct DXGALLOCATION **v60; // rcx
  char *v61; // r12
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  DISPLAY_SOURCE *v65; // rdi
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // r9
  int *v67; // rbx
  unsigned int v68; // ebx
  __int64 v70; // r8
  int v71; // ecx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 CurrentProcess; // rax
  __int64 v75; // rdx
  unsigned int v76; // r13d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v77; // r15
  unsigned int v78; // r8d
  __int64 v79; // r10
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v80; // rbx
  unsigned int Rotation; // eax
  __int64 VidPnSourceId; // rdx
  __int64 v83; // rdx
  __int64 v84; // rdx
  unsigned __int64 v85; // r8
  __int64 v86; // r8
  char v87; // cl
  int v88; // eax
  __int64 v89; // rcx
  void **v90; // r15
  const wchar_t *v91; // r9
  __int64 v92; // r8
  unsigned int *v93; // rbx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v94; // r12
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  DISPLAY_SOURCE *v98; // rdi
  unsigned int v99; // r9d
  __int128 *v100; // r10
  int v101; // [rsp+60h] [rbp-A0h]
  unsigned int v102; // [rsp+64h] [rbp-9Ch]
  unsigned int v103; // [rsp+68h] [rbp-98h]
  unsigned int LayerIndex; // [rsp+68h] [rbp-98h]
  __int64 v105; // [rsp+70h] [rbp-90h] BYREF
  const struct DXGALLOCATION **v106; // [rsp+78h] [rbp-88h]
  unsigned int v107; // [rsp+80h] [rbp-80h]
  unsigned int v108; // [rsp+84h] [rbp-7Ch]
  void **v109; // [rsp+88h] [rbp-78h]
  unsigned int *v110; // [rsp+90h] [rbp-70h]
  void **v111; // [rsp+98h] [rbp-68h]
  int *v112; // [rsp+A0h] [rbp-60h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v113; // [rsp+A8h] [rbp-58h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v114; // [rsp+B0h] [rbp-50h]
  _BYTE v115[16]; // [rsp+B8h] [rbp-48h] BYREF
  char *v116; // [rsp+C8h] [rbp-38h]
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v117; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+D8h] [rbp-28h] BYREF
  char v119; // [rsp+E0h] [rbp-20h] BYREF
  int v120; // [rsp+F8h] [rbp-8h]
  struct _DXGKARG_DESCRIBEALLOCATION v121; // [rsp+100h] [rbp+0h] BYREF
  PVOID v122; // [rsp+130h] [rbp+30h] BYREF
  char v123; // [rsp+138h] [rbp+38h] BYREF
  int v124; // [rsp+150h] [rbp+50h]
  _BYTE v125[512]; // [rsp+160h] [rbp+60h]
  __int128 v126; // [rsp+360h] [rbp+260h] BYREF

  v113 = a5;
  LODWORD(v10) = 0;
  v11 = a2;
  v117 = a8;
  v107 = a4;
  *a7 = 0;
  a8->Value = 0;
  v12 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v114 = a3;
  v108 = a2;
  v112 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v12) )
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 0LL;
  }
  v122 = 0LL;
  v124 = 0;
  v106 = (const struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                          &v122,
                                          (unsigned int)v11);
  v13 = v106;
  if ( v106 )
  {
    P = 0LL;
    v120 = 0;
    v14 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                     &P,
                     (unsigned int)v11);
    v18 = 0;
    v109 = v14;
    v19 = v14;
    if ( !v14 )
    {
      CurrentProcess = PsGetCurrentProcess(v16, v15, v17, 0LL);
      v75 = v11;
      v68 = -1073741801;
      WdLogSingleEntry3(3LL, v75, -1073741801LL, CurrentProcess);
      v29 = 0LL;
LABEL_79:
      if ( P != &v119 && P )
        ExFreePoolWithTag(P, 0);
      P = v29;
      v120 = (int)v29;
      goto LABEL_83;
    }
    v20 = *((_DWORD *)this + 464);
    LOBYTE(v8) = 1;
    v101 = v8;
    if ( v20 > 0x10 )
    {
      WdLogSingleEntry1(1LL, 10826LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetNumVidPnSources() <= D3DKMDT_MAX_VIDPN_SOURCES",
        10826LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = *((_DWORD *)this + 464);
      v18 = 0;
    }
    v21 = 0;
    if ( v20 )
    {
      while ( v21 < 0x10 )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                            *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 231) + 2792LL),
                            v21);
        v18 = 0;
        if ( !DisplayModeInfo )
        {
          WdLogSingleEntry2(2LL, this, v21);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Context 0x%I64x: CheckMultiplaneOverlaySupport3 failed to obtain display mode, VidPnSourceId 0x%I64x",
            (__int64)this,
            v21,
            0LL,
            0LL,
            0LL);
          v18 = 0;
          LOBYTE(v8) = 0;
          v101 = v8;
          break;
        }
        v23 = *(_DWORD *)DisplayModeInfo;
        v24 = 2LL * v21;
        v25 = *((_DWORD *)DisplayModeInfo + 1);
        ++v21;
        *(_QWORD *)&v125[8 * v24] = 0LL;
        *(_DWORD *)&v125[8 * v24 + 8] = v23;
        *(_DWORD *)&v125[8 * v24 + 12] = v25;
        *(_OWORD *)&v125[8 * v24 + 256] = *(_OWORD *)&v125[8 * v24];
        if ( v21 >= *((_DWORD *)this + 464) )
          break;
      }
    }
    v103 = -1;
    if ( v107 )
    {
      v76 = 0;
      v77 = v113;
      LOBYTE(v101) = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) != 0
                   ? v8
                   : 0;
      while ( 1 )
      {
        if ( (int)v10 < 0 )
          goto LABEL_122;
        v80 = *v77;
        if ( (*v77)->PostComposition.SrcRect.left >= (*v77)->PostComposition.SrcRect.right
          || v80->PostComposition.SrcRect.top >= v80->PostComposition.SrcRect.bottom
          || v80->PostComposition.DstRect.left >= v80->PostComposition.DstRect.right
          || v80->PostComposition.DstRect.top >= v80->PostComposition.DstRect.bottom )
        {
          break;
        }
        Rotation = v80->PostComposition.Rotation;
        if ( Rotation > 2 )
        {
          if ( Rotation > 4 )
          {
            WdLogSingleEntry2(3LL, v80->PostComposition.Rotation, v79);
            v78 = v107;
            v79 = -1073741811LL;
            LODWORD(v10) = -1073741811;
            v18 = 0;
          }
          else
          {
            LOBYTE(v8) = v18;
            v101 = v8;
          }
        }
        if ( v80->PostComposition.Flags.Value != v18 )
          goto LABEL_120;
        VidPnSourceId = v80->VidPnSourceId;
        if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 464) )
        {
          WdLogSingleEntry2(3LL, VidPnSourceId, 0LL);
          goto LABEL_119;
        }
        v83 = 2 * VidPnSourceId;
        if ( *(_DWORD *)&v125[8 * v83] > v80->PostComposition.DstRect.left
          || *(_DWORD *)&v125[8 * v83 + 8] < v80->PostComposition.DstRect.right
          || *(_DWORD *)&v125[8 * v83 + 4] > v80->PostComposition.DstRect.top
          || *(_DWORD *)&v125[8 * v83 + 12] < v80->PostComposition.DstRect.bottom )
        {
          WdLogSingleEntry2(3LL, this, v79);
LABEL_119:
          v18 = 0;
LABEL_120:
          LOBYTE(v8) = v18;
          v101 = v8;
          goto LABEL_122;
        }
        ++v76;
        ++v77;
        *(RECT *)&v125[8 * v83 + 256] = v80->PostComposition.SrcRect;
        if ( v76 >= v78 )
          goto LABEL_122;
      }
      WdLogSingleEntry1(3LL, v79);
      v18 = 0;
      LODWORD(v10) = -1073741811;
LABEL_122:
      v19 = v109;
      v13 = v106;
    }
    v102 = v18;
    if ( v108 <= v18 )
      goto LABEL_54;
    v26 = (char *)((char *)v114 - (char *)v13);
    v27 = v19;
    v28 = (char *)v13 - (char *)v19;
    v111 = v19;
    *(_QWORD *)&v126 = (char *)v13 - (char *)v19;
    v116 = (char *)((char *)v114 - (char *)v13);
    while ( 2 )
    {
      v29 = 0LL;
      if ( (int)v10 < 0 )
      {
LABEL_55:
        v57 = v101;
        goto LABEL_56;
      }
      v30 = *((_QWORD *)this + 5);
      v31 = (void **)((char *)v27 + v28);
      v110 = *(unsigned int **)((char *)v27 + v28 + (_QWORD)v26);
      v32 = v110[1];
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v30 + 248));
      v33 = (v32 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v33 < *(_DWORD *)(v30 + 296) )
      {
        v70 = *(_QWORD *)(v30 + 280);
        v71 = *(_DWORD *)(v70 + 16 * v33 + 8);
        if ( ((v32 >> 25) & 0x60) == (*(_BYTE *)(v70 + 16 * v33 + 8) & 0x60) && (v71 & 0x2000) == 0 && (v71 & 0x1F) != 0 )
        {
          if ( (v71 & 0x1F) == 4 )
          {
            v34 = *(struct DXGRESOURCE **)(v70 + 16LL * (unsigned int)v33);
            goto LABEL_16;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
      v34 = 0LL;
LABEL_16:
      DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v105, v34);
      ExReleasePushLockSharedEx(v30 + 248, 0LL);
      KeLeaveCriticalRegion();
      if ( v105 )
      {
        for ( i = *(_QWORD **)(v105 + 24); ; i = (_QWORD *)i[8] )
        {
          if ( !i )
            goto LABEL_161;
          v36 = (DXGDEVICE *)i[1];
          if ( v36 != this )
          {
            v93 = v110;
            WdLogSingleEntry4(3LL, v110[1], v36, this, -1073741811LL);
            v29 = 0LL;
            goto LABEL_163;
          }
          v37 = i[6];
          if ( (*(_DWORD *)(v37 + 4) & 0x200B) != 0 )
            break;
        }
        *v31 = i;
        v29 = 0LL;
        if ( !v37 )
          goto LABEL_162;
        v38 = v111;
        v39 = v110;
        *v111 = *(void **)(v37 + 16);
        v40 = v39[4];
        if ( (unsigned int)v40 < *((_DWORD *)this + 464) )
        {
          if ( (_DWORD)v40 != ((*(_DWORD *)(v37 + 4) >> 6) & 0xF)
            && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
          {
            v86 = (v85 >> 6) & 0xF;
LABEL_152:
            WdLogSingleEntry3(3LL, v84, v86, 0LL);
            goto LABEL_165;
          }
          v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          if ( *v39 >= *(_DWORD *)(v41 + 2632) )
          {
            v86 = *(unsigned int *)(v41 + 2632);
            v84 = *v39;
            goto LABEL_152;
          }
          if ( a6 && !*((_DWORD *)this + 465) )
          {
            LODWORD(v10) = -1073741790;
            WdLogSingleEntry1(3LL, -1073741790LL);
LABEL_154:
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v105);
            goto LABEL_55;
          }
          v42 = (_DWORD *)*((_QWORD *)v39 + 3);
          if ( v42[1] >= v42[3]
            || v42[2] >= v42[4]
            || v42[5] >= v42[7]
            || v42[6] >= v42[8]
            || v42[9] >= v42[11]
            || v42[10] >= v42[12] )
          {
            WdLogSingleEntry1(3LL, -1073741811LL);
          }
          else
          {
            v43 = *v38;
            v44 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
            memset(&v121.Width, 0, 40);
            v121.hAllocation = v43;
            v45 = ADAPTER_RENDER::DdiDescribeAllocation(v44, &v121);
            v10 = v45;
            if ( v45 < 0 )
            {
              v90 = v109;
              WdLogSingleEntry4(2LL, v45, this, v109[v102], v37);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
                v10,
                (__int64)this,
                (__int64)v90[v102],
                v37,
                0LL);
              goto LABEL_154;
            }
            v46 = (int *)*((_QWORD *)v39 + 3);
            if ( v46[1] < 0 || (int)v121.Width < v46[3] || v46[2] < 0 || (int)v121.Height < v46[4] )
            {
              v48 = v102;
              WdLogSingleEntry3(2LL, -1073741811LL, this, v102);
              v91 = L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x";
            }
            else
            {
              if ( *(_DWORD *)&v125[16 * v39[4] + 256] > v46[9]
                || *(_DWORD *)&v125[16 * v39[4] + 264] < v46[11]
                || *(_DWORD *)&v125[16 * v39[4] + 260] > v46[10]
                || *(_DWORD *)&v125[16 * v39[4] + 268] < v46[12] )
              {
                v47 = v102;
                v48 = v102;
                WdLogSingleEntry3(3LL, 0LL, this, v102);
                v46 = (int *)*((_QWORD *)v39 + 3);
                LOBYTE(v37) = 0;
                v101 = v37;
              }
              else
              {
                v47 = v102;
                LODWORD(v37) = v101;
                v48 = v102;
              }
              if ( v46[5] <= v46[9] && v46[7] >= v46[11] && v46[6] <= v46[10] && v46[8] >= v46[12] )
              {
                v49 = v46[13];
                if ( v49 > 1 )
                {
                  if ( v49 > 4 )
                  {
                    WdLogSingleEntry2(3LL, v46[13], -1073741811LL);
                    v46 = (int *)*((_QWORD *)v39 + 3);
                    LODWORD(v10) = -1073741811;
                  }
                  else
                  {
                    v87 = 0;
                    if ( (**(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2696LL) & 0x20) == 0 )
                      v87 = v37;
                    LOBYTE(v37) = v87;
                    v101 = v37;
                  }
                }
                v50 = v46[19];
                v51 = 0;
                if ( v50 <= 0 || v50 > 2 )
                {
                  WdLogSingleEntry1(3LL, -1073741811LL);
                  v46 = (int *)*((_QWORD *)v39 + 3);
                  v51 = 0;
                  LODWORD(v10) = -1073741811;
                }
                v52 = *((_QWORD *)this + 2);
                v53 = *(DXGADAPTER **)(v52 + 16);
                if ( !*((_QWORD *)v53 + 123) && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(v53) )
                {
                  v88 = v46[18];
                  if ( v88 == -1 || v88 > 0 && (v88 <= 3 || v88 == 5 || v88 > 9 && v88 <= 19) )
                  {
                    LOBYTE(v37) = v51;
                    v52 = v54;
                    v101 = v37;
                  }
                }
                v55 = v46[20];
                if ( v55 )
                {
                  if ( v55 != 80 )
                  {
                    v89 = *(_QWORD *)(v52 + 16);
                    if ( (*(_DWORD *)(v89 + 436) & 0x200) == 0 )
                    {
                      LODWORD(v37) = (unsigned __int8)v37;
                      if ( *(int *)(v89 + 2424) < 8960 )
                        LODWORD(v37) = v51;
                      v101 = v37;
                    }
                  }
                }
                if ( !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(v52 + 16)) )
                {
                  if ( v103 == -1 )
                  {
                    v103 = v39[4];
                  }
                  else
                  {
                    LODWORD(v37) = (unsigned __int8)v37;
                    if ( v103 != v39[4] )
                      LODWORD(v37) = v56;
                    v101 = v37;
                  }
                }
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v105);
                v27 = v111 + 1;
                v102 = v47 + 1;
                ++v111;
                if ( v47 + 1 < v108 )
                {
                  v26 = v116;
                  v28 = v126;
                  continue;
                }
LABEL_54:
                v29 = 0LL;
                goto LABEL_55;
              }
              WdLogSingleEntry3(2LL, -1073741811LL, this, v48);
              v29 = 0LL;
              v91 = L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x";
            }
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v91, -1073741811LL, (__int64)this, v48, 0LL, 0LL);
          }
          LODWORD(v10) = -1073741811;
          goto LABEL_154;
        }
        v92 = 0LL;
      }
      else
      {
LABEL_161:
        v29 = 0LL;
LABEL_162:
        v93 = v110;
LABEL_163:
        v40 = v93[1];
        v92 = -1073741811LL;
      }
      break;
    }
    WdLogSingleEntry2(3LL, v40, v92);
LABEL_165:
    v57 = 0;
    LOBYTE(v101) = 0;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v105);
LABEL_56:
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v115,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 231) + 2792LL) + 608LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v115);
    if ( (int)v10 >= 0 && v57 )
    {
      LayerIndex = 0;
      v58 = 0;
      v59 = 0;
      v126 = 0LL;
      if ( v107 )
      {
        v94 = v113;
        v29 = (char *)v107;
        do
        {
          v95 = *v94;
          v96 = (*v94)->VidPnSourceId;
          v97 = *(_QWORD *)(*((_QWORD *)this + 231) + 2792LL);
          v98 = (DISPLAY_SOURCE *)(*(_QWORD *)(v97 + 128) + 4000 * v96);
          if ( !*((_BYTE *)&v126 + v96) )
          {
            DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v97 + 128) + 4000 * v96));
            v58 = v95->VidPnSourceId;
            *((_BYTE *)&v126 + v95->VidPnSourceId) = 1;
          }
          DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
            v98,
            &v95->PostComposition.SrcRect,
            &v95->PostComposition.DstRect);
          ++v94;
          --v29;
        }
        while ( v29 );
      }
      if ( v108 )
      {
        v29 = (char *)v108;
        v60 = v106;
        v61 = (char *)((char *)v114 - (char *)v106);
        do
        {
          v62 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v60 + (_QWORD)v61);
          if ( !v59 && !a6 && (v62->pPlaneAttributes->Flags & 4) != 0 )
          {
            v59 = 1;
            LayerIndex = v62->LayerIndex;
          }
          v63 = v62->VidPnSourceId;
          v64 = *(_QWORD *)(*((_QWORD *)this + 231) + 2792LL);
          v65 = (DISPLAY_SOURCE *)(*(_QWORD *)(v64 + 128) + 4000 * v63);
          if ( !*((_BYTE *)&v126 + v63) )
          {
            if ( !v59 )
            {
              DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v64 + 128) + 4000 * v63));
              LODWORD(v63) = v62->VidPnSourceId;
            }
            v58 = v63;
            *((_BYTE *)&v126 + (unsigned int)v63) = 1;
          }
          if ( !v59 && DXGDEVICE::UseCachedIndependentFlipParameters(this, v65, v62) )
          {
            DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v65, v62->LayerIndex);
          }
          else
          {
            pPlaneAttributes = v62->pPlaneAttributes;
            DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
              v65,
              v62->LayerIndex,
              *v106,
              pPlaneAttributes->Flags,
              &pPlaneAttributes->SrcRect,
              &pPlaneAttributes->DstRect,
              &pPlaneAttributes->ClipRect,
              pPlaneAttributes->Rotation,
              pPlaneAttributes->Blend,
              pPlaneAttributes->ColorSpace,
              pPlaneAttributes->SDRWhiteLevel);
          }
          v60 = ++v106;
          --v29;
        }
        while ( v29 );
      }
      v67 = v112;
      LODWORD(v10) = CheckMultiPlaneOverlayInternal3(
                       v58,
                       *((struct ADAPTER_RENDER **)this + 2),
                       *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 231) + 2792LL),
                       v112,
                       v117);
      if ( v59 )
      {
        DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(
          (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 231) + 2792LL) + 128LL) + 4000LL * v58),
          LayerIndex);
      }
      else if ( *v67 == (_DWORD)v29 )
      {
        v99 = (unsigned int)v29;
        v100 = &v126;
        do
        {
          if ( *(_BYTE *)v100 != (_BYTE)v29 )
            DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 231)
                                                                                              + 2792LL)
                                                                                  + 128LL)
                                                                      + 4000LL * v99));
          ++v99;
          v100 = (__int128 *)((char *)v100 + 1);
        }
        while ( v99 < 0x10 );
      }
      if ( (int)v10 >= 0 && (_BYTE)v101 )
        goto LABEL_77;
    }
    else
    {
      v67 = v112;
    }
    LogCheckMutiplaneOverlaySupport(v10, *v67, v108, v114, v109, v107, v113, *((struct ADAPTER_RENDER **)this + 2));
LABEL_77:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v115);
    v68 = v10;
    if ( v115[8] != (_BYTE)v29 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v115);
    goto LABEL_79;
  }
  v72 = ((__int64 (*)(void))PsGetCurrentProcess)();
  v73 = v11;
  v68 = -1073741801;
  WdLogSingleEntry3(3LL, v73, -1073741801LL, v72);
LABEL_83:
  if ( v122 != &v123 )
  {
    if ( v122 )
      ExFreePoolWithTag(v122, 0);
  }
  return v68;
}

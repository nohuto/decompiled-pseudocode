/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BBB3C
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BF100 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000F1B0 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00131CC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00134C8 (-SetCurrentVirtualMode@ADAPTER_DISPLAY@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001FA1C (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C01BB880 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01BB9EC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BC204 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C01BC270 (MonitorSetLastWireformatAndColorspace.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01BC39C (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01BD1A4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     DxgkQueryDmmInterface @ 0x1C01BEC10 (DxgkQueryDmmInterface.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C01BEC84 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C80AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01E4EE8 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E82D4 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E84CC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01E9C14 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C03493B4 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C03A98E0 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  volatile signed __int64 *v5; // r15
  __int64 v7; // rsi
  __int64 v8; // rax
  struct _LUID *v9; // rax
  __int64 v10; // rdi
  struct DXGADAPTER *v11; // r13
  char v12; // bl
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 DmmInterface; // rbx
  __int64 v15; // r9
  ADAPTER_DISPLAY *v16; // rcx
  int v17; // r15d
  unsigned int i; // ebx
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  int v23; // ecx
  __int64 v24; // rbx
  int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // r8
  __int64 v28; // r12
  int v29; // r15d
  __int64 v31; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __m128i v35; // xmm1
  __int64 v36; // xmm0_8
  UINT v37; // eax
  ADAPTER_DISPLAY *v38; // rcx
  int v39; // eax
  int v40; // eax
  unsigned __int8 v41; // cf
  int v42; // eax
  struct DXGPROCESS *v43; // rbx
  __int64 v44; // rax
  unsigned int v45; // edx
  bool v46; // sf
  __int64 v47; // rax
  __int64 v48; // r10
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int128 v53; // xmm0
  __int64 v54; // r8
  int DisplayId; // eax
  int v56; // eax
  struct DXGGLOBAL *Global; // rax
  int v58; // r8d
  struct DXGADAPTER *v59; // rdx
  char v60; // [rsp+40h] [rbp-C0h]
  _BYTE v61[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v62; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v63; // [rsp+48h] [rbp-B8h]
  DXGDEVICE *v64; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGPROCESS *v65; // [rsp+58h] [rbp-A8h]
  struct DXGADAPTER *v66[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v67[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h]
  void (__fastcall *v69)(__int64, __int64); // [rsp+80h] [rbp-80h]
  __int64 v70; // [rsp+88h] [rbp-78h]
  int v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  __int64 v73; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-58h]
  _BYTE v75[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v76; // [rsp+B8h] [rbp-48h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v77; // [rsp+C0h] [rbp-40h]
  __int128 v78; // [rsp+C8h] [rbp-38h]
  _D3DKMT_DISPLAYMODE v79; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v80[24]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v81[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v82[64]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v83[88]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v84[144]; // [rsp+1C0h] [rbp+C0h] BYREF

  v5 = 0LL;
  v66[0] = 0LL;
  v77 = a5;
  v7 = 340LL * a4;
  v74 = a4;
  v8 = *((_QWORD *)this + 8);
  v61[0] = 0;
  v65 = a2;
  v62 = a3;
  v9 = (struct _LUID *)(v7 + *(_QWORD *)(v8 + 48));
  v64 = 0LL;
  v63 = (__int64)v9;
  v10 = (__int64)&v9[10];
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v66, v9);
  v11 = v66[0];
  if ( !v66[0] )
  {
    LODWORD(DmmInterface) = -1073741811;
    WdLogSingleEntry4(
      2LL,
      0LL,
      *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
      -1073741811LL);
    goto LABEL_40;
  }
  v12 = *(_BYTE *)(*((_QWORD *)v66[0] + 349) + 288LL);
  v60 = v12;
  if ( v12 )
  {
    v59 = v66[0];
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 76) = 1;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v84, v59, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v84) >= 0
      && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*((ADAPTER_DISPLAY **)v11 + 349)) )
    {
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((ADAPTER_DISPLAY **)v11 + 349), 0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v84);
  }
  while ( 1 )
  {
    if ( v5 )
    {
      DxgkDestroyCddDeviceAndContextForCurrentSession(
        (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
        (struct DXGDEVICE *)v5);
      if ( _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
      v64 = 0LL;
    }
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                                             &v64,
                                             0LL,
                                             0LL,
                                             v12);
    LODWORD(DmmInterface) = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
        CddDeviceAndContextForCurrentSession);
      goto LABEL_40;
    }
    v5 = (volatile signed __int64 *)v64;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80, v64);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v75, (struct DXGPROCESS *)((char *)v65 + 376), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v75);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, (__int64)v5, 1, v15, 0);
    DmmInterface = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v81, 2u);
    if ( !DXGDEVICE::IsExecutionStateErrorState((DXGDEVICE *)v5) )
      break;
    COREACCESS::~COREACCESS((COREACCESS *)v83);
    COREACCESS::~COREACCESS((COREACCESS *)v82);
    if ( v76 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v75);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80);
    v12 = v60;
  }
  if ( (int)DmmInterface < 0 )
  {
    WdLogSingleEntry4(
      2LL,
      *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
      *((_QWORD *)this + 8),
      DmmInterface);
  }
  else
  {
    v72 = 0LL;
    DmmInterface = (int)DxgkQueryDmmInterface(v66[0]);
    if ( (int)DmmInterface < 0 )
    {
      WdLogSingleEntry3(
        2LL,
        *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
        *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
        DmmInterface);
    }
    else
    {
      v16 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 349);
      v17 = 1;
      for ( i = 0; i < *((_DWORD *)v16 + 24); v17 *= 2 )
      {
        if ( (v17 & *(_DWORD *)v10) != 0 )
        {
          v56 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v16, i);
          if ( v56 < 0 )
            WdLogSingleEntry4(
              2LL,
              i,
              *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
              *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
              v56);
          ADAPTER_DISPLAY::SetCurrentVirtualMode(*((ADAPTER_DISPLAY **)v11 + 349), i, 0LL);
          ADAPTER_DISPLAY::ProcessModeChange(*((ADAPTER_DISPLAY **)v11 + 349), i);
        }
        if ( (v17 & *(_DWORD *)(v10 + 4)) != 0 )
        {
          v48 = *((_QWORD *)this + 8);
          v49 = *(_QWORD *)(*((_QWORD *)v11 + 349) + 128LL);
          v50 = 4000LL * i;
          v51 = 296LL * *(unsigned int *)(*(_QWORD *)(v48 + 48) + 4 * (i + 85 * v74) + 8);
          v53 = *(_OWORD *)(v48 + v51 + 224);
          v78 = *(_OWORD *)(v49 + v50 + 688);
          v52 = v78;
          v65 = (struct DXGPROCESS *)v51;
          *(_OWORD *)(v49 + v50 + 688) = v53;
          v54 = *((_QWORD *)this + 8);
          if ( (_DWORD)v52 != *(_DWORD *)(v51 + v54 + 224)
            || __PAIR64__(DWORD2(v78), HIDWORD(v52)) != *(_QWORD *)(v51 + v54 + 228)
            || HIDWORD(v78) != *(_DWORD *)(v51 + v54 + 236) )
          {
            *(_DWORD *)(v10 + 44) |= v17;
          }
          DisplayId = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v11 + 349), i);
          *(_DWORD *)((char *)v65 + *((_QWORD *)this + 8) + 244) = DisplayId;
        }
        v16 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 349);
        ++i;
      }
      v19 = *((unsigned int *)this + 20);
      v20 = *((_QWORD *)this + 8);
      v21 = *((_DWORD *)this + 19) & 1;
      v68 = 0LL;
      v69 = 0LL;
      v70 = 0LL;
      v71 = 0;
      v67[0] = 0;
      v73 = 0LL;
      PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                   v20,
                                                   v66[0],
                                                   v21,
                                                   v19,
                                                   v62,
                                                   &v73);
      LODWORD(DmmInterface) = PathModalityForAdapterWithCoreAccessHeld;
      if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
      {
        WdLogSingleEntry4(
          2LL,
          *((_QWORD *)this + 8),
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
          PathModalityForAdapterWithCoreAccessHeld);
        v5 = (volatile signed __int64 *)v64;
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v67,
          v73,
          *(_QWORD *)(v72 + 64),
          (__int64)v66[0]);
        v5 = (volatile signed __int64 *)v64;
        DmmInterface = (int)DmmSetTimingsOnAdapter((__int64)v66[0], v68, v62, 1u, v10, v61, (__int64)v64, (__int64)v81);
        DisplayScenarioJournalSetCommitVidPnStatus(
          v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + 8LL,
          *(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 168);
        if ( (int)DmmInterface >= 0 )
        {
          if ( v67[0] )
            v69(v70, v68);
          v23 = *(_DWORD *)(v10 + 8);
          if ( (v23 & *(_DWORD *)(v10 + 12)) != 0 )
          {
            WdLogSingleEntry0(1LL);
            v23 = *(_DWORD *)(v10 + 8);
          }
          if ( (v23 | *(_DWORD *)(v10 + 40)) == v23 && (v23 & *(_DWORD *)(v10 + 40)) == *(_DWORD *)(v10 + 40) )
          {
            v24 = v63;
          }
          else
          {
            WdLogSingleEntry0(1LL);
            v24 = v63;
            v23 = *(_DWORD *)(v63 + 88);
          }
          v25 = *(_DWORD *)v10;
          if ( v23 != (v23 & (*(_DWORD *)v10 | *(_DWORD *)(v10 + 4))) )
          {
            WdLogSingleEntry0(1LL);
            v25 = *(_DWORD *)v10;
          }
          v26 = *(_DWORD *)(v10 + 12);
          if ( v26 != (v25 & v26) || (v26 & *(_DWORD *)(v10 + 4)) != 0 )
          {
            WdLogSingleEntry0(1LL);
            v26 = *(_DWORD *)(v24 + 92);
          }
          WdLogSingleEntry5(
            7LL,
            *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
            *(unsigned int *)(v10 + 8),
            *(unsigned int *)(v10 + 40),
            v26);
          v27 = *((_QWORD *)v11 + 349);
          v28 = 0LL;
          if ( *(_DWORD *)(v27 + 96) )
          {
            do
            {
              v29 = 1 << v28;
              if ( ((1 << v28) & *(_DWORD *)(v10 + 84)) != 0 )
              {
                *(_DWORD *)(v10 + 12) |= v29 & *(_DWORD *)v10;
                CCD_TOPOLOGY::MarkPathsApplyFailure(
                  this,
                  (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
                  v28,
                  *(_DWORD *)(v10 + 4 * v28 + 88));
              }
              else if ( (v29 & *(_DWORD *)(v10 + 4)) != 0 )
              {
                v65 = (struct DXGPROCESS *)*((_QWORD *)this + 8);
                v31 = *(unsigned int *)(*((_QWORD *)v65 + 6) + 4 * ((unsigned int)v28 + 85 * v74) + 8);
                v63 = 296 * v31;
                DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((ADAPTER_DISPLAY *)v27, v28);
                v33 = *((_QWORD *)this + 8);
                v34 = 296 * v31;
                v35 = *((__m128i *)DisplayModeInfo + 1);
                *(_OWORD *)&v79.Width = *(_OWORD *)DisplayModeInfo;
                v36 = *((_QWORD *)DisplayModeInfo + 4);
                *((_DWORD *)&v79.Flags + 1) = *((_DWORD *)DisplayModeInfo + 10);
                *(__m128i *)&v79.RefreshRate.Numerator = v35;
                *(_QWORD *)&v79.DisplayFixedOutput = v36;
                if ( ((_mm_srli_si128(v35, 8).m128i_i32[1] - 2) & 0xFFFFFFFD) != 0 )
                {
                  v79.Width = *(_DWORD *)(v34 + v33 + 208);
                  v37 = *(_DWORD *)(v34 + v33 + 212);
                }
                else
                {
                  v79.Width = *(_DWORD *)(v34 + v33 + 212);
                  v37 = *(_DWORD *)(v34 + v33 + 208);
                }
                v38 = (ADAPTER_DISPLAY *)*((_QWORD *)v11 + 349);
                v79.Height = v37;
                ADAPTER_DISPLAY::SetCurrentVirtualMode(v38, v28, &v79);
                v39 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*((ADAPTER_DISPLAY **)v11 + 349), v28);
                if ( v39 < 0 )
                  WdLogSingleEntry4(
                    7LL,
                    (unsigned int)v28,
                    *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
                    *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
                    v39);
                if ( v60
                  || (v40 = *(_DWORD *)(v10 + 40),
                      v41 = _bittest(&v40, v28),
                      v42 = *(_DWORD *)(v10 + 8),
                      (!v41 & _bittest(&v42, v28)) != 0) )
                {
                  Global = DXGGLOBAL_GetGlobal();
                  do
                    v58 = _InterlockedIncrement((volatile signed __int32 *)Global + 352);
                  while ( !v58 );
                  v43 = v65;
                  *(_DWORD *)((char *)v65 + v63 + 244) = v58;
                  ADAPTER_DISPLAY::SetDisplayId(*((ADAPTER_DISPLAY **)v11 + 349), v28, v58);
                }
                else
                {
                  v43 = v65;
                }
                v44 = v63;
                if ( (v29 & *(_DWORD *)(v10 + 68)) != 0 )
                  *(_QWORD *)((char *)v43 + v63 + 252) = 0LL;
                v45 = *(_DWORD *)((char *)v43 + v44 + 84);
                v62 = 0;
                v46 = (int)DmmGetTargetLinkTrainingStatus(
                             (PERESOURCE *)v66[0],
                             v45,
                             (enum _DXGK_CONNECTION_STATUS *)&v62) < 0;
                v47 = v63;
                if ( !v46 && v62 == 12 )
                  *(_DWORD *)((char *)v43 + v63 + 248) = 259;
                MonitorSetLastWireformatAndColorspace(
                  v66[0],
                  *(unsigned int *)((char *)v43 + v47 + 84),
                  *(unsigned int *)((char *)v43 + v47 + 260),
                  *(unsigned int *)((char *)v43 + v47 + 264));
              }
              if ( ((*(_DWORD *)(v10 + 60) | *(_DWORD *)(v10 + 84)) & v29) != 0 )
                ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*((ADAPTER_DISPLAY **)v11 + 349), v28);
              v27 = *((_QWORD *)v11 + 349);
              v28 = (unsigned int)(v28 + 1);
            }
            while ( (unsigned int)v28 < *(_DWORD *)(v27 + 96) );
            v5 = (volatile signed __int64 *)v64;
          }
          if ( v60 )
            *(_BYTE *)(v27 + 288) = 0;
          DmmHandleSetTimingsResult(v66[0], (struct _DMM_SET_TIMING_RESULT *)v61, v77);
          LODWORD(DmmInterface) = 0;
          goto LABEL_35;
        }
        WdLogSingleEntry5(
          2LL,
          v68,
          *((_QWORD *)this + 8),
          *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7 + 4),
          *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 48LL) + v7),
          DmmInterface);
        if ( v67[0] )
          v69(v70, v68);
      }
    }
  }
  *(_DWORD *)(v10 + 84) = *(_DWORD *)v10 | *(_DWORD *)(v10 + 4);
  FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v10, DmmInterface);
  *(_DWORD *)(v10 + 12) = *(_DWORD *)v10;
  CCD_TOPOLOGY::MarkPathsApplyFailure(
    this,
    (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 48LL)),
    0xFFFFFFFF,
    DmmInterface);
LABEL_35:
  COREACCESS::~COREACCESS((COREACCESS *)v83);
  COREACCESS::~COREACCESS((COREACCESS *)v82);
  if ( v76 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v75);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v80);
  if ( v5 && _InterlockedExchangeAdd64(v5 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v64 + 2), v64);
LABEL_40:
  DXGADAPTER_REFERENCE::Assign(v66, 0LL);
  return (unsigned int)DmmInterface;
}

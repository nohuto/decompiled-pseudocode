/*
 * XREFs of ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE364
 * Callers:
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0131CF0 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0008728 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0008794 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087D0 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00098FC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EAC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00116C4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00196CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001AA94 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00DE1F8 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkQueryDmmInterface @ 0x1C00DE2F0 (DxgkQueryDmmInterface.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE9BC (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     MonitorSetLastWireformatAndColorspace @ 0x1C00DEA28 (MonitorSetLastWireformatAndColorspace.c)
 *     ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00E01F4 (-BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DI.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012F174 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z @ 0x1C012F720 (-DmmGetTargetLinkTrainingStatus@@YAJPEAXIPEAW4_DXGK_CONNECTION_STATUS@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012F7C0 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C013D524 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C013ECC4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0156334 (-PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01576CC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0158724 (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C029B5A8 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C02E669C (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopologyOnAdapter(
        CCD_TOPOLOGY *this,
        struct DXGFASTMUTEX *const *a2,
        int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v7; // r14
  volatile signed __int64 *v8; // r15
  __int64 v9; // rax
  struct _LUID *v10; // rax
  struct D3DKMT_VIDPN_SOURCE_MASKS *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // r13
  char v15; // si
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  ADAPTER_DISPLAY *v26; // rcx
  unsigned int v27; // esi
  int i; // r15d
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rcx
  int PathModalityForAdapterWithCoreAccessHeld; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // r8
  __int64 v44; // rsi
  int v45; // r12d
  __int64 v46; // rdx
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned __int8 v52; // cf
  unsigned int v53; // eax
  __int64 v54; // rax
  unsigned int v55; // edx
  bool v56; // sf
  __int64 v57; // rax
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // r10
  __int128 v61; // xmm1
  __int64 v62; // r12
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r12
  struct DXGGLOBAL *Global; // rax
  int v70; // r8d
  _QWORD *v71; // rax
  struct DXGADAPTER *v72; // rdx
  unsigned int v73; // r8d
  __int64 v74; // rdx
  __int64 v75; // rdx
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  char v85; // [rsp+40h] [rbp-C0h]
  _BYTE v86[7]; // [rsp+41h] [rbp-BFh] BYREF
  DXGDEVICE *v87; // [rsp+48h] [rbp-B8h]
  __int64 v88; // [rsp+50h] [rbp-B0h]
  int v89; // [rsp+58h] [rbp-A8h]
  int v90; // [rsp+5Ch] [rbp-A4h] BYREF
  struct DXGADAPTER *v91[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+70h] [rbp-90h] BYREF
  __int64 v93; // [rsp+78h] [rbp-88h] BYREF
  __int64 v94; // [rsp+80h] [rbp-80h]
  _BYTE v95[8]; // [rsp+88h] [rbp-78h] BYREF
  char v96; // [rsp+90h] [rbp-70h]
  _BYTE v97[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v98; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v99)(__int64, __int64); // [rsp+A8h] [rbp-58h]
  __int64 v100; // [rsp+B0h] [rbp-50h]
  int v101; // [rsp+B8h] [rbp-48h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v102; // [rsp+C0h] [rbp-40h]
  __int128 v103; // [rsp+C8h] [rbp-38h]
  _BYTE v104[24]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v105[8]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v106[64]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v107[88]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v108[144]; // [rsp+190h] [rbp+90h] BYREF

  v102 = a5;
  v7 = 336LL * a4;
  v94 = a4;
  v8 = 0LL;
  v9 = *((_QWORD *)this + 8);
  v89 = a3;
  v87 = 0LL;
  v91[0] = 0LL;
  v10 = (struct _LUID *)(v7 + *(_QWORD *)(v9 + 40));
  v86[0] = 0;
  v88 = (__int64)v10;
  v11 = (struct D3DKMT_VIDPN_SOURCE_MASKS *)&v10[10];
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v91, v10);
  v14 = v91[0];
  if ( v91[0] )
  {
    v15 = *(_BYTE *)(*((_QWORD *)v91[0] + 334) + 248LL);
    v85 = v15;
    if ( v15 )
    {
      v72 = v91[0];
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 76) = 1;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v108, v72, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v108, v73 + 1, v73) >= 0
        && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*((ADAPTER_DISPLAY **)v14 + 334)) )
      {
        ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(*((ADAPTER_DISPLAY **)v14 + 334), 0LL);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v108, v74);
    }
    while ( 1 )
    {
      if ( v8 )
      {
        DxgkDestroyCddDeviceAndContextForCurrentSession(
          (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
          (struct DXGDEVICE *)v8);
        if ( _InterlockedExchangeAdd64(v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
        v87 = 0LL;
      }
      CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                               (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                                               v15);
      v19 = CddDeviceAndContextForCurrentSession;
      if ( CddDeviceAndContextForCurrentSession < 0 )
      {
        v71 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
        v71[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
        v71[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
        v71[5] = v19;
        goto LABEL_84;
      }
      v8 = (volatile signed __int64 *)v87;
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v104, v87);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v95, a2[42], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v95);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v105, (__int64)v87, 1, v20, 0);
      v19 = (int)COREDEVICEACCESS::AcquireExclusive((__int64)v105, 2LL);
      if ( !DXGDEVICE::IsExecutionStateErrorState(v87) )
        break;
      COREACCESS::~COREACCESS((COREACCESS *)v107);
      COREACCESS::~COREACCESS((COREACCESS *)v106);
      if ( v96 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95, v75);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v104);
      v15 = v85;
    }
    if ( (int)v19 < 0 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v76[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
      v76[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
      v76[5] = *((_QWORD *)this + 8);
      v76[6] = v19;
    }
    else
    {
      v92 = 0LL;
      v23 = DxgkQueryDmmInterface(v91[0], v21, &v92);
      v19 = v23;
      if ( v23 >= 0 )
      {
        v26 = (ADAPTER_DISPLAY *)*((_QWORD *)v14 + 334);
        v27 = 0;
        for ( i = 1; v27 < *((_DWORD *)v26 + 20); i *= 2 )
        {
          if ( (i & *(_DWORD *)v11) != 0 )
          {
            v65 = ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(v26, v27);
            v68 = v65;
            if ( v65 < 0 )
            {
              v77 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66);
              v77[3] = v27;
              v77[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
              v77[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
              v77[6] = v68;
              WdLogEvent5_WdError(v77);
            }
            ADAPTER_DISPLAY::ProcessModeChange(*((ADAPTER_DISPLAY **)v14 + 334), v27);
          }
          if ( (i & *((_DWORD *)v11 + 1)) != 0 )
          {
            v58 = *((_QWORD *)this + 8);
            v59 = *(_QWORD *)(*((_QWORD *)v14 + 334) + 112LL);
            v60 = 3968LL * v27;
            v61 = *(_OWORD *)(v59 + v60 + 652);
            v62 = 272LL * *(unsigned int *)(*(_QWORD *)(v58 + 40) + 4 * (v27 + 84 * v94) + 8);
            v63 = *(_QWORD *)(v59 + v60 + 652);
            *(_OWORD *)(v59 + v60 + 652) = *(_OWORD *)(v58 + v62 + 216);
            v64 = *((_QWORD *)this + 8);
            v103 = v61;
            if ( (_DWORD)v63 != *(_DWORD *)(v62 + v64 + 216)
              || __PAIR64__(DWORD2(v103), HIDWORD(v63)) != *(_QWORD *)(v62 + v64 + 220)
              || HIDWORD(v103) != *(_DWORD *)(v62 + v64 + 228) )
            {
              *((_DWORD *)v11 + 11) |= i;
              v64 = *((_QWORD *)this + 8);
            }
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 334) + 112LL) + v60 + 644) = *(_QWORD *)(v62 + v64 + 200);
            *(_DWORD *)(v62 + *((_QWORD *)this + 8) + 236) = ADAPTER_DISPLAY::GetDisplayId(
                                                               *((ADAPTER_DISPLAY **)v14 + 334),
                                                               v27);
          }
          v26 = (ADAPTER_DISPLAY *)*((_QWORD *)v14 + 334);
          ++v27;
        }
        v29 = *((unsigned int *)this + 20);
        v30 = *((_DWORD *)this + 19) & 1;
        v98 = 0LL;
        v99 = 0LL;
        v100 = 0LL;
        v101 = 0;
        v93 = 0LL;
        v31 = *((_QWORD *)this + 8);
        v97[0] = 0;
        PathModalityForAdapterWithCoreAccessHeld = BmlGetPathModalityForAdapterWithCoreAccessHeld(
                                                     v31,
                                                     v91[0],
                                                     v30,
                                                     v29,
                                                     v89,
                                                     &v93);
        v19 = PathModalityForAdapterWithCoreAccessHeld;
        if ( PathModalityForAdapterWithCoreAccessHeld < 0 )
        {
          v78 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
          v78[3] = *((_QWORD *)this + 8);
          v78[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
          v78[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
          v78[6] = v19;
          WdLogEvent5_WdError(v78);
          v8 = (volatile signed __int64 *)v87;
        }
        else
        {
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
            (__int64)v97,
            v93,
            *(_QWORD *)(v92 + 64),
            (__int64)v91[0]);
          v8 = (volatile signed __int64 *)v87;
          v35 = v98;
          v19 = (int)DmmSetTimingsOnAdapter(v91[0], v98, (unsigned int)v89, 1LL, v11, v86, v87, v105);
          DisplayScenarioJournalSetCommitVidPnStatus(
            v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL,
            *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 164);
          if ( (int)v19 < 0 )
          {
            v79 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
            v79[3] = v35;
            v79[4] = *((_QWORD *)this + 8);
            v79[5] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
            v79[6] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
            v79[7] = v19;
            WdLogEvent5_WdError(v79);
            if ( v97[0] )
              v99(v100, v35);
          }
          else
          {
            if ( v97[0] )
              v99(v100, v35);
            v38 = *((unsigned int *)v11 + 2);
            if ( ((unsigned int)v38 & *((_DWORD *)v11 + 3)) != 0 )
            {
              v80 = WdLogNewEntry5_WdAssertion(v38, v36);
              WdLogEvent5_WdAssertion(v80);
              v38 = *((unsigned int *)v11 + 2);
            }
            v39 = *((unsigned int *)v11 + 10);
            if ( ((unsigned int)v38 | *((_DWORD *)v11 + 10)) != (_DWORD)v38
              || ((unsigned int)v38 & (unsigned int)v39) != (_DWORD)v39 )
            {
              v81 = WdLogNewEntry5_WdAssertion(v38, v39);
              WdLogEvent5_WdAssertion(v81);
              v38 = *(unsigned int *)(v88 + 88);
            }
            v40 = *(unsigned int *)v11;
            if ( (_DWORD)v38 != ((unsigned int)v38 & ((unsigned int)v40 | *((_DWORD *)v11 + 1))) )
            {
              v82 = WdLogNewEntry5_WdAssertion(v38, v40);
              WdLogEvent5_WdAssertion(v82);
              v40 = *(unsigned int *)v11;
            }
            v41 = *((unsigned int *)v11 + 3);
            if ( (_DWORD)v41 != ((unsigned int)v40 & *((_DWORD *)v11 + 3))
              || ((unsigned int)v41 & *((_DWORD *)v11 + 1)) != 0 )
            {
              v83 = WdLogNewEntry5_WdAssertion(v41, v40);
              WdLogEvent5_WdAssertion(v83);
            }
            v42 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
            v42[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
            v42[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
            v42[5] = *((unsigned int *)v11 + 2);
            v42[6] = *((unsigned int *)v11 + 10);
            v42[7] = *((unsigned int *)v11 + 3);
            WdLogEvent5_WdDmmEvent(v42);
            v43 = *((_QWORD *)v14 + 334);
            v44 = 0LL;
            if ( *(_DWORD *)(v43 + 80) )
            {
              do
              {
                v45 = 1 << v44;
                if ( ((1 << v44) & *((_DWORD *)v11 + 20)) != 0 )
                {
                  *((_DWORD *)v11 + 3) |= v45 & *(_DWORD *)v11;
                  CCD_TOPOLOGY::MarkPathsApplyFailure(
                    this,
                    (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                    v44,
                    *((_DWORD *)v11 + v44 + 21));
                }
                else if ( (v45 & *((_DWORD *)v11 + 1)) != 0 )
                {
                  v48 = *((_QWORD *)this + 8);
                  v88 = 272LL * *(unsigned int *)(*(_QWORD *)(v48 + 40) + 4 * ((unsigned int)v44 + 84 * v94) + 8);
                  v89 = ADAPTER_DISPLAY::SetCopyProtectionWithLock((ADAPTER_DISPLAY *)v43, v44);
                  if ( v89 < 0 )
                  {
                    v84 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
                    v84[3] = (unsigned int)v44;
                    v84[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
                    v84[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
                    v84[6] = v89;
                    WdLogEvent5_WdDmmEvent(v84);
                  }
                  if ( v85
                    || (v51 = *((_DWORD *)v11 + 10),
                        v52 = _bittest((const int *)&v51, v44),
                        v53 = *((_DWORD *)v11 + 2),
                        LOBYTE(v50) = !v52,
                        (!v52 & _bittest((const int *)&v53, v44)) != 0) )
                  {
                    Global = DXGGLOBAL::GetGlobal(v50, v49);
                    do
                      v70 = _InterlockedIncrement((volatile signed __int32 *)Global + 288);
                    while ( !v70 );
                    *(_DWORD *)(v88 + v48 + 236) = v70;
                    ADAPTER_DISPLAY::SetDisplayId(*((ADAPTER_DISPLAY **)v14 + 334), (unsigned int)v44, v70);
                  }
                  v54 = v88;
                  if ( (v45 & *((_DWORD *)v11 + 16)) != 0 )
                    *(_QWORD *)(v88 + v48 + 244) = 0LL;
                  v55 = *(_DWORD *)(v54 + v48 + 76);
                  v90 = 0;
                  v56 = DmmGetTargetLinkTrainingStatus(v91[0], v55, (enum _DXGK_CONNECTION_STATUS *)&v90) < 0;
                  v57 = v88;
                  if ( !v56 && v90 == 12 )
                    *(_DWORD *)(v88 + v48 + 240) = 259;
                  MonitorSetLastWireformatAndColorspace(
                    v91[0],
                    *(unsigned int *)(v57 + v48 + 76),
                    *(unsigned int *)(v57 + v48 + 252),
                    *(unsigned int *)(v57 + v48 + 256));
                }
                if ( ((*((_DWORD *)v11 + 14) | *((_DWORD *)v11 + 20)) & v45) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(*((ADAPTER_DISPLAY **)v14 + 334), v44);
                v43 = *((_QWORD *)v14 + 334);
                v44 = (unsigned int)(v44 + 1);
              }
              while ( (unsigned int)v44 < *(_DWORD *)(v43 + 80) );
              v8 = (volatile signed __int64 *)v87;
            }
            if ( v85 )
              *(_BYTE *)(v43 + 248) = 0;
            DmmHandleSetTimingsResult(v91[0], (struct _DMM_SET_TIMING_RESULT *)v86, v102);
            LODWORD(v19) = 0;
          }
        }
        goto LABEL_34;
      }
      v76 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v76[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
      v76[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
      v76[5] = v19;
    }
    WdLogEvent5_WdError(v76);
LABEL_34:
    if ( (int)v19 < 0 )
    {
      *((_DWORD *)v11 + 20) = *(_DWORD *)v11 | *((_DWORD *)v11 + 1);
      FillFailedStatus(v11, v19);
      *((_DWORD *)v11 + 3) = *(_DWORD *)v11;
      CCD_TOPOLOGY::MarkPathsApplyFailure(
        this,
        (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
        0xFFFFFFFF,
        v19);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v107);
    COREACCESS::~COREACCESS((COREACCESS *)v106);
    if ( v96 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v95, v46);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v104);
    if ( v8 && _InterlockedExchangeAdd64(v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v87 + 2), v87);
    goto LABEL_41;
  }
  v71 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
  v71[3] = 0LL;
  LODWORD(v19) = -1073741811;
  v71[4] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
  v71[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
  v71[6] = -1073741811LL;
LABEL_84:
  WdLogEvent5_WdError(v71);
LABEL_41:
  DXGADAPTER_REFERENCE::Assign(v91, 0LL);
  return (unsigned int)v19;
}

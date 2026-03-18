/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011D9C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0013194 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0013DE8 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C001DA54 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ @ 0x1C001EE1C (-UsingDelayCreateCddAllocation@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C005F980 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A9DC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01A62D4 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BCB6C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01C4B58 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C01E76A8 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0399D00 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0399E6C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C039D724 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03A5824 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A7AE0 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        unsigned int a2,
        int a3,
        DMMVIDPN *a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        unsigned int *a11,
        struct DXGDEVICE *a12,
        __int64 a13,
        unsigned __int8 a14)
{
  __int64 v15; // r9
  __int64 v16; // r14
  int v17; // ebx
  int v18; // ecx
  __int64 v19; // r14
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v20; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v22; // r9
  unsigned int v23; // ebx
  struct DMMVIDPN *v24; // rbx
  unsigned int v25; // edi
  __int64 v26; // rax
  int v27; // r15d
  char *v28; // r12
  DMMVIDPN *v29; // r13
  unsigned int *Path; // r13
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int updated; // eax
  unsigned int i; // r12d
  DMMVIDPNPRESENTPATH *v34; // rax
  ADAPTER_DISPLAY *v35; // rcx
  __int64 v36; // r15
  int j; // r12d
  int v38; // eax
  int v39; // r13d
  DMMVIDPNTOPOLOGY *v40; // rbx
  unsigned int v41; // r13d
  unsigned int *v42; // rdi
  __int64 v43; // rdx
  __int64 *v44; // r13
  bool IsSourceInTopology; // al
  void *v46; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  ADAPTER_DISPLAY *v50; // rcx
  bool v51; // zf
  __int64 v52; // rdi
  int v53; // eax
  _QWORD *v54; // rax
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  ADAPTER_DISPLAY *v59; // rcx
  bool v60; // zf
  VIDPN_MGR *v61; // r13
  int v62; // eax
  int v63; // eax
  unsigned int v64; // r12d
  int k; // r13d
  __int64 v66; // rcx
  unsigned int v67; // eax
  char v68; // di
  int v69; // eax
  __int64 v70; // rdx
  unsigned int m; // r15d
  __int64 v72; // r13
  const struct _DXGK_DISPLAYMODE_INFO *v73; // rax
  DMMVIDPNPRESENTPATH *v74; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v75; // rdi
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v76; // r9d
  int v77; // eax
  void *v78; // rdi
  unsigned int v79; // r15d
  DMMVIDPNTOPOLOGY **v80; // rdi
  int v81; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v83; // r11
  __int64 v84; // r8
  char *v85; // r9
  __int64 v86; // r15
  struct COREDEVICEACCESS *v87; // r9
  struct DXGDEVICE *v88; // r10
  int CddAllocations; // eax
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  int v91; // ecx
  ADAPTER_DISPLAY *v92; // rcx
  bool v93; // zf
  VIDPN_MGR *v94; // r15
  int v95; // eax
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // r12
  int v101; // r15d
  int v102; // eax
  void *v103; // r13
  struct DXGADAPTERALLOCATION *v104; // rax
  unsigned int v105; // edi
  int v106; // eax
  __int64 v107; // rdx
  int v108; // edi
  unsigned __int8 v109; // al
  int v110; // edi
  __int64 v111; // rax
  unsigned int v112; // eax
  __int64 v113; // rdi
  __int64 v115; // r8
  __int64 v116; // rbx
  unsigned int *v117; // rdx
  int v118; // r9d
  unsigned int v119; // ecx
  unsigned int v120; // ecx
  signed __int64 v121; // rax
  __int64 v122; // r8
  int v123; // r9d
  char v124; // cl
  __int64 v125; // r10
  __int64 v126; // r11
  __int64 v128; // [rsp+20h] [rbp-E0h]
  int v129; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v130; // [rsp+50h] [rbp-B0h] BYREF
  char v131; // [rsp+51h] [rbp-AFh]
  char v132; // [rsp+52h] [rbp-AEh]
  unsigned int v133; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v134; // [rsp+58h] [rbp-A8h] BYREF
  int v135; // [rsp+60h] [rbp-A0h]
  int v136; // [rsp+68h] [rbp-98h]
  unsigned int v137; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v138; // [rsp+70h] [rbp-90h]
  int v139; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v140; // [rsp+80h] [rbp-80h]
  DMMVIDPN *v141; // [rsp+88h] [rbp-78h]
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v142; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v143; // [rsp+98h] [rbp-68h] BYREF
  struct DXGDEVICE *v144; // [rsp+A0h] [rbp-60h]
  _BYTE v145[24]; // [rsp+A8h] [rbp-58h] BYREF
  DMMVIDPNTOPOLOGY *v146; // [rsp+C0h] [rbp-40h]
  _DWORD *v147; // [rsp+C8h] [rbp-38h]
  __int64 v148; // [rsp+D0h] [rbp-30h]
  __int64 v149; // [rsp+D8h] [rbp-28h]
  unsigned int *v150; // [rsp+E0h] [rbp-20h]
  __int128 v151; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v152[80]; // [rsp+100h] [rbp+0h] BYREF

  v149 = a6;
  v147 = a9;
  v148 = a10;
  v150 = a11;
  v144 = a12;
  v136 = a3;
  v137 = a2;
  v140 = a1;
  *(_QWORD *)&v151 = a13;
  v141 = a4;
  v133 = 0;
  memset(v152, 0, sizeof(v152));
  v16 = *((_QWORD *)a1 + 1);
  v134 = 0LL;
  v135 = 0;
  v130 = 0;
  v131 = 0;
  if ( !v16 )
  {
    WdLogSingleEntry0(1LL);
    v16 = *((_QWORD *)a1 + 1);
  }
  v17 = a8[6];
  v18 = a8[14] | a8[3];
  v19 = *(_QWORD *)(v16 + 16);
  v139 = v17;
  if ( (v18 & v17) != 0 )
    WdLogSingleEntry0(1LL);
  if ( (v17 & a8[5] & a8[2]) != (v17 & a8[2]) )
    WdLogSingleEntry0(1LL);
  v142 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)operator new[](0x1F0uLL, 0x4E506456u, 256LL, v15);
  v20 = v142;
  if ( !v142 )
  {
    WdLogSingleEntry2(6LL, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404));
    v23 = -1073741801;
    goto LABEL_174;
  }
  operator delete(0LL);
  v143 = 0LL;
  ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(a1, (__int64 *)&v143);
  v23 = ClientVidPnFromLastClientCommitedVidPn;
  if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
  {
    v24 = v143;
    v25 = 0;
    v26 = *(_QWORD *)(v19 + 2792);
    v27 = 1;
    v28 = (char *)v143 + 96;
    v146 = (struct DMMVIDPN *)((char *)v143 + 96);
    if ( *(_DWORD *)(v26 + 96) )
    {
      do
      {
        if ( (v27 & a8[10]) != 0 )
        {
          v29 = v141;
          if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY **)v141 + 12, v25, 0LL, &v133) < 0
            || v133 == -1 )
          {
            WdLogSingleEntry0(1LL);
          }
          Path = (unsigned int *)DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)v29 + 96), v25, v133);
          if ( !Path )
            WdLogSingleEntry0(1LL);
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v19 + 2792), v25);
          *(_OWORD *)v152 = *(_OWORD *)DisplayModeInfo;
          *(_OWORD *)&v152[16] = *((_OWORD *)DisplayModeInfo + 1);
          *(_OWORD *)&v152[32] = *((_OWORD *)DisplayModeInfo + 2);
          *(_OWORD *)&v152[48] = *((_OWORD *)DisplayModeInfo + 3);
          *(_OWORD *)&v152[64] = *((_OWORD *)DisplayModeInfo + 4);
          *(_DWORD *)&v152[28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(Path[29]);
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
          if ( updated < 0 )
          {
            WdLogSingleEntry3(2LL, v25, v28, updated);
            a8[10] &= ~v27;
            a8[2] |= v27;
          }
          else
          {
            for ( i = 0; ; ++i )
            {
              if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY **)v24 + 12, v25, i, &v133) < 0 )
                WdLogSingleEntry0(1LL);
              if ( v133 == -1 )
                break;
              v34 = DMMVIDPNTOPOLOGY::FindPath((struct DMMVIDPN *)((char *)v24 + 96), v25, v133);
              v138 = v34;
              if ( !v34 )
              {
                WdLogSingleEntry0(1LL);
                v34 = v138;
              }
              DMMVIDPNPRESENTPATH::PinContentRotation(v34, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)Path[29]);
            }
            v28 = (char *)v24 + 96;
          }
        }
        ++v25;
        v27 *= 2;
      }
      while ( v25 < *(_DWORD *)(*(_QWORD *)(v19 + 2792) + 96LL) );
    }
LABEL_28:
    v35 = *(ADAPTER_DISPLAY **)(v19 + 2792);
    v36 = 0LL;
    for ( j = 1; (unsigned int)v36 < *((_DWORD *)v35 + 24); j *= 2 )
    {
      if ( (j & a8[21]) == 0 )
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v35, v36)
          && (((a8[14] | a8[3] | a8[2]) & j) != 0 || (j & a8[5]) == 0)
          && (v38 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v19 + 2792), v36, 0, 2048, a14),
              v39 = v38,
              v38 < 0) )
        {
          WdLogSingleEntry4(2LL, (unsigned int)v36, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404), v38);
          a8[21] |= j;
          a8[v36 + 22] = v39;
        }
        else
        {
          if ( (j & a8[3]) != 0 || v131 && (j & a8[2]) != 0 || *((_BYTE *)v140 + 520) )
          {
            ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
              (__int64)v145,
              (__int64)v24 + 152,
              2u,
              v22,
              v128,
              *((_QWORD *)v24 + 17));
            v58 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v24 + 96), v36);
            if ( (int)(v58 + 0x80000000) >= 0 && v58 != -1071774919 )
LABEL_61:
              WdLogSingleEntry0(1LL);
LABEL_62:
            ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v145, v57);
LABEL_63:
            v51 = (j & a8[3]) == 0;
            LODWORD(v134) = v134 & 0xFFFFFF50 | v136 & 0xF | 0x50;
            v59 = *(ADAPTER_DISPLAY **)(v19 + 2792);
            v135 = *((_DWORD *)v59 + 104);
            BYTE4(v134) = (BYTE4(v134) & 0xFC | ((j & a8[3]) == 0)) ^ ((v137 >> 14) ^ (BYTE4(v134) | v51)) & 4;
            if ( (j & a8[6]) != 0 )
              v60 = ADAPTER_DISPLAY::IsVidPnSourceActive(v59, v36) == 0;
            else
              v60 = (j & a8[5]) == 0;
            v61 = v140;
            LOBYTE(v129) = v60;
            v62 = VIDPN_MGR::CommitVidPn(
                    v140,
                    (unsigned __int64)v24,
                    0LL,
                    v36,
                    D3DKMDT_MCC_IGNORE,
                    0,
                    v129,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v134,
                    &v130);
            if ( v62 < 0 )
              WdLogSingleEntry4(2LL, (unsigned int)v36, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404), v62);
            if ( v144 && ((j & a8[3]) != 0 || *((_BYTE *)v61 + 520)) )
            {
              v63 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2792), v144, v36);
              if ( v63 < 0 )
                WdLogSingleEntry4(2LL, (unsigned int)v36, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404), v63);
            }
            goto LABEL_73;
          }
          if ( (j & a8[14]) != 0 )
          {
            v40 = v146;
            v41 = 0;
            v42 = (unsigned int *)(v148 + 4LL * (unsigned int)(16 * v36));
            do
            {
              if ( *v42 == -1 )
                break;
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v145,
                ((unsigned __int64)v40 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v40 >> 64),
                2u,
                v22,
                v128,
                1LL);
              if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v40, v36, *v42, 0LL) < 0 )
                WdLogSingleEntry0(1LL);
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v145,
                v43);
              ++v41;
              ++v42;
            }
            while ( v41 < 0x10 );
            v44 = (__int64 *)v40;
            IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v40, v36);
            v24 = v143;
            if ( !IsSourceInTopology )
              goto LABEL_63;
            v46 = 0LL;
            if ( *(_QWORD *)(v19 + 2800) )
            {
              DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                             *(DXGADAPTER ***)(v19 + 2792),
                                             v36);
              if ( !DisplayedPrimaryAllocation
                || (v49 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v49 & 0x10) != 0) )
              {
                v52 = (unsigned int)v36;
LABEL_56:
                v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v48);
                v54[3] = v52;
                v54[4] = *(int *)(v19 + 408);
                v54[5] = *(unsigned int *)(v19 + 404);
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v145,
                  (__int64)(v44 + 7),
                  2u,
                  v55,
                  v128,
                  v44[5]);
                v56 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v44, v36);
                if ( (int)(v56 + 0x80000000) >= 0 && v56 != -1071774919 )
                  goto LABEL_61;
                goto LABEL_62;
              }
              v46 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
            }
            LODWORD(v134) = v134 & 0xFFFFFF40 | v136 & 0xF | 0x40;
            v50 = *(ADAPTER_DISPLAY **)(v19 + 2792);
            v135 = *((_DWORD *)v50 + 104);
            BYTE4(v134) = BYTE4(v134) & 0xF9 | (v137 >> 14) & 4 | 1;
            if ( (j & a8[6]) != 0 )
              v51 = ADAPTER_DISPLAY::IsVidPnSourceActive(v50, v36) == 0;
            else
              v51 = (j & a8[5]) == 0;
            LOBYTE(v129) = v51;
            v53 = VIDPN_MGR::CommitVidPn(
                    v140,
                    (unsigned __int64)v24,
                    v46,
                    v36,
                    D3DKMDT_MCC_ENFORCE,
                    0,
                    v129,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v134,
                    &v130);
            if ( v53 < 0 )
            {
              v52 = (unsigned int)v36;
              WdLogSingleEntry4(2LL, (unsigned int)v36, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404), v53);
              goto LABEL_56;
            }
          }
        }
      }
LABEL_73:
      v35 = *(ADAPTER_DISPLAY **)(v19 + 2792);
      v36 = (unsigned int)(v36 + 1);
    }
    v64 = 0;
    for ( k = 1; ; k *= 2 )
    {
      v66 = *(_QWORD *)(v19 + 2792);
      LODWORD(v138) = k;
      v67 = *(_DWORD *)(v66 + 96);
      if ( v64 >= v67 )
      {
        v100 = 0LL;
        v101 = 1;
        if ( !v67 )
        {
LABEL_163:
          if ( a5 )
          {
            v115 = 0LL;
            v116 = v149;
            do
            {
              v117 = (unsigned int *)(v115 + v116 + 32);
              v118 = 1 << *a7;
              v119 = *v117;
              if ( (v118 & a8[39]) != 0 )
              {
                v120 = v119 & 0xF0FFFFFF | 0xC000000;
              }
              else if ( (v118 & a8[21]) != 0 )
              {
                v120 = v119 & 0xF0FFFFFF | 0xD000000;
              }
              else
              {
                v120 = v119 & 0xF0FFFFFF | 0xE000000;
              }
              *v117 = v120;
              v121 = DxgkIncrementGlobalConnectionChangeId();
              *(_QWORD *)(v116 + v122 + 24) = v121;
              v124 = (v123 & (a8[2] | a8[39])) != 0 ? 1 : -1;
              LOBYTE(v121) = -((v123 & (a8[2] | a8[39])) != 0);
              *(_DWORD *)(v116 + v122 + 16) &= ~1u;
              *(_BYTE *)(v116 + v122 + 48) = v124;
              *(_BYTE *)(v116 + v122 + 49) = ~(_BYTE)v121;
              a7 = (_DWORD *)(v125 + 4);
              *(_BYTE *)(v116 + v122 + 50) = v124;
              v115 = v122 + 56;
            }
            while ( v126 != 1 );
          }
          v20 = v142;
          *v150 = (v130 != 0) | *v150 & 0xFFFFFFFE;
          v23 = 0;
          goto LABEL_172;
        }
        while ( 2 )
        {
          if ( (v101 & a8[21]) == 0 )
          {
            v102 = a8[5];
            if ( (v101 & v139) == 0 )
            {
              a8[18] |= v101 & ~v102;
              goto LABEL_162;
            }
            v103 = 0LL;
            if ( (v102 & v101) == 0 )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v145,
                (__int64)v24 + 152,
                2u,
                v22,
                v128,
                *((_QWORD *)v24 + 17));
              v106 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v24 + 96), v100);
              v107 = 0x80000000LL;
              if ( (int)(v106 + 0x80000000) >= 0 && v106 != -1071774919 )
                WdLogSingleEntry0(1LL);
              v108 = v134;
              a8[18] |= v101;
              v105 = v108 & 0xFFFFFF0F | 0x40;
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v145,
                v107);
              goto LABEL_156;
            }
            if ( !*(_QWORD *)(v19 + 2800) )
              goto LABEL_150;
            v104 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v66, v100);
            if ( !v104 || (*((_DWORD *)v104 + 1) & 0x10) != 0 )
            {
              *v147 |= v101;
              a8[18] |= v101;
              WdLogSingleEntry3(7LL, (unsigned int)v100, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404));
            }
            else
            {
              v103 = (void *)*((_QWORD *)v104 + 2);
LABEL_150:
              v105 = v134 & 0xFFFFFF0F | 0x20;
LABEL_156:
              v109 = v136;
              v151 = 0LL;
              if ( v136 == 4 )
              {
                DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, &v151);
                v109 = v136;
              }
              v110 = ((unsigned __int8)v105 ^ v109) & 0xF ^ v105;
              v111 = *(_QWORD *)(v19 + 2792);
              LODWORD(v134) = v110;
              v135 = *(_DWORD *)(v111 + 416);
              LOBYTE(v129) = 0;
              BYTE4(v134) = BYTE4(v134) & 0xF8 | (v137 >> 14) & 4;
              v112 = VIDPN_MGR::CommitVidPn(
                       v140,
                       (unsigned __int64)v24,
                       v103,
                       v100,
                       D3DKMDT_MCC_ENFORCE,
                       1,
                       v129,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v134,
                       &v130);
              v113 = (int)v112;
              if ( v136 == 4 )
                DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v112, &v151);
              if ( (int)v113 < 0 )
              {
                a8[21] |= v101;
                a8[v100 + 22] = v113;
                WdLogSingleEntry4(2LL, (unsigned int)v100, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404), v113);
              }
            }
          }
LABEL_162:
          v66 = *(_QWORD *)(v19 + 2792);
          v100 = (unsigned int)(v100 + 1);
          v101 *= 2;
          if ( (unsigned int)v100 >= *(_DWORD *)(v66 + 96) )
            goto LABEL_163;
          continue;
        }
      }
      v68 = 1;
      v132 = 1;
      if ( (k & a8[21]) != 0 )
        goto LABEL_129;
      if ( (k & a8[2]) == 0 )
        goto LABEL_133;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v145,
        (__int64)v24 + 152,
        2u,
        v22,
        v128,
        *((_QWORD *)v24 + 17));
      v69 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v24 + 96), v64);
      v70 = 0x80000000LL;
      if ( (int)(v69 + 0x80000000) >= 0 && v69 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v145, v70);
      for ( m = 0; ; ++m )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY **)v141 + 12, v64, m, &v133) < 0 )
          WdLogSingleEntry0(1LL);
        v72 = v133;
        if ( v133 == -1 )
          break;
        if ( v68 )
        {
          v73 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v19 + 2792), v64);
          *(_OWORD *)v152 = *(_OWORD *)v73;
          *(_OWORD *)&v152[16] = *((_OWORD *)v73 + 1);
          *(_OWORD *)&v152[32] = *((_OWORD *)v73 + 2);
          *(_OWORD *)&v152[48] = *((_OWORD *)v73 + 3);
          *(_OWORD *)&v152[64] = *((_OWORD *)v73 + 4);
          v74 = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)v141 + 96), v64, v72);
          if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
                      v74,
                      ((v136 - 1) & 0xFFFFFFFD) == 0,
                      (struct _D3DDDI_RATIONAL *)v152) < 0 )
            WdLogSingleEntry0(1LL);
          v132 = 0;
        }
        v75 = v142;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v141,
               v72,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v142) < 0 )
          WdLogSingleEntry0(1LL);
        v77 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
                (struct _KTHREAD **)v140,
                (struct DMMVIDPN *)((char *)v24 + 96),
                v75,
                v76);
        v78 = (void *)v77;
        if ( v77 < 0 )
        {
LABEL_101:
          v84 = v72;
          v85 = (char *)v24 + 96;
LABEL_102:
          v86 = v64;
          WdLogSingleEntry4(2LL, v64, v84, v85, v78);
          k = (int)v138;
          goto LABEL_125;
        }
        v68 = v132;
      }
      v79 = 0;
      v80 = (DMMVIDPNTOPOLOGY **)((char *)v24 + 96);
      while ( 1 )
      {
        if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v80, v64, v79, &v133) < 0 )
          WdLogSingleEntry0(1LL);
        v72 = v133;
        if ( v133 == -1 )
          break;
        if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
               v141,
               v133,
               (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v142) < 0 )
          WdLogSingleEntry0(1LL);
        v81 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                (struct _KTHREAD **)v140,
                (struct DMMVIDPNTOPOLOGY *const)v80,
                (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v142);
        v78 = (void *)v81;
        if ( v81 < 0 )
          goto LABEL_101;
        DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPN *)((char *)v141 + 96), v72);
        v80 = (DMMVIDPNTOPOLOGY **)((char *)v24 + 96);
        PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((struct DMMVIDPN *)((char *)v24 + 96), v72);
        DMMVIDPNPRESENTPATH::SetGammaRamp(PathFromTarget, *(const struct DXGK_GAMMA_RAMP **)(v83 + 184));
        ++v79;
      }
      if ( v144 && (_QWORD)v151 && !DXGADAPTER::UsingDelayCreateCddAllocation((DXGADAPTER *)v19) )
        break;
      if ( !*(_QWORD *)(v19 + 2800) )
        goto LABEL_109;
      CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v19 + 2792), v64);
      if ( CddPrimaryAllocation && (*((_DWORD *)CddPrimaryAllocation + 1) & 0x10) == 0 )
        goto LABEL_117;
      k = (int)v138;
      v86 = v64;
      if ( ((unsigned int)v138 & a8[8]) == 0 )
      {
        *v147 |= (unsigned int)v138;
        WdLogSingleEntry3(7LL, v64, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404));
        goto LABEL_133;
      }
      LODWORD(v78) = -1071775482;
      WdLogSingleEntry3(2LL, v64, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404));
LABEL_125:
      if ( !v131 )
      {
        DxgkLogCodePointPacket(0x61u, v64, (unsigned int)v78, 0, *(_QWORD *)(v19 + 404));
        v131 = 1;
        goto LABEL_28;
      }
      a8[21] |= k;
      a8[v86 + 22] = (_DWORD)v78;
      if ( (_DWORD)v78 == -1071774920 || (_DWORD)v78 == -1071774976 )
        v130 = 1;
LABEL_129:
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v145,
        (__int64)v24 + 152,
        2u,
        v22,
        v128,
        *((_QWORD *)v24 + 17));
      v96 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((struct DMMVIDPN *)((char *)v24 + 96), v64);
      if ( (int)(v96 + 0x80000000) >= 0 && v96 != -1071774919 )
        WdLogSingleEntry0(1LL);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v145, v97);
LABEL_133:
      ++v64;
    }
    CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(
                       *(ADAPTER_DISPLAY **)(v19 + 2792),
                       v88,
                       v64,
                       (const struct _D3DKMT_DISPLAYMODE *)v152,
                       v87);
    v78 = (void *)CddAllocations;
    if ( CddAllocations < 0 )
    {
      v85 = (char *)*(unsigned int *)(v19 + 404);
      v84 = *(int *)(v19 + 408);
      goto LABEL_102;
    }
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2792), v64, 0);
    if ( *(_QWORD *)(v19 + 2800) )
LABEL_117:
      v78 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
    else
LABEL_109:
      v78 = 0LL;
    v91 = 32;
    k = (int)v138;
    if ( v79 <= 1 )
      v91 = 48;
    LODWORD(v134) = v134 & 0xFFFFFF00 | v136 & 0xF | v91;
    v92 = *(ADAPTER_DISPLAY **)(v19 + 2792);
    v135 = *((_DWORD *)v92 + 104);
    BYTE4(v134) = BYTE4(v134) & 0xF8 | (v137 >> 14) & 4;
    if ( ((unsigned int)v138 & a8[6]) != 0 )
      v93 = ADAPTER_DISPLAY::IsVidPnSourceActive(v92, v64) == 0;
    else
      v93 = ((unsigned int)v138 & a8[5]) == 0;
    v94 = v140;
    LOBYTE(v129) = v93;
    v95 = VIDPN_MGR::CommitVidPn(
            v140,
            (unsigned __int64)v24,
            v78,
            v64,
            D3DKMDT_MCC_ENFORCE,
            0,
            v129,
            (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v134,
            &v130);
    LODWORD(v78) = v95;
    if ( v95 >= 0 )
    {
      if ( (k & a8[5]) == 0 )
      {
        v98 = *((_QWORD *)v94 + 1);
        if ( !v98 )
        {
          WdLogSingleEntry0(1LL);
          v98 = *((_QWORD *)v94 + 1);
        }
        v99 = *(_QWORD *)(v98 + 16);
        if ( *(int *)(v99 + 2692) < 1200
          || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v99 + 216) + 64LL) + 40LL) + 28LL) < 0x300Au )
        {
          v139 |= k;
        }
      }
      goto LABEL_133;
    }
    v86 = v64;
    WdLogSingleEntry4(2LL, v64, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404), v95);
    if ( v144 )
      ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2792), v144, v64);
    goto LABEL_125;
  }
  WdLogSingleEntry3(2LL, *(int *)(v19 + 408), *(unsigned int *)(v19 + 404), ClientVidPnFromLastClientCommitedVidPn);
LABEL_172:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v143, 0LL);
LABEL_174:
  operator delete(v20);
  return v23;
}

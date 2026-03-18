/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D614
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0008C0C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000976C (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009A0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0011098 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0011544 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C001168C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C001314C (DxgkIncrementGlobalConnectionChangeId.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E2410 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012A008 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C012BF80 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0133664 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01340CC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C013DEAC (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C013E01C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C013E3E8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C013E4C4 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C013E6C4 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C013EB54 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013EFA0 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C013F574 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPnOnAdapter(
        VIDPN_MGR *a1,
        __int64 a2,
        int a3,
        char **a4,
        int a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        __int64 a10,
        unsigned int *a11,
        struct DXGDEVICE *a12,
        struct COREDEVICEACCESS *a13,
        unsigned __int8 a14)
{
  __int64 v14; // r14
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // r14
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rcx
  char **v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v28; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 *v34; // rbx
  unsigned int v35; // edi
  int v36; // r15d
  DMMVIDPNTOPOLOGY *v37; // rbx
  ADAPTER_DISPLAY *v38; // rcx
  __int64 v39; // r15
  int j; // r12d
  unsigned int v41; // r13d
  int k; // r12d
  __int64 v43; // rcx
  unsigned int v44; // eax
  char v45; // di
  __int64 v46; // r12
  int v47; // r15d
  int v48; // eax
  __int64 v50; // r8
  __int64 v51; // rbx
  int v52; // r9d
  int v53; // ecx
  unsigned int v54; // ecx
  signed __int64 v55; // rax
  __int64 v56; // r8
  int v57; // r9d
  char v58; // cl
  __int64 v59; // r10
  __int64 v60; // r11
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned int m; // r15d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r12
  unsigned int v69; // r15d
  char **v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdi
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  DMMVIDPNPRESENTPATH *v80; // r11
  DMMVIDPNPRESENTPATH *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v87; // r9d
  int v88; // eax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v93; // rdi
  int v94; // ecx
  ADAPTER_DISPLAY *v95; // rcx
  unsigned __int8 v96; // zf
  VIDPN_MGR *v97; // r15
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  void *v103; // r13
  struct DXGADAPTERALLOCATION *v104; // rax
  __int64 v105; // rcx
  int v106; // edi
  unsigned __int8 v107; // al
  unsigned int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r13
  int v112; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r13
  __int64 v116; // rdx
  __int64 v117; // rcx
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned int *Path; // r13
  __int64 v131; // rax
  int updated; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r12
  unsigned int i; // r12d
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  DMMVIDPNPRESENTPATH *v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  _QWORD *v144; // rax
  _QWORD *v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rax
  ADAPTER_DISPLAY *v150; // rcx
  unsigned __int8 v151; // zf
  DMMVIDPNTOPOLOGY *v152; // rbx
  unsigned int v153; // r13d
  unsigned int *v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rax
  bool IsSourceInTopology; // al
  void *v159; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  ADAPTER_DISPLAY *v165; // rcx
  unsigned __int8 v166; // zf
  __int64 v167; // rdi
  int v168; // eax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // r13
  _QWORD *v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // r9
  VIDPN_MGR *v175; // r13
  int v176; // eax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rdi
  _QWORD *v180; // rax
  int v181; // eax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rdi
  _QWORD *v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  _QWORD *v192; // rax
  __int64 v193; // r15
  __int64 *v194; // rcx
  _QWORD *v195; // rax
  _QWORD *v196; // rax
  _QWORD *v197; // rax
  int v198; // eax
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // rax
  __int64 v202; // rax
  _QWORD *v203; // rax
  __int64 v204; // rax
  _QWORD *v205; // rax
  __int64 v206; // rax
  __int64 v207; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v208; // [rsp+50h] [rbp-B0h] BYREF
  char v209; // [rsp+51h] [rbp-AFh]
  char v210; // [rsp+52h] [rbp-AEh]
  unsigned int v211; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v212; // [rsp+58h] [rbp-A8h] BYREF
  int v213; // [rsp+60h] [rbp-A0h]
  int v214; // [rsp+68h] [rbp-98h]
  unsigned int v215; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v216; // [rsp+70h] [rbp-90h]
  int v217; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v218; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v219; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v220; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v221; // [rsp+98h] [rbp-68h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v222; // [rsp+A0h] [rbp-60h]
  struct DXGDEVICE *v223; // [rsp+A8h] [rbp-58h]
  _BYTE v224[24]; // [rsp+B0h] [rbp-50h] BYREF
  DMMVIDPN *v225; // [rsp+C8h] [rbp-38h]
  _DWORD *v226; // [rsp+D0h] [rbp-30h]
  __int64 v227; // [rsp+D8h] [rbp-28h]
  __int64 v228; // [rsp+E0h] [rbp-20h]
  unsigned int *v229; // [rsp+E8h] [rbp-18h]
  struct _D3DKMT_DISPLAYMODE v230; // [rsp+F0h] [rbp-10h] BYREF
  struct COREDEVICEACCESS *v231[2]; // [rsp+120h] [rbp+20h] BYREF

  v14 = *((_QWORD *)a1 + 1);
  v228 = a6;
  v226 = a9;
  v227 = a10;
  v229 = a11;
  v223 = a12;
  v231[0] = a13;
  v225 = (DMMVIDPN *)a4;
  v214 = a3;
  v215 = a2;
  v218 = a1;
  v211 = 0;
  v212 = 0LL;
  v213 = 0;
  v208 = 0;
  v209 = 0;
  memset(&v230, 0, sizeof(v230));
  if ( !v14 )
  {
    v121 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v121);
    v14 = *((_QWORD *)a1 + 1);
  }
  v17 = a8[6];
  v18 = (unsigned int)(a8[13] | a8[3]);
  v19 = *(_QWORD *)(v14 + 16);
  v217 = v17;
  if ( ((unsigned int)v18 & v17) != 0 )
  {
    v122 = WdLogNewEntry5_WdAssertion(v18, a2);
    WdLogEvent5_WdAssertion(v122);
  }
  v20 = a8[2];
  v21 = v20 & a8[5];
  v22 = v17 & v20;
  if ( (v17 & v21) != (_DWORD)v22 )
  {
    v123 = WdLogNewEntry5_WdAssertion(v22, a2);
    WdLogEvent5_WdAssertion(v123);
  }
  v23 = a4 + 12;
  v220 = (DMMVIDPNTOPOLOGY *)(a4 + 12);
  v222 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)operator new[](0x1E8uLL, 0x4E506456u, PagedPool);
  v28 = v222;
  if ( v222 )
  {
    operator delete(0LL);
    v221 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               a1,
                                               (__int64 *)&v221);
    v33 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v124 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v124[3] = *(int *)(v19 + 320);
      v124[4] = *(unsigned int *)(v19 + 316);
      v124[5] = v33;
      WdLogEvent5_WdError(v124);
    }
    else
    {
      v34 = (__int64 *)v221;
      v35 = 0;
      v219 = (struct DMMVIDPN *)((char *)v221 + 96);
      v36 = 1;
      if ( *(_DWORD *)(*(_QWORD *)(v19 + 2672) + 80LL) )
      {
        v37 = v219;
        do
        {
          if ( (v36 & a8[10]) != 0 )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v23, v35, 0LL, &v211) < 0 || v211 == -1 )
            {
              v127 = WdLogNewEntry5_WdAssertion(v126, v125);
              WdLogEvent5_WdAssertion(v127);
            }
            Path = (unsigned int *)DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v23, v35, v211);
            if ( !Path )
            {
              v131 = WdLogNewEntry5_WdAssertion(v129, v128);
              WdLogEvent5_WdAssertion(v131);
            }
            v230 = *(struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                                    *(ADAPTER_DISPLAY **)(v19 + 2672),
                                                    v35);
            v230.DisplayOrientation = D3DKMDT_VPPR_GET_CONTENT_ROTATION(Path[29]);
            updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
            v135 = updated;
            if ( updated < 0 )
            {
              v144 = (_QWORD *)WdLogNewEntry5_WdError(v134, v133);
              v144[3] = v35;
              v144[4] = v37;
              v144[5] = v135;
              WdLogEvent5_WdError(v144);
              a8[10] &= ~v36;
              a8[2] |= v36;
            }
            else
            {
              for ( i = 0; ; ++i )
              {
                if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v219, v35, i, &v211) < 0 )
                {
                  v139 = WdLogNewEntry5_WdAssertion(v138, v137);
                  WdLogEvent5_WdAssertion(v139);
                }
                if ( v211 == -1 )
                  break;
                v140 = DMMVIDPNTOPOLOGY::FindPath(v219, v35, v211);
                v216 = v140;
                if ( !v140 )
                {
                  v143 = WdLogNewEntry5_WdAssertion(v142, v141);
                  WdLogEvent5_WdAssertion(v143);
                  v140 = v216;
                }
                DMMVIDPNPRESENTPATH::PinContentRotation(v140, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)Path[29]);
              }
              v37 = v219;
            }
            v23 = (char **)v220;
          }
          ++v35;
          v36 *= 2;
        }
        while ( v35 < *(_DWORD *)(*(_QWORD *)(v19 + 2672) + 80LL) );
        v34 = (__int64 *)v221;
      }
LABEL_14:
      v38 = *(ADAPTER_DISPLAY **)(v19 + 2672);
      v39 = 0LL;
      for ( j = 1; (unsigned int)v39 < *((_DWORD *)v38 + 20); j *= 2 )
      {
        if ( (j & a8[20]) == 0 )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v38, (unsigned int)v39)
            && (((a8[13] | a8[3] | a8[2]) & j) != 0 || (j & a8[5]) == 0)
            && (v112 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                         *(ADAPTER_DISPLAY **)(v19 + 2672),
                         (unsigned int)v39,
                         0,
                         2048,
                         a14),
                v115 = v112,
                v112 < 0) )
          {
            v145 = (_QWORD *)WdLogNewEntry5_WdError(v114, v113);
            v145[3] = (unsigned int)v39;
            v145[4] = *(int *)(v19 + 320);
            v145[5] = *(unsigned int *)(v19 + 316);
            v145[6] = v115;
            WdLogEvent5_WdError(v145);
            a8[20] |= j;
            a8[v39 + 21] = v115;
          }
          else
          {
            if ( (j & a8[3]) != 0 || v209 && (j & a8[2]) != 0 || *((_BYTE *)v218 + 464) )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v224,
                (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                2u,
                v32,
                v207,
                v34[17]);
              v146 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v39);
              goto LABEL_123;
            }
            if ( (j & a8[13]) != 0 )
            {
              v152 = v219;
              v153 = 0;
              v154 = (unsigned int *)(v227 + 4LL * (unsigned int)(16 * v39));
              do
              {
                if ( *v154 == -1 )
                  break;
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v224,
                  ((unsigned __int64)v152 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v152 >> 64),
                  2u,
                  v32,
                  v207,
                  1LL);
                if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v152, (unsigned int)v39, *v154, 0LL) < 0 )
                {
                  v157 = WdLogNewEntry5_WdAssertion(v156, v155);
                  WdLogEvent5_WdAssertion(v157);
                }
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v224,
                  v155);
                ++v153;
                ++v154;
              }
              while ( v153 < 0x10 );
              IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v152, v39);
              v34 = (__int64 *)v221;
              if ( !IsSourceInTopology )
                goto LABEL_127;
              v159 = 0LL;
              if ( *(_QWORD *)(v19 + 2680) )
              {
                DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                               *(DXGADAPTER ***)(v19 + 2672),
                                               v39);
                if ( !DisplayedPrimaryAllocation
                  || (v162 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v162 & 0x10) != 0) )
                {
                  v167 = (unsigned int)v39;
LABEL_145:
                  v173 = (_QWORD *)WdLogNewEntry5_WdTrace(v162, v161, v163, v164);
                  v173[3] = v167;
                  v173[4] = *(int *)(v19 + 320);
                  v173[5] = *(unsigned int *)(v19 + 316);
                  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                    (__int64)v224,
                    (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                    2u,
                    v174,
                    v207,
                    v34[17]);
                  v146 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v39);
LABEL_123:
                  v148 = v146 + 0x80000000;
                  if ( (v148 & 0x80000000) == 0 && v146 != -1071774919 )
                  {
                    v149 = WdLogNewEntry5_WdAssertion(v148, v147);
                    WdLogEvent5_WdAssertion(v149);
                  }
                  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                    (ApplyPermissionWithinThisScope *)v224,
                    v147);
LABEL_127:
                  v96 = (j & a8[3]) == 0;
                  LODWORD(v212) = v212 & 0xFFFFFF50 | v214 & 0xF | 0x50;
                  v150 = *(ADAPTER_DISPLAY **)(v19 + 2672);
                  v213 = *((_DWORD *)v150 + 90);
                  BYTE4(v212) = (BYTE4(v212) & 0xFC | ((j & a8[3]) == 0)) ^ ((v215 >> 14) ^ (BYTE4(v212) | v96)) & 4;
                  if ( (j & a8[6]) != 0 )
                    v151 = ADAPTER_DISPLAY::IsVidPnSourceActive(v150, (unsigned int)v39) == 0;
                  else
                    v151 = (j & a8[5]) == 0;
                  v175 = v218;
                  v176 = VIDPN_MGR::CommitVidPn(
                           v218,
                           (const struct DMMVIDPN *)v34,
                           0LL,
                           v39,
                           D3DKMDT_MCC_IGNORE,
                           0,
                           v151,
                           (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v212,
                           &v208);
                  v179 = v176;
                  if ( v176 < 0 )
                  {
                    v180 = (_QWORD *)WdLogNewEntry5_WdError(v178, v177);
                    v180[3] = (unsigned int)v39;
                    v180[4] = *(int *)(v19 + 320);
                    v180[5] = *(unsigned int *)(v19 + 316);
                    v180[6] = v179;
                    WdLogEvent5_WdError(v180);
                  }
                  if ( v223 && ((j & a8[3]) != 0 || *((_BYTE *)v175 + 464)) )
                  {
                    v181 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2672), v223, v39);
                    v184 = v181;
                    if ( v181 < 0 )
                    {
                      v185 = (_QWORD *)WdLogNewEntry5_WdError(v183, v182);
                      v185[3] = (unsigned int)v39;
                      v185[4] = *(int *)(v19 + 320);
                      v185[5] = *(unsigned int *)(v19 + 316);
                      v185[6] = v184;
                      WdLogEvent5_WdError(v185);
                    }
                  }
                  goto LABEL_21;
                }
                v159 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
              }
              LODWORD(v212) = v212 & 0xFFFFFF40 | v214 & 0xF | 0x40;
              v165 = *(ADAPTER_DISPLAY **)(v19 + 2672);
              v213 = *((_DWORD *)v165 + 90);
              BYTE4(v212) = BYTE4(v212) & 0xF9 | (v215 >> 14) & 4 | 1;
              if ( (j & a8[6]) != 0 )
                v166 = ADAPTER_DISPLAY::IsVidPnSourceActive(v165, (unsigned int)v39) == 0;
              else
                v166 = (j & a8[5]) == 0;
              v168 = VIDPN_MGR::CommitVidPn(
                       v218,
                       (const struct DMMVIDPN *)v34,
                       v159,
                       v39,
                       D3DKMDT_MCC_ENFORCE,
                       0,
                       v166,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v212,
                       &v208);
              v171 = v168;
              if ( v168 < 0 )
              {
                v172 = (_QWORD *)WdLogNewEntry5_WdError(v170, v169);
                v167 = (unsigned int)v39;
                v172[3] = (unsigned int)v39;
                v172[4] = *(int *)(v19 + 320);
                v172[5] = *(unsigned int *)(v19 + 316);
                v172[6] = v171;
                WdLogEvent5_WdError(v172);
                goto LABEL_145;
              }
            }
          }
        }
LABEL_21:
        v38 = *(ADAPTER_DISPLAY **)(v19 + 2672);
        v39 = (unsigned int)(v39 + 1);
      }
      v41 = 0;
      for ( k = 1; ; k *= 2 )
      {
        v43 = *(_QWORD *)(v19 + 2672);
        LODWORD(v216) = k;
        v44 = *(_DWORD *)(v43 + 80);
        if ( v41 >= v44 )
          break;
        v45 = 1;
        v210 = 1;
        if ( (k & a8[20]) == 0 )
        {
          if ( (k & a8[2]) == 0 )
            goto LABEL_26;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v224,
            (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
            2u,
            v32,
            v207,
            v34[17]);
          v62 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v41);
          v63 = 0x80000000LL;
          v64 = v62 + 0x80000000;
          if ( (int)v64 >= 0 && v62 != -1071774919 )
          {
            v186 = WdLogNewEntry5_WdAssertion(v64, 0x80000000LL);
            WdLogEvent5_WdAssertion(v186);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v224, v63);
          for ( m = 0; ; ++m )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v220, v41, m, &v211) < 0 )
            {
              v187 = WdLogNewEntry5_WdAssertion(v67, v66);
              WdLogEvent5_WdAssertion(v187);
            }
            v68 = v211;
            if ( v211 == -1 )
              break;
            if ( v45 )
            {
              v230 = *(struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                                      *(ADAPTER_DISPLAY **)(v19 + 2672),
                                                      v41);
              v81 = DMMVIDPNTOPOLOGY::FindPath(v220, v41, v68);
              if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v81, &v230) < 0 )
              {
                v188 = WdLogNewEntry5_WdAssertion(v83, v82);
                WdLogEvent5_WdAssertion(v188);
              }
              v210 = 0;
            }
            v84 = v222;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v225,
                   v68,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v222) < 0 )
            {
              v189 = WdLogNewEntry5_WdAssertion(v86, v85);
              WdLogEvent5_WdAssertion(v189);
            }
            v88 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v218, (struct DMMVIDPNTOPOLOGY *const)(v34 + 12), v84, v87);
            v78 = v88;
            if ( v88 < 0 )
            {
LABEL_154:
              v192 = (_QWORD *)WdLogNewEntry5_WdError(v77, v76);
              v193 = v41;
              v194 = v34 + 12;
              v192[3] = v41;
              v192[4] = v68;
LABEL_156:
              v192[5] = v194;
              v192[6] = v78;
              WdLogEvent5_WdError(v192);
              k = (int)v216;
              goto LABEL_163;
            }
            v45 = v210;
          }
          v69 = 0;
          v70 = (char **)(v34 + 12);
          while ( 1 )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v70, v41, v69, &v211) < 0 )
            {
              v190 = WdLogNewEntry5_WdAssertion(v72, v71);
              WdLogEvent5_WdAssertion(v190);
            }
            v68 = v211;
            if ( v211 == -1 )
              break;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v225,
                   v211,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v222) < 0 )
            {
              v191 = WdLogNewEntry5_WdAssertion(v74, v73);
              WdLogEvent5_WdAssertion(v191);
            }
            v75 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    v218,
                    (struct DMMVIDPNTOPOLOGY *const)v70,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v222);
            v78 = v75;
            if ( v75 < 0 )
              goto LABEL_154;
            v70 = (char **)(v34 + 12);
            DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v34 + 12), v68);
            PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v220, v68);
            DMMVIDPNPRESENTPATH::SetGammaRamp(v80, *((const struct DXGK_GAMMA_RAMP **)PathFromTarget + 23));
            ++v69;
          }
          if ( v223 && v231[0] )
          {
            v89 = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2672), v223, v41, &v230, v231[0]);
            v78 = v89;
            if ( v89 < 0 )
            {
              v192 = (_QWORD *)WdLogNewEntry5_WdError(v91, v90);
              v193 = v41;
              v192[3] = v41;
              v192[4] = *(int *)(v19 + 320);
              v194 = (__int64 *)*(unsigned int *)(v19 + 316);
              goto LABEL_156;
            }
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2672), v41, 0);
            if ( *(_QWORD *)(v19 + 2680) )
            {
LABEL_66:
              v93 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
              goto LABEL_67;
            }
LABEL_95:
            v93 = 0LL;
LABEL_67:
            v94 = 32;
            k = (int)v216;
            if ( v69 <= 1 )
              v94 = 48;
            LODWORD(v212) = v212 & 0xFFFFFF00 | v214 & 0xF | v94;
            v95 = *(ADAPTER_DISPLAY **)(v19 + 2672);
            v213 = *((_DWORD *)v95 + 90);
            BYTE4(v212) = BYTE4(v212) & 0xF8 | (v215 >> 14) & 4;
            if ( ((unsigned int)v216 & a8[6]) != 0 )
              v96 = ADAPTER_DISPLAY::IsVidPnSourceActive(v95, v41) == 0;
            else
              v96 = ((unsigned int)v216 & a8[5]) == 0;
            v97 = v218;
            v98 = VIDPN_MGR::CommitVidPn(
                    v218,
                    (const struct DMMVIDPN *)v34,
                    v93,
                    v41,
                    D3DKMDT_MCC_ENFORCE,
                    0,
                    v96,
                    (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v212,
                    &v208);
            v78 = v98;
            if ( v98 >= 0 )
            {
              if ( (k & a8[5]) == 0 )
              {
                v101 = *((_QWORD *)v97 + 1);
                if ( !v101 )
                {
                  v202 = WdLogNewEntry5_WdAssertion(v100, v99);
                  WdLogEvent5_WdAssertion(v202);
                  v101 = *((_QWORD *)v97 + 1);
                }
                v102 = *(_QWORD *)(v101 + 16);
                if ( *(int *)(v102 + 2572) < 1200
                  || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 + 216) + 64LL) + 40LL) + 28LL) < 0x300Au )
                {
                  v217 |= k;
                }
              }
              goto LABEL_26;
            }
            v197 = (_QWORD *)WdLogNewEntry5_WdError(v100, v99);
            v193 = v41;
            v197[3] = v41;
            v197[4] = *(int *)(v19 + 320);
            v197[5] = *(unsigned int *)(v19 + 316);
            v197[6] = v78;
            WdLogEvent5_WdError(v197);
            if ( v223 )
              ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2672), v223, v41);
          }
          else
          {
            if ( !*(_QWORD *)(v19 + 2680) )
              goto LABEL_95;
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v19 + 2672), v41);
            if ( CddPrimaryAllocation )
            {
              v117 = *((unsigned int *)CddPrimaryAllocation + 1);
              if ( (v117 & 0x10) == 0 )
                goto LABEL_66;
            }
            k = (int)v216;
            v193 = v41;
            if ( ((unsigned int)v216 & a8[8]) == 0 )
            {
              *v226 |= (unsigned int)v216;
              v196 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v117);
              v196[3] = v41;
              v196[4] = *(int *)(v19 + 320);
              v196[5] = *(unsigned int *)(v19 + 316);
              WdLogEvent5_WdDmmEvent(v196);
              goto LABEL_26;
            }
            LODWORD(v78) = -1071775482;
            v195 = (_QWORD *)WdLogNewEntry5_WdError(v117, v116);
            v195[3] = v41;
            v195[4] = *(int *)(v19 + 320);
            v195[5] = *(unsigned int *)(v19 + 316);
            WdLogEvent5_WdError(v195);
          }
LABEL_163:
          if ( !v209 )
          {
            DxgkLogCodePointPacket(0x61u, v41, v78, 0, *(_QWORD *)(v19 + 316));
            v209 = 1;
            goto LABEL_14;
          }
          a8[20] |= k;
          a8[v193 + 21] = v78;
          if ( (_DWORD)v78 == -1071774920 || (_DWORD)v78 == -1071774976 )
            v208 = 1;
        }
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v224,
          (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
          2u,
          v32,
          v207,
          v34[17]);
        v198 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v41);
        v199 = 0x80000000LL;
        v200 = v198 + 0x80000000;
        if ( (int)v200 >= 0 && v198 != -1071774919 )
        {
          v201 = WdLogNewEntry5_WdAssertion(v200, 0x80000000LL);
          WdLogEvent5_WdAssertion(v201);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v224, v199);
LABEL_26:
        ++v41;
      }
      v46 = 0LL;
      v47 = 1;
      if ( v44 )
      {
        do
        {
          if ( (v47 & a8[20]) == 0 )
          {
            v48 = a8[5];
            if ( (v47 & v217) != 0 )
            {
              v103 = 0LL;
              if ( (v48 & v47) == 0 )
              {
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v224,
                  (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                  2u,
                  v32,
                  v207,
                  v34[17]);
                v118 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v46);
                v119 = 0x80000000LL;
                v120 = v118 + 0x80000000;
                if ( (int)v120 >= 0 && v118 != -1071774919 )
                {
                  v204 = WdLogNewEntry5_WdAssertion(v120, 0x80000000LL);
                  WdLogEvent5_WdAssertion(v204);
                }
                a8[17] |= v47;
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v224,
                  v119);
                v106 = v212 & 0xFFFFFF0F | 0x40;
                goto LABEL_84;
              }
              if ( !*(_QWORD *)(v19 + 2680) )
                goto LABEL_83;
              v104 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)v43, v46);
              if ( v104 )
              {
                v105 = *((unsigned int *)v104 + 1);
                if ( (v105 & 0x10) == 0 )
                {
                  v103 = (void *)*((_QWORD *)v104 + 2);
LABEL_83:
                  v106 = v212 & 0xFFFFFF0F | 0x20;
LABEL_84:
                  v107 = v214;
                  *(_OWORD *)v231 = 0LL;
                  if ( v214 == 4 )
                  {
                    DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, v231);
                    v107 = v214;
                  }
                  LODWORD(v212) = v106 ^ ((unsigned __int8)v106 ^ v107) & 0xF;
                  v213 = *(_DWORD *)(*(_QWORD *)(v19 + 2672) + 360LL);
                  BYTE4(v212) = BYTE4(v212) & 0xF8 | (v215 >> 14) & 4;
                  v108 = VIDPN_MGR::CommitVidPn(
                           v218,
                           (const struct DMMVIDPN *)v34,
                           v103,
                           v46,
                           D3DKMDT_MCC_ENFORCE,
                           1,
                           0,
                           (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v212,
                           &v208);
                  v111 = (int)v108;
                  if ( v214 == 4 )
                    DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v108, v231);
                  if ( (int)v111 < 0 )
                  {
                    a8[20] |= v47;
                    a8[v46 + 21] = v111;
                    v205 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109);
                    v205[3] = (unsigned int)v46;
                    v205[4] = *(int *)(v19 + 320);
                    v205[5] = *(unsigned int *)(v19 + 316);
                    v205[6] = v111;
                    WdLogEvent5_WdError(v205);
                  }
                  goto LABEL_31;
                }
              }
              *v226 |= v47;
              a8[17] |= v47;
              v203 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v105);
              v203[3] = (unsigned int)v46;
              v203[4] = *(int *)(v19 + 320);
              v203[5] = *(unsigned int *)(v19 + 316);
              WdLogEvent5_WdDmmEvent(v203);
            }
            else
            {
              a8[17] |= v47 & ~v48;
            }
          }
LABEL_31:
          v43 = *(_QWORD *)(v19 + 2672);
          v46 = (unsigned int)(v46 + 1);
          v47 *= 2;
        }
        while ( (unsigned int)v46 < *(_DWORD *)(v43 + 80) );
      }
      if ( a5 )
      {
        v50 = 0LL;
        v51 = v228;
        do
        {
          v52 = 1 << *a7;
          v53 = *(_DWORD *)(v50 + v51 + 32);
          if ( (v52 & a8[38]) != 0 )
          {
            v54 = v53 & 0xF0FFFFFF | 0xC000000;
          }
          else if ( (v52 & a8[20]) != 0 )
          {
            v54 = v53 & 0xF0FFFFFF | 0xD000000;
          }
          else
          {
            v54 = v53 & 0xF0FFFFFF | 0xE000000;
          }
          *(_DWORD *)(v50 + v51 + 32) = v54;
          v55 = DxgkIncrementGlobalConnectionChangeId();
          *(_QWORD *)(v51 + v56 + 24) = v55;
          v58 = (v57 & (a8[38] | a8[2])) != 0 ? 1 : -1;
          LOBYTE(v55) = -((v57 & (a8[38] | a8[2])) != 0);
          *(_DWORD *)(v56 + v51 + 16) &= ~1u;
          *(_BYTE *)(v56 + v51 + 48) = v58;
          *(_BYTE *)(v56 + v51 + 49) = ~(_BYTE)v55;
          a7 = (_DWORD *)(v59 + 4);
          *(_BYTE *)(v56 + v51 + 50) = v58;
          v50 = v56 + 56;
        }
        while ( v60 != 1 );
      }
      v28 = v222;
      *v229 = (v208 != 0) | *v229 & 0xFFFFFFFE;
      LODWORD(v33) = 0;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v221, 0LL);
  }
  else
  {
    v206 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    *(_QWORD *)(v206 + 24) = *(int *)(v19 + 320);
    *(_QWORD *)(v206 + 32) = *(unsigned int *)(v19 + 316);
    WdLogEvent5_WdLowResource(v206);
    LODWORD(v33) = -1073741801;
  }
  operator delete(v28);
  return (unsigned int)v33;
}

/*
 * XREFs of ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0145CCC
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A37C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000B1A0 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000B258 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C000B6C4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000B7AC (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     DxgkIncrementGlobalConnectionChangeId @ 0x1C000CAD8 (DxgkIncrementGlobalConnectionChangeId.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D0F0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C010EDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C010EEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01215E4 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C01223E0 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C013743C (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013A5E4 (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013AD94 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C014515C (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C0145900 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 *     ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0146564 (-SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01466D4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0146858 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0146A54 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0146E2C (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C014750C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C0147B68 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0148430 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
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
  ADAPTER_DISPLAY *v43; // rcx
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
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned int m; // r15d
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r12
  unsigned int v71; // r15d
  char **v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdi
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  DMMVIDPNPRESENTPATH *v82; // r11
  DMMVIDPNPRESENTPATH *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rcx
  enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS v89; // r9d
  int v90; // eax
  int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  void *v95; // rdi
  int v96; // ecx
  ADAPTER_DISPLAY *v97; // rcx
  bool v98; // zf
  VIDPN_MGR *v99; // r15
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rax
  void *v105; // r13
  struct DXGADAPTERALLOCATION *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  int v109; // edi
  unsigned __int8 v110; // al
  unsigned int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r13
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r13
  __int64 v119; // rdx
  __int64 v120; // rcx
  int v121; // eax
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  unsigned int *Path; // r13
  __int64 v136; // rax
  int updated; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r12
  unsigned int i; // r12d
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rax
  DMMVIDPNPRESENTPATH *v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // rax
  _QWORD *v149; // rax
  _QWORD *v150; // rax
  int v151; // eax
  __int64 v152; // rdx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rcx
  __int64 v156; // rax
  ADAPTER_DISPLAY *v157; // rcx
  bool v158; // zf
  DMMVIDPNTOPOLOGY *v159; // rbx
  unsigned int v160; // r13d
  unsigned int *v161; // rdi
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rax
  bool IsSourceInTopology; // al
  void *v168; // rdi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  ADAPTER_DISPLAY *v174; // rcx
  bool v175; // zf
  __int64 v176; // rdi
  int v177; // eax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r13
  _QWORD *v181; // rax
  _QWORD *v182; // rax
  __int64 v183; // r9
  VIDPN_MGR *v184; // r13
  int v185; // eax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // rdi
  _QWORD *v189; // rax
  int v190; // eax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // rdi
  _QWORD *v194; // rax
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  _QWORD *v201; // rax
  __int64 v202; // r15
  __int64 *v203; // rcx
  _QWORD *v204; // rax
  _QWORD *v205; // rax
  _QWORD *v206; // rax
  int v207; // eax
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // rax
  __int64 v213; // rax
  _QWORD *v214; // rax
  __int64 v215; // rax
  _QWORD *v216; // rax
  __int64 v217; // rax
  __int64 v218; // [rsp+20h] [rbp-E0h]
  int v219; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v220; // [rsp+50h] [rbp-B0h] BYREF
  char v221; // [rsp+51h] [rbp-AFh]
  char v222; // [rsp+52h] [rbp-AEh]
  unsigned int v223; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v224; // [rsp+58h] [rbp-A8h] BYREF
  int v225; // [rsp+60h] [rbp-A0h]
  int v226; // [rsp+68h] [rbp-98h]
  unsigned int v227; // [rsp+6Ch] [rbp-94h]
  DMMVIDPNPRESENTPATH *v228; // [rsp+70h] [rbp-90h]
  int v229; // [rsp+78h] [rbp-88h]
  VIDPN_MGR *v230; // [rsp+80h] [rbp-80h]
  DMMVIDPNTOPOLOGY *v231; // [rsp+88h] [rbp-78h]
  DMMVIDPNTOPOLOGY *v232; // [rsp+90h] [rbp-70h]
  struct DMMVIDPN *v233; // [rsp+98h] [rbp-68h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH *v234; // [rsp+A0h] [rbp-60h]
  struct DXGDEVICE *v235; // [rsp+A8h] [rbp-58h]
  _BYTE v236[24]; // [rsp+B0h] [rbp-50h] BYREF
  DMMVIDPN *v237; // [rsp+C8h] [rbp-38h]
  _DWORD *v238; // [rsp+D0h] [rbp-30h]
  __int64 v239; // [rsp+D8h] [rbp-28h]
  __int64 v240; // [rsp+E0h] [rbp-20h]
  unsigned int *v241; // [rsp+E8h] [rbp-18h]
  struct _D3DKMT_DISPLAYMODE v242; // [rsp+F0h] [rbp-10h] BYREF
  struct COREDEVICEACCESS *v243[2]; // [rsp+120h] [rbp+20h] BYREF

  v14 = *((_QWORD *)a1 + 1);
  v240 = a6;
  v238 = a9;
  v239 = a10;
  v241 = a11;
  v235 = a12;
  v243[0] = a13;
  v237 = (DMMVIDPN *)a4;
  v226 = a3;
  v227 = a2;
  v230 = a1;
  v223 = 0;
  v224 = 0LL;
  v225 = 0;
  v220 = 0;
  v221 = 0;
  memset(&v242, 0, sizeof(v242));
  if ( !v14 )
  {
    v126 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v126);
    v14 = *((_QWORD *)a1 + 1);
  }
  v17 = a8[6];
  v18 = (unsigned int)(a8[13] | a8[3]);
  v19 = *(_QWORD *)(v14 + 16);
  v229 = v17;
  if ( ((unsigned int)v18 & v17) != 0 )
  {
    v127 = WdLogNewEntry5_WdAssertion(v18, a2);
    WdLogEvent5_WdAssertion(v127);
  }
  v20 = a8[2];
  v21 = v20 & a8[5];
  v22 = v17 & v20;
  if ( (v17 & v21) != (_DWORD)v22 )
  {
    v128 = WdLogNewEntry5_WdAssertion(v22, a2);
    WdLogEvent5_WdAssertion(v128);
  }
  v23 = a4 + 12;
  v232 = (DMMVIDPNTOPOLOGY *)(a4 + 12);
  v234 = (struct _D3DKMDT_VIDPN_PRESENT_PATH *)operator new[](0x1E8uLL, 0x4E506456u, PagedPool);
  v28 = v234;
  if ( v234 )
  {
    operator delete(0LL);
    v233 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               a1,
                                               (__int64 *)&v233);
    v33 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v129 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v129[3] = *(int *)(v19 + 320);
      v129[4] = *(unsigned int *)(v19 + 316);
      v129[5] = v33;
      WdLogEvent5_WdError(v129);
    }
    else
    {
      v34 = (__int64 *)v233;
      v35 = 0;
      v231 = (struct DMMVIDPN *)((char *)v233 + 96);
      v36 = 1;
      if ( *(_DWORD *)(*(_QWORD *)(v19 + 2696) + 80LL) )
      {
        v37 = v231;
        do
        {
          if ( (v36 & a8[10]) != 0 )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v23, v35, 0LL, &v223) < 0 || v223 == -1 )
            {
              v132 = WdLogNewEntry5_WdAssertion(v131, v130);
              WdLogEvent5_WdAssertion(v132);
            }
            Path = (unsigned int *)DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v23, v35, v223);
            if ( !Path )
            {
              v136 = WdLogNewEntry5_WdAssertion(v134, v133);
              WdLogEvent5_WdAssertion(v136);
            }
            v242 = *(struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                                    *(ADAPTER_DISPLAY **)(v19 + 2696),
                                                    v35);
            v242.DisplayOrientation = D3DKMDT_VPPR_GET_CONTENT_ROTATION(Path[29]);
            updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath((DMMVIDPNPRESENTPATH *)Path, 0LL);
            v140 = updated;
            if ( updated < 0 )
            {
              v149 = (_QWORD *)WdLogNewEntry5_WdError(v139, v138);
              v149[3] = v35;
              v149[4] = v37;
              v149[5] = v140;
              WdLogEvent5_WdError(v149);
              a8[10] &= ~v36;
              a8[2] |= v36;
            }
            else
            {
              for ( i = 0; ; ++i )
              {
                if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v231, v35, i, &v223) < 0 )
                {
                  v144 = WdLogNewEntry5_WdAssertion(v143, v142);
                  WdLogEvent5_WdAssertion(v144);
                }
                if ( v223 == -1 )
                  break;
                v145 = DMMVIDPNTOPOLOGY::FindPath(v231, v35, v223);
                v228 = v145;
                if ( !v145 )
                {
                  v148 = WdLogNewEntry5_WdAssertion(v147, v146);
                  WdLogEvent5_WdAssertion(v148);
                  v145 = v228;
                }
                DMMVIDPNPRESENTPATH::PinContentRotation(v145, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)Path[29]);
              }
              v37 = v231;
            }
            v23 = (char **)v232;
          }
          ++v35;
          v36 *= 2;
        }
        while ( v35 < *(_DWORD *)(*(_QWORD *)(v19 + 2696) + 80LL) );
        v34 = (__int64 *)v233;
      }
LABEL_14:
      v38 = *(ADAPTER_DISPLAY **)(v19 + 2696);
      v39 = 0LL;
      for ( j = 1; (unsigned int)v39 < *((_DWORD *)v38 + 20); j *= 2 )
      {
        if ( (j & a8[20]) == 0 )
        {
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(v38, (unsigned int)v39)
            && (((a8[13] | a8[3] | a8[2]) & j) != 0 || (j & a8[5]) == 0)
            && (v115 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                         *(ADAPTER_DISPLAY **)(v19 + 2696),
                         (unsigned int)v39,
                         0,
                         2048,
                         a14),
                v118 = v115,
                v115 < 0) )
          {
            v150 = (_QWORD *)WdLogNewEntry5_WdError(v117, v116);
            v150[3] = (unsigned int)v39;
            v150[4] = *(int *)(v19 + 320);
            v150[5] = *(unsigned int *)(v19 + 316);
            v150[6] = v118;
            WdLogEvent5_WdError(v150);
            a8[20] |= j;
            a8[v39 + 21] = v118;
          }
          else
          {
            if ( (j & a8[3]) != 0 || v221 && (j & a8[2]) != 0 || *((_BYTE *)v230 + 464) )
            {
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v236,
                (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                2u,
                v32,
                v218,
                v34[17]);
              v151 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v39);
              goto LABEL_123;
            }
            if ( (j & a8[13]) != 0 )
            {
              v159 = v231;
              v160 = 0;
              v161 = (unsigned int *)(v239 + 4LL * (unsigned int)(16 * v39));
              do
              {
                if ( *v161 == -1 )
                  break;
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v236,
                  ((unsigned __int64)v159 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)v159 >> 64),
                  2u,
                  v32,
                  v218,
                  1LL);
                if ( (int)DMMVIDPNTOPOLOGY::RemovePath(v159, (unsigned int)v39, *v161, 0LL) < 0 )
                {
                  v166 = WdLogNewEntry5_WdAssertion(v163, v162);
                  WdLogEvent5_WdAssertion(v166);
                }
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v236,
                  v162,
                  v164,
                  v165);
                ++v160;
                ++v161;
              }
              while ( v160 < 0x10 );
              IsSourceInTopology = DMMVIDPNTOPOLOGY::IsSourceInTopology(v159, v39);
              v34 = (__int64 *)v233;
              if ( !IsSourceInTopology )
                goto LABEL_127;
              v168 = 0LL;
              if ( *(_QWORD *)(v19 + 2704) )
              {
                DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                               *(ADAPTER_DISPLAY **)(v19 + 2696),
                                               v39);
                if ( !DisplayedPrimaryAllocation
                  || (v171 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v171 & 0x10) != 0) )
                {
                  v176 = (unsigned int)v39;
LABEL_145:
                  v182 = (_QWORD *)WdLogNewEntry5_WdTrace(v171, v170, v172, v173);
                  v182[3] = v176;
                  v182[4] = *(int *)(v19 + 320);
                  v182[5] = *(unsigned int *)(v19 + 316);
                  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                    (__int64)v236,
                    (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                    2u,
                    v183,
                    v218,
                    v34[17]);
                  v151 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v39);
LABEL_123:
                  v155 = v151 + 0x80000000;
                  if ( (v155 & 0x80000000) == 0 && v151 != -1071774919 )
                  {
                    v156 = WdLogNewEntry5_WdAssertion(v155, v152);
                    WdLogEvent5_WdAssertion(v156);
                  }
                  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                    (ApplyPermissionWithinThisScope *)v236,
                    v152,
                    v153,
                    v154);
LABEL_127:
                  v98 = (j & a8[3]) == 0;
                  LODWORD(v224) = v224 & 0xFFFFFF50 | v226 & 0xF | 0x50;
                  v157 = *(ADAPTER_DISPLAY **)(v19 + 2696);
                  v225 = *((_DWORD *)v157 + 90);
                  BYTE4(v224) = (BYTE4(v224) & 0xFC | ((j & a8[3]) == 0)) ^ ((v227 >> 14) ^ (BYTE4(v224) | v98)) & 4;
                  if ( (j & a8[6]) != 0 )
                    v158 = ADAPTER_DISPLAY::IsVidPnSourceActive(v157, (unsigned int)v39) == 0;
                  else
                    v158 = (j & a8[5]) == 0;
                  v184 = v230;
                  LOBYTE(v219) = v158;
                  v185 = VIDPN_MGR::CommitVidPn(
                           (ADAPTER_DISPLAY **)v230,
                           (const struct DMMVIDPN *)v34,
                           0LL,
                           (unsigned int)v39,
                           D3DKMDT_MCC_IGNORE,
                           0,
                           v219,
                           (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v224,
                           &v220);
                  v188 = v185;
                  if ( v185 < 0 )
                  {
                    v189 = (_QWORD *)WdLogNewEntry5_WdError(v187, v186);
                    v189[3] = (unsigned int)v39;
                    v189[4] = *(int *)(v19 + 320);
                    v189[5] = *(unsigned int *)(v19 + 316);
                    v189[6] = v188;
                    WdLogEvent5_WdError(v189);
                  }
                  if ( v235 && ((j & a8[3]) != 0 || *((_BYTE *)v184 + 464)) )
                  {
                    v190 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2696), v235, v39);
                    v193 = v190;
                    if ( v190 < 0 )
                    {
                      v194 = (_QWORD *)WdLogNewEntry5_WdError(v192, v191);
                      v194[3] = (unsigned int)v39;
                      v194[4] = *(int *)(v19 + 320);
                      v194[5] = *(unsigned int *)(v19 + 316);
                      v194[6] = v193;
                      WdLogEvent5_WdError(v194);
                    }
                  }
                  goto LABEL_21;
                }
                v168 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
              }
              LODWORD(v224) = v224 & 0xFFFFFF40 | v226 & 0xF | 0x40;
              v174 = *(ADAPTER_DISPLAY **)(v19 + 2696);
              v225 = *((_DWORD *)v174 + 90);
              BYTE4(v224) = BYTE4(v224) & 0xF9 | (v227 >> 14) & 4 | 1;
              if ( (j & a8[6]) != 0 )
                v175 = ADAPTER_DISPLAY::IsVidPnSourceActive(v174, (unsigned int)v39) == 0;
              else
                v175 = (j & a8[5]) == 0;
              LOBYTE(v219) = v175;
              v177 = VIDPN_MGR::CommitVidPn(
                       (ADAPTER_DISPLAY **)v230,
                       (const struct DMMVIDPN *)v34,
                       v168,
                       (unsigned int)v39,
                       D3DKMDT_MCC_ENFORCE,
                       0,
                       v219,
                       (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v224,
                       &v220);
              v180 = v177;
              if ( v177 < 0 )
              {
                v181 = (_QWORD *)WdLogNewEntry5_WdError(v179, v178);
                v176 = (unsigned int)v39;
                v181[3] = (unsigned int)v39;
                v181[4] = *(int *)(v19 + 320);
                v181[5] = *(unsigned int *)(v19 + 316);
                v181[6] = v180;
                WdLogEvent5_WdError(v181);
                goto LABEL_145;
              }
            }
          }
        }
LABEL_21:
        v38 = *(ADAPTER_DISPLAY **)(v19 + 2696);
        v39 = (unsigned int)(v39 + 1);
      }
      v41 = 0;
      for ( k = 1; ; k *= 2 )
      {
        v43 = *(ADAPTER_DISPLAY **)(v19 + 2696);
        LODWORD(v228) = k;
        v44 = *((_DWORD *)v43 + 20);
        if ( v41 >= v44 )
          break;
        v45 = 1;
        v222 = 1;
        if ( (k & a8[20]) == 0 )
        {
          if ( (k & a8[2]) == 0 )
            goto LABEL_26;
          ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
            (__int64)v236,
            (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
            2u,
            v32,
            v218,
            v34[17]);
          v62 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v41);
          v65 = 0x80000000LL;
          v66 = v62 + 0x80000000;
          if ( (int)v66 >= 0 && v62 != -1071774919 )
          {
            v195 = WdLogNewEntry5_WdAssertion(v66, 0x80000000LL);
            WdLogEvent5_WdAssertion(v195);
          }
          ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
            (ApplyPermissionWithinThisScope *)v236,
            v65,
            v63,
            v64);
          for ( m = 0; ; ++m )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)v232, v41, m, &v223) < 0 )
            {
              v196 = WdLogNewEntry5_WdAssertion(v69, v68);
              WdLogEvent5_WdAssertion(v196);
            }
            v70 = v223;
            if ( v223 == -1 )
              break;
            if ( v45 )
            {
              v242 = *(struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                                      *(ADAPTER_DISPLAY **)(v19 + 2696),
                                                      v41);
              v83 = DMMVIDPNTOPOLOGY::FindPath(v232, v41, v70);
              if ( (int)DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(v83, &v242) < 0 )
              {
                v197 = WdLogNewEntry5_WdAssertion(v85, v84);
                WdLogEvent5_WdAssertion(v197);
              }
              v222 = 0;
            }
            v86 = v234;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v237,
                   v70,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v234) < 0 )
            {
              v198 = WdLogNewEntry5_WdAssertion(v88, v87);
              WdLogEvent5_WdAssertion(v198);
            }
            v90 = VIDPN_MGR::AddUnpinnedPathToVidPnTopology(v230, (struct DMMVIDPNTOPOLOGY *const)(v34 + 12), v86, v89);
            v80 = v90;
            if ( v90 < 0 )
            {
LABEL_154:
              v201 = (_QWORD *)WdLogNewEntry5_WdError(v79, v78);
              v202 = v41;
              v203 = v34 + 12;
              v201[3] = v41;
              v201[4] = v70;
LABEL_156:
              v201[5] = v203;
              v201[6] = v80;
              WdLogEvent5_WdError(v201);
              k = (int)v228;
              goto LABEL_163;
            }
            v45 = v222;
          }
          v71 = 0;
          v72 = (char **)(v34 + 12);
          while ( 1 )
          {
            if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v72, v41, v71, &v223) < 0 )
            {
              v199 = WdLogNewEntry5_WdAssertion(v74, v73);
              WdLogEvent5_WdAssertion(v199);
            }
            v70 = v223;
            if ( v223 == -1 )
              break;
            if ( DMMVIDPN::SerializeFunctionalPathDrivingTarget(
                   v237,
                   v223,
                   (struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *const)v234) < 0 )
            {
              v200 = WdLogNewEntry5_WdAssertion(v76, v75);
              WdLogEvent5_WdAssertion(v200);
            }
            v77 = VIDPN_MGR::PinModalityOnPathInVidPnTopology(
                    v230,
                    (struct DMMVIDPNTOPOLOGY *const)v72,
                    (const struct _D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH *)v234);
            v80 = v77;
            if ( v77 < 0 )
              goto LABEL_154;
            v72 = (char **)(v34 + 12);
            DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v34 + 12), v70);
            PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v232, v70);
            DMMVIDPNPRESENTPATH::SetGammaRamp(v82, *((const struct DXGK_GAMMA_RAMP **)PathFromTarget + 23));
            ++v71;
          }
          if ( v235 && v243[0] )
          {
            v91 = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2696), v235, v41, &v242, v243[0]);
            v80 = v91;
            if ( v91 < 0 )
            {
              v201 = (_QWORD *)WdLogNewEntry5_WdError(v93, v92);
              v202 = v41;
              v201[3] = v41;
              v201[4] = *(int *)(v19 + 320);
              v203 = (__int64 *)*(unsigned int *)(v19 + 316);
              goto LABEL_156;
            }
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2696), v41, 0);
            if ( *(_QWORD *)(v19 + 2704) )
            {
LABEL_66:
              v95 = (void *)*((_QWORD *)CddPrimaryAllocation + 2);
              goto LABEL_67;
            }
LABEL_95:
            v95 = 0LL;
LABEL_67:
            v96 = 32;
            k = (int)v228;
            if ( v71 <= 1 )
              v96 = 48;
            LODWORD(v224) = v224 & 0xFFFFFF00 | v226 & 0xF | v96;
            v97 = *(ADAPTER_DISPLAY **)(v19 + 2696);
            v225 = *((_DWORD *)v97 + 90);
            BYTE4(v224) = BYTE4(v224) & 0xF8 | (v227 >> 14) & 4;
            if ( ((unsigned int)v228 & a8[6]) != 0 )
              v98 = ADAPTER_DISPLAY::IsVidPnSourceActive(v97, v41) == 0;
            else
              v98 = ((unsigned int)v228 & a8[5]) == 0;
            v99 = v230;
            LOBYTE(v219) = v98;
            v100 = VIDPN_MGR::CommitVidPn(
                     (ADAPTER_DISPLAY **)v230,
                     (const struct DMMVIDPN *)v34,
                     v95,
                     v41,
                     D3DKMDT_MCC_ENFORCE,
                     0,
                     v219,
                     (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v224,
                     &v220);
            v80 = v100;
            if ( v100 >= 0 )
            {
              if ( (k & a8[5]) == 0 )
              {
                v103 = *((_QWORD *)v99 + 1);
                if ( !v103 )
                {
                  v213 = WdLogNewEntry5_WdAssertion(v102, v101);
                  WdLogEvent5_WdAssertion(v213);
                  v103 = *((_QWORD *)v99 + 1);
                }
                v104 = *(_QWORD *)(v103 + 16);
                if ( *(int *)(v104 + 2596) < 1200
                  || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v104 + 216) + 64LL) + 40LL) + 28LL) < 0x300Au )
                {
                  v229 |= k;
                }
              }
              goto LABEL_26;
            }
            v206 = (_QWORD *)WdLogNewEntry5_WdError(v102, v101);
            v202 = v41;
            v206[3] = v41;
            v206[4] = *(int *)(v19 + 320);
            v206[5] = *(unsigned int *)(v19 + 316);
            v206[6] = v80;
            WdLogEvent5_WdError(v206);
            if ( v235 )
              ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v19 + 2696), v235, v41);
          }
          else
          {
            if ( !*(_QWORD *)(v19 + 2704) )
              goto LABEL_95;
            CddPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                     *(ADAPTER_DISPLAY **)(v19 + 2696),
                                     v41);
            if ( CddPrimaryAllocation )
            {
              v120 = *((unsigned int *)CddPrimaryAllocation + 1);
              if ( (v120 & 0x10) == 0 )
                goto LABEL_66;
            }
            k = (int)v228;
            v202 = v41;
            if ( ((unsigned int)v228 & a8[8]) == 0 )
            {
              *v238 |= (unsigned int)v228;
              v205 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v120, v119);
              v205[3] = v41;
              v205[4] = *(int *)(v19 + 320);
              v205[5] = *(unsigned int *)(v19 + 316);
              WdLogEvent5_WdDmmEvent(v205);
              goto LABEL_26;
            }
            LODWORD(v80) = -1071775482;
            v204 = (_QWORD *)WdLogNewEntry5_WdError(v120, v119);
            v204[3] = v41;
            v204[4] = *(int *)(v19 + 320);
            v204[5] = *(unsigned int *)(v19 + 316);
            WdLogEvent5_WdError(v204);
          }
LABEL_163:
          if ( !v221 )
          {
            DxgkLogCodePointPacket(0x61u, v41, v80, 0, *(_QWORD *)(v19 + 316));
            v221 = 1;
            goto LABEL_14;
          }
          a8[20] |= k;
          a8[v202 + 21] = v80;
          if ( (_DWORD)v80 == -1071774920 || (_DWORD)v80 == -1071774976 )
            v220 = 1;
        }
        ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
          (__int64)v236,
          (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
          2u,
          v32,
          v218,
          v34[17]);
        v207 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v41);
        v210 = 0x80000000LL;
        v211 = v207 + 0x80000000;
        if ( (int)v211 >= 0 && v207 != -1071774919 )
        {
          v212 = WdLogNewEntry5_WdAssertion(v211, 0x80000000LL);
          WdLogEvent5_WdAssertion(v212);
        }
        ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
          (ApplyPermissionWithinThisScope *)v236,
          v210,
          v208,
          v209);
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
            if ( (v47 & v229) != 0 )
            {
              v105 = 0LL;
              if ( (v48 & v47) == 0 )
              {
                ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                  (__int64)v236,
                  (unsigned __int64)(v34 + 19) & -(__int64)(v34 + 12 != 0LL),
                  2u,
                  v32,
                  v218,
                  v34[17]);
                v121 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)(v34 + 12), v46);
                v124 = 0x80000000LL;
                v125 = v121 + 0x80000000;
                if ( (int)v125 >= 0 && v121 != -1071774919 )
                {
                  v215 = WdLogNewEntry5_WdAssertion(v125, 0x80000000LL);
                  WdLogEvent5_WdAssertion(v215);
                }
                a8[17] |= v47;
                ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                  (ApplyPermissionWithinThisScope *)v236,
                  v124,
                  v122,
                  v123);
                v109 = v224 & 0xFFFFFF0F | 0x40;
                goto LABEL_84;
              }
              if ( !*(_QWORD *)(v19 + 2704) )
                goto LABEL_83;
              v106 = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(v43, v46);
              if ( v106 )
              {
                v108 = *((unsigned int *)v106 + 1);
                if ( (v108 & 0x10) == 0 )
                {
                  v105 = (void *)*((_QWORD *)v106 + 2);
LABEL_83:
                  v109 = v224 & 0xFFFFFF0F | 0x20;
LABEL_84:
                  v110 = v226;
                  *(_OWORD *)v243 = 0LL;
                  if ( v226 == 4 )
                  {
                    DisplayLogSetMonitorPowerStage(0LL, 32LL, 0LL, v243);
                    v110 = v226;
                  }
                  LODWORD(v224) = v109 ^ ((unsigned __int8)v109 ^ v110) & 0xF;
                  v225 = *(_DWORD *)(*(_QWORD *)(v19 + 2696) + 360LL);
                  LOBYTE(v219) = 0;
                  BYTE4(v224) = BYTE4(v224) & 0xF8 | (v227 >> 14) & 4;
                  v111 = VIDPN_MGR::CommitVidPn(
                           (ADAPTER_DISPLAY **)v230,
                           (const struct DMMVIDPN *)v34,
                           v105,
                           (unsigned int)v46,
                           D3DKMDT_MCC_ENFORCE,
                           1,
                           v219,
                           (const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *)&v224,
                           &v220);
                  v114 = (int)v111;
                  if ( v226 == 4 )
                    DisplayLogSetMonitorPowerStage(0LL, 2147483680LL, v111, v243);
                  if ( (int)v114 < 0 )
                  {
                    a8[20] |= v47;
                    a8[v46 + 21] = v114;
                    v216 = (_QWORD *)WdLogNewEntry5_WdError(v113, v112);
                    v216[3] = (unsigned int)v46;
                    v216[4] = *(int *)(v19 + 320);
                    v216[5] = *(unsigned int *)(v19 + 316);
                    v216[6] = v114;
                    WdLogEvent5_WdError(v216);
                  }
                  goto LABEL_31;
                }
              }
              *v238 |= v47;
              a8[17] |= v47;
              v214 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v108, v107);
              v214[3] = (unsigned int)v46;
              v214[4] = *(int *)(v19 + 320);
              v214[5] = *(unsigned int *)(v19 + 316);
              WdLogEvent5_WdDmmEvent(v214);
            }
            else
            {
              a8[17] |= v47 & ~v48;
            }
          }
LABEL_31:
          v43 = *(ADAPTER_DISPLAY **)(v19 + 2696);
          v46 = (unsigned int)(v46 + 1);
          v47 *= 2;
        }
        while ( (unsigned int)v46 < *((_DWORD *)v43 + 20) );
      }
      if ( a5 )
      {
        v50 = 0LL;
        v51 = v240;
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
      v28 = v234;
      *v241 = (v220 != 0) | *v241 & 0xFFFFFFFE;
      LODWORD(v33) = 0;
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&v233, 0LL);
  }
  else
  {
    v217 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    *(_QWORD *)(v217 + 24) = *(int *)(v19 + 320);
    *(_QWORD *)(v217 + 32) = *(unsigned int *)(v19 + 316);
    WdLogEvent5_WdLowResource(v217);
    LODWORD(v33) = -1073741801;
  }
  operator delete(v28);
  return (unsigned int)v33;
}

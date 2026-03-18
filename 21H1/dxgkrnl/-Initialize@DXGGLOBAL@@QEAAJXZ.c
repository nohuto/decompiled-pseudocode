/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C017CEEC
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C017F3C4 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z @ 0x1C0022464 (--0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z.c)
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x1C002271C (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C0022788 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C011A908 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C0147AAC (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C017DBB8 (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C017DD08 (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C017DD84 (--0QDC_CACHE@@QEAA@_N@Z.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C017DE0C (--0EDIDCACHE@@QEAA@XZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C017E664 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C017E798 (CreateDxgkSharedObjectTypes.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C017EE8C (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C02BAE18 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  char *v1; // rbx
  __int128 v2; // xmm0
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _ERESOURCE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  NTSTATUS v23; // eax
  unsigned __int8 v24; // r9
  bool v25; // zf
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  unsigned int v29; // eax
  bool v30; // al
  bool v31; // cf
  int v32; // eax
  int v33; // eax
  bool v34; // al
  bool v35; // al
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  int v42; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // eax
  POOL_TYPE v50; // edi
  DXGDIAGNOSTICS *v51; // rax
  DXGDIAGNOSTICS *v52; // rax
  DXGDIAGNOSTICS *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  DXGDIAGNOSTICS *v58; // rax
  DXGSESSIONMGR *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  DXGSESSIONMGR *v64; // rax
  SIZE_T v65; // rax
  PVOID v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  EDIDCACHE *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  EDIDCACHE *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  struct _KPROCESS *v80; // rcx
  QDC_CACHE *v81; // rax
  _BOOL8 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  QDC_CACHE *v86; // rax
  NTSTATUS v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdi
  NTSTATUS v91; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  int OutputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v106; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v107; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v108; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v109; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v110; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v111; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v112; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v113; // [rsp+68h] [rbp-A0h] BYREF
  int v114; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v115; // [rsp+70h] [rbp-98h] BYREF
  int v116; // [rsp+74h] [rbp-94h] BYREF
  int v117; // [rsp+78h] [rbp-90h] BYREF
  int v118; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v119; // [rsp+80h] [rbp-88h] BYREF
  int v120; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v121; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v122; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v123; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v124; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v125; // [rsp+98h] [rbp-70h] BYREF
  int v126; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v127; // [rsp+A0h] [rbp-68h] BYREF
  int v128; // [rsp+A4h] [rbp-64h] BYREF
  int v129; // [rsp+A8h] [rbp-60h] BYREF
  int v130; // [rsp+ACh] [rbp-5Ch] BYREF
  int v131; // [rsp+B0h] [rbp-58h] BYREF
  int v132; // [rsp+B4h] [rbp-54h] BYREF
  int v133; // [rsp+B8h] [rbp-50h] BYREF
  int v134; // [rsp+BCh] [rbp-4Ch] BYREF
  int v135; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v136; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING v137; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v138[14]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v139; // [rsp+158h] [rbp+50h] BYREF
  int v140; // [rsp+160h] [rbp+58h]
  const wchar_t *v141; // [rsp+168h] [rbp+60h]
  unsigned int *v142; // [rsp+170h] [rbp+68h]
  int v143; // [rsp+178h] [rbp+70h]
  _QWORD *v144; // [rsp+180h] [rbp+78h]
  int v145; // [rsp+188h] [rbp+80h]
  __int64 v146; // [rsp+190h] [rbp+88h]
  int v147; // [rsp+198h] [rbp+90h]
  const wchar_t *v148; // [rsp+1A0h] [rbp+98h]
  int *v149; // [rsp+1A8h] [rbp+A0h]
  int v150; // [rsp+1B0h] [rbp+A8h]
  int *v151; // [rsp+1B8h] [rbp+B0h]
  int v152; // [rsp+1C0h] [rbp+B8h]
  __int64 v153; // [rsp+1C8h] [rbp+C0h]
  int v154; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v155; // [rsp+1D8h] [rbp+D0h]
  unsigned int *v156; // [rsp+1E0h] [rbp+D8h]
  int v157; // [rsp+1E8h] [rbp+E0h]
  int *v158; // [rsp+1F0h] [rbp+E8h]
  int v159; // [rsp+1F8h] [rbp+F0h]
  __int64 v160; // [rsp+200h] [rbp+F8h]
  int v161; // [rsp+208h] [rbp+100h]
  const wchar_t *v162; // [rsp+210h] [rbp+108h]
  unsigned int *v163; // [rsp+218h] [rbp+110h]
  int v164; // [rsp+220h] [rbp+118h]
  int *v165; // [rsp+228h] [rbp+120h]
  int v166; // [rsp+230h] [rbp+128h]
  __int64 v167; // [rsp+238h] [rbp+130h]
  int v168; // [rsp+240h] [rbp+138h]
  const wchar_t *v169; // [rsp+248h] [rbp+140h]
  int *v170; // [rsp+250h] [rbp+148h]
  int v171; // [rsp+258h] [rbp+150h]
  int *v172; // [rsp+260h] [rbp+158h]
  int v173; // [rsp+268h] [rbp+160h]
  __int64 v174; // [rsp+270h] [rbp+168h]
  int v175; // [rsp+278h] [rbp+170h]
  const wchar_t *v176; // [rsp+280h] [rbp+178h]
  int *v177; // [rsp+288h] [rbp+180h]
  int v178; // [rsp+290h] [rbp+188h]
  int *v179; // [rsp+298h] [rbp+190h]
  int v180; // [rsp+2A0h] [rbp+198h]
  __int64 v181; // [rsp+2A8h] [rbp+1A0h]
  int v182; // [rsp+2B0h] [rbp+1A8h]
  const wchar_t *v183; // [rsp+2B8h] [rbp+1B0h]
  int *v184; // [rsp+2C0h] [rbp+1B8h]
  int v185; // [rsp+2C8h] [rbp+1C0h]
  int *v186; // [rsp+2D0h] [rbp+1C8h]
  int v187; // [rsp+2D8h] [rbp+1D0h]
  __int64 v188; // [rsp+2E0h] [rbp+1D8h]
  int v189; // [rsp+2E8h] [rbp+1E0h]
  const wchar_t *v190; // [rsp+2F0h] [rbp+1E8h]
  int *v191; // [rsp+2F8h] [rbp+1F0h]
  int v192; // [rsp+300h] [rbp+1F8h]
  int *v193; // [rsp+308h] [rbp+200h]
  int v194; // [rsp+310h] [rbp+208h]
  __int64 v195; // [rsp+318h] [rbp+210h]
  int v196; // [rsp+320h] [rbp+218h]
  const wchar_t *v197; // [rsp+328h] [rbp+220h]
  int *v198; // [rsp+330h] [rbp+228h]
  int v199; // [rsp+338h] [rbp+230h]
  int *v200; // [rsp+340h] [rbp+238h]
  int v201; // [rsp+348h] [rbp+240h]
  __int64 v202; // [rsp+350h] [rbp+248h]
  int v203; // [rsp+358h] [rbp+250h]
  const wchar_t *v204; // [rsp+360h] [rbp+258h]
  int *v205; // [rsp+368h] [rbp+260h]
  int v206; // [rsp+370h] [rbp+268h]
  int *v207; // [rsp+378h] [rbp+270h]
  int v208; // [rsp+380h] [rbp+278h]
  __int64 v209; // [rsp+388h] [rbp+280h]
  int v210; // [rsp+390h] [rbp+288h]
  const wchar_t *v211; // [rsp+398h] [rbp+290h]
  unsigned int *v212; // [rsp+3A0h] [rbp+298h]
  int v213; // [rsp+3A8h] [rbp+2A0h]
  unsigned int *v214; // [rsp+3B0h] [rbp+2A8h]
  int v215; // [rsp+3B8h] [rbp+2B0h]
  __int64 v216; // [rsp+3C0h] [rbp+2B8h]
  int v217; // [rsp+3C8h] [rbp+2C0h]
  const wchar_t *v218; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v219; // [rsp+3D8h] [rbp+2D0h]
  int v220; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v221; // [rsp+3E8h] [rbp+2E0h]
  int v222; // [rsp+3F0h] [rbp+2E8h]
  __int64 v223; // [rsp+3F8h] [rbp+2F0h]
  int v224; // [rsp+400h] [rbp+2F8h]
  const wchar_t *v225; // [rsp+408h] [rbp+300h]
  unsigned int *v226; // [rsp+410h] [rbp+308h]
  int v227; // [rsp+418h] [rbp+310h]
  unsigned int *v228; // [rsp+420h] [rbp+318h]
  int v229; // [rsp+428h] [rbp+320h]
  __int64 v230; // [rsp+430h] [rbp+328h]
  int v231; // [rsp+438h] [rbp+330h]
  const wchar_t *v232; // [rsp+440h] [rbp+338h]
  unsigned int *v233; // [rsp+448h] [rbp+340h]
  int v234; // [rsp+450h] [rbp+348h]
  unsigned int *v235; // [rsp+458h] [rbp+350h]
  int v236; // [rsp+460h] [rbp+358h]
  __int64 v237; // [rsp+468h] [rbp+360h]
  int v238; // [rsp+470h] [rbp+368h]
  const wchar_t *v239; // [rsp+478h] [rbp+370h]
  unsigned int *v240; // [rsp+480h] [rbp+378h]
  int v241; // [rsp+488h] [rbp+380h]
  int *v242; // [rsp+490h] [rbp+388h]
  int v243; // [rsp+498h] [rbp+390h]
  __int64 v244; // [rsp+4A0h] [rbp+398h]
  int v245; // [rsp+4A8h] [rbp+3A0h]
  __int128 v246; // [rsp+4B0h] [rbp+3A8h]
  __int128 v247; // [rsp+4C0h] [rbp+3B8h]
  __int64 v248; // [rsp+4D0h] [rbp+3C8h]
  _OWORD v249[2]; // [rsp+4D8h] [rbp+3D0h] BYREF
  wchar_t v250; // [rsp+4F8h] [rbp+3F0h]
  _OWORD v251[9]; // [rsp+508h] [rbp+400h] BYREF
  int v252; // [rsp+598h] [rbp+490h]
  wchar_t v253; // [rsp+59Ch] [rbp+494h]

  v1 = (char *)DXGGLOBAL::m_pGlobal;
  memset(&v138[2], 0, 0x58uLL);
  *((_QWORD *)DXGGLOBAL::m_pGlobal + 1) = v138[2];
  *((_QWORD *)v1 + 2) = v138[3];
  *((_QWORD *)v1 + 3) = v138[4];
  *((_QWORD *)v1 + 4) = v138[5];
  *((_QWORD *)v1 + 5) = v138[6];
  *((_QWORD *)v1 + 6) = v138[7];
  *((_QWORD *)v1 + 7) = v138[8];
  *((_QWORD *)v1 + 8) = v138[9];
  *((_DWORD *)v1 + 18) = v138[10];
  v2 = *(_OWORD *)&v138[11];
  *((_DWORD *)v1 + 19) = HIDWORD(v138[10]);
  *((_OWORD *)v1 + 5) = v2;
  v3 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 304656), 0LL, 0LL, PagedPool, 0, 0x10uLL, 0x4B677844u, 0);
  v6 = v3;
  if ( v3 < 0 )
  {
    v96 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v96 + 24) = v1;
    *(_QWORD *)(v96 + 32) = v6;
    WdLogEvent5_WdError(v96);
    return (unsigned int)v6;
  }
  v1[304648] = 1;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 176)) )
  {
    v98 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v98 + 24) = -1073741801LL;
LABEL_68:
    WdLogEvent5_WdLowResource(v98);
    return 3221225495LL;
  }
  v11 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 51) = v11;
  if ( !v11 )
  {
    v99 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v99 + 24) = v1;
    *(_QWORD *)(v99 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v99);
    return 3221225495LL;
  }
  v15 = ExInitializeResourceLite(v11);
  v6 = v15;
  if ( v15 < 0 )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v97[3] = v1;
    v97[4] = v6;
LABEL_64:
    WdLogEvent5_WdWarning(v97);
    return (unsigned int)v6;
  }
  v19 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 912), 0LL, 0LL, PagedPool, 0, 0x5F8uLL, 0x4B677844u, 0);
  v6 = v19;
  if ( v19 < 0
    || (v1[1121] = 1,
        v23 = ExInitializeLookasideListEx(
                (PLOOKASIDE_LIST_EX)(v1 + 1008),
                0LL,
                0LL,
                PagedPool,
                0,
                0x5E0uLL,
                0x4B677844u,
                0),
        v6 = v23,
        v23 < 0) )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v97[3] = v1;
    v97[4] = v6;
    v97[5] = 0LL;
    goto LABEL_64;
  }
  v24 = g_bSkuSupportMultipleUsers;
  v25 = g_bSkuSupportMultipleUsers == 0;
  v1[1122] = 1;
  v26 = 32;
  v138[0] = 0x4000000LL;
  if ( !v25 )
    v26 = 1024;
  v113 = 0;
  v128 = v26;
  v126 = 0;
  v114 = 0;
  v127 = 1;
  v112 = 0;
  v111 = 0;
  v116 = 0;
  v129 = 0;
  v130 = 0;
  v117 = 0;
  v118 = 0;
  v131 = 0;
  v132 = 0;
  v119 = 0;
  v133 = 0;
  v120 = 0;
  v134 = 0;
  v115 = 0;
  if ( v25 )
    v27 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v27 = g_IsInternalReleaseOrDbg != 0 ? 0x100000 : 0x80000;
  v123 = v27;
  if ( v24 )
    v28 = g_IsInternalReleaseOrDbg != 0 ? 8 : 4;
  else
    v28 = 2;
  v122 = v28;
  if ( v24 )
    v29 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v29 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v125 = v29;
  v107 = v29;
  v141 = L"TerminationListSizeLimit";
  v142 = &v113;
  v144 = v138;
  v148 = L"ValidateWDDMCaps";
  v149 = &v114;
  v151 = &v126;
  v155 = L"WDDM2LockManagement";
  v156 = &v112;
  v158 = &v127;
  v162 = L"MaximumAdapterCount";
  v163 = &v111;
  v165 = &v128;
  v169 = L"InvestigationDebugParameter";
  v170 = &v116;
  v172 = &v129;
  v176 = L"EnableIgnoreWin32ProcessStatus";
  v177 = &v117;
  v179 = &v130;
  v183 = L"EnableHMDTestMode";
  v184 = &v118;
  v135 = 300;
  v106 = v27;
  v109 = 300;
  v186 = &v131;
  v124 = 1;
  v108 = v28;
  v110 = 1;
  v139 = 0LL;
  v140 = 288;
  v143 = 67108868;
  v145 = 4;
  v146 = 0LL;
  v147 = 288;
  v150 = 67108868;
  v152 = 4;
  v153 = 0LL;
  v154 = 288;
  v157 = 67108868;
  v159 = 4;
  v160 = 0LL;
  v161 = 288;
  v164 = 67108868;
  v166 = 4;
  v167 = 0LL;
  v168 = 288;
  v171 = 67108868;
  v173 = 4;
  v174 = 0LL;
  v175 = 288;
  v178 = 67108868;
  v180 = 4;
  v181 = 0LL;
  v182 = 288;
  v185 = 67108868;
  v187 = 4;
  v188 = 0LL;
  v190 = L"PreserveFirmwareMode";
  v191 = &v119;
  v193 = &v132;
  v197 = L"PreventFullscreenWireFormatChange";
  v198 = &v120;
  v200 = &v133;
  v204 = L"EnableFuzzing";
  v205 = &v115;
  v207 = &v134;
  v211 = L"InternalDiagnosticsBufferSize";
  v212 = &v106;
  v214 = &v123;
  v218 = L"InternalDiagnosticsBufferMultiplier";
  v219 = &v108;
  v221 = &v122;
  v225 = L"ExternalDiagnosticsBufferSize";
  v226 = &v107;
  v228 = &v125;
  v232 = L"ExternalDiagnosticsBufferMultiplier";
  v233 = &v110;
  v235 = &v124;
  v239 = L"DiagnosticsBufferExpansionTime";
  v240 = &v109;
  v242 = &v135;
  v189 = 288;
  v192 = 67108868;
  v194 = 4;
  v195 = 0LL;
  v196 = 288;
  v199 = 67108868;
  v201 = 4;
  v202 = 0LL;
  v203 = 288;
  v206 = 67108868;
  v208 = 4;
  v209 = 0LL;
  v210 = 288;
  v213 = 67108868;
  v215 = 4;
  v216 = 0LL;
  v217 = 288;
  v220 = 67108868;
  v222 = 4;
  v223 = 0LL;
  v224 = 288;
  v227 = 67108868;
  v229 = 4;
  v230 = 0LL;
  v231 = 288;
  v234 = 67108868;
  v236 = 4;
  v237 = 0LL;
  v238 = 288;
  v241 = 67108868;
  v243 = 4;
  v244 = 0LL;
  v245 = 0;
  v248 = 0LL;
  v246 = 0LL;
  v247 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v139, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 80) = 0x4000000LL;
    v1[648] = 0;
    *((_DWORD *)v1 + 283) = 1;
    *((_DWORD *)v1 + 284) = 32;
    *((_DWORD *)v1 + 358) = 0;
    *((_DWORD *)v1 + 362) = 0;
  }
  else
  {
    v25 = v114 == 0;
    *((_QWORD *)v1 + 80) = v113;
    v30 = !v25;
    v25 = v115 == 0;
    v1[648] = v30;
    v31 = v112 < 2;
    v1[304202] = !v25;
    v32 = 1;
    if ( v31 )
      v32 = v112;
    *((_DWORD *)v1 + 283) = v32;
    v33 = v111;
    if ( v111 < 4 )
    {
      v33 = 4;
    }
    else if ( v111 > 0x400 )
    {
      v33 = 1024;
    }
    v25 = v118 == 1;
    v111 = v33;
    *((_DWORD *)v1 + 284) = v33;
    *((_DWORD *)v1 + 358) = v116;
    *((_DWORD *)v1 + 362) = v117;
    v34 = v25;
    v25 = v119 == 0;
    v1[304201] = v34;
    v35 = !v25;
    v25 = v120 == 0;
    v1[304248] = v35;
    v1[304249] = !v25;
  }
  *((_DWORD *)v1 + 159) = 0;
  v36 = *(_OWORD *)L"Y\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v121 = 0;
  v251[0] = *(_OWORD *)L"\\REGISTRY\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v137.Length = 9830548LL;
  v37 = *(_OWORD *)L"E\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v136.Length = 2228256LL;
  v251[1] = v36;
  v38 = *(_OWORD *)L"\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v251[2] = v37;
  v39 = *(_OWORD *)L"Set001\\Control\\Terminal Server\\WinStations";
  v251[3] = v38;
  v40 = *(_OWORD *)L"ontrol\\Terminal Server\\WinStations";
  v251[4] = v39;
  v41 = *(_OWORD *)L"erminal Server\\WinStations";
  v251[5] = v40;
  v251[6] = v41;
  v251[7] = *(_OWORD *)L"Server\\WinStations";
  v42 = *(_DWORD *)L"ns";
  v251[8] = *(_OWORD *)L"inStations";
  v252 = v42;
  v253 = aRegistryMachin_12[74];
  v137.Buffer = (wchar_t *)v251;
  v250 = aDwmframeinterv[16];
  v136.Buffer = (wchar_t *)v249;
  v249[0] = *(_OWORD *)L"DWMFRAMEINTERVAL";
  v249[1] = *(_OWORD *)L"INTERVAL";
  if ( ReadRegistryDwordKeyValue(&v137, &v136, &v121) >= 0 && v121 )
    *((_DWORD *)v1 + 76110) = v121;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v6 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
    v97[3] = v6;
    goto LABEL_64;
  }
  v47 = v108;
  if ( !v108 || ((v108 - 1) & v108) != 0 )
  {
    v47 = v122;
    v108 = v122;
  }
  if ( v106 < 0x1000 || v106 * v47 > 0x1000000 )
  {
    v106 = v123;
    v108 = v122;
  }
  v48 = v110;
  if ( !v110 || ((v110 - 1) & v110) != 0 )
  {
    v48 = v124;
    v110 = v124;
  }
  if ( v107 < 0x1000 || v107 * v48 > 0x1000000 )
  {
    v107 = v125;
    v110 = v124;
  }
  v49 = v109;
  if ( v109 > 0xE10 )
    v49 = 3600;
  v109 = v49;
  v50 = g_IsInternalReleaseOrDbg != 0 ? 512 : PagedPool;
  v51 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4B677844u, v50);
  if ( v51 )
    v52 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v51, v106, v108, v50, v109);
  else
    v52 = 0LL;
  *((_QWORD *)v1 + 86) = v52;
  v53 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4B677844u, v50);
  if ( v53 )
    v58 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v53, v107, v110, v50, v109);
  else
    v58 = 0LL;
  *((_QWORD *)v1 + 87) = v58;
  if ( !*((_QWORD *)v1 + 86) )
  {
    v98 = WdLogNewEntry5_WdLowResource(v55, v54, v56, v57);
    v100 = v106;
LABEL_88:
    *(_QWORD *)(v98 + 24) = v100;
    goto LABEL_68;
  }
  if ( !v58 )
  {
    v98 = WdLogNewEntry5_WdLowResource(v55, v54, v56, v57);
    v100 = v107;
    goto LABEL_88;
  }
  v59 = (DXGSESSIONMGR *)operator new[](0x1C0uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v59 )
    v64 = DXGSESSIONMGR::DXGSESSIONMGR(v59);
  else
    v64 = 0LL;
  *((_QWORD *)v1 + 88) = v64;
  if ( !v64 )
  {
    v98 = WdLogNewEntry5_WdLowResource(v61, v60, v62, v63);
    *(_QWORD *)(v98 + 24) = 1851LL;
    goto LABEL_68;
  }
  v65 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 284) + 31) >> 5);
  if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 284) + 31) >> 5, 4uLL) )
    v65 = -1LL;
  v66 = operator new[](v65, 0x4B677844u, PagedPool);
  *((_QWORD *)v1 + 78) = v66;
  if ( !v66 )
  {
    v98 = WdLogNewEntry5_WdLowResource(0LL, v67, v68, v69);
    *(_QWORD *)(v98 + 24) = 1858LL;
    goto LABEL_68;
  }
  memset(v66, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 284) + 31) >> 5));
  RtlInitializeBitMap((PRTL_BITMAP)v1 + 38, *((PULONG *)v1 + 78), *((_DWORD *)v1 + 284));
  v70 = (EDIDCACHE *)operator new[](0x278uLL, 0x4B677844u, PagedPool);
  if ( v70 )
    v75 = EDIDCACHE::EDIDCACHE(v70);
  else
    v75 = 0LL;
  *((_QWORD *)v1 + 112) = v75;
  if ( !v75 )
  {
    v101 = WdLogNewEntry5_WdLowResource(v72, v71, v73, v74);
    *(_QWORD *)(v101 + 24) = 1868LL;
    WdLogEvent5_WdLowResource(v101);
  }
  if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 143, 0LL, 0LL, 0, 0LL, 0LL) < 0 )
  {
    v98 = WdLogNewEntry5_WdLowResource(v77, v76, v78, v79);
    *(_QWORD *)(v98 + 24) = 1879LL;
    goto LABEL_68;
  }
  v80 = *(struct _KPROCESS **)(*((_QWORD *)v1 + 143) + 56LL);
  if ( PsInitialSystemProcess != v80 )
  {
    v102 = WdLogNewEntry5_WdAssertion(v80, v76);
    *(_QWORD *)(v102 + 24) = 1882LL;
    WdLogEvent5_WdAssertion(v102);
  }
  v81 = (QDC_CACHE *)operator new[](0x258uLL, 0x4B677844u, PagedPool);
  if ( v81 )
    v86 = QDC_CACHE::QDC_CACHE(v81, v82);
  else
    v86 = 0LL;
  *((_QWORD *)v1 + 158) = v86;
  if ( !v86 )
  {
    v98 = WdLogNewEntry5_WdLowResource(v83, v82, v84, v85);
    *(_QWORD *)(v98 + 24) = 1887LL;
    goto LABEL_68;
  }
  KeInitializeSpinLock(&qword_1C00B00D0);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1436));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)(v1 + 1672));
  KeInitializeDpc((PRKDPC)(v1 + 1736), (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, v1);
  LOBYTE(OutputBuffer) = 0;
  v87 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v90 = v87;
  if ( v87 < 0 )
  {
    v103 = WdLogNewEntry5_WdError(v89, v88);
    *(_QWORD *)(v103 + 24) = v90;
    WdLogEvent5_WdError(v103);
  }
  else if ( (_BYTE)OutputBuffer )
  {
    DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
  }
  *((_QWORD *)v1 + 228) = v1;
  *((_QWORD *)v1 + 227) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *((_QWORD *)v1 + 225) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *((_DWORD *)v1 + 76047) &= ~1u;
  *((_DWORD *)v1 + 76044) = 10;
  *((_DWORD *)v1 + 76045) = 50;
  *((_DWORD *)v1 + 76046) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 191);
  DisplayDiagnostics::Initialize((DisplayDiagnostics *)(v1 + 304312));
  v91 = PoRegisterPowerSettingCallback(
          0LL,
          &GUID_ADVANCED_COLOR_QUALITY_BIAS,
          DXGGLOBAL::AdvancedColorPowerSettingsCallback,
          v1,
          0LL);
  v94 = v91;
  if ( v91 < 0 )
  {
    v104 = WdLogNewEntry5_WdError(v93, v92);
    *(_QWORD *)(v104 + 24) = v94;
    WdLogEvent5_WdError(v104);
  }
  return (unsigned int)v94;
}

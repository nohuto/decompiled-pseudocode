/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C018C6BC
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C018BECC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z @ 0x1C0022680 (--0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z.c)
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x1C0022938 (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C00229A4 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024978 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0113D14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C015430C (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C018C184 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C018E8F8 (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C018EA48 (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ??0QDC_CACHE@@QEAA@_N@Z @ 0x1C018EAC4 (--0QDC_CACHE@@QEAA@_N@Z.c)
 *     ??0EDIDCACHE@@QEAA@XZ @ 0x1C018EB4C (--0EDIDCACHE@@QEAA@XZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C018F3B8 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C018F4EC (CreateDxgkSharedObjectTypes.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C02BE378 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  char *v1; // rbx
  __int128 v2; // xmm0
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  NTSTATUS v29; // eax
  unsigned __int8 v30; // r9
  bool v31; // zf
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  unsigned int v35; // eax
  bool v36; // al
  bool v37; // cf
  int v38; // eax
  int v39; // eax
  bool v40; // al
  bool v41; // al
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  int v48; // eax
  int DxgkSharedObjectTypes; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // eax
  POOL_TYPE v56; // edi
  DXGDIAGNOSTICS *v57; // rax
  DXGDIAGNOSTICS *v58; // rax
  DXGDIAGNOSTICS *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  DXGDIAGNOSTICS *v64; // rax
  __int64 v65; // rcx
  DXGSESSIONMGR *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  DXGSESSIONMGR *v71; // rax
  SIZE_T v72; // rax
  PVOID v73; // rax
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  EDIDCACHE *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  EDIDCACHE *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  struct _KPROCESS *v88; // rcx
  __int64 v89; // rax
  QDC_CACHE *v90; // rax
  _BOOL8 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  QDC_CACHE *v95; // rax
  NTSTATUS v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rax
  NTSTATUS v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rbx
  __int64 v105; // rax
  int OutputBuffer; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v107; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v108; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v109; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v110; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v111; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v112; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v113; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v114; // [rsp+68h] [rbp-A0h] BYREF
  int v115; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v116; // [rsp+70h] [rbp-98h] BYREF
  int v117; // [rsp+74h] [rbp-94h] BYREF
  int v118; // [rsp+78h] [rbp-90h] BYREF
  int v119; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v120; // [rsp+80h] [rbp-88h] BYREF
  int v121; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v122; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v123; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v124; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v125; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v126; // [rsp+98h] [rbp-70h] BYREF
  int v127; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v128; // [rsp+A0h] [rbp-68h] BYREF
  int v129; // [rsp+A4h] [rbp-64h] BYREF
  int v130; // [rsp+A8h] [rbp-60h] BYREF
  int v131; // [rsp+ACh] [rbp-5Ch] BYREF
  int v132; // [rsp+B0h] [rbp-58h] BYREF
  int v133; // [rsp+B4h] [rbp-54h] BYREF
  int v134; // [rsp+B8h] [rbp-50h] BYREF
  int v135; // [rsp+BCh] [rbp-4Ch] BYREF
  int v136; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v137; // [rsp+C8h] [rbp-40h] BYREF
  struct _UNICODE_STRING v138; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v139[14]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v140; // [rsp+158h] [rbp+50h] BYREF
  int v141; // [rsp+160h] [rbp+58h]
  const wchar_t *v142; // [rsp+168h] [rbp+60h]
  unsigned int *v143; // [rsp+170h] [rbp+68h]
  int v144; // [rsp+178h] [rbp+70h]
  _QWORD *v145; // [rsp+180h] [rbp+78h]
  int v146; // [rsp+188h] [rbp+80h]
  __int64 v147; // [rsp+190h] [rbp+88h]
  int v148; // [rsp+198h] [rbp+90h]
  const wchar_t *v149; // [rsp+1A0h] [rbp+98h]
  int *v150; // [rsp+1A8h] [rbp+A0h]
  int v151; // [rsp+1B0h] [rbp+A8h]
  int *v152; // [rsp+1B8h] [rbp+B0h]
  int v153; // [rsp+1C0h] [rbp+B8h]
  __int64 v154; // [rsp+1C8h] [rbp+C0h]
  int v155; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v156; // [rsp+1D8h] [rbp+D0h]
  unsigned int *v157; // [rsp+1E0h] [rbp+D8h]
  int v158; // [rsp+1E8h] [rbp+E0h]
  int *v159; // [rsp+1F0h] [rbp+E8h]
  int v160; // [rsp+1F8h] [rbp+F0h]
  __int64 v161; // [rsp+200h] [rbp+F8h]
  int v162; // [rsp+208h] [rbp+100h]
  const wchar_t *v163; // [rsp+210h] [rbp+108h]
  unsigned int *v164; // [rsp+218h] [rbp+110h]
  int v165; // [rsp+220h] [rbp+118h]
  int *v166; // [rsp+228h] [rbp+120h]
  int v167; // [rsp+230h] [rbp+128h]
  __int64 v168; // [rsp+238h] [rbp+130h]
  int v169; // [rsp+240h] [rbp+138h]
  const wchar_t *v170; // [rsp+248h] [rbp+140h]
  int *v171; // [rsp+250h] [rbp+148h]
  int v172; // [rsp+258h] [rbp+150h]
  int *v173; // [rsp+260h] [rbp+158h]
  int v174; // [rsp+268h] [rbp+160h]
  __int64 v175; // [rsp+270h] [rbp+168h]
  int v176; // [rsp+278h] [rbp+170h]
  const wchar_t *v177; // [rsp+280h] [rbp+178h]
  int *v178; // [rsp+288h] [rbp+180h]
  int v179; // [rsp+290h] [rbp+188h]
  int *v180; // [rsp+298h] [rbp+190h]
  int v181; // [rsp+2A0h] [rbp+198h]
  __int64 v182; // [rsp+2A8h] [rbp+1A0h]
  int v183; // [rsp+2B0h] [rbp+1A8h]
  const wchar_t *v184; // [rsp+2B8h] [rbp+1B0h]
  int *v185; // [rsp+2C0h] [rbp+1B8h]
  int v186; // [rsp+2C8h] [rbp+1C0h]
  int *v187; // [rsp+2D0h] [rbp+1C8h]
  int v188; // [rsp+2D8h] [rbp+1D0h]
  __int64 v189; // [rsp+2E0h] [rbp+1D8h]
  int v190; // [rsp+2E8h] [rbp+1E0h]
  const wchar_t *v191; // [rsp+2F0h] [rbp+1E8h]
  int *v192; // [rsp+2F8h] [rbp+1F0h]
  int v193; // [rsp+300h] [rbp+1F8h]
  int *v194; // [rsp+308h] [rbp+200h]
  int v195; // [rsp+310h] [rbp+208h]
  __int64 v196; // [rsp+318h] [rbp+210h]
  int v197; // [rsp+320h] [rbp+218h]
  const wchar_t *v198; // [rsp+328h] [rbp+220h]
  int *v199; // [rsp+330h] [rbp+228h]
  int v200; // [rsp+338h] [rbp+230h]
  int *v201; // [rsp+340h] [rbp+238h]
  int v202; // [rsp+348h] [rbp+240h]
  __int64 v203; // [rsp+350h] [rbp+248h]
  int v204; // [rsp+358h] [rbp+250h]
  const wchar_t *v205; // [rsp+360h] [rbp+258h]
  int *v206; // [rsp+368h] [rbp+260h]
  int v207; // [rsp+370h] [rbp+268h]
  int *v208; // [rsp+378h] [rbp+270h]
  int v209; // [rsp+380h] [rbp+278h]
  __int64 v210; // [rsp+388h] [rbp+280h]
  int v211; // [rsp+390h] [rbp+288h]
  const wchar_t *v212; // [rsp+398h] [rbp+290h]
  unsigned int *v213; // [rsp+3A0h] [rbp+298h]
  int v214; // [rsp+3A8h] [rbp+2A0h]
  unsigned int *v215; // [rsp+3B0h] [rbp+2A8h]
  int v216; // [rsp+3B8h] [rbp+2B0h]
  __int64 v217; // [rsp+3C0h] [rbp+2B8h]
  int v218; // [rsp+3C8h] [rbp+2C0h]
  const wchar_t *v219; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v220; // [rsp+3D8h] [rbp+2D0h]
  int v221; // [rsp+3E0h] [rbp+2D8h]
  unsigned int *v222; // [rsp+3E8h] [rbp+2E0h]
  int v223; // [rsp+3F0h] [rbp+2E8h]
  __int64 v224; // [rsp+3F8h] [rbp+2F0h]
  int v225; // [rsp+400h] [rbp+2F8h]
  const wchar_t *v226; // [rsp+408h] [rbp+300h]
  unsigned int *v227; // [rsp+410h] [rbp+308h]
  int v228; // [rsp+418h] [rbp+310h]
  unsigned int *v229; // [rsp+420h] [rbp+318h]
  int v230; // [rsp+428h] [rbp+320h]
  __int64 v231; // [rsp+430h] [rbp+328h]
  int v232; // [rsp+438h] [rbp+330h]
  const wchar_t *v233; // [rsp+440h] [rbp+338h]
  unsigned int *v234; // [rsp+448h] [rbp+340h]
  int v235; // [rsp+450h] [rbp+348h]
  unsigned int *v236; // [rsp+458h] [rbp+350h]
  int v237; // [rsp+460h] [rbp+358h]
  __int64 v238; // [rsp+468h] [rbp+360h]
  int v239; // [rsp+470h] [rbp+368h]
  const wchar_t *v240; // [rsp+478h] [rbp+370h]
  unsigned int *v241; // [rsp+480h] [rbp+378h]
  int v242; // [rsp+488h] [rbp+380h]
  int *v243; // [rsp+490h] [rbp+388h]
  int v244; // [rsp+498h] [rbp+390h]
  __int64 v245; // [rsp+4A0h] [rbp+398h]
  int v246; // [rsp+4A8h] [rbp+3A0h]
  __int128 v247; // [rsp+4B0h] [rbp+3A8h]
  __int128 v248; // [rsp+4C0h] [rbp+3B8h]
  __int64 v249; // [rsp+4D0h] [rbp+3C8h]
  _OWORD v250[2]; // [rsp+4D8h] [rbp+3D0h] BYREF
  wchar_t v251; // [rsp+4F8h] [rbp+3F0h]
  _OWORD v252[9]; // [rsp+508h] [rbp+400h] BYREF
  int v253; // [rsp+598h] [rbp+490h]
  wchar_t v254; // [rsp+59Ch] [rbp+494h]

  v1 = (char *)DXGGLOBAL::m_pGlobal;
  memset(&v139[2], 0, 0x58uLL);
  *((_QWORD *)DXGGLOBAL::m_pGlobal + 1) = v139[2];
  *((_QWORD *)v1 + 2) = v139[3];
  *((_QWORD *)v1 + 3) = v139[4];
  *((_QWORD *)v1 + 4) = v139[5];
  *((_QWORD *)v1 + 5) = v139[6];
  *((_QWORD *)v1 + 6) = v139[7];
  *((_QWORD *)v1 + 7) = v139[8];
  *((_QWORD *)v1 + 8) = v139[9];
  *((_DWORD *)v1 + 18) = v139[10];
  v2 = *(_OWORD *)&v139[11];
  *((_DWORD *)v1 + 19) = HIDWORD(v139[10]);
  *((_OWORD *)v1 + 5) = v2;
  v3 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 304784), 0LL, 0LL, PagedPool, 0, 0x10uLL, 0x4B677844u, 0);
  v6 = v3;
  if ( v3 < 0 )
    goto LABEL_2;
  v1[304768] = 1;
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
  {
    v9 = ExInitializeLookasideListEx(
           (PLOOKASIDE_LIST_EX)(v1 + 112),
           0LL,
           0LL,
           (POOL_TYPE)512,
           0,
           0xA0uLL,
           0x576B7844u,
           0);
    v6 = v9;
    if ( v9 < 0 )
    {
LABEL_2:
      v7 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v7 + 24) = v1;
      *(_QWORD *)(v7 + 32) = v6;
      WdLogEvent5_WdError(v7);
      return (unsigned int)v6;
    }
    v1[208] = 1;
  }
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 288)) )
  {
    v14 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = -1073741801LL;
LABEL_9:
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
  v15 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)v1 + 65) = v15;
  if ( !v15 )
  {
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = v1;
    *(_QWORD *)(v19 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v19);
    return 3221225495LL;
  }
  v20 = ExInitializeResourceLite(v15);
  v6 = v20;
  if ( v20 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v24[3] = v1;
    v24[4] = v6;
LABEL_15:
    WdLogEvent5_WdWarning(v24);
    return (unsigned int)v6;
  }
  v25 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 1024), 0LL, 0LL, PagedPool, 0, 0x5F8uLL, 0x4B677844u, 0);
  v6 = v25;
  if ( v25 < 0
    || (v1[1233] = 1,
        v29 = ExInitializeLookasideListEx(
                (PLOOKASIDE_LIST_EX)(v1 + 1120),
                0LL,
                0LL,
                PagedPool,
                0,
                0x5E0uLL,
                0x4B677844u,
                0),
        v6 = v29,
        v29 < 0) )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v24[3] = v1;
    v24[4] = v6;
    v24[5] = 0LL;
    goto LABEL_15;
  }
  v30 = g_bSkuSupportMultipleUsers;
  v31 = g_bSkuSupportMultipleUsers == 0;
  v1[1234] = 1;
  v32 = 32;
  v139[0] = 0x4000000LL;
  if ( !v31 )
    v32 = 1024;
  v114 = 0;
  v129 = v32;
  v127 = 0;
  v115 = 0;
  v128 = 1;
  v113 = 0;
  v112 = 0;
  v117 = 0;
  v130 = 0;
  v131 = 0;
  v118 = 0;
  v119 = 0;
  v132 = 0;
  v133 = 0;
  v120 = 0;
  v134 = 0;
  v121 = 0;
  v135 = 0;
  v116 = 0;
  if ( v31 )
    v33 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v33 = g_IsInternalReleaseOrDbg != 0 ? 0x100000 : 0x80000;
  v124 = v33;
  if ( v30 )
    v34 = g_IsInternalReleaseOrDbg != 0 ? 8 : 4;
  else
    v34 = 2;
  v123 = v34;
  if ( v30 )
    v35 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v35 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v126 = v35;
  v108 = v35;
  v142 = L"TerminationListSizeLimit";
  v143 = &v114;
  v145 = v139;
  v149 = L"ValidateWDDMCaps";
  v150 = &v115;
  v152 = &v127;
  v156 = L"WDDM2LockManagement";
  v157 = &v113;
  v159 = &v128;
  v163 = L"MaximumAdapterCount";
  v164 = &v112;
  v166 = &v129;
  v170 = L"InvestigationDebugParameter";
  v171 = &v117;
  v173 = &v130;
  v177 = L"EnableIgnoreWin32ProcessStatus";
  v178 = &v118;
  v180 = &v131;
  v184 = L"EnableHMDTestMode";
  v185 = &v119;
  v136 = 300;
  v107 = v33;
  v110 = 300;
  v187 = &v132;
  v125 = 1;
  v109 = v34;
  v111 = 1;
  v140 = 0LL;
  v141 = 288;
  v144 = 67108868;
  v146 = 4;
  v147 = 0LL;
  v148 = 288;
  v151 = 67108868;
  v153 = 4;
  v154 = 0LL;
  v155 = 288;
  v158 = 67108868;
  v160 = 4;
  v161 = 0LL;
  v162 = 288;
  v165 = 67108868;
  v167 = 4;
  v168 = 0LL;
  v169 = 288;
  v172 = 67108868;
  v174 = 4;
  v175 = 0LL;
  v176 = 288;
  v179 = 67108868;
  v181 = 4;
  v182 = 0LL;
  v183 = 288;
  v186 = 67108868;
  v188 = 4;
  v189 = 0LL;
  v191 = L"PreserveFirmwareMode";
  v192 = &v120;
  v194 = &v133;
  v198 = L"PreventFullscreenWireFormatChange";
  v199 = &v121;
  v201 = &v134;
  v205 = L"EnableFuzzing";
  v206 = &v116;
  v208 = &v135;
  v212 = L"InternalDiagnosticsBufferSize";
  v213 = &v107;
  v215 = &v124;
  v219 = L"InternalDiagnosticsBufferMultiplier";
  v220 = &v109;
  v222 = &v123;
  v226 = L"ExternalDiagnosticsBufferSize";
  v227 = &v108;
  v229 = &v126;
  v233 = L"ExternalDiagnosticsBufferMultiplier";
  v234 = &v111;
  v236 = &v125;
  v240 = L"DiagnosticsBufferExpansionTime";
  v241 = &v110;
  v243 = &v136;
  v190 = 288;
  v193 = 67108868;
  v195 = 4;
  v196 = 0LL;
  v197 = 288;
  v200 = 67108868;
  v202 = 4;
  v203 = 0LL;
  v204 = 288;
  v207 = 67108868;
  v209 = 4;
  v210 = 0LL;
  v211 = 288;
  v214 = 67108868;
  v216 = 4;
  v217 = 0LL;
  v218 = 288;
  v221 = 67108868;
  v223 = 4;
  v224 = 0LL;
  v225 = 288;
  v228 = 67108868;
  v230 = 4;
  v231 = 0LL;
  v232 = 288;
  v235 = 67108868;
  v237 = 4;
  v238 = 0LL;
  v239 = 288;
  v242 = 67108868;
  v244 = 4;
  v245 = 0LL;
  v246 = 0;
  v249 = 0LL;
  v247 = 0LL;
  v248 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v140, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 94) = 0x4000000LL;
    v1[760] = 0;
    *((_DWORD *)v1 + 311) = 1;
    *((_DWORD *)v1 + 312) = 32;
    *((_DWORD *)v1 + 386) = 0;
    *((_DWORD *)v1 + 390) = 0;
  }
  else
  {
    v31 = v115 == 0;
    *((_QWORD *)v1 + 94) = v114;
    v36 = !v31;
    v31 = v116 == 0;
    v1[760] = v36;
    v37 = v113 < 2;
    v1[304322] = !v31;
    v38 = 1;
    if ( v37 )
      v38 = v113;
    *((_DWORD *)v1 + 311) = v38;
    v39 = v112;
    if ( v112 >= 4 )
    {
      if ( v112 > 0x400 )
        v39 = 1024;
    }
    else
    {
      v39 = 4;
    }
    v31 = v119 == 1;
    v112 = v39;
    *((_DWORD *)v1 + 312) = v39;
    *((_DWORD *)v1 + 386) = v117;
    *((_DWORD *)v1 + 390) = v118;
    v40 = v31;
    v31 = v120 == 0;
    v1[304321] = v40;
    v41 = !v31;
    v31 = v121 == 0;
    v1[304368] = v41;
    v1[304369] = !v31;
  }
  *((_DWORD *)v1 + 187) = 0;
  v42 = *(_OWORD *)L"Y\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v122 = 0;
  v252[0] = *(_OWORD *)L"\\REGISTRY\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v138.Length = 9830548LL;
  v43 = *(_OWORD *)L"E\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v137.Length = 2228256LL;
  v252[1] = v42;
  v44 = *(_OWORD *)L"\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v252[2] = v43;
  v45 = *(_OWORD *)L"Set001\\Control\\Terminal Server\\WinStations";
  v252[3] = v44;
  v46 = *(_OWORD *)L"ontrol\\Terminal Server\\WinStations";
  v252[4] = v45;
  v47 = *(_OWORD *)L"erminal Server\\WinStations";
  v252[5] = v46;
  v252[6] = v47;
  v252[7] = *(_OWORD *)L"Server\\WinStations";
  v48 = *(_DWORD *)L"ns";
  v252[8] = *(_OWORD *)L"inStations";
  v253 = v48;
  v254 = aRegistryMachin_12[74];
  v138.Buffer = (wchar_t *)v252;
  v251 = aDwmframeinterv[16];
  v137.Buffer = (wchar_t *)v250;
  v250[0] = *(_OWORD *)L"DWMFRAMEINTERVAL";
  v250[1] = *(_OWORD *)L"INTERVAL";
  if ( (int)ReadRegistryDwordKeyValue(&v138, &v137, &v122) >= 0 && v122 )
    *((_DWORD *)v1 + 76140) = v122;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  v6 = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v51, v50, v52);
    v24[3] = v6;
    goto LABEL_15;
  }
  v53 = v109;
  if ( !v109 || ((v109 - 1) & v109) != 0 )
  {
    v53 = v123;
    v109 = v123;
  }
  if ( v107 < 0x1000 || v107 * v53 > 0x1000000 )
  {
    v107 = v124;
    v109 = v123;
  }
  v54 = v111;
  if ( !v111 || ((v111 - 1) & v111) != 0 )
  {
    v54 = v125;
    v111 = v125;
  }
  if ( v108 < 0x1000 || v108 * v54 > 0x1000000 )
  {
    v108 = v126;
    v111 = v125;
  }
  v55 = v110;
  if ( v110 > 0xE10 )
    v55 = 3600;
  v110 = v55;
  v56 = g_IsInternalReleaseOrDbg != 0 ? 512 : PagedPool;
  v57 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4B677844u, v56);
  if ( v57 )
    v58 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v57, v107, v109, v56, v110);
  else
    v58 = 0LL;
  *((_QWORD *)v1 + 100) = v58;
  v59 = (DXGDIAGNOSTICS *)operator new[](0x40uLL, 0x4B677844u, v56);
  if ( v59 )
    v64 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v59, v108, v111, v56, v110);
  else
    v64 = 0LL;
  *((_QWORD *)v1 + 101) = v64;
  if ( !*((_QWORD *)v1 + 100) )
  {
    v14 = WdLogNewEntry5_WdLowResource(v61, v60, v62, v63);
    v65 = v107;
LABEL_66:
    *(_QWORD *)(v14 + 24) = v65;
    goto LABEL_9;
  }
  if ( !v64 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v61, v60, v62, v63);
    v65 = v108;
    goto LABEL_66;
  }
  v66 = (DXGSESSIONMGR *)operator new[](0x1C0uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v66 )
    v71 = DXGSESSIONMGR::DXGSESSIONMGR(v66);
  else
    v71 = 0LL;
  *((_QWORD *)v1 + 102) = v71;
  if ( !v71 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v68, v67, v69, v70);
    *(_QWORD *)(v14 + 24) = 1870LL;
    goto LABEL_9;
  }
  v72 = 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 312) + 31) >> 5);
  if ( !is_mul_ok((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 312) + 31) >> 5, 4uLL) )
    v72 = -1LL;
  v73 = operator new[](v72, 0x4B677844u, PagedPool);
  *((_QWORD *)v1 + 92) = v73;
  if ( !v73 )
  {
    v14 = WdLogNewEntry5_WdLowResource(0LL, v74, v75, v76);
    *(_QWORD *)(v14 + 24) = 1877LL;
    goto LABEL_9;
  }
  memset(v73, 0, 4 * ((unsigned __int64)(unsigned int)(*((_DWORD *)v1 + 312) + 31) >> 5));
  RtlInitializeBitMap((PRTL_BITMAP)v1 + 45, *((PULONG *)v1 + 92), *((_DWORD *)v1 + 312));
  v77 = (EDIDCACHE *)operator new[](0x278uLL, 0x4B677844u, PagedPool);
  if ( v77 )
    v82 = EDIDCACHE::EDIDCACHE(v77);
  else
    v82 = 0LL;
  *((_QWORD *)v1 + 126) = v82;
  if ( !v82 )
  {
    v83 = WdLogNewEntry5_WdLowResource(v79, v78, v80, v81);
    *(_QWORD *)(v83 + 24) = 1887LL;
    WdLogEvent5_WdLowResource(v83);
  }
  if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 157, 0LL, 0LL, 0, 0LL, 0LL) < 0 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v85, v84, v86, v87);
    *(_QWORD *)(v14 + 24) = 1898LL;
    goto LABEL_9;
  }
  v88 = *(struct _KPROCESS **)(*((_QWORD *)v1 + 157) + 56LL);
  if ( PsInitialSystemProcess != v88 )
  {
    v89 = WdLogNewEntry5_WdAssertion(v88, v84);
    *(_QWORD *)(v89 + 24) = 1901LL;
    WdLogEvent5_WdAssertion(v89);
  }
  v90 = (QDC_CACHE *)operator new[](0x258uLL, 0x4B677844u, PagedPool);
  if ( v90 )
    v95 = QDC_CACHE::QDC_CACHE(v90, v91);
  else
    v95 = 0LL;
  *((_QWORD *)v1 + 172) = v95;
  if ( !v95 )
  {
    v14 = WdLogNewEntry5_WdLowResource(v92, v91, v93, v94);
    *(_QWORD *)(v14 + 24) = 1906LL;
    goto LABEL_9;
  }
  KeInitializeSpinLock(&qword_1C00B11D0);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1548));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)v1 + 28);
  KeInitializeDpc((PRKDPC)v1 + 29, (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, v1);
  LOBYTE(OutputBuffer) = 0;
  v96 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v99 = v96;
  if ( v96 >= 0 )
  {
    if ( (_BYTE)OutputBuffer )
      DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
  }
  else
  {
    v100 = WdLogNewEntry5_WdError(v98, v97);
    *(_QWORD *)(v100 + 24) = v99;
    WdLogEvent5_WdError(v100);
  }
  *((_QWORD *)v1 + 243) = v1;
  *((_QWORD *)v1 + 242) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *((_QWORD *)v1 + 240) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *((_DWORD *)v1 + 76077) &= ~1u;
  *((_DWORD *)v1 + 76074) = 10;
  *((_DWORD *)v1 + 76075) = 50;
  *((_DWORD *)v1 + 76076) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 206);
  DisplayDiagnostics::Initialize((DisplayDiagnostics *)(v1 + 304432));
  v101 = PoRegisterPowerSettingCallback(
           0LL,
           &GUID_ADVANCED_COLOR_QUALITY_BIAS,
           DXGGLOBAL::AdvancedColorPowerSettingsCallback,
           v1,
           0LL);
  v104 = v101;
  if ( v101 < 0 )
  {
    v105 = WdLogNewEntry5_WdError(v103, v102);
    *(_QWORD *)(v105 + 24) = v104;
    WdLogEvent5_WdError(v105);
  }
  return (unsigned int)v104;
}

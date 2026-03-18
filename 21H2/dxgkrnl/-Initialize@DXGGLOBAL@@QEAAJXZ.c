/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0210BEC
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C020F2D0 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x1C002840C (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x1C0028698 (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x1C00287C8 (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C01CF040 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1C01F6298 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x1C020FC64 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1C0213440 (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C0213584 (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     CreateDxgkSharedObjectTypes @ 0x1C0213600 (CreateDxgkSharedObjectTypes.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1C02E36D4 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  char *v1; // rdi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  NTSTATUS v6; // eax
  __int64 v7; // r14
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  struct _ERESOURCE *v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rbx
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  unsigned __int8 v18; // r9
  int v19; // ecx
  int v20; // r8d
  int v21; // eax
  bool v22; // zf
  bool v23; // al
  bool v24; // cf
  int v25; // eax
  int v26; // eax
  bool v27; // al
  bool v28; // al
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int v35; // eax
  int DxgkSharedObjectTypes; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rax
  DXGSESSIONMGR *v47; // rax
  __int64 v48; // r9
  DXGSESSIONMGR *v49; // rax
  int v50; // ecx
  __int64 v51; // rbx
  unsigned __int64 v52; // rax
  ULONG *v53; // rax
  __int64 v54; // r9
  __int64 v55; // rax
  _BYTE *v56; // rbx
  NTSTATUS v57; // eax
  NTSTATUS v58; // eax
  __int64 v59; // rdi
  const wchar_t *v61; // r9
  __int64 v62; // rbx
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v64; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v65; // [rsp+60h] [rbp-A8h] BYREF
  int v66; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v67; // [rsp+68h] [rbp-A0h] BYREF
  int v68; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v69; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v71; // [rsp+78h] [rbp-90h] BYREF
  int v72; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v73; // [rsp+80h] [rbp-88h] BYREF
  int v74; // [rsp+84h] [rbp-84h] BYREF
  int v75; // [rsp+88h] [rbp-80h] BYREF
  int v76; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v77; // [rsp+90h] [rbp-78h] BYREF
  int v78; // [rsp+94h] [rbp-74h] BYREF
  int v79; // [rsp+98h] [rbp-70h] BYREF
  int v80; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v81; // [rsp+A0h] [rbp-68h] BYREF
  int v82; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v83; // [rsp+A8h] [rbp-60h] BYREF
  int v84; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v85; // [rsp+B0h] [rbp-58h] BYREF
  int v86; // [rsp+B4h] [rbp-54h] BYREF
  int v87; // [rsp+B8h] [rbp-50h] BYREF
  int v88; // [rsp+BCh] [rbp-4Ch] BYREF
  int v89; // [rsp+C0h] [rbp-48h] BYREF
  int v90; // [rsp+C4h] [rbp-44h] BYREF
  int v91; // [rsp+C8h] [rbp-40h] BYREF
  int v92; // [rsp+CCh] [rbp-3Ch] BYREF
  int v93; // [rsp+D0h] [rbp-38h] BYREF
  int v94; // [rsp+D4h] [rbp-34h] BYREF
  int v95; // [rsp+D8h] [rbp-30h] BYREF
  int v96; // [rsp+DCh] [rbp-2Ch] BYREF
  int v97; // [rsp+E0h] [rbp-28h] BYREF
  struct _UNICODE_STRING v98; // [rsp+E8h] [rbp-20h] BYREF
  struct _UNICODE_STRING v99; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v100; // [rsp+108h] [rbp+0h] BYREF
  __int64 v101; // [rsp+118h] [rbp+10h] BYREF
  int v102; // [rsp+120h] [rbp+18h]
  const wchar_t *v103; // [rsp+128h] [rbp+20h]
  unsigned int *v104; // [rsp+130h] [rbp+28h]
  int v105; // [rsp+138h] [rbp+30h]
  __int64 *v106; // [rsp+140h] [rbp+38h]
  int v107; // [rsp+148h] [rbp+40h]
  __int64 v108; // [rsp+150h] [rbp+48h]
  int v109; // [rsp+158h] [rbp+50h]
  const wchar_t *v110; // [rsp+160h] [rbp+58h]
  int *v111; // [rsp+168h] [rbp+60h]
  int v112; // [rsp+170h] [rbp+68h]
  int *v113; // [rsp+178h] [rbp+70h]
  int v114; // [rsp+180h] [rbp+78h]
  __int64 v115; // [rsp+188h] [rbp+80h]
  int v116; // [rsp+190h] [rbp+88h]
  const wchar_t *v117; // [rsp+198h] [rbp+90h]
  unsigned int *v118; // [rsp+1A0h] [rbp+98h]
  int v119; // [rsp+1A8h] [rbp+A0h]
  int *v120; // [rsp+1B0h] [rbp+A8h]
  int v121; // [rsp+1B8h] [rbp+B0h]
  __int64 v122; // [rsp+1C0h] [rbp+B8h]
  int v123; // [rsp+1C8h] [rbp+C0h]
  const wchar_t *v124; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v125; // [rsp+1D8h] [rbp+D0h]
  int v126; // [rsp+1E0h] [rbp+D8h]
  int *v127; // [rsp+1E8h] [rbp+E0h]
  int v128; // [rsp+1F0h] [rbp+E8h]
  __int64 v129; // [rsp+1F8h] [rbp+F0h]
  int v130; // [rsp+200h] [rbp+F8h]
  const wchar_t *v131; // [rsp+208h] [rbp+100h]
  int *v132; // [rsp+210h] [rbp+108h]
  int v133; // [rsp+218h] [rbp+110h]
  int *v134; // [rsp+220h] [rbp+118h]
  int v135; // [rsp+228h] [rbp+120h]
  __int64 v136; // [rsp+230h] [rbp+128h]
  int v137; // [rsp+238h] [rbp+130h]
  const wchar_t *v138; // [rsp+240h] [rbp+138h]
  int *v139; // [rsp+248h] [rbp+140h]
  int v140; // [rsp+250h] [rbp+148h]
  int *v141; // [rsp+258h] [rbp+150h]
  int v142; // [rsp+260h] [rbp+158h]
  __int64 v143; // [rsp+268h] [rbp+160h]
  int v144; // [rsp+270h] [rbp+168h]
  const wchar_t *v145; // [rsp+278h] [rbp+170h]
  int *v146; // [rsp+280h] [rbp+178h]
  int v147; // [rsp+288h] [rbp+180h]
  int *v148; // [rsp+290h] [rbp+188h]
  int v149; // [rsp+298h] [rbp+190h]
  __int64 v150; // [rsp+2A0h] [rbp+198h]
  int v151; // [rsp+2A8h] [rbp+1A0h]
  const wchar_t *v152; // [rsp+2B0h] [rbp+1A8h]
  int *v153; // [rsp+2B8h] [rbp+1B0h]
  int v154; // [rsp+2C0h] [rbp+1B8h]
  int *v155; // [rsp+2C8h] [rbp+1C0h]
  int v156; // [rsp+2D0h] [rbp+1C8h]
  __int64 v157; // [rsp+2D8h] [rbp+1D0h]
  int v158; // [rsp+2E0h] [rbp+1D8h]
  const wchar_t *v159; // [rsp+2E8h] [rbp+1E0h]
  int *v160; // [rsp+2F0h] [rbp+1E8h]
  int v161; // [rsp+2F8h] [rbp+1F0h]
  int *v162; // [rsp+300h] [rbp+1F8h]
  int v163; // [rsp+308h] [rbp+200h]
  __int64 v164; // [rsp+310h] [rbp+208h]
  int v165; // [rsp+318h] [rbp+210h]
  const wchar_t *v166; // [rsp+320h] [rbp+218h]
  int *v167; // [rsp+328h] [rbp+220h]
  int v168; // [rsp+330h] [rbp+228h]
  int *v169; // [rsp+338h] [rbp+230h]
  int v170; // [rsp+340h] [rbp+238h]
  __int64 v171; // [rsp+348h] [rbp+240h]
  int v172; // [rsp+350h] [rbp+248h]
  const wchar_t *v173; // [rsp+358h] [rbp+250h]
  unsigned int *v174; // [rsp+360h] [rbp+258h]
  int v175; // [rsp+368h] [rbp+260h]
  unsigned int *v176; // [rsp+370h] [rbp+268h]
  int v177; // [rsp+378h] [rbp+270h]
  __int64 v178; // [rsp+380h] [rbp+278h]
  int v179; // [rsp+388h] [rbp+280h]
  const wchar_t *v180; // [rsp+390h] [rbp+288h]
  int *v181; // [rsp+398h] [rbp+290h]
  int v182; // [rsp+3A0h] [rbp+298h]
  int *v183; // [rsp+3A8h] [rbp+2A0h]
  int v184; // [rsp+3B0h] [rbp+2A8h]
  __int64 v185; // [rsp+3B8h] [rbp+2B0h]
  int v186; // [rsp+3C0h] [rbp+2B8h]
  const wchar_t *v187; // [rsp+3C8h] [rbp+2C0h]
  unsigned int *v188; // [rsp+3D0h] [rbp+2C8h]
  int v189; // [rsp+3D8h] [rbp+2D0h]
  unsigned int *v190; // [rsp+3E0h] [rbp+2D8h]
  int v191; // [rsp+3E8h] [rbp+2E0h]
  __int64 v192; // [rsp+3F0h] [rbp+2E8h]
  int v193; // [rsp+3F8h] [rbp+2F0h]
  const wchar_t *v194; // [rsp+400h] [rbp+2F8h]
  int *v195; // [rsp+408h] [rbp+300h]
  int v196; // [rsp+410h] [rbp+308h]
  int *v197; // [rsp+418h] [rbp+310h]
  int v198; // [rsp+420h] [rbp+318h]
  __int64 v199; // [rsp+428h] [rbp+320h]
  int v200; // [rsp+430h] [rbp+328h]
  const wchar_t *v201; // [rsp+438h] [rbp+330h]
  unsigned int *v202; // [rsp+440h] [rbp+338h]
  int v203; // [rsp+448h] [rbp+340h]
  int *v204; // [rsp+450h] [rbp+348h]
  int v205; // [rsp+458h] [rbp+350h]
  __int64 v206; // [rsp+460h] [rbp+358h]
  int v207; // [rsp+468h] [rbp+360h]
  const wchar_t *v208; // [rsp+470h] [rbp+368h]
  int *v209; // [rsp+478h] [rbp+370h]
  int v210; // [rsp+480h] [rbp+378h]
  int *v211; // [rsp+488h] [rbp+380h]
  int v212; // [rsp+490h] [rbp+388h]
  __int64 v213; // [rsp+498h] [rbp+390h]
  int v214; // [rsp+4A0h] [rbp+398h]
  const wchar_t *v215; // [rsp+4A8h] [rbp+3A0h]
  int *v216; // [rsp+4B0h] [rbp+3A8h]
  int v217; // [rsp+4B8h] [rbp+3B0h]
  int *v218; // [rsp+4C0h] [rbp+3B8h]
  int v219; // [rsp+4C8h] [rbp+3C0h]
  __int64 v220; // [rsp+4D0h] [rbp+3C8h]
  int v221; // [rsp+4D8h] [rbp+3D0h]
  const wchar_t *v222; // [rsp+4E0h] [rbp+3D8h]
  unsigned int *v223; // [rsp+4E8h] [rbp+3E0h]
  int v224; // [rsp+4F0h] [rbp+3E8h]
  __int64 v225; // [rsp+4F8h] [rbp+3F0h]
  int v226; // [rsp+500h] [rbp+3F8h]
  __int64 v227; // [rsp+508h] [rbp+400h]
  int v228; // [rsp+510h] [rbp+408h]
  const wchar_t *v229; // [rsp+518h] [rbp+410h]
  unsigned int *v230; // [rsp+520h] [rbp+418h]
  int v231; // [rsp+528h] [rbp+420h]
  __int64 v232; // [rsp+530h] [rbp+428h]
  int v233; // [rsp+538h] [rbp+430h]
  __int64 v234; // [rsp+540h] [rbp+438h]
  int v235; // [rsp+548h] [rbp+440h]
  const wchar_t *v236; // [rsp+550h] [rbp+448h]
  unsigned int *v237; // [rsp+558h] [rbp+450h]
  int v238; // [rsp+560h] [rbp+458h]
  __int64 v239; // [rsp+568h] [rbp+460h]
  int v240; // [rsp+570h] [rbp+468h]
  __int64 v241; // [rsp+578h] [rbp+470h]
  int v242; // [rsp+580h] [rbp+478h]
  const wchar_t *v243; // [rsp+588h] [rbp+480h]
  unsigned int *v244; // [rsp+590h] [rbp+488h]
  int v245; // [rsp+598h] [rbp+490h]
  __int64 v246; // [rsp+5A0h] [rbp+498h]
  int v247; // [rsp+5A8h] [rbp+4A0h]
  __int64 v248; // [rsp+5B0h] [rbp+4A8h]
  int v249; // [rsp+5B8h] [rbp+4B0h]
  const wchar_t *v250; // [rsp+5C0h] [rbp+4B8h]
  unsigned int *v251; // [rsp+5C8h] [rbp+4C0h]
  int v252; // [rsp+5D0h] [rbp+4C8h]
  __int64 v253; // [rsp+5D8h] [rbp+4D0h]
  int v254; // [rsp+5E0h] [rbp+4D8h]
  __int64 v255; // [rsp+5E8h] [rbp+4E0h]
  int v256; // [rsp+5F0h] [rbp+4E8h]
  const wchar_t *v257; // [rsp+5F8h] [rbp+4F0h]
  unsigned int *v258; // [rsp+600h] [rbp+4F8h]
  int v259; // [rsp+608h] [rbp+500h]
  __int64 v260; // [rsp+610h] [rbp+508h]
  int v261; // [rsp+618h] [rbp+510h]
  __int64 v262; // [rsp+620h] [rbp+518h]
  int v263; // [rsp+628h] [rbp+520h]
  __int128 v264; // [rsp+630h] [rbp+528h]
  __int128 v265; // [rsp+640h] [rbp+538h]
  __int64 v266; // [rsp+650h] [rbp+548h]
  _OWORD v267[2]; // [rsp+658h] [rbp+550h] BYREF
  wchar_t v268; // [rsp+678h] [rbp+570h]
  _BYTE v269[96]; // [rsp+688h] [rbp+580h] BYREF
  __int128 v270; // [rsp+6E8h] [rbp+5E0h]
  __int128 v271; // [rsp+6F8h] [rbp+5F0h]
  __int128 v272; // [rsp+708h] [rbp+600h]
  int v273; // [rsp+718h] [rbp+610h]
  wchar_t v274; // [rsp+71Ch] [rbp+614h]

  v1 = (char *)DXGGLOBAL::m_pGlobal;
  memset(v269, 0, 0x58uLL);
  v2 = *(_OWORD *)&v269[16];
  *((_OWORD *)DXGGLOBAL::m_pGlobal + 4) = *(_OWORD *)v269;
  v3 = *(_OWORD *)&v269[32];
  *((_OWORD *)v1 + 5) = v2;
  v4 = *(_OWORD *)&v269[48];
  *((_OWORD *)v1 + 6) = v3;
  v5 = *(_OWORD *)&v269[64];
  *((_OWORD *)v1 + 7) = v4;
  *(_QWORD *)&v4 = *(_QWORD *)&v269[80];
  *((_OWORD *)v1 + 8) = v5;
  *((_QWORD *)v1 + 18) = v4;
  g_WindowsSubsystem = ZwAllocateVirtualMemory;
  qword_1C0130C78 = ZwAllocateVirtualMemoryEx;
  qword_1C0130C80 = (__int64)ZwFreeVirtualMemory;
  qword_1C0130C88 = MmMapViewOfSection;
  qword_1C0130C90 = MmUnmapViewOfSection;
  qword_1C0130C98 = (__int64)MmMapLockedPagesSpecifyCache;
  qword_1C0130CA0 = (__int64)MmUnmapLockedPages;
  g_WslSubsystem = ZwAllocateVirtualMemory;
  qword_1C0130C40 = ZwAllocateVirtualMemoryEx;
  qword_1C0130C48 = (__int64)ZwFreeVirtualMemory;
  qword_1C0130C50 = MmMapViewOfSection;
  qword_1C0130C58 = MmUnmapViewOfSection;
  qword_1C0130C60 = (__int64)MmMapLockedPagesSpecifyCache;
  qword_1C0130C68 = (__int64)MmUnmapLockedPages;
  v6 = ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)(v1 + 305040),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         0x10uLL,
         0x4B677844u,
         0);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(2LL, v1, v6);
    v61 = L"DXGGlobal 0x%I64x: Unable to initialize the lookaside list for lock order tracker, returning 0x%I64x";
LABEL_64:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v61, (__int64)v1, v7, 0LL, 0LL, 0LL);
    return (unsigned int)v7;
  }
  v1[305024] = 1;
  v8 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 160), 0LL, 0LL, (POOL_TYPE)512, 0, 0xA0uLL, 0x576B7844u, 0);
  v7 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, v1, v8);
    v61 = L"DXGGlobal 0x%I64x: Unable to initialize m_VmBusPacketWorkItemList, returning 0x%I64x";
    goto LABEL_64;
  }
  v1[1379] = 1;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 336), v9, v10, v11) )
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed the initial shared resource handle table expansion, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v13 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, 64LL, v12);
  *((_QWORD *)v1 + 79) = v13;
  if ( !v13 )
  {
    WdLogSingleEntry2(3LL, v1, -1073741801LL);
    return 3221225495LL;
  }
  v14 = ExInitializeResourceLite(v13);
  LODWORD(v15) = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v14);
    return (unsigned int)v15;
  }
  v16 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 1168), 0LL, 0LL, PagedPool, 0, 0x5F8uLL, 0x4B677844u, 0);
  v15 = v16;
  if ( v16 < 0
    || (v1[1377] = 1,
        v17 = ExInitializeLookasideListEx(
                (PLOOKASIDE_LIST_EX)(v1 + 1264),
                0LL,
                0LL,
                PagedPool,
                0,
                0x5E0uLL,
                0x4B677844u,
                0),
        v15 = v17,
        v17 < 0) )
  {
    WdLogSingleEntry3(3LL, v1, v15, 0LL);
    return (unsigned int)v15;
  }
  v18 = g_bSkuSupportMultipleUsers;
  v1[1378] = 1;
  v88 = 32;
  v100 = 0x4000000LL;
  v71 = 0;
  v86 = 0;
  v72 = 0;
  v87 = 1;
  v70 = 0;
  v69 = 0;
  v74 = 0;
  v89 = 0;
  v90 = 0;
  v75 = 0;
  v76 = 0;
  v91 = 0;
  v92 = 0;
  v77 = 0;
  v93 = 0;
  v78 = 0;
  v94 = 0;
  v73 = 0;
  if ( v18 )
    v19 = g_IsInternalReleaseOrDbg != 0 ? 0x100000 : 0x80000;
  else
    v19 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  v83 = v19;
  if ( v18 )
    v20 = g_IsInternalReleaseOrDbg != 0 ? 8 : 4;
  else
    v20 = 2;
  v82 = v20;
  if ( v18 )
    v21 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v21 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v85 = v21;
  v65 = v21;
  v103 = L"TerminationListSizeLimit";
  v104 = &v71;
  v106 = &v100;
  v110 = L"ValidateWDDMCaps";
  v111 = &v72;
  v113 = &v86;
  v117 = L"WDDM2LockManagement";
  v118 = &v70;
  v120 = &v87;
  v124 = L"MaximumAdapterCount";
  v125 = &v69;
  v127 = &v88;
  v131 = L"InvestigationDebugParameter";
  v132 = &v74;
  v134 = &v89;
  v138 = L"EnableIgnoreWin32ProcessStatus";
  v139 = &v75;
  v141 = &v90;
  v145 = L"EnableHMDTestMode";
  v95 = 300;
  v64 = v19;
  v67 = 300;
  v146 = &v76;
  v84 = 1;
  v66 = v20;
  v68 = 1;
  v96 = 5000;
  v79 = 0;
  v97 = 15000;
  v80 = 0;
  v101 = 0LL;
  v102 = 288;
  v105 = 67108868;
  v107 = 4;
  v108 = 0LL;
  v109 = 288;
  v112 = 67108868;
  v114 = 4;
  v115 = 0LL;
  v116 = 288;
  v119 = 67108868;
  v121 = 4;
  v122 = 0LL;
  v123 = 288;
  v126 = 67108868;
  v128 = 4;
  v129 = 0LL;
  v130 = 288;
  v133 = 67108868;
  v135 = 4;
  v136 = 0LL;
  v137 = 288;
  v140 = 67108868;
  v142 = 4;
  v143 = 0LL;
  v144 = 288;
  v147 = 67108868;
  v148 = &v91;
  v152 = L"PreserveFirmwareMode";
  v153 = &v77;
  v155 = &v92;
  v159 = L"PreventFullscreenWireFormatChange";
  v160 = &v78;
  v162 = &v93;
  v166 = L"EnableFuzzing";
  v167 = &v73;
  v169 = &v94;
  v173 = L"InternalDiagnosticsBufferSize";
  v174 = &v64;
  v176 = &v83;
  v180 = L"InternalDiagnosticsBufferMultiplier";
  v181 = &v66;
  v183 = &v82;
  v187 = L"ExternalDiagnosticsBufferSize";
  v188 = &v65;
  v190 = &v85;
  v194 = L"ExternalDiagnosticsBufferMultiplier";
  v195 = &v68;
  v197 = &v84;
  v201 = L"DiagnosticsBufferExpansionTime";
  v202 = &v67;
  v149 = 4;
  v150 = 0LL;
  v151 = 288;
  v154 = 67108868;
  v156 = 4;
  v157 = 0LL;
  v158 = 288;
  v161 = 67108868;
  v163 = 4;
  v164 = 0LL;
  v165 = 288;
  v168 = 67108868;
  v170 = 4;
  v171 = 0LL;
  v172 = 288;
  v175 = 67108868;
  v177 = 4;
  v178 = 0LL;
  v179 = 288;
  v182 = 67108868;
  v184 = 4;
  v185 = 0LL;
  v186 = 288;
  v189 = 67108868;
  v191 = 4;
  v192 = 0LL;
  v193 = 288;
  v196 = 67108868;
  v198 = 4;
  v199 = 0LL;
  v200 = 288;
  v203 = 67108868;
  v205 = 4;
  v204 = &v95;
  v206 = 0LL;
  v208 = L"RapidHpdTimeoutInMilliseconds";
  v209 = &v79;
  v211 = &v96;
  v215 = L"RapidHpdMaxChainInMilliseconds";
  v216 = &v80;
  v218 = &v97;
  v222 = L"ForceUsb4MonitorSupport";
  v223 = &g_bDbgForceUsb4MonitorSupport;
  v229 = L"Usb4MonitorTargetId";
  v230 = &g_DbgUsb4MonitorTargetId;
  v236 = L"Usb4MonitorDpcdUSB4_Driver_ID";
  v237 = &g_DbgUsb4MonitorDpcdUSB4_Driver_ID;
  v243 = L"Usb4MonitorDpcdDP_IN_Adapter_Number";
  v244 = &g_DbgUsb4MonitorDpcdDP_IN_Adapter_Number;
  v250 = L"Usb4MonitorPowerOnDelayInSeconds";
  v251 = &g_DbgUsb4MonitorPowerOnDelayInSeconds;
  v257 = L"TreatUsb4MonitorAsNormal";
  v258 = &g_bDbgTreatUsb4MonitorAsNormal;
  v207 = 288;
  v210 = 67108868;
  v212 = 4;
  v213 = 0LL;
  v214 = 288;
  v217 = 67108868;
  v219 = 4;
  v220 = 0LL;
  v221 = 288;
  v224 = 67108868;
  v225 = 0LL;
  v226 = 0;
  v227 = 0LL;
  v228 = 288;
  v231 = 67108868;
  v232 = 0LL;
  v233 = 0;
  v234 = 0LL;
  v235 = 288;
  v238 = 67108868;
  v239 = 0LL;
  v240 = 0;
  v241 = 0LL;
  v242 = 288;
  v245 = 67108868;
  v246 = 0LL;
  v247 = 0;
  v248 = 0LL;
  v249 = 288;
  v252 = 67108868;
  v253 = 0LL;
  v254 = 0;
  v255 = 0LL;
  v256 = 288;
  v259 = 67108868;
  v260 = 0LL;
  v261 = 0;
  v262 = 0LL;
  v263 = 0;
  v266 = 0LL;
  v264 = 0LL;
  v265 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v101, 0LL, 0LL) < 0 )
  {
    *((_QWORD *)v1 + 114) = 0x4000000LL;
    *((_DWORD *)v1 + 348) = 32;
    v1[920] = 0;
    *((_DWORD *)v1 + 347) = 1;
    *((_DWORD *)v1 + 428) = 0;
    *((_DWORD *)v1 + 432) = 0;
  }
  else
  {
    v22 = v72 == 0;
    *((_QWORD *)v1 + 114) = v71;
    v23 = !v22;
    v22 = v73 == 0;
    v1[920] = v23;
    v24 = v70 < 2;
    v1[304514] = !v22;
    v25 = 1;
    if ( v24 )
      v25 = v70;
    *((_DWORD *)v1 + 347) = v25;
    v26 = v69;
    if ( v69 < 4 )
    {
      v26 = 4;
      v69 = 4;
    }
    else
    {
      if ( v69 > 0x400 )
        v26 = 1024;
      v69 = v26;
    }
    v22 = v76 == 1;
    *((_DWORD *)v1 + 348) = v26;
    *((_DWORD *)v1 + 428) = v74;
    *((_DWORD *)v1 + 432) = v75;
    v27 = v22;
    v22 = v77 == 0;
    v1[304513] = v27;
    v28 = !v22;
    v22 = v78 == 0;
    v1[304568] = v28;
    v1[304569] = !v22;
    if ( v79 )
      *((_DWORD *)v1 + 76312) = v79;
    if ( v80 )
      *((_DWORD *)v1 + 76313) = v80;
    if ( !g_OSTestSigningEnabled && !g_IsInternalRelease )
    {
      g_bDbgForceUsb4MonitorSupport = 0;
      g_bDbgTreatUsb4MonitorAsNormal = 0;
      g_DbgUsb4MonitorPowerOnDelayInSeconds = 0;
    }
  }
  *((_DWORD *)v1 + 226) = 0;
  v29 = *(_OWORD *)L"Y\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v81 = 0;
  *(_OWORD *)v269 = *(_OWORD *)L"\\REGISTRY\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v99.Length = 9830548LL;
  v30 = *(_OWORD *)L"E\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v98.Length = 2228256LL;
  *(_OWORD *)&v269[16] = v29;
  v31 = *(_OWORD *)L"\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_OWORD *)&v269[32] = v30;
  v32 = *(_OWORD *)L"Set001\\Control\\Terminal Server\\WinStations";
  *(_OWORD *)&v269[48] = v31;
  v33 = *(_OWORD *)L"ontrol\\Terminal Server\\WinStations";
  *(_OWORD *)&v269[64] = v32;
  v34 = *(_OWORD *)L"erminal Server\\WinStations";
  *(_OWORD *)&v269[80] = v33;
  v270 = v34;
  v271 = *(_OWORD *)L"Server\\WinStations";
  v35 = *(_DWORD *)L"ns";
  v272 = *(_OWORD *)L"inStations";
  v273 = v35;
  v274 = aRegistryMachin_13[74];
  v99.Buffer = (wchar_t *)v269;
  v268 = aDwmframeinterv[16];
  v98.Buffer = (wchar_t *)v267;
  v267[0] = *(_OWORD *)L"DWMFRAMEINTERVAL";
  v267[1] = *(_OWORD *)L"INTERVAL";
  if ( (int)ReadRegistryDwordKeyValue(&v99, &v98, &v81) >= 0 && v81 )
    *((_DWORD *)v1 + 76202) = v81;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  LODWORD(v15) = DxgkSharedObjectTypes;
  if ( DxgkSharedObjectTypes < 0 )
  {
    WdLogSingleEntry1(3LL, DxgkSharedObjectTypes);
    return (unsigned int)v15;
  }
  v37 = v66;
  if ( !v66 || ((v66 - 1) & v66) != 0 )
  {
    v37 = v82;
    v66 = v82;
  }
  if ( v64 < 0x1000 || v64 * v37 > 0x1000000 )
  {
    v64 = v83;
    v66 = v82;
  }
  v38 = v68;
  if ( !v68 || ((v68 - 1) & v68) != 0 )
  {
    v38 = v84;
    v68 = v84;
  }
  if ( v65 < 0x1000 || v65 * v38 > 0x1000000 )
  {
    v65 = v85;
    v68 = v84;
  }
  v39 = v67;
  if ( v67 > 0xE10 )
    v39 = 3600;
  v67 = v39;
  v40 = (-(__int64)(g_IsInternalReleaseOrDbg != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  v41 = operator new[](0x70uLL, 0x4B677844u, v40, 0x1000000LL);
  if ( v41 )
    v43 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v41, v64, v66, v40, v67);
  else
    v43 = 0LL;
  *((_QWORD *)v1 + 120) = v43;
  v44 = operator new[](0x70uLL, 0x4B677844u, v40, v42);
  if ( v44 )
    v46 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v44, v65, v68, v40, v67);
  else
    v46 = 0LL;
  *((_QWORD *)v1 + 121) = v46;
  if ( !*((_QWORD *)v1 + 120) )
  {
    WdLogSingleEntry1(6LL, v64);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for internal diagnostics buffers (SmallInternalDiagnosticsSize = 0x%I64x).",
      v64,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( !v46 )
  {
    WdLogSingleEntry1(6LL, v65);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for external diagnostics buffers (SmallExternalDiagnosticsSize = 0x%I64x).",
      v65,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v47 = (DXGSESSIONMGR *)operator new[](0x1C0uLL, 0x4B677844u, 64LL, v45);
  if ( v47 )
    v49 = DXGSESSIONMGR::DXGSESSIONMGR(v47);
  else
    v49 = 0LL;
  *((_QWORD *)v1 + 122) = v49;
  if ( !v49 )
  {
    WdLogSingleEntry1(6LL, 1978LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for dxgkrnl session manager.",
      1978LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v50 = *((_DWORD *)v1 + 348);
  v51 = (unsigned int)(v50 + 31) >> 5;
  v52 = 4LL * ((unsigned int)v51 + ((unsigned int)(1055 - v50) >> 5));
  if ( !is_mul_ok((unsigned int)v51 + ((unsigned int)(1055 - v50) >> 5), 4uLL) )
    v52 = -1LL;
  v53 = (ULONG *)operator new[](v52, 0x4B677844u, 256LL, v48);
  *((_QWORD *)v1 + 112) = v53;
  if ( !v53 )
  {
    WdLogSingleEntry1(6LL, 1987LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for dxgkrnl adapter ordinal bits.",
      1987LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  RtlInitializeBitMap((PRTL_BITMAP)v1 + 54, v53, *((_DWORD *)v1 + 348));
  RtlInitializeBitMap((PRTL_BITMAP)v1 + 55, (PULONG)(*((_QWORD *)v1 + 112) + 4 * v51), 1024 - *((_DWORD *)v1 + 348));
  if ( (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)v1 + 175, 0LL, 0LL, 0LL, 0LL) < 0 )
  {
    WdLogSingleEntry1(6LL, 2001LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for system process.",
      2001LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( PsInitialSystemProcess != *(PEPROCESS *)(*((_QWORD *)v1 + 175) + 56LL) )
  {
    WdLogSingleEntry1(1LL, 2004LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsInitialSystemProcess == m_pSystemDxgProcess->GetEProcess()",
      2004LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v55 = operator new[](0x280uLL, 0x4B677844u, 256LL, v54);
  v56 = (_BYTE *)v55;
  if ( v55 )
  {
    *(_QWORD *)(v55 + 16) = 0LL;
    *(_QWORD *)(v55 + 24) = 0LL;
    *(_QWORD *)(v55 + 32) = 0LL;
    *(_DWORD *)(v55 + 40) = 0;
    *(_DWORD *)(v55 + 44) = 69;
    *(_DWORD *)(v55 + 48) = 1;
    *(_DWORD *)(v55 + 632) = 0;
    memset((void *)(v55 + 56), 0, 0x240uLL);
    *v56 = 0;
  }
  else
  {
    v56 = 0LL;
  }
  *((_QWORD *)v1 + 191) = v56;
  if ( !v56 )
  {
    WdLogSingleEntry1(6LL, 2009LL);
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to Qdc cache.", 2009LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  KeInitializeSpinLock(&qword_1C0130BF0);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1716));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)(v1 + 1968));
  KeInitializeDpc((PRKDPC)(v1 + 2032), (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, v1);
  LOBYTE(OutputBuffer) = 0;
  v57 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  if ( v57 < 0 )
  {
    v62 = v57;
    WdLogSingleEntry1(2LL, v57);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get the platformInformation. Status : 0x%I64x",
      v62,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else if ( (_BYTE)OutputBuffer )
  {
    DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
  }
  *((_QWORD *)v1 + 265) = v1;
  *((_QWORD *)v1 + 264) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *((_QWORD *)v1 + 262) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *((_DWORD *)v1 + 76125) &= ~1u;
  *((_DWORD *)v1 + 76122) = 10;
  *((_DWORD *)v1 + 76123) = 50;
  *((_DWORD *)v1 + 76124) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)v1 + 227);
  DisplayDiagnostics::Initialize(v1 + 304640);
  v58 = PoRegisterPowerSettingCallback(
          0LL,
          &GUID_ADVANCED_COLOR_QUALITY_BIAS,
          DXGGLOBAL::AdvancedColorPowerSettingsCallback,
          v1,
          0LL);
  v59 = v58;
  if ( v58 < 0 )
  {
    WdLogSingleEntry1(2LL, v58);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoRegisterPowerSettingCallback for GUID_HDR_DISPLAY_QUALITY_BIAS failed with status:0x%I64x",
      v59,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v59;
}

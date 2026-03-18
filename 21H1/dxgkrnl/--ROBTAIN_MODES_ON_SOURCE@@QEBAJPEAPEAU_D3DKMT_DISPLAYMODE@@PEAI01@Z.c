/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C0125580
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0151658 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087D0 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0009724 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000F220 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010CB0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0041E98 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00D5738 (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0126134 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C01262F0 (_PopulateDisplayModeFromPresentPath.c)
 *     _CompareDisplayMode @ 0x1C012665C (_CompareDisplayMode.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0127C08 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C013A66C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0151F68 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1C02598A8 (-RemoveMode@MODE_UNION_LIST@@AEAAXI@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C0259F0C (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned int v7; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  void *v17; // rdi
  int VideoOutputTechnology; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 (__fastcall *v25)(__int64, __int64, __int64 *, __int64 *); // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64, __int64 *); // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned int *v37; // r14
  unsigned int v38; // ecx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 (__fastcall *v46)(__int64, _QWORD, __int64 *, __int64 *); // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdi
  unsigned int *v51; // r13
  __int64 (__fastcall *v52)(__int64, __int64 *); // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rbx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // eax
  unsigned int v71; // edi
  unsigned int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // r15d
  __int64 v75; // r14
  __int64 v76; // rbx
  __int64 v77; // r15
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // ebx
  __int64 v88; // rdx
  signed int v89; // r13d
  int v90; // ecx
  __int64 v91; // rcx
  bool v92; // zf
  unsigned int v93; // eax
  char v94; // dl
  char v95; // cl
  __int64 v96; // r8
  __int64 v97; // r9
  D3DDDIFORMAT Format; // r15d
  MODE_UNION_LIST *v99; // r12
  __int64 v100; // r14
  __int64 v101; // r11
  int v102; // r9d
  int v103; // r8d
  int v104; // eax
  int *v105; // rdx
  int v106; // ecx
  unsigned __int32 IntegerRefreshRate; // eax
  unsigned int v108; // eax
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  int v112; // eax
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  int v116; // eax
  int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  struct _D3DKMT_DISPLAYMODE **v121; // rbx
  struct _D3DKMT_DISPLAYMODE *v122; // r8
  unsigned int v123; // eax
  SIZE_T v124; // rax
  unsigned __int64 v125; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v126; // rax
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r9
  int UniqueModes; // eax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rbx
  struct _D3DKMT_DISPLAYMODE **v134; // rbx
  int v136; // ecx
  __int64 v137; // rcx
  __int64 v138; // rcx
  __int64 v139; // rdx
  int v140; // eax
  __int64 v141; // rdx
  __int64 v142; // rcx
  _QWORD *v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  int v152; // eax
  int v153; // r8d
  __int64 v154; // rax
  int v155; // eax
  __int64 v156; // rcx
  _QWORD *v157; // rax
  int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // rcx
  _QWORD *v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  _QWORD *v164; // rax
  __int64 v165; // rax
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  _QWORD *v168; // rax
  _QWORD *v169; // rdx
  __int64 v170; // rax
  _QWORD *v171; // rcx
  __int64 v172; // rax
  _QWORD *v173; // rdx
  __int64 v174; // rax
  __int64 v175; // rax
  unsigned __int64 v176; // rcx
  SIZE_T v177; // rax
  struct _D3DKMT_DISPLAYMODE *v178; // rax
  __int64 v179; // rdx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  int v183; // eax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rbx
  __int64 v187; // rax
  _QWORD *v188; // rax
  int v189; // [rsp+20h] [rbp-E0h]
  char v190; // [rsp+50h] [rbp-B0h] BYREF
  char v191; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v192; // [rsp+52h] [rbp-AEh]
  char v193; // [rsp+53h] [rbp-ADh]
  unsigned __int8 v194; // [rsp+54h] [rbp-ACh]
  __int16 v195; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v196; // [rsp+60h] [rbp-A0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v197; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v198; // [rsp+6Ch] [rbp-94h]
  unsigned int v199; // [rsp+70h] [rbp-90h] BYREF
  __int64 v200; // [rsp+78h] [rbp-88h] BYREF
  __int64 v201; // [rsp+80h] [rbp-80h] BYREF
  MODE_UNION_LIST *v202; // [rsp+88h] [rbp-78h] BYREF
  int v203; // [rsp+90h] [rbp-70h] BYREF
  char v204[8]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v205; // [rsp+A0h] [rbp-60h]
  void (__fastcall *v206)(__int64, unsigned int *); // [rsp+A8h] [rbp-58h]
  __int64 v207; // [rsp+B0h] [rbp-50h]
  int v208; // [rsp+B8h] [rbp-48h]
  char v209[8]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v210; // [rsp+C8h] [rbp-38h]
  void (__fastcall *v211)(__int64, unsigned int *); // [rsp+D0h] [rbp-30h]
  __int64 v212; // [rsp+D8h] [rbp-28h]
  int v213; // [rsp+E0h] [rbp-20h]
  char v214[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v215; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v216)(__int64, __int64); // [rsp+F8h] [rbp-8h]
  __int64 v217; // [rsp+100h] [rbp+0h]
  int v218; // [rsp+108h] [rbp+8h]
  _D3DKMT_DISPLAYMODE v219; // [rsp+110h] [rbp+10h] BYREF
  __int64 v220; // [rsp+140h] [rbp+40h]
  __int64 v221; // [rsp+148h] [rbp+48h] BYREF
  __int64 v222; // [rsp+150h] [rbp+50h] BYREF
  void **v223; // [rsp+158h] [rbp+58h]
  char v224[8]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v225; // [rsp+168h] [rbp+68h]
  void (__fastcall *v226)(__int64, __int64); // [rsp+170h] [rbp+70h]
  __int64 v227; // [rsp+178h] [rbp+78h]
  int v228; // [rsp+180h] [rbp+80h]
  void *v229; // [rsp+188h] [rbp+88h]
  struct _D3DKMT_DISPLAYMODE **v230; // [rsp+190h] [rbp+90h]
  unsigned int *v231; // [rsp+198h] [rbp+98h]
  unsigned int *v232; // [rsp+1A0h] [rbp+A0h]
  _D3DKMDT_MONITOR_SOURCE_MODE v233; // [rsp+1B0h] [rbp+B0h] BYREF

  v232 = a5;
  LODWORD(v5) = -1;
  v198 = -1;
  v6 = a1;
  v223 = a4;
  v7 = 0;
  v231 = a3;
  v8 = D3DKMDT_VOT_BNC|D3DKMDT_VOT_INDIRECT_WIRED|D3DKMDT_VOT_UDI_EXTERNAL|0xE0;
  v230 = a2;
  v220 = a1;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v6 + 32);
    v10 = *(unsigned int *)(v6 + 40);
    v11 = *(_QWORD *)(v6 + 24);
    v199 = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(v9 + 8))(v11, v10, v7, &v199);
    v15 = v12;
    if ( v12 < 0 )
    {
      v188 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v13);
      v188[3] = v15;
      v188[4] = *(unsigned int *)(v6 + 40);
      v188[5] = v7;
      WdLogEvent5_WdAssertion(v188);
      return (unsigned int)v15;
    }
    v16 = v199;
    if ( v199 == -1 )
      break;
    ++*(_DWORD *)(v6 + 52);
    v139 = *(unsigned int *)(v6 + 40);
    v197 = D3DKMDT_VOT_HD15;
    v195 = -1;
    v140 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int16 *))(*(_QWORD *)(v6 + 32) + 112LL))(
             *(_QWORD *)(v6 + 24),
             v139,
             v16,
             &v197,
             &v195);
    v15 = v140;
    if ( v140 < 0 )
    {
      v143 = (_QWORD *)WdLogNewEntry5_WdError(v142, v141);
      v143[4] = (unsigned int)v5;
      v143[3] = v15;
      v143[5] = *(unsigned int *)(v6 + 40);
      WdLogEvent5_WdError(v143);
      return (unsigned int)v15;
    }
    if ( (_DWORD)v5 == -1 || v197 < v8 )
    {
      LODWORD(v5) = v199;
      v8 = v197;
      v198 = v199;
      *(_DWORD *)(v6 + 48) = v7;
    }
    ++v7;
  }
  if ( (_DWORD)v5 == -1 && *(_DWORD *)(v6 + 52) )
  {
    v144 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v144 + 24) = 610LL;
    WdLogEvent5_WdAssertion(v144);
  }
  v17 = *(void **)v6;
  v229 = *(void **)v6;
  v197 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v229, v5, 0LL, &v197);
  v21 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v145 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v145 + 24) = v21;
    WdLogEvent5_WdError(v145);
    return (unsigned int)v21;
  }
  else
  {
    if ( (unsigned int)v197 < D3DKMDT_VOT_MIRACAST
      || (v194 = 1, (unsigned int)v197 > (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
    {
      v194 = 0;
    }
    if ( *((_QWORD *)v17 + 335)
      || (DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(
                                           *((ADAPTER_DISPLAY **)v17 + 334),
                                           v19),
          v193 = 1,
          !DisplayOnlyDriverUseRawModes) )
    {
      v193 = 0;
    }
    memset(&v233, 0, sizeof(v233));
    if ( DmmGetPreferredMonitorSourceModeOnTarget(*(void **)v6, v5, &v233) < 0 )
      memset(&v233, 0, sizeof(v233));
    v22 = *(_QWORD *)(v6 + 16);
    v23 = *(unsigned int *)(v6 + 40);
    v24 = *(_QWORD *)(v6 + 8);
    v201 = 0LL;
    v196 = 0LL;
    v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v22 + 8);
    v225 = 0LL;
    v226 = 0LL;
    v227 = 0LL;
    v228 = 0;
    v224[0] = 0;
    v26 = v25(v24, v23, &v196, &v201);
    v29 = v26;
    if ( v26 < 0 )
    {
      v147 = WdLogNewEntry5_WdError(v28, v27);
      *(_QWORD *)(v147 + 24) = v29;
      WdLogEvent5_WdError(v147);
    }
    else
    {
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v224,
        v196,
        *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL),
        *(_QWORD *)(v6 + 8));
      v30 = v225;
      v196 = 0LL;
      v205 = 0LL;
      v31 = *(__int64 (__fastcall **)(__int64, __int64 *))(v201 + 8);
      v206 = 0LL;
      v207 = 0LL;
      v208 = 0;
      v204[0] = 0;
      v32 = v31(v225, &v196);
      v29 = v32;
      if ( v32 < 0 )
      {
        v148 = WdLogNewEntry5_WdError(v34, v33);
        *(_QWORD *)(v148 + 24) = v29;
        WdLogEvent5_WdError(v148);
      }
      else
      {
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v204,
          v196,
          *(_QWORD *)(v201 + 32),
          v30);
        v35 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(v6 + 8));
        v37 = v205;
        *(_BYTE *)(v35 + 296) = 1;
        if ( v37 )
        {
          do
          {
            v38 = v37[1];
            if ( ((v38 - 1) & 0xFFFFFFFC) == 0 && v38 != 2 && v37[2] == v37[4] && v37[3] == v37[5] )
            {
              LOBYTE(v36) = 1;
              v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v201 + 40))(v30, *v37, v36);
              v43 = v39;
              if ( v39 < 0 )
              {
                v149 = WdLogNewEntry5_WdWarning(v41, v40, v42);
                *(_QWORD *)(v149 + 24) = v43;
                *(_QWORD *)(v149 + 32) = *v37;
                WdLogEvent5_WdWarning(v149);
              }
              else
              {
                v44 = *(_QWORD *)(v6 + 16);
                v45 = *(_QWORD *)(v6 + 8);
                v200 = 0LL;
                v196 = 0LL;
                v46 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(v44 + 24);
                v215 = 0LL;
                v216 = 0LL;
                v217 = 0LL;
                v218 = 0;
                v214[0] = 0;
                v47 = v46(v45, (unsigned int)v5, &v196, &v200);
                v29 = v47;
                if ( v47 < 0 )
                  goto LABEL_210;
                DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
                  (__int64)v214,
                  v196,
                  *(_QWORD *)(*(_QWORD *)(v6 + 16) + 32LL),
                  *(_QWORD *)(v6 + 8));
                v50 = v215;
                v51 = 0LL;
                v196 = 0LL;
                v210 = 0LL;
                v52 = *(__int64 (__fastcall **)(__int64, __int64 *))(v200 + 8);
                v211 = 0LL;
                v212 = 0LL;
                v213 = 0;
                v209[0] = 0;
                v53 = v52(v215, &v196);
                v29 = v53;
                if ( v53 < 0 )
                  goto LABEL_202;
                DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                  (__int64)v209,
                  v196,
                  *(_QWORD *)(v200 + 32),
                  v50);
                v51 = v210;
                if ( v210 )
                {
                  while ( 1 )
                  {
                    LOBYTE(v56) = 1;
                    v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v200 + 48))(v50, *v51, v56);
                    v61 = v57;
                    if ( v57 >= 0 )
                      break;
                    v150 = WdLogNewEntry5_WdWarning(v59, v58, v60);
                    *(_QWORD *)(v150 + 24) = v61;
                    *(_QWORD *)(v150 + 32) = *v51;
                    WdLogEvent5_WdWarning(v150);
LABEL_79:
                    v221 = 0LL;
                    v112 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v200 + 16))(v50, v51, &v221);
                    v29 = v112;
                    if ( v112 < 0 )
                      goto LABEL_202;
                    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
                      (__int64)v209,
                      v221,
                      *(_QWORD *)(v200 + 32),
                      v50);
                    v51 = v210;
                    if ( !v210 )
                      goto LABEL_81;
                  }
                  v191 = 0;
                  v203 = 0;
                  if ( v37[1] - 3 <= 1 || v193 )
                  {
                    v191 = 1;
                    goto LABEL_28;
                  }
                  v62 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v200 + 64))(v50, *v51, &v191, &v203);
                  v29 = v62;
                  if ( v62 == -1071774920 )
                  {
                    v151 = WdLogNewEntry5_WdTrace(v64, v63, v65, v66);
                    *(_QWORD *)(v151 + 24) = (unsigned int)v5;
                    *(_QWORD *)(v151 + 32) = *(unsigned int *)(v6 + 40);
                    goto LABEL_28;
                  }
                  if ( v62 < 0 )
                  {
                    v163 = WdLogNewEntry5_WdError(v64, v63);
                    *(_QWORD *)(v163 + 32) = v51;
                  }
                  else
                  {
LABEL_28:
                    v190 = 0;
                    if ( v233.VideoSignalInfo.ActiveSize.cx == v37[2]
                      && v233.VideoSignalInfo.ActiveSize.cy == v37[3]
                      && (*(int (__fastcall **)(unsigned int *, _D3DKMDT_MONITOR_SOURCE_MODE *, _QWORD, char *))(v200 + 80))(
                           v51,
                           &v233,
                           v194,
                           &v190) < 0 )
                    {
                      v190 = 0;
                    }
                    v67 = *(_QWORD *)(v6 + 32);
                    v68 = *(unsigned int *)(v6 + 40);
                    v69 = *(_QWORD *)(v6 + 24);
                    v196 = 0LL;
                    v70 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v67 + 24))(
                            v69,
                            v68,
                            (unsigned int)v5,
                            &v196);
                    v29 = v70;
                    if ( v70 >= 0 )
                    {
                      v71 = *(_DWORD *)(v196 + 16);
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v6 + 32) + 32LL))(*(_QWORD *)(v6 + 24));
                      v72 = v51[5];
                      LOBYTE(v73) = 1;
                      v192 = 1;
                      if ( v37[2] == v72 && v37[3] == v51[6] )
                      {
                        if ( (v71 & 1) != 0 )
                          goto LABEL_33;
LABEL_164:
                        LOBYTE(v73) = 0;
                        v192 = 0;
                      }
                      else if ( (v71 & 0x1E) == 0 )
                      {
                        goto LABEL_164;
                      }
LABEL_33:
                      v74 = 0;
                      v199 = 0;
                      v75 = 0LL;
                      v196 = 0LL;
LABEL_34:
                      if ( !(_BYTE)v73 )
                        goto LABEL_77;
                      v76 = dword_1C0079478[v75];
                      v197 = (int)v76;
                      switch ( (int)v76 )
                      {
                        case 1:
                          LOBYTE(v108) = v71;
                          goto LABEL_75;
                        case 2:
                          v108 = v71 >> 1;
                          goto LABEL_75;
                        case 3:
                          v108 = v71 >> 2;
                          goto LABEL_75;
                        case 4:
                          v108 = v71 >> 3;
LABEL_75:
                          if ( (v108 & 1) == 0 )
                            goto LABEL_76;
                          goto LABEL_37;
                        case 5:
                          if ( (v71 & 0x10) != 0 )
                            goto LABEL_37;
                          goto LABEL_76;
                        case 255:
LABEL_37:
                          v77 = v198;
                          LOBYTE(v189) = 1;
                          v78 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(v6 + 32)
                                                                                               + 64LL))(
                                  *(_QWORD *)(v6 + 24),
                                  *(unsigned int *)(v6 + 40),
                                  v198,
                                  (unsigned int)v76,
                                  v189);
                          v29 = v78;
                          if ( v78 == -1071774970 )
                          {
                            v167 = (_QWORD *)WdLogNewEntry5_WdAssertion(v80, v79);
                            v167[3] = v76;
                            v167[4] = *(unsigned int *)(v6 + 40);
                            v167[5] = v77;
                            v167[6] = -1071774970LL;
                            WdLogEvent5_WdAssertion(v167);
                            LODWORD(v29) = -1071774970;
                            goto LABEL_196;
                          }
                          if ( v78 < 0 )
                          {
                            v166 = (_QWORD *)WdLogNewEntry5_WdError(v80, v79);
                            v166[3] = v29;
                            v166[4] = *(unsigned int *)(v6 + 40);
                            v166[5] = v77;
                            v166[6] = *(_QWORD *)(v6 + 24);
                            v166[7] = v76;
                            WdLogEvent5_WdError(v166);
                            v51 = v210;
                            v37 = v205;
                            v50 = v215;
                            goto LABEL_205;
                          }
                          v81 = *(_QWORD *)(v6 + 32);
                          v82 = *(unsigned int *)(v6 + 40);
                          v83 = *(_QWORD *)(v6 + 24);
                          v202 = 0LL;
                          v84 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, MODE_UNION_LIST **))(v81 + 24))(
                                  v83,
                                  v82,
                                  (unsigned int)v77,
                                  &v202);
                          v29 = v84;
                          if ( v84 < 0 )
                          {
                            v165 = WdLogNewEntry5_WdError(v86, v85);
                            *(_QWORD *)(v165 + 24) = v29;
                            WdLogEvent5_WdError(v165);
                            v51 = v210;
                            v37 = v205;
                            v50 = v215;
                            goto LABEL_205;
                          }
                          v87 = *((_DWORD *)v202 + 6);
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v6 + 32) + 32LL))(*(_QWORD *)(v6 + 24));
                          v89 = 1;
                          break;
                        default:
                          v162 = WdLogNewEntry5_WdAssertion(v73, 0x1C0000000uLL);
                          *(_QWORD *)(v162 + 24) = v76;
                          WdLogEvent5_WdAssertion(v162);
                          goto LABEL_76;
                      }
LABEL_41:
                      v90 = v89;
                      if ( (unsigned int)(v89 - 5) <= 0xB )
                      {
                        v152 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v89);
                        v90 = (v152 + v153 - 2) % 4 + 1;
                      }
                      v91 = (unsigned int)(v90 - 1);
                      if ( (_DWORD)v91 )
                      {
                        v91 = (unsigned int)(v91 - 1);
                        if ( (_DWORD)v91 )
                        {
                          v91 = (unsigned int)(v91 - 1);
                          if ( (_DWORD)v91 )
                          {
                            if ( (_DWORD)v91 != 1 )
                              goto LABEL_165;
                            v92 = (v87 & 8) == 0;
                          }
                          else
                          {
                            v92 = (v87 & 4) == 0;
                          }
                        }
                        else
                        {
                          v92 = (v87 & 2) == 0;
                        }
                      }
                      else
                      {
                        v92 = (v87 & 1) == 0;
                      }
                      if ( v92 )
                        goto LABEL_166;
                      v88 = (unsigned int)v89;
                      if ( (unsigned int)(v89 - 1) <= 0xF )
                        v88 = (unsigned int)((v89 - 1) / 4 + 1);
                      if ( (_DWORD)v88 == 1 )
                      {
                        v93 = v87 >> 4;
                      }
                      else
                      {
                        v88 = (unsigned int)(v88 - 2);
                        if ( (_DWORD)v88 )
                        {
                          v88 = (unsigned int)(v88 - 1);
                          if ( (_DWORD)v88 )
                          {
                            if ( (_DWORD)v88 != 1 )
                            {
LABEL_165:
                              v154 = WdLogNewEntry5_WdAssertion(v91, v88);
                              *(_QWORD *)(v154 + 24) = v89;
                              WdLogEvent5_WdAssertion(v154);
LABEL_166:
                              v37 = v205;
                              goto LABEL_122;
                            }
                            v93 = v87 >> 7;
                          }
                          else
                          {
                            v93 = v87 >> 6;
                          }
                        }
                        else
                        {
                          v93 = v87 >> 5;
                        }
                      }
                      if ( (v93 & 1) == 0 )
                        goto LABEL_166;
                      LOBYTE(v195) = 0;
                      memset(&v219, 0, sizeof(v219));
                      v94 = *((_QWORD *)v229 + 335) || !*(_BYTE *)(*((_QWORD *)v229 + 334) + 249LL) || v89 == 1;
                      v95 = v190 && v197 == D3DKMDT_VOT_SVIDEO;
                      v37 = v205;
                      PopulateDisplayModeFromPresentPath(
                        (_DWORD)v205,
                        (_DWORD)v210,
                        v197,
                        v89,
                        v191,
                        v95,
                        v94,
                        v203,
                        (__int64)&v219,
                        (__int64)&v195);
                      if ( *(_DWORD *)(v6 + 52) > 1u )
                      {
                        LOBYTE(v189) = 0;
                        v155 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)(v6 + 32)
                                                                                              + 80LL))(
                                 *(_QWORD *)(v6 + 24),
                                 *(unsigned int *)(v6 + 40),
                                 (unsigned int)v77,
                                 (unsigned int)v89,
                                 v189);
                        v29 = v155;
                        if ( v155 == -1071774970 )
                        {
                          v164 = (_QWORD *)WdLogNewEntry5_WdAssertion(v156, v88);
                          v164[3] = v89;
                          v164[4] = *(unsigned int *)(v6 + 40);
                          v164[5] = (unsigned int)v77;
                          v164[6] = -1071774970LL;
                          WdLogEvent5_WdAssertion(v164);
                          LODWORD(v29) = -1071774970;
                          goto LABEL_192;
                        }
                        if ( v155 < 0 )
                        {
                          v157 = (_QWORD *)WdLogNewEntry5_WdError(v156, v88);
                          v157[3] = v29;
                          v157[4] = *(unsigned int *)(v6 + 40);
                          v157[5] = (unsigned int)v77;
                          v157[6] = *(_QWORD *)(v6 + 24);
                          v157[7] = v89;
                          WdLogEvent5_WdError(v157);
                          v51 = v210;
                          v50 = v215;
                          goto LABEL_205;
                        }
                      }
                      Format = v219.Format;
                      if ( v219.Format != D3DDDIFMT_A8R8G8B8 && *(_BYTE *)(v6 + 44)
                        || v219.Format <= (unsigned int)D3DDDIFMT_P8
                        && (v138 = 0x20003900000LL, _bittest64(&v138, v219.Format)) )
                      {
                        if ( !v223 )
                          goto LABEL_121;
                        LODWORD(v29) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(v6 + 104), &v219);
                        if ( (int)v29 >= 0 )
                          goto LABEL_121;
LABEL_192:
                        v51 = v210;
                        v50 = v215;
                        goto LABEL_205;
                      }
                      LODWORD(v29) = *(_DWORD *)(v6 + 80);
                      v99 = (MODE_UNION_LIST *)(v6 + 64);
                      v202 = v99;
                      if ( !(_DWORD)v29 )
                        goto LABEL_118;
                      v100 = *((_QWORD *)v99 + 1);
                      if ( (int)CompareDisplayMode(
                                  &v219,
                                  v100 + 44LL * *(unsigned int *)(*((_QWORD *)v99 + 4) + 4LL * (unsigned int)(v29 - 1)),
                                  v96,
                                  v97) > 0 )
                        goto LABEL_118;
                      v102 = v29 - 1;
                      v103 = 0;
                      v29 = 0LL;
                      v104 = 0;
                      if ( v102 < 0 )
                        goto LABEL_113;
                      while ( 1 )
                      {
                        v29 = (unsigned int)((v102 + v103) >> 1);
                        v105 = (int *)(v100 + 44LL * *(unsigned int *)(v101 + 4LL * (int)v29));
                        v106 = *v105;
                        if ( v219.Width == *v105 )
                        {
                          v106 = v105[1];
                          if ( v219.Height == v106 )
                          {
                            v106 = v105[2];
                            if ( Format == v106 )
                            {
                              v106 = ((unsigned int)v105[10] >> 4) & 1;
                              IntegerRefreshRate = (*((_DWORD *)&v219.Flags + 1) >> 4) & 1;
                              if ( IntegerRefreshRate == v106 )
                              {
                                v106 = v105[3];
                                IntegerRefreshRate = v219.IntegerRefreshRate;
                                if ( v219.IntegerRefreshRate == v106 )
                                {
                                  v106 = v105[6];
                                  IntegerRefreshRate = v219.ScanLineOrdering;
                                  if ( v219.ScanLineOrdering == v106 )
                                  {
                                    v106 = v105[8];
                                    IntegerRefreshRate = v219.DisplayFixedOutput;
                                    if ( v219.DisplayFixedOutput == v106 )
                                    {
                                      v106 = v105[7];
                                      IntegerRefreshRate = v219.DisplayOrientation;
                                      if ( v219.DisplayOrientation == v106 )
                                      {
                                        v104 = 0;
LABEL_112:
                                        v99 = v202;
LABEL_113:
                                        if ( v104 > 0 )
                                          v29 = (unsigned int)(v29 + 1);
                                        if ( v104 )
                                          v137 = 0LL;
                                        else
                                          v137 = v100 + 44LL * *(unsigned int *)(v101 + 4 * v29);
                                        if ( !v137 )
                                        {
LABEL_118:
                                          LODWORD(v29) = MODE_UNION_LIST::AddMode(v99, &v219, v29);
                                          if ( (int)v29 >= 0 )
                                            goto LABEL_119;
                                          goto LABEL_196;
                                        }
                                        if ( (*(_DWORD *)(v137 + 36) & 2) != 0 )
                                        {
                                          MODE_UNION_LIST::RemoveMode(v99, v29);
                                          MODE_UNION_LIST::AddMode(v99, &v219, v29);
                                        }
                                        else
                                        {
                                          UpgradeDispModeFlags(v137, &v219);
                                        }
LABEL_119:
                                        if ( (_BYTE)v195 )
                                        {
                                          ++v219.IntegerRefreshRate;
                                          *(_DWORD *)&v219.Flags |= 2u;
                                          LODWORD(v29) = MODE_UNION_LIST::AddUniqueMode(v99, &v219);
                                          if ( (int)v29 < 0 )
                                          {
LABEL_196:
                                            v51 = v210;
                                            v37 = v205;
                                            v50 = v215;
                                            goto LABEL_205;
                                          }
                                        }
                                        v6 = v220;
                                        v37 = v205;
LABEL_121:
                                        LODWORD(v77) = v198;
LABEL_122:
                                        if ( ++v89 > 4 )
                                        {
                                          if ( *(_DWORD *)(v6 + 52) > 1u )
                                          {
                                            v158 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v6 + 32) + 88LL))(
                                                     *(_QWORD *)(v6 + 24),
                                                     *(unsigned int *)(v6 + 40),
                                                     (unsigned int)v77,
                                                     0LL);
                                            v29 = v158;
                                            if ( v158 < 0 )
                                            {
                                              v161 = (_QWORD *)WdLogNewEntry5_WdError(v160, v159);
                                              v161[3] = v29;
                                              v161[4] = *(_QWORD *)(v6 + 24);
                                              v161[5] = *(unsigned int *)(v6 + 40);
                                              v161[6] = (unsigned int)v77;
                                              WdLogEvent5_WdError(v161);
                                              v51 = v210;
                                              v50 = v215;
                                              goto LABEL_205;
                                            }
                                          }
                                          v74 = v199;
                                          v75 = v196;
LABEL_76:
                                          v73 = v192;
                                          ++v74;
                                          ++v75;
                                          v199 = v74;
                                          v196 = v75;
                                          if ( v74 >= 5 )
                                          {
LABEL_77:
                                            v5 = v198;
                                            v109 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v6 + 32) + 72LL))(
                                                     *(_QWORD *)(v6 + 24),
                                                     *(unsigned int *)(v6 + 40),
                                                     v198,
                                                     0LL);
                                            v29 = v109;
                                            if ( v109 >= 0 )
                                            {
                                              v51 = v210;
                                              v37 = v205;
                                              v50 = v215;
                                              goto LABEL_79;
                                            }
                                            v168 = (_QWORD *)WdLogNewEntry5_WdError(v111, v110);
                                            v168[3] = v29;
                                            v168[4] = *(unsigned int *)(v6 + 40);
                                            v168[5] = *(_QWORD *)(v6 + 24);
                                            v168[6] = v5;
                                            WdLogEvent5_WdError(v168);
                                            v51 = v210;
                                            v37 = v205;
                                            v50 = v215;
LABEL_205:
                                            if ( v209[0] )
                                              v211(v212, v51);
                                            if ( v214[0] )
                                              v216(v217, v50);
                                            v30 = v225;
                                            goto LABEL_100;
                                          }
                                          goto LABEL_34;
                                        }
                                        goto LABEL_41;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else
                            {
                              IntegerRefreshRate = Format;
                            }
                          }
                          else
                          {
                            IntegerRefreshRate = v219.Height;
                          }
                        }
                        else
                        {
                          IntegerRefreshRate = v219.Width;
                        }
                        v104 = IntegerRefreshRate - v106;
                        if ( v104 )
                        {
                          v136 = v29 - 1;
                          if ( v104 >= 0 )
                            v136 = v102;
                          v102 = v136;
                          if ( v104 >= 0 )
                            v103 = v29 + 1;
                          if ( v103 <= v136 )
                            continue;
                        }
                        goto LABEL_112;
                      }
                    }
LABEL_202:
                    v163 = WdLogNewEntry5_WdError(v55, v54);
                  }
                  *(_QWORD *)(v163 + 24) = v29;
                  v171 = (_QWORD *)v163;
LABEL_204:
                  WdLogEvent5_WdError(v171);
                  goto LABEL_205;
                }
LABEL_81:
                v113 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v200 + 56))(v50, 0LL);
                v29 = v113;
                if ( v113 < 0 )
                {
                  v169 = (_QWORD *)WdLogNewEntry5_WdError(v115, v114);
                  v169[3] = v29;
                  v169[4] = v50;
                  if ( v51 )
                    v170 = *v51;
                  else
                    v170 = 0xFFFFFFFFLL;
                  v169[5] = v170;
                  v171 = v169;
                  goto LABEL_204;
                }
                if ( v209[0] )
                  v211(v212, v51);
                if ( v214[0] )
                  v216(v217, v50);
                v30 = v225;
              }
            }
            v222 = 0LL;
            v116 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v201 + 16))(v30, v37, &v222);
            v29 = v116;
            if ( v116 < 0 )
            {
LABEL_210:
              v172 = WdLogNewEntry5_WdError(v49, v48);
              *(_QWORD *)(v172 + 24) = v29;
              WdLogEvent5_WdError(v172);
              goto LABEL_100;
            }
            DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
              (__int64)v204,
              v222,
              *(_QWORD *)(v201 + 32),
              v30);
            v37 = v205;
          }
          while ( v205 );
        }
        v117 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v201 + 48))(v30, 0LL);
        v29 = v117;
        if ( v117 < 0 )
        {
          v173 = (_QWORD *)WdLogNewEntry5_WdError(v119, v118);
          v173[3] = v29;
          v173[4] = v30;
          v173[5] = 0xFFFFFFFFLL;
          WdLogEvent5_WdError(v173);
        }
        else
        {
          v120 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*(_QWORD *)(v6 + 8));
          v121 = v230;
          *(_BYTE *)(v120 + 296) = 0;
          v122 = *v121;
          if ( !*v121 )
          {
            v123 = *(_DWORD *)(v6 + 80);
            if ( v123 )
            {
              v125 = v123;
              v124 = 44LL * v123;
              if ( !is_mul_ok(v125, 0x2CuLL) )
                v124 = -1LL;
              v126 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v124, 0x4B677844u, PagedPool);
              *v121 = v126;
              if ( !v126 )
              {
                v174 = WdLogNewEntry5_WdLowResource(0LL, v127, v128, v129);
                *(_QWORD *)(v174 + 24) = 1181LL;
                WdLogEvent5_WdLowResource(v174);
                LODWORD(v29) = -1073741801;
                goto LABEL_100;
              }
              memset(v126, 0, 44LL * *(unsigned int *)(v6 + 80));
              v122 = *v121;
            }
          }
          UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                          (MODE_UNION_LIST *)(v6 + 64),
                          *(unsigned int *)(v6 + 80),
                          v122,
                          v231);
          v133 = UniqueModes;
          if ( UniqueModes < 0 )
          {
            v175 = WdLogNewEntry5_WdAssertion(v132, v131);
            *(_QWORD *)(v175 + 24) = v133;
            WdLogEvent5_WdAssertion(v175);
          }
          v134 = (struct _D3DKMT_DISPLAYMODE **)v223;
          if ( v223 )
          {
            if ( *v223 )
            {
              operator delete[](*v223);
              *v134 = 0LL;
            }
            v176 = *(unsigned int *)(v6 + 120);
            if ( (_DWORD)v176 )
            {
              v177 = 44 * v176;
              if ( !is_mul_ok(v176, 0x2CuLL) )
                v177 = -1LL;
              v178 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v177, 0x4B677844u, PagedPool);
              *v134 = v178;
              if ( v178 )
              {
                memset(v178, 0, 44LL * *(unsigned int *)(v6 + 120));
                v183 = MODE_UNION_LIST::GetUniqueModes(
                         (MODE_UNION_LIST *)(v6 + 104),
                         *(unsigned int *)(v6 + 120),
                         *v134,
                         v232);
                v186 = v183;
                if ( v183 < 0 )
                {
                  v187 = WdLogNewEntry5_WdAssertion(v185, v184);
                  *(_QWORD *)(v187 + 24) = v186;
                  WdLogEvent5_WdAssertion(v187);
                }
              }
              else
              {
                v182 = WdLogNewEntry5_WdLowResource(0LL, v179, v180, v181);
                *(_QWORD *)(v182 + 24) = 1213LL;
                WdLogEvent5_WdLowResource(v182);
              }
            }
          }
          LODWORD(v29) = 0;
        }
LABEL_100:
        if ( v204[0] )
          v206(v207, v37);
      }
      if ( v224[0] )
        v226(v227, v30);
    }
    return (unsigned int)v29;
  }
}

/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C0028410
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C012ADD0 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00122C0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C00232F4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     SetIconMetrics @ 0x1C00237E0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00239FC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C0023B4C (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C0024D48 (GreTextInitialized.c)
 *     GetKbdLangSwitch @ 0x1C0027E98 (GetKbdLangSwitch.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0027F24 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C0028204 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     GreSetFontEnumeration @ 0x1C0029414 (GreSetFontEnumeration.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C0029478 (UpdatePerUserKeyboardIndicators.c)
 *     SetMouseTrails @ 0x1C002AC88 (SetMouseTrails.c)
 *     _SetCaretBlinkTime @ 0x1C002F330 (_SetCaretBlinkTime.c)
 *     _DestroyMenu @ 0x1C0035170 (_DestroyMenu.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0078BC0 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C007A444 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C007B2C8 (xxxUpdateSystemIconsFromRegistry.c)
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00864C0 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     WakeRIT @ 0x1C0104090 (WakeRIT.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C011D880 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C01283C4 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     UnlockDesktopMenu @ 0x1C012CD88 (UnlockDesktopMenu.c)
 *     xxxUserResetDisplayDevice @ 0x1C01583D0 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     CheckEasPolicyChange @ 0x1C01D3E68 (CheckEasPolicyChange.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224060 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxUpdatePerUserSystemParameters(int a1)
{
  int v1; // r14d
  int v2; // r15d
  int v3; // esi
  int v4; // r13d
  struct _UNICODE_STRING *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  _QWORD *i; // rbx
  unsigned int v11; // r14d
  __int64 *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 *v15; // rbx
  int v16; // edx
  unsigned int j; // ebx
  unsigned int SystemArgument1; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rax
  unsigned int v22; // ecx
  bool v23; // zf
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v28; // ebx
  int v29; // eax
  int v30; // esi
  __int64 v31; // rcx
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  unsigned int *BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int *BugCheckParameter4a; // [rsp+20h] [rbp-E0h]
  int v37; // [rsp+28h] [rbp-D8h]
  unsigned int v38; // [rsp+50h] [rbp-B0h] BYREF
  char v39; // [rsp+54h] [rbp-ACh]
  int v40; // [rsp+58h] [rbp-A8h]
  unsigned int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  int v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+6Ch] [rbp-94h]
  int v46; // [rsp+70h] [rbp-90h] BYREF
  int v47; // [rsp+74h] [rbp-8Ch] BYREF
  int v48; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v49; // [rsp+7Ch] [rbp-84h]
  int v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+84h] [rbp-7Ch]
  int v52; // [rsp+88h] [rbp-78h] BYREF
  int v53; // [rsp+8Ch] [rbp-74h] BYREF
  int v54; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v55[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-38h]
  __int128 v60; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-20h]
  __int128 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp+0h]
  int v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+114h] [rbp+14h]
  __int64 v66; // [rsp+118h] [rbp+18h] BYREF
  int v67; // [rsp+120h] [rbp+20h]
  int v68; // [rsp+124h] [rbp+24h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  int v70; // [rsp+130h] [rbp+30h]
  int v71; // [rsp+134h] [rbp+34h]
  int v72; // [rsp+138h] [rbp+38h]
  int v73; // [rsp+13Ch] [rbp+3Ch]
  int v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+144h] [rbp+44h]
  int v76; // [rsp+148h] [rbp+48h]
  int v77; // [rsp+14Ch] [rbp+4Ch]
  int v78; // [rsp+150h] [rbp+50h]
  int v79; // [rsp+154h] [rbp+54h]
  int v80; // [rsp+158h] [rbp+58h]
  int v81; // [rsp+15Ch] [rbp+5Ch]
  int v82; // [rsp+160h] [rbp+60h]
  int v83; // [rsp+164h] [rbp+64h]
  int v84; // [rsp+168h] [rbp+68h]
  int v85; // [rsp+16Ch] [rbp+6Ch]
  int v86; // [rsp+170h] [rbp+70h]
  int v87; // [rsp+174h] [rbp+74h]
  int v88; // [rsp+178h] [rbp+78h]
  int v89; // [rsp+17Ch] [rbp+7Ch]
  int v90; // [rsp+180h] [rbp+80h]
  int v91; // [rsp+184h] [rbp+84h]
  int v92; // [rsp+188h] [rbp+88h]
  int v93; // [rsp+18Ch] [rbp+8Ch]
  int v94; // [rsp+190h] [rbp+90h]
  int v95; // [rsp+194h] [rbp+94h]
  int v96; // [rsp+198h] [rbp+98h]
  int v97; // [rsp+19Ch] [rbp+9Ch]
  int v98; // [rsp+1A0h] [rbp+A0h]
  int v99; // [rsp+1A4h] [rbp+A4h]
  int v100; // [rsp+1A8h] [rbp+A8h]
  int v101; // [rsp+1ACh] [rbp+ACh]
  int v102; // [rsp+1B0h] [rbp+B0h]
  int v103; // [rsp+1B4h] [rbp+B4h]
  __int64 v104; // [rsp+1B8h] [rbp+B8h]
  int v105; // [rsp+1C0h] [rbp+C0h]
  int v106; // [rsp+1C4h] [rbp+C4h]
  __int64 v107; // [rsp+1C8h] [rbp+C8h] BYREF
  int v108; // [rsp+1D0h] [rbp+D0h]
  int v109; // [rsp+1D4h] [rbp+D4h]
  int v110; // [rsp+1D8h] [rbp+D8h]
  int v111; // [rsp+1DCh] [rbp+DCh]
  int v112; // [rsp+1E0h] [rbp+E0h]
  int v113; // [rsp+1E4h] [rbp+E4h]
  int v114; // [rsp+1E8h] [rbp+E8h]
  int v115; // [rsp+1ECh] [rbp+ECh]
  int v116; // [rsp+1F0h] [rbp+F0h]
  int v117; // [rsp+1F4h] [rbp+F4h]
  int v118; // [rsp+1F8h] [rbp+F8h]
  int v119; // [rsp+1FCh] [rbp+FCh]
  int v120; // [rsp+200h] [rbp+100h]
  int v121; // [rsp+204h] [rbp+104h]
  int v122; // [rsp+208h] [rbp+108h]
  int v123; // [rsp+20Ch] [rbp+10Ch]
  int v124; // [rsp+210h] [rbp+110h]
  int v125; // [rsp+214h] [rbp+114h]
  __int64 v126; // [rsp+218h] [rbp+118h]
  int v127; // [rsp+220h] [rbp+120h]
  int v128; // [rsp+224h] [rbp+124h]
  __int64 v129; // [rsp+228h] [rbp+128h]
  int v130; // [rsp+230h] [rbp+130h]
  int v131; // [rsp+234h] [rbp+134h]
  int v132; // [rsp+238h] [rbp+138h]
  int v133; // [rsp+23Ch] [rbp+13Ch]
  int v134; // [rsp+240h] [rbp+140h]
  int v135; // [rsp+244h] [rbp+144h]
  int v136; // [rsp+248h] [rbp+148h]
  int v137; // [rsp+24Ch] [rbp+14Ch]
  int v138; // [rsp+250h] [rbp+150h]
  int v139; // [rsp+254h] [rbp+154h]
  int v140; // [rsp+258h] [rbp+158h]
  int v141; // [rsp+25Ch] [rbp+15Ch]
  int v142; // [rsp+260h] [rbp+160h]
  int v143; // [rsp+264h] [rbp+164h]
  int v144; // [rsp+268h] [rbp+168h]
  int v145; // [rsp+26Ch] [rbp+16Ch]
  int v146; // [rsp+270h] [rbp+170h]
  int v147; // [rsp+274h] [rbp+174h]
  int v148; // [rsp+278h] [rbp+178h]
  int v149; // [rsp+27Ch] [rbp+17Ch]
  int v150; // [rsp+280h] [rbp+180h]
  int v151; // [rsp+284h] [rbp+184h]
  int v152; // [rsp+288h] [rbp+188h]
  int v153; // [rsp+28Ch] [rbp+18Ch]
  int v154; // [rsp+290h] [rbp+190h]
  int v155; // [rsp+294h] [rbp+194h]
  int v156; // [rsp+298h] [rbp+198h]
  int v157; // [rsp+29Ch] [rbp+19Ch]
  int v158; // [rsp+2A0h] [rbp+1A0h]
  int v159; // [rsp+2A4h] [rbp+1A4h]
  __int64 v160; // [rsp+2A8h] [rbp+1A8h]
  int v161; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v162; // [rsp+2B8h] [rbp+1B8h]
  int v163; // [rsp+2C0h] [rbp+1C0h]
  ULONG *p_ActiveThreadCount; // [rsp+2C8h] [rbp+1C8h]
  int v165; // [rsp+2D0h] [rbp+1D0h]
  __int64 v166; // [rsp+2D8h] [rbp+1D8h]
  int v167; // [rsp+2E0h] [rbp+1E0h]
  char *v168; // [rsp+2E8h] [rbp+1E8h]
  int v169; // [rsp+2F0h] [rbp+1F0h]
  __int64 v170; // [rsp+2F8h] [rbp+1F8h]
  int v171; // [rsp+300h] [rbp+200h]
  int *v172; // [rsp+308h] [rbp+208h]
  int v173; // [rsp+310h] [rbp+210h]
  __int64 v174; // [rsp+318h] [rbp+218h]
  int v175; // [rsp+320h] [rbp+220h]
  __int64 v176; // [rsp+328h] [rbp+228h]
  int v177; // [rsp+330h] [rbp+230h] BYREF
  __int64 v178; // [rsp+338h] [rbp+238h]
  int v179; // [rsp+340h] [rbp+240h]
  ULONG *v180; // [rsp+348h] [rbp+248h]
  int v181; // [rsp+350h] [rbp+250h]
  __int64 v182; // [rsp+358h] [rbp+258h]
  int v183; // [rsp+360h] [rbp+260h]
  int *v184; // [rsp+368h] [rbp+268h]
  int v185; // [rsp+370h] [rbp+270h]
  __int64 v186; // [rsp+378h] [rbp+278h]
  int v187; // [rsp+380h] [rbp+280h]
  int *v188; // [rsp+388h] [rbp+288h]
  int v189; // [rsp+390h] [rbp+290h]
  __int64 v190; // [rsp+398h] [rbp+298h]
  int v191; // [rsp+3A0h] [rbp+2A0h]
  int *v192; // [rsp+3A8h] [rbp+2A8h]
  int v193; // [rsp+3B0h] [rbp+2B0h]
  __int64 v194; // [rsp+3B8h] [rbp+2B8h]
  int v195; // [rsp+3C0h] [rbp+2C0h]
  __int64 v196; // [rsp+3C8h] [rbp+2C8h]
  int v197; // [rsp+3D0h] [rbp+2D0h]
  __int64 v198; // [rsp+3D8h] [rbp+2D8h]
  int v199; // [rsp+3E0h] [rbp+2E0h]
  __int64 v200; // [rsp+3E8h] [rbp+2E8h]
  int v201; // [rsp+3F0h] [rbp+2F0h]
  __int64 v202; // [rsp+3F8h] [rbp+2F8h]
  int v203; // [rsp+400h] [rbp+300h]
  int *v204; // [rsp+408h] [rbp+308h]
  int v205; // [rsp+410h] [rbp+310h]
  __int64 v206; // [rsp+418h] [rbp+318h]
  int v207; // [rsp+420h] [rbp+320h]
  int *v208; // [rsp+428h] [rbp+328h]
  int v209; // [rsp+430h] [rbp+330h]
  __int64 v210; // [rsp+438h] [rbp+338h]
  int v211; // [rsp+440h] [rbp+340h]
  __int64 v212; // [rsp+448h] [rbp+348h]
  int v213; // [rsp+450h] [rbp+350h]
  __int64 v214; // [rsp+458h] [rbp+358h]
  int v215; // [rsp+460h] [rbp+360h]
  int *v216; // [rsp+468h] [rbp+368h]
  int v217; // [rsp+470h] [rbp+370h]
  __int64 v218; // [rsp+478h] [rbp+378h]
  int v219; // [rsp+480h] [rbp+380h]
  int *v220; // [rsp+488h] [rbp+388h]
  unsigned __int16 v221[40]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v222[80]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v51 = a1;
  v45 = 0;
  v65 = 4135;
  v42 = gulFontInformation;
  v41 = 96;
  v64 = 4;
  v1 = 0;
  v46 = 0;
  v59 = 0LL;
  v48 = gdwPUDFlags & 0x100000;
  v58 = 0LL;
  v66 = 112LL;
  v81 = 3;
  v47 = gdwPUDFlags & 0x10000;
  v85 = 3;
  v84 = 15;
  v50 = 0;
  v44 = 1;
  v67 = 4;
  v68 = 17;
  v69 = 100LL;
  v70 = 4;
  v71 = 77;
  v72 = 199;
  v73 = 4;
  v74 = 4;
  v75 = 76;
  v76 = 198;
  v77 = 4;
  v78 = 4;
  v79 = 105;
  v80 = 14;
  v82 = 4;
  v83 = 109;
  v86 = 4;
  v87 = 131;
  v88 = 18;
  v89 = 1;
  v90 = 4;
  v91 = 141;
  v92 = 624;
  v93 = 1;
  v94 = 4;
  v95 = 145;
  v96 = 625;
  v97 = 1;
  v98 = 4;
  v99 = 143;
  v100 = 626;
  v101 = 1;
  v102 = 4;
  v103 = 159;
  v104 = 628LL;
  v105 = 13;
  v106 = 23;
  v107 = 106LL;
  v108 = 13;
  v109 = 11;
  v110 = 13;
  v140 = 17;
  v111 = 15;
  v145 = 20;
  v148 = 20;
  v125 = 96;
  v153 = 50;
  v157 = 50;
  v180 = &WPP_MAIN_CB.ActiveThreadCount + 1;
  v184 = &v48;
  v188 = &gnFastAltTabRows;
  v129 = 96LL;
  v143 = 133;
  v186 = 133LL;
  v192 = &gnFastAltTabColumns;
  v112 = 12;
  v113 = 32;
  v114 = 6;
  v115 = 500;
  v116 = 12;
  v117 = 29;
  v118 = 97;
  v119 = 4;
  v120 = 12;
  v121 = 30;
  v122 = 98;
  v123 = 4;
  v124 = 12;
  v126 = 7LL;
  v127 = 3;
  v128 = 28;
  v130 = 35;
  v131 = 111;
  v132 = 236;
  v133 = 1;
  v134 = 12;
  v135 = 127;
  v136 = 16;
  v137 = 1;
  v138 = 12;
  v139 = 129;
  v141 = 30;
  v142 = 12;
  v144 = 19;
  v146 = 12;
  v147 = 135;
  v149 = 30;
  v150 = 12;
  v151 = 137;
  v152 = 21;
  v154 = 12;
  v155 = 139;
  v156 = 22;
  v158 = 4;
  v159 = 169;
  v160 = 205LL;
  v177 = 4;
  v178 = 94LL;
  v179 = 400;
  v181 = 4;
  v182 = 107LL;
  v183 = 2;
  v185 = 4;
  v187 = 3;
  v189 = 4;
  v190 = 134LL;
  v191 = 7;
  v193 = 4;
  v194 = 159LL;
  v195 = 3;
  v197 = 4;
  v201 = 4;
  v205 = 4;
  v209 = 4;
  v213 = 4;
  v2 = a1 & 1;
  v219 = 1;
  v171 = 1;
  v196 = gpsi + 4996LL;
  v161 = 12;
  v200 = gpsi + 5000LL;
  v165 = 12;
  v204 = &v42;
  v3 = a1 & 4;
  v169 = 12;
  v208 = &v46;
  v212 = gdwHungAppTimeout;
  v216 = &gdwWaitToKillTimeout;
  v220 = &v47;
  p_ActiveThreadCount = &WPP_MAIN_CB.ActiveThreadCount;
  v168 = (char *)&WPP_MAIN_CB.Dpc.DpcData + 4;
  v170 = 12LL;
  v172 = &v44;
  v211 = 5000;
  v215 = 5000;
  v176 = gfEnableHexNumpad;
  v198 = 160LL;
  v199 = 3;
  v202 = 200LL;
  v203 = 0;
  v206 = 618LL;
  v207 = 0;
  v210 = 621LL;
  v214 = 622LL;
  v217 = 23;
  v218 = 149LL;
  v162 = 10LL;
  v163 = 6;
  v166 = 11LL;
  v167 = 10;
  v173 = 35;
  v174 = 237LL;
  v175 = 0;
  v40 = v3;
  v4 = a1 & 2;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v5 = (struct _UNICODE_STRING *)CreateProfileUserName(&v58);
  if ( !v5 )
    return 0LL;
  v6 = grpWinStaList;
  if ( grpWinStaList )
  {
    v7 = *(_QWORD *)(grpWinStaList + 208LL);
    if ( v7 )
      Win32FreePool(v7);
    v8 = Win32AllocPool(v5->Length, 1852863317LL);
    *(_QWORD *)(grpWinStaList + 208LL) = v8;
    if ( v8 )
    {
      *(_WORD *)(grpWinStaList + 202LL) = v5->Length;
      v6 = 0LL;
      *(_WORD *)(grpWinStaList + 200LL) = 0;
      RtlCopyUnicodeString((PUNICODE_STRING)(grpWinStaList + 200LL), v5);
    }
    else
    {
      v6 = 0LL;
    }
    if ( v2 )
      WakeRIT(64LL);
    v3 = v40;
  }
  if ( !v4 || v3 )
    goto LABEL_13;
  v45 = CheckEasPolicyChange();
  v30 = v45;
  if ( !(unsigned int)CheckDesktopPolicyChange(v5) && !v30 )
  {
    UserSetLastError(0LL);
    FreeProfileUserName(v5, &v58);
    return 0LL;
  }
  v1 = 16;
LABEL_13:
  if ( v2 )
    gdwPolicyFlags |= 2u;
  v38 = 300;
  v9 = v1 | 8;
  if ( v40 == (_DWORD)v6 )
    v9 = v1;
  FastGetProfileValue(v5, 4LL, 607LL, &v38, &WPP_MAIN_CB.Dpc.DpcData, 4, v9);
  if ( (unsigned int)(LODWORD(WPP_MAIN_CB.Dpc.DpcData) - 1) > 0x3E6 )
    LODWORD(WPP_MAIN_CB.Dpc.DpcData) = 1000;
  if ( v2 )
  {
    if ( gDpiAdjustedForLoggedOnUser == (_DWORD)v6 && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      FastGetProfileDwordEx(v5, 4LL, L"LogPixels", 0LL, v9, &v41, v6);
      v43 = v6;
      v28 = DrvInitializeDxgkrnlDpiCache(&v43);
      v29 = PerformLegacyDpiUpgrade(v5, v41);
      if ( v28 < 0 || v43 || gdmLogPixelsOfPrimary != gdmLogPixels || v29 || v41 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(v37) = 0;
        BugCheckParameter4 = 0LL;
        v39 = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL) >= 0 )
        {
          if ( v39 )
            ((void (*)(void))xxxUserResetDisplayDevice)();
          UserReinitializeStockFonts();
          gDpiAdjustedForLoggedOnUser = 1;
        }
      }
    }
  }
  LoadCPUserPreferences(v5, v9);
  if ( !v4 )
  {
    xxxODI_ColorInit(v5);
    LW_LoadResources(v5);
    if ( GreTextInitialized() )
      xxxSetWindowNCMetrics(v5, 0LL, -1);
    SetMinMetrics(v5, 0LL);
    SetIconMetrics(v5, 0LL);
    GetKbdLangSwitch((__int64)v5);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v55, 0LL);
      v56 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        if ( i[7] )
        {
          v56 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v55);
          *(_DWORD *)(*(_QWORD *)(i[7] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 7) )
            DestroyMenu();
        }
        if ( i[8] )
        {
          v56 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v55);
          *(_DWORD *)(*(_QWORD *)(i[8] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 8) )
            DestroyMenu();
        }
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v55);
    }
    CCursorSizes::RefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry(v5, 1LL);
    xxxUpdateSystemIconsFromRegistry(v5);
    v11 = 0;
    v12 = &v107;
    do
    {
      v37 = 0;
      BugCheckParameter4 = &v38;
      if ( (unsigned int)FastGetProfileIntFromID(v5, *((unsigned int *)v12 - 2), *(unsigned int *)v12) )
        xxxSystemParametersInfo(*((unsigned int *)v12 - 1), v38, 0LL, 0x8000LL, &v38, 0);
      ++v11;
      v12 += 2;
    }
    while ( v11 < 0xF );
    FastGetProfileIntsW(v5, &v161, 4LL);
    LOBYTE(v13) = v44 != 0;
    EnableMouseAcceleration(v13);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, BugCheckParameter4, v37);
  if ( v2 )
    FastGetProfileIntFromID(v5, 35LL, 236LL);
  v14 = 0;
  v15 = &v66;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(v5, *((unsigned int *)v15 - 2), *(unsigned int *)v15) )
      xxxSystemParametersInfo(*((unsigned int *)v15 - 1), v38, 0LL, 0x8000LL, &v38, v9);
    ++v14;
    v15 += 2;
  }
  while ( v14 < 0xB );
  v16 = v9;
  if ( v45 )
    v16 = 2;
  CalcScreenSaverTimeout(v5, v16);
  FastGetProfileIntsW(v5, &v177, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v46 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v47 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v48 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v2 )
    {
      RtlStringCchPrintfW(v221, 0x28uLL, (size_t *)L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v222, 40LL);
      FastWriteProfileStringW(v5, 4LL, v222, v221);
    }
  }
  else if ( v48 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v38 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(v5, 4LL, 4LL) )
    SetCaretBlinkTime(v38);
  if ( !v4 )
  {
    v49 = 0;
    FastGetProfileIntFromID(v5, 12LL, 608LL);
    UpdateMouseSensitivity(v49);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, v5);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(v5, 12LL, 613LL);
    SetMouseTrails(v38);
    FastGetProfileIntW(v5, 7LL, L"TTOnly");
    GreSetFontEnumeration(v38);
    FastGetProfileIntFromID(v5, 12LL, 91LL);
    FastGetProfileIntFromID(v5, 12LL, 92LL);
    FastGetProfileIntFromID(v5, 12LL, 93LL);
    SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) < 0xA )
    {
      SystemArgument1 = 10;
      LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 10;
    }
    if ( SystemArgument1 > 0x7FFFFFFF )
      LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(v5);
    InitScancodeMap(v20, v19);
    FastGetProfileDword(v5, 24LL, L"Attributes");
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(v5);
  }
  v21 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
  if ( v21 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v21);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v42 & 2) != 0 )
    GreSetFontEnumeration(v42 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v42 | 0x30u);
  v22 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v22 )
    v22 = 1200;
  gulGamma = v22;
  v23 = (*(_DWORD *)UPDWORDPointer(8210LL) & 1) == 0;
  v24 = &unk_1C02E2EA0;
  if ( v23 )
    v24 = &unk_1C02F30F0;
  off_1C032A0D0 = v24;
  FreeProfileUserName(v5, &v58);
  if ( v51 == 2 )
    xxxUserResetDisplayDevice(v26, v25);
  BugCheckParameter4a = &v50;
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground");
  if ( v50 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v2 )
  {
    v60 = 0LL;
    v63 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, &v60) )
    {
      if ( !HIDWORD(v61) )
        SetTouchInputStatus(0LL);
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    v52 = 0;
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    if ( gdwInAtomicOperation )
    {
      v31 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v31);
    LODWORD(BugCheckParameter4a) = 7;
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, BugCheckParameter4a, &v52);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v2 )
  {
    if ( (unsigned int)dword_1C032A3F8 > 5
      && (qword_1C032A408 & 0x400000000000LL) != 0
      && (qword_1C032A410 & 0x400000000000LL) == qword_1C032A410 )
    {
      v32 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v57 = 0x1000000LL;
      v53 = v32;
      v54 = dword_1C033563C;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&v57,
        (unsigned int)&unk_1C02F1164,
        v33,
        v34,
        (__int64)&v57,
        (__int64)&v54,
        (__int64)&v53);
    }
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}

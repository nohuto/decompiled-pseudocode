/*
 * XREFs of xxxUpdatePerUserSystemParameters @ 0x1C00492E0
 * Callers:
 *     NtUserUpdatePerUserSystemParameters @ 0x1C0128DD0 (NtUserUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C0008F84 (-PerformLegacyDpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C000AC8C (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     SetIconMetrics @ 0x1C000AFC0 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C000B1DC (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C000B32C (xxxSetWindowNCMetrics.c)
 *     GreTextInitialized @ 0x1C000C248 (GreTextInitialized.c)
 *     _SetCaretBlinkTime @ 0x1C003DB40 (_SetCaretBlinkTime.c)
 *     ?xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0042BA8 (-xxxUpdateSystemCursorsFromRegistry@@YAXPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReaso.c)
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1C0048468 (-xxxLoadSomeStrings@@YAXXZ.c)
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0048DF4 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00490D4 (-CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z.c)
 *     GreSetFontEnumeration @ 0x1C004A2E4 (GreSetFontEnumeration.c)
 *     UpdatePerUserKeyboardIndicators @ 0x1C004A348 (UpdatePerUserKeyboardIndicators.c)
 *     SetMouseTrails @ 0x1C004C4B8 (SetMouseTrails.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C005A7AC (xxxUpdateSystemIconsFromRegistry.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C00AF380 (_DestroyMenu.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C6090 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     WakeRIT @ 0x1C0103990 (WakeRIT.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C011C810 (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z @ 0x1C0126A08 (-LW_LoadResources@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     GetKbdLangSwitch @ 0x1C01295FC (GetKbdLangSwitch.c)
 *     UnlockDesktopMenu @ 0x1C012AE58 (UnlockDesktopMenu.c)
 *     xxxUserResetDisplayDevice @ 0x1C0155A70 (xxxUserResetDisplayDevice.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     CheckEasPolicyChange @ 0x1C01D4C78 (CheckEasPolicyChange.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224EF0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *i; // rbx
  unsigned int v14; // r14d
  __int64 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r14d
  __int64 *v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned int j; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int DeferredContext; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rax
  unsigned int v33; // ecx
  bool v34; // zf
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v39; // ebx
  int v40; // eax
  int v41; // esi
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // eax
  int v45; // r8d
  int v46; // r9d
  unsigned int *BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v48; // [rsp+28h] [rbp-D8h]
  unsigned int v49; // [rsp+50h] [rbp-B0h] BYREF
  char v50; // [rsp+54h] [rbp-ACh]
  int v51; // [rsp+58h] [rbp-A8h]
  unsigned int v52; // [rsp+5Ch] [rbp-A4h] BYREF
  int v53; // [rsp+60h] [rbp-A0h] BYREF
  int v54; // [rsp+64h] [rbp-9Ch] BYREF
  int v55; // [rsp+68h] [rbp-98h] BYREF
  int v56; // [rsp+6Ch] [rbp-94h]
  int v57; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+74h] [rbp-8Ch] BYREF
  int v59; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v60; // [rsp+7Ch] [rbp-84h]
  int v61; // [rsp+80h] [rbp-80h] BYREF
  int v62; // [rsp+84h] [rbp-7Ch]
  int v63; // [rsp+88h] [rbp-78h] BYREF
  int v64; // [rsp+8Ch] [rbp-74h] BYREF
  int v65; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v66[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h]
  __int64 v68; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]
  __int128 v71; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v72; // [rsp+E0h] [rbp-20h]
  __int128 v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+110h] [rbp+10h]
  int v76; // [rsp+114h] [rbp+14h]
  __int64 v77; // [rsp+118h] [rbp+18h] BYREF
  int v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+124h] [rbp+24h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  int v81; // [rsp+130h] [rbp+30h]
  int v82; // [rsp+134h] [rbp+34h]
  int v83; // [rsp+138h] [rbp+38h]
  int v84; // [rsp+13Ch] [rbp+3Ch]
  int v85; // [rsp+140h] [rbp+40h]
  int v86; // [rsp+144h] [rbp+44h]
  int v87; // [rsp+148h] [rbp+48h]
  int v88; // [rsp+14Ch] [rbp+4Ch]
  int v89; // [rsp+150h] [rbp+50h]
  int v90; // [rsp+154h] [rbp+54h]
  int v91; // [rsp+158h] [rbp+58h]
  int v92; // [rsp+15Ch] [rbp+5Ch]
  int v93; // [rsp+160h] [rbp+60h]
  int v94; // [rsp+164h] [rbp+64h]
  int v95; // [rsp+168h] [rbp+68h]
  int v96; // [rsp+16Ch] [rbp+6Ch]
  int v97; // [rsp+170h] [rbp+70h]
  int v98; // [rsp+174h] [rbp+74h]
  int v99; // [rsp+178h] [rbp+78h]
  int v100; // [rsp+17Ch] [rbp+7Ch]
  int v101; // [rsp+180h] [rbp+80h]
  int v102; // [rsp+184h] [rbp+84h]
  int v103; // [rsp+188h] [rbp+88h]
  int v104; // [rsp+18Ch] [rbp+8Ch]
  int v105; // [rsp+190h] [rbp+90h]
  int v106; // [rsp+194h] [rbp+94h]
  int v107; // [rsp+198h] [rbp+98h]
  int v108; // [rsp+19Ch] [rbp+9Ch]
  int v109; // [rsp+1A0h] [rbp+A0h]
  int v110; // [rsp+1A4h] [rbp+A4h]
  int v111; // [rsp+1A8h] [rbp+A8h]
  int v112; // [rsp+1ACh] [rbp+ACh]
  int v113; // [rsp+1B0h] [rbp+B0h]
  int v114; // [rsp+1B4h] [rbp+B4h]
  __int64 v115; // [rsp+1B8h] [rbp+B8h]
  int v116; // [rsp+1C0h] [rbp+C0h]
  int v117; // [rsp+1C4h] [rbp+C4h]
  __int64 v118; // [rsp+1C8h] [rbp+C8h] BYREF
  int v119; // [rsp+1D0h] [rbp+D0h]
  int v120; // [rsp+1D4h] [rbp+D4h]
  int v121; // [rsp+1D8h] [rbp+D8h]
  int v122; // [rsp+1DCh] [rbp+DCh]
  int v123; // [rsp+1E0h] [rbp+E0h]
  int v124; // [rsp+1E4h] [rbp+E4h]
  int v125; // [rsp+1E8h] [rbp+E8h]
  int v126; // [rsp+1ECh] [rbp+ECh]
  int v127; // [rsp+1F0h] [rbp+F0h]
  int v128; // [rsp+1F4h] [rbp+F4h]
  int v129; // [rsp+1F8h] [rbp+F8h]
  int v130; // [rsp+1FCh] [rbp+FCh]
  int v131; // [rsp+200h] [rbp+100h]
  int v132; // [rsp+204h] [rbp+104h]
  int v133; // [rsp+208h] [rbp+108h]
  int v134; // [rsp+20Ch] [rbp+10Ch]
  int v135; // [rsp+210h] [rbp+110h]
  int v136; // [rsp+214h] [rbp+114h]
  __int64 v137; // [rsp+218h] [rbp+118h]
  int v138; // [rsp+220h] [rbp+120h]
  int v139; // [rsp+224h] [rbp+124h]
  __int64 v140; // [rsp+228h] [rbp+128h]
  int v141; // [rsp+230h] [rbp+130h]
  int v142; // [rsp+234h] [rbp+134h]
  int v143; // [rsp+238h] [rbp+138h]
  int v144; // [rsp+23Ch] [rbp+13Ch]
  int v145; // [rsp+240h] [rbp+140h]
  int v146; // [rsp+244h] [rbp+144h]
  int v147; // [rsp+248h] [rbp+148h]
  int v148; // [rsp+24Ch] [rbp+14Ch]
  int v149; // [rsp+250h] [rbp+150h]
  int v150; // [rsp+254h] [rbp+154h]
  int v151; // [rsp+258h] [rbp+158h]
  int v152; // [rsp+25Ch] [rbp+15Ch]
  int v153; // [rsp+260h] [rbp+160h]
  int v154; // [rsp+264h] [rbp+164h]
  int v155; // [rsp+268h] [rbp+168h]
  int v156; // [rsp+26Ch] [rbp+16Ch]
  int v157; // [rsp+270h] [rbp+170h]
  int v158; // [rsp+274h] [rbp+174h]
  int v159; // [rsp+278h] [rbp+178h]
  int v160; // [rsp+27Ch] [rbp+17Ch]
  int v161; // [rsp+280h] [rbp+180h]
  int v162; // [rsp+284h] [rbp+184h]
  int v163; // [rsp+288h] [rbp+188h]
  int v164; // [rsp+28Ch] [rbp+18Ch]
  int v165; // [rsp+290h] [rbp+190h]
  int v166; // [rsp+294h] [rbp+194h]
  int v167; // [rsp+298h] [rbp+198h]
  int v168; // [rsp+29Ch] [rbp+19Ch]
  int v169; // [rsp+2A0h] [rbp+1A0h]
  int v170; // [rsp+2A4h] [rbp+1A4h]
  __int64 v171; // [rsp+2A8h] [rbp+1A8h]
  int v172; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v173; // [rsp+2B8h] [rbp+1B8h]
  int v174; // [rsp+2C0h] [rbp+1C0h]
  PVOID *p_DpcData; // [rsp+2C8h] [rbp+1C8h]
  int v176; // [rsp+2D0h] [rbp+1D0h]
  __int64 v177; // [rsp+2D8h] [rbp+1D8h]
  int v178; // [rsp+2E0h] [rbp+1E0h]
  char *v179; // [rsp+2E8h] [rbp+1E8h]
  int v180; // [rsp+2F0h] [rbp+1F0h]
  __int64 v181; // [rsp+2F8h] [rbp+1F8h]
  int v182; // [rsp+300h] [rbp+200h]
  int *v183; // [rsp+308h] [rbp+208h]
  int v184; // [rsp+310h] [rbp+210h]
  __int64 v185; // [rsp+318h] [rbp+218h]
  int v186; // [rsp+320h] [rbp+220h]
  __int64 v187; // [rsp+328h] [rbp+228h]
  int v188; // [rsp+330h] [rbp+230h] BYREF
  __int64 v189; // [rsp+338h] [rbp+238h]
  int v190; // [rsp+340h] [rbp+240h]
  char *v191; // [rsp+348h] [rbp+248h]
  int v192; // [rsp+350h] [rbp+250h]
  __int64 v193; // [rsp+358h] [rbp+258h]
  int v194; // [rsp+360h] [rbp+260h]
  int *v195; // [rsp+368h] [rbp+268h]
  int v196; // [rsp+370h] [rbp+270h]
  __int64 v197; // [rsp+378h] [rbp+278h]
  int v198; // [rsp+380h] [rbp+280h]
  int *v199; // [rsp+388h] [rbp+288h]
  int v200; // [rsp+390h] [rbp+290h]
  __int64 v201; // [rsp+398h] [rbp+298h]
  int v202; // [rsp+3A0h] [rbp+2A0h]
  int *v203; // [rsp+3A8h] [rbp+2A8h]
  int v204; // [rsp+3B0h] [rbp+2B0h]
  __int64 v205; // [rsp+3B8h] [rbp+2B8h]
  int v206; // [rsp+3C0h] [rbp+2C0h]
  __int64 v207; // [rsp+3C8h] [rbp+2C8h]
  int v208; // [rsp+3D0h] [rbp+2D0h]
  __int64 v209; // [rsp+3D8h] [rbp+2D8h]
  int v210; // [rsp+3E0h] [rbp+2E0h]
  __int64 v211; // [rsp+3E8h] [rbp+2E8h]
  int v212; // [rsp+3F0h] [rbp+2F0h]
  __int64 v213; // [rsp+3F8h] [rbp+2F8h]
  int v214; // [rsp+400h] [rbp+300h]
  int *v215; // [rsp+408h] [rbp+308h]
  int v216; // [rsp+410h] [rbp+310h]
  __int64 v217; // [rsp+418h] [rbp+318h]
  int v218; // [rsp+420h] [rbp+320h]
  int *v219; // [rsp+428h] [rbp+328h]
  int v220; // [rsp+430h] [rbp+330h]
  __int64 v221; // [rsp+438h] [rbp+338h]
  int v222; // [rsp+440h] [rbp+340h]
  __int64 v223; // [rsp+448h] [rbp+348h]
  int v224; // [rsp+450h] [rbp+350h]
  __int64 v225; // [rsp+458h] [rbp+358h]
  int v226; // [rsp+460h] [rbp+360h]
  int *v227; // [rsp+468h] [rbp+368h]
  int v228; // [rsp+470h] [rbp+370h]
  __int64 v229; // [rsp+478h] [rbp+378h]
  int v230; // [rsp+480h] [rbp+380h]
  int *v231; // [rsp+488h] [rbp+388h]
  unsigned __int16 v232[40]; // [rsp+490h] [rbp+390h] BYREF
  _BYTE v233[80]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v62 = a1;
  v56 = 0;
  v76 = 4135;
  v53 = gulFontInformation;
  v52 = 96;
  v75 = 4;
  v1 = 0;
  v57 = 0;
  v70 = 0LL;
  v59 = gdwPUDFlags & 0x100000;
  v69 = 0LL;
  v77 = 112LL;
  v92 = 3;
  v58 = gdwPUDFlags & 0x10000;
  v96 = 3;
  v95 = 15;
  v61 = 0;
  v55 = 1;
  v78 = 4;
  v79 = 17;
  v80 = 100LL;
  v81 = 4;
  v82 = 77;
  v83 = 199;
  v84 = 4;
  v85 = 4;
  v86 = 76;
  v87 = 198;
  v88 = 4;
  v89 = 4;
  v90 = 105;
  v91 = 14;
  v93 = 4;
  v94 = 109;
  v97 = 4;
  v98 = 131;
  v99 = 18;
  v100 = 1;
  v101 = 4;
  v102 = 141;
  v103 = 624;
  v104 = 1;
  v105 = 4;
  v106 = 145;
  v107 = 625;
  v108 = 1;
  v109 = 4;
  v110 = 143;
  v111 = 626;
  v112 = 1;
  v113 = 4;
  v114 = 159;
  v115 = 628LL;
  v116 = 13;
  v117 = 23;
  v118 = 106LL;
  v119 = 13;
  v120 = 11;
  v121 = 13;
  v151 = 17;
  v122 = 15;
  v156 = 20;
  v159 = 20;
  v136 = 96;
  v164 = 50;
  v168 = 50;
  v191 = (char *)&WPP_MAIN_CB.Dpc.DpcData + 4;
  v195 = &v59;
  v199 = &gnFastAltTabRows;
  v140 = 96LL;
  v154 = 133;
  v197 = 133LL;
  v203 = &gnFastAltTabColumns;
  v123 = 12;
  v124 = 32;
  v125 = 6;
  v126 = 500;
  v127 = 12;
  v128 = 29;
  v129 = 97;
  v130 = 4;
  v131 = 12;
  v132 = 30;
  v133 = 98;
  v134 = 4;
  v135 = 12;
  v137 = 7LL;
  v138 = 3;
  v139 = 28;
  v141 = 35;
  v142 = 111;
  v143 = 236;
  v144 = 1;
  v145 = 12;
  v146 = 127;
  v147 = 16;
  v148 = 1;
  v149 = 12;
  v150 = 129;
  v152 = 30;
  v153 = 12;
  v155 = 19;
  v157 = 12;
  v158 = 135;
  v160 = 30;
  v161 = 12;
  v162 = 137;
  v163 = 21;
  v165 = 12;
  v166 = 139;
  v167 = 22;
  v169 = 4;
  v170 = 169;
  v171 = 205LL;
  v188 = 4;
  v189 = 94LL;
  v190 = 400;
  v192 = 4;
  v193 = 107LL;
  v194 = 2;
  v196 = 4;
  v198 = 3;
  v200 = 4;
  v201 = 134LL;
  v202 = 7;
  v204 = 4;
  v205 = 159LL;
  v206 = 3;
  v208 = 4;
  v212 = 4;
  v216 = 4;
  v220 = 4;
  v224 = 4;
  v2 = a1 & 1;
  v230 = 1;
  v182 = 1;
  v207 = gpsi + 4996LL;
  v172 = 12;
  v211 = gpsi + 5000LL;
  v176 = 12;
  v215 = &v53;
  v3 = a1 & 4;
  v180 = 12;
  v219 = &v57;
  v223 = gdwHungAppTimeout;
  v227 = &gdwWaitToKillTimeout;
  v231 = &v58;
  p_DpcData = &WPP_MAIN_CB.Dpc.DpcData;
  v179 = (char *)&WPP_MAIN_CB.Dpc.SystemArgument2 + 4;
  v181 = 12LL;
  v183 = &v55;
  v222 = 5000;
  v226 = 5000;
  v187 = gfEnableHexNumpad;
  v209 = 160LL;
  v210 = 3;
  v213 = 200LL;
  v214 = 0;
  v217 = 618LL;
  v218 = 0;
  v221 = 621LL;
  v225 = 622LL;
  v228 = 23;
  v229 = 149LL;
  v173 = 10LL;
  v174 = 6;
  v177 = 11LL;
  v178 = 10;
  v184 = 35;
  v185 = 237LL;
  v186 = 0;
  v51 = v3;
  v4 = a1 & 2;
  if ( (a1 & 2) == 0 && PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
  v5 = (struct _UNICODE_STRING *)CreateProfileUserName(&v69);
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
    v3 = v51;
  }
  if ( !v4 || v3 )
    goto LABEL_13;
  v56 = CheckEasPolicyChange();
  v41 = v56;
  if ( !(unsigned int)CheckDesktopPolicyChange(v5) && !v41 )
  {
    UserSetLastError(0LL);
    FreeProfileUserName(v5, &v69);
    return 0LL;
  }
  v1 = 16;
LABEL_13:
  if ( v2 )
    gdwPolicyFlags |= 2u;
  v49 = 300;
  v9 = v1 | 8;
  if ( v51 == (_DWORD)v6 )
    v9 = v1;
  FastGetProfileValue(v5, 4LL, 607LL, &v49, &WPP_MAIN_CB.Dpc.SystemArgument2, 4, v9);
  if ( (unsigned int)(LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) - 1) > 0x3E6 )
    LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 1000;
  if ( v2 )
  {
    if ( gDpiAdjustedForLoggedOnUser == (_DWORD)v6 && !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    {
      FastGetProfileDwordEx(v5, 4LL, L"LogPixels", 0LL, v9, &v52, v6);
      v54 = v6;
      v39 = DrvInitializeDxgkrnlDpiCache(&v54);
      v40 = PerformLegacyDpiUpgrade(v5, v52);
      if ( v39 < 0 || v54 || gdmLogPixelsOfPrimary != gdmLogPixels || v40 || v52 )
      {
        GreReinitializeDpiSetting();
        LOBYTE(v48) = 0;
        BugCheckParameter4 = 0LL;
        v50 = 0;
        if ( (int)xxxUserSetDisplayConfig(0LL, 0LL, 2191LL, 516LL) >= 0 )
        {
          if ( v50 )
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
    GetKbdLangSwitch(v5, v10, v11, v12);
    ZwSetDefaultLocale(1u, 0);
    ZwSetDefaultUILanguage(0);
    ZwQueryDefaultUILanguage((LANGID *)(gpsi + 7012LL));
    xxxLoadSomeStrings();
    if ( grpWinStaList )
    {
      SmartObjStackRefBase<tagMENU>::Init(v66, 0LL);
      v67 = 0LL;
      for ( i = *(_QWORD **)(grpWinStaList + 16LL); i; i = (_QWORD *)i[4] )
      {
        if ( i[7] )
        {
          v67 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v66);
          *(_DWORD *)(*(_QWORD *)(i[7] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 7) )
            DestroyMenu();
        }
        if ( i[8] )
        {
          v67 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v66);
          *(_DWORD *)(*(_QWORD *)(i[8] + 40LL) + 40LL) &= ~0x80u;
          if ( UnlockDesktopMenu(i + 8) )
            DestroyMenu();
        }
      }
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v66);
    }
    CCursorSizes::RefreshSizes(gpCursorSizes);
    xxxUpdateSystemCursorsFromRegistry((__int64)v5, 1u);
    xxxUpdateSystemIconsFromRegistry(v5);
    v14 = 0;
    v15 = &v118;
    do
    {
      v48 = 0;
      BugCheckParameter4 = &v49;
      if ( (unsigned int)FastGetProfileIntFromID(v5, *((unsigned int *)v15 - 2), *(unsigned int *)v15) )
        xxxSystemParametersInfo(*((unsigned int *)v15 - 1), v49, 0LL, 0x8000LL, &v49, 0);
      ++v14;
      v15 += 2;
    }
    while ( v14 < 0xF );
    FastGetProfileIntsW(v5, &v172, 4LL);
    LOBYTE(v16) = v55 != 0;
    EnableMouseAcceleration(v16, v17, v18, v19);
  }
  xxxSystemParametersInfo(21LL, 0xFFFFFFFFLL, 0LL, 0LL, BugCheckParameter4, v48);
  if ( v2 )
    FastGetProfileIntFromID(v5, 35LL, 236LL);
  v20 = 0;
  v21 = &v77;
  do
  {
    if ( (unsigned int)FastGetProfileIntFromID(v5, *((unsigned int *)v21 - 2), *(unsigned int *)v21) )
      xxxSystemParametersInfo(*((unsigned int *)v21 - 1), v49, 0LL, 0x8000LL, &v49, v9);
    ++v20;
    v21 += 2;
  }
  while ( v20 < 0xB );
  v24 = v9;
  if ( v56 )
    v24 = 2LL;
  CalcScreenSaverTimeout(v5, v24, v22, v23);
  FastGetProfileIntsW(v5, &v188, 11LL);
  if ( gnFastAltTabColumns < 2 )
    gnFastAltTabColumns = 7;
  if ( gnFastAltTabRows < 1 )
    gnFastAltTabRows = 3;
  if ( v57 )
    _InterlockedOr(gpsi, 0x200u);
  else
    _InterlockedAnd(gpsi, 0xFFFFFDFF);
  if ( v58 )
    gdwPUDFlags |= 0x10000u;
  else
    gdwPUDFlags &= ~0x10000u;
  if ( v59 == 2 )
  {
    if ( (unsigned int)GreGetDeviceCaps(*(_QWORD *)(gpDispInfo + 56LL), 119LL) )
      gdwPUDFlags &= ~0x100000u;
    else
      gdwPUDFlags |= 0x100000u;
    if ( v2 )
    {
      RtlStringCchPrintfW(v232, 0x28uLL, L"%d", (gdwPUDFlags >> 20) & 1);
      RtlLoadStringOrError(107LL, v233, 40LL);
      FastWriteProfileStringW(v5, 4LL, v233, v232);
    }
  }
  else if ( v59 )
  {
    gdwPUDFlags |= 0x100000u;
  }
  else
  {
    gdwPUDFlags &= ~0x100000u;
  }
  v49 = *(_DWORD *)(gpsi + 4984LL);
  if ( (unsigned int)FastGetProfileIntFromID(v5, 4LL, 4LL) )
    SetCaretBlinkTime(v49);
  if ( !v4 )
  {
    v60 = 0;
    FastGetProfileIntFromID(v5, 12LL, 608LL);
    UpdateMouseSensitivity(v60);
    for ( j = 0; j < 2; ++j )
    {
      ReadDefaultAccelerationCurves(j, v5);
      ResetAccelerationCurves(j);
    }
    FastGetProfileIntFromID(v5, 12LL, 613LL);
    SetMouseTrails(v49, v26, v27, v28);
    FastGetProfileIntW(v5, 7LL, L"TTOnly", 0LL, &v49, 0);
    GreSetFontEnumeration(v49);
    FastGetProfileIntFromID(v5, 12LL, 91LL);
    FastGetProfileIntFromID(v5, 12LL, 92LL);
    FastGetProfileIntFromID(v5, 12LL, 93LL);
    DeferredContext = (unsigned int)WPP_MAIN_CB.Dpc.DeferredContext;
    if ( LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) < 0xA )
    {
      DeferredContext = 10;
      LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 10;
    }
    if ( DeferredContext > 0x7FFFFFFF )
      LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0x7FFFFFFF;
    UpdatePerUserKeyboardIndicators(v5);
    InitScancodeMap(v31, v30);
    FastGetProfileDword(v5, 24LL, L"Attributes", 0LL, gdwKeyboardAttributes);
    gdwKeyboardAttributes = (gdwKeyboardAttributes >> 15) & 2;
    xxxUpdatePerUserAccessPackSettings(v5);
  }
  v32 = (void *)OpenCacheKeyEx(0LL, 22LL, 131097LL, 0LL);
  if ( v32 )
  {
    *(_DWORD *)(gpsi + 2148LL) = 1;
    ZwClose(v32);
  }
  *(_DWORD *)(gpsi + 2148LL) |= 2u;
  GreSetFontEnumeration(4LL);
  GreSetFontEnumeration(32LL);
  if ( (v53 & 2) != 0 )
    GreSetFontEnumeration(v53 | 4u);
  if ( (*(_DWORD *)UPDWORDPointer(8202LL) & 2) != 0 )
    GreSetFontEnumeration(v53 | 0x30u);
  v33 = *(_DWORD *)UPDWORDPointer(8204LL);
  if ( !v33 )
    v33 = 1200;
  gulGamma = v33;
  v34 = (*(_DWORD *)UPDWORDPointer(8210LL) & 1) == 0;
  v35 = &unk_1C02E4050;
  if ( v34 )
    v35 = &unk_1C02F3AD0;
  off_1C032B0D0 = v35;
  FreeProfileUserName(v5, &v69);
  if ( v62 == 2 )
    xxxUserResetDisplayDevice(v37, v36);
  FastGetProfileDword(0LL, 49LL, L"RestrictDebuggerForeground", 0LL, &v61);
  if ( v61 )
    gfDebugForegroundIgnoreDebugPort = 1;
  if ( v2 )
  {
    v71 = 0LL;
    v74 = 0LL;
    v72 = 0LL;
    v73 = 0LL;
    if ( (unsigned int)ReadPointerDeviceSettings(146LL, &v71) )
    {
      if ( !HIDWORD(v72) )
        SetTouchInputStatus(0LL);
    }
  }
  if ( gbUsingDefaultSectionSize == 1 )
  {
    v63 = 0;
    gbUsingDefaultSectionSize = 0;
    UserLogError(3221226518LL);
    if ( gdwInAtomicOperation )
    {
      v42 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v42, gdwInAtomicOperation, v43);
    ExRaiseHardError(3221226518LL, 0LL, 0LL, 0LL, 7, &v63);
    EnterCrit(0LL, 1LL);
  }
  xxxDwmControl(1037LL, 0LL);
  if ( v2 )
  {
    if ( (unsigned int)dword_1C032B3F8 > 5
      && (qword_1C032B408 & 0x400000000000LL) != 0
      && (qword_1C032B410 & 0x400000000000LL) == qword_1C032B410 )
    {
      v44 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v68 = 0x1000000LL;
      v64 = v44;
      v65 = dword_1C033661C;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&v68,
        (unsigned int)&unk_1C02F1B54,
        v45,
        v46,
        (__int64)&v68,
        (__int64)&v65,
        (__int64)&v64);
    }
    _InterlockedOr(gpsi, 0x400u);
  }
  return 1LL;
}

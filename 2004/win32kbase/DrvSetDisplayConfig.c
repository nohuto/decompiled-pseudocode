/*
 * XREFs of DrvSetDisplayConfig @ 0x1C00B1BD0
 * Callers:
 *     InitVideo @ 0x1C002B12C (InitVideo.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00B1024 (DrvChangeDisplaySettings.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013C294 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0056A0C (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C00596B0 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C005B660 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B14D8 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00B1640 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     LogDiagSDC @ 0x1C00B1668 (LogDiagSDC.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00B1758 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B19FC (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00B27F0 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B285C (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C00B2890 (GetPathsModality.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C00B29A4 (--0AUTO_TGO@@IEAA@XZ.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00B4910 (DrvDisplayConfigGetDeviceInfo.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     DrvIsWddmDriverPresent @ 0x1C00B5CF8 (DrvIsWddmDriverPresent.c)
 *     ApplyPathsModality @ 0x1C00B9B28 (ApplyPathsModality.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BA904 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8880 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014683C (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C0146E4C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0147B00 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0147D90 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01495C8 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0149B7C (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0149D68 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        __int64 a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        __int64 a8,
        struct _MDEV *a9,
        struct _MDEV **a10,
        unsigned int *a11,
        signed int *a12,
        char *a13,
        _BYTE *a14,
        __int64 a15)
{
  struct _MDEV *v16; // r13
  __int64 v17; // r15
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  int IsWddmConnectedSession; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  char v26; // r14
  char v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  int v34; // eax
  char v35; // di
  __int64 v36; // rax
  __int64 v37; // r13
  BOOL v38; // r12d
  char v39; // si
  unsigned __int16 v40; // di
  __int64 v41; // rcx
  int v42; // eax
  unsigned int v43; // ebx
  struct D3DKMT_GETPATHSMODALITY *v44; // rcx
  int PathPersistentMonitorsIfNeeded; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // r12d
  unsigned int v58; // edi
  int v59; // ecx
  unsigned int v60; // esi
  int v61; // r15d
  wchar_t *v62; // rcx
  bool v63; // zf
  unsigned int v64; // eax
  char *v65; // rdi
  char *PoolWithTag; // rax
  wchar_t *v67; // rdx
  unsigned int i; // r8d
  __int64 v69; // rcx
  int v70; // r8d
  struct _MDEV **v71; // rdi
  struct _MDEV *v72; // rsi
  int v73; // eax
  int v74; // r15d
  int v75; // eax
  unsigned int v76; // eax
  char v77; // al
  struct _MDEV **v78; // r12
  struct D3DKMT_GETPATHSMODALITY *v79; // rcx
  int v80; // esi
  __int64 v81; // rdi
  unsigned int v82; // r12d
  char v83; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v84; // rax
  __int64 v85; // rdx
  _BOOL8 v86; // rcx
  bool v87; // sf
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  struct _DISPLAYCONFIG_CDS_REQUEST *v93; // r12
  __int64 v94; // rax
  __int64 v95; // rcx
  struct _MDEV **v96; // r12
  int v97; // edi
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rax
  int v106; // ebx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned int v110; // ebx
  const struct _RETRY_MODE *v111; // rdi
  int v112; // eax
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  signed int v121; // eax
  int v122; // eax
  unsigned int v123; // r12d
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rax
  __int64 v139; // rax
  struct _MDEV *v140; // rdi
  __int64 v141; // rax
  int v142; // edx
  __int64 v143; // rax
  __int64 v144; // rax
  int v145; // [rsp+20h] [rbp-E0h]
  int v146; // [rsp+28h] [rbp-D8h]
  int v147; // [rsp+30h] [rbp-D0h]
  bool v148; // [rsp+40h] [rbp-C0h]
  signed int v149; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v150; // [rsp+48h] [rbp-B8h] BYREF
  char v151; // [rsp+49h] [rbp-B7h]
  char v152; // [rsp+4Ah] [rbp-B6h]
  char v153; // [rsp+4Bh] [rbp-B5h] BYREF
  bool v154[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v155; // [rsp+50h] [rbp-B0h]
  bool v156; // [rsp+54h] [rbp-ACh]
  bool v157; // [rsp+55h] [rbp-ABh]
  char v158; // [rsp+56h] [rbp-AAh]
  int v159; // [rsp+58h] [rbp-A8h] BYREF
  int v160; // [rsp+5Ch] [rbp-A4h]
  unsigned int v161; // [rsp+60h] [rbp-A0h]
  unsigned int v162; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 v163[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v164; // [rsp+6Ch] [rbp-94h]
  unsigned int v165; // [rsp+70h] [rbp-90h]
  int v166; // [rsp+74h] [rbp-8Ch]
  unsigned int v167; // [rsp+78h] [rbp-88h]
  struct _MDEV **v168; // [rsp+80h] [rbp-80h]
  int v169; // [rsp+88h] [rbp-78h]
  unsigned int v170; // [rsp+8Ch] [rbp-74h]
  struct _MDEV *v171; // [rsp+90h] [rbp-70h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v172; // [rsp+98h] [rbp-68h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v173; // [rsp+A0h] [rbp-60h]
  int v174; // [rsp+A8h] [rbp-58h]
  __int64 v175; // [rsp+B0h] [rbp-50h]
  _QWORD v176[6]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v177[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v178; // [rsp+100h] [rbp+0h] BYREF
  char v179; // [rsp+108h] [rbp+8h]
  __int64 v180; // [rsp+110h] [rbp+10h]
  void *v181; // [rsp+118h] [rbp+18h] BYREF
  int v182; // [rsp+120h] [rbp+20h]
  void *v183; // [rsp+128h] [rbp+28h]
  __int64 v184; // [rsp+130h] [rbp+30h]
  __int64 v185; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v186; // [rsp+140h] [rbp+40h]
  signed int *v187; // [rsp+148h] [rbp+48h]
  char *v188; // [rsp+150h] [rbp+50h]
  _BYTE *v189; // [rsp+158h] [rbp+58h]
  __int64 v190; // [rsp+160h] [rbp+60h]
  _DWORD v191[4]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v192[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v193; // [rsp+180h] [rbp+80h]
  int v194; // [rsp+188h] [rbp+88h]
  __int64 v195; // [rsp+18Ch] [rbp+8Ch]
  int v196; // [rsp+194h] [rbp+94h]
  __int64 retaddr; // [rsp+1E8h] [rbp+E8h]

  v16 = a9;
  v183 = a5;
  v186 = a11;
  v187 = a12;
  v189 = a14;
  v184 = a15;
  v162 = a1;
  v188 = a13;
  v17 = (unsigned int)a3;
  v161 = a4;
  v18 = 0;
  v156 = gbBaseVideo != 0;
  v160 = a3;
  v174 = -1;
  v172 = a2;
  v173 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v171 = a9;
  v168 = a10;
  v164 = gbBaseVideo != 0 ? 3 : 0;
  v167 = 0;
  v152 = 0;
  v150 = 0;
  v153 = 0;
  v149 = 0;
  v159 = -5;
  v155 = 0;
  v165 = 0;
  v158 = 0;
  v19 = WdLogNewEntry5_WdEvent(0LL, a2, a3);
  *(_QWORD *)(v19 + 24) = v17;
  WdLogEvent5_WdEvent(v19);
  v175 = MEMORY[0xFFFFF78000000320];
  v190 = v175 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)v17, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(200 * v162, v162, v172);
  v185 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v185, 4);
  *a10 = 0LL;
  if ( gOldModeChange )
  {
    v99 = WdLogNewEntry5_WdAssertion(0LL, v20, v21);
    WdLogEvent5_WdAssertion(v99);
  }
  if ( (v17 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v157 = (a4 & 2) != 0 && (v17 & 0x88F) == 2191;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v176);
  v178 = 0LL;
  v176[0] = &off_1C0200E28;
  v180 = v184;
  *(_OWORD *)v177 = 0LL;
  v179 = 0;
  v181 = 0LL;
  IsWddmConnectedSession = UserIsWddmConnectedSession();
  v25 = 0LL;
  v26 = 1;
  if ( !IsWddmConnectedSession || !(unsigned int)DrvIsWddmDriverPresent() || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v139 = WdLogNewEntry5_WdAssertion(v23, v25, v24);
      WdLogEvent5_WdAssertion(v139);
    }
    v96 = v168;
    v97 = a4 & 1;
    LODWORD(v30) = DrvChangeDisplayFallback(
                     v183,
                     BYTE1(v17) & 1,
                     a4 & 1,
                     a9,
                     v168,
                     (enum _DXGK_DIAG_SDC_STAGE *)&v149,
                     (bool *)&v150,
                     &v159);
    if ( (int)v30 < 0 )
    {
LABEL_166:
      if ( v157 )
      {
        if ( a6 )
        {
          v100 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
          WdLogEvent5_WdAssertion(v100);
        }
        LODWORD(v17) = v160;
        v101 = DrvChangeDisplayFallback(
                 v183,
                 BYTE1(v160) & 1,
                 1,
                 v16,
                 v96,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v149,
                 (bool *)&v150,
                 &v159);
        v30 = v101;
        if ( v101 < 0 )
        {
          v143 = WdLogNewEntry5_WdAssertion(v103, v102, v31);
          WdLogEvent5_WdAssertion(v143);
          if ( !byte_1C0254470 )
          {
            LOBYTE(v146) = 0;
            byte_1C0254470 = 1;
            ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, int))qword_1C024CB10)(
              400LL,
              22LL,
              v30,
              v159,
              v149,
              v146);
          }
        }
        else
        {
          v18 = 10;
          v149 = 31;
          v155 = 10;
        }
LABEL_92:
        if ( (_DWORD)v30 == -1073741811 )
          goto LABEL_103;
        goto LABEL_93;
      }
LABEL_91:
      LODWORD(v17) = v160;
      goto LABEL_92;
    }
    v98 = v149;
    v29 = 30LL;
    if ( v97 )
      v98 = 30;
    v149 = v98;
LABEL_153:
    if ( (int)v30 >= 0 )
    {
LABEL_89:
      v77 = v152;
    }
    else
    {
LABEL_275:
      v77 = v152;
      if ( v152 )
      {
        v18 = 9;
        v149 = 29;
        v155 = 9;
        LODWORD(v30) = 0;
        v159 = 0;
      }
      if ( (int)v30 < 0 )
      {
        v16 = v171;
        goto LABEL_165;
      }
    }
    v78 = v168;
    if ( v77 && !*v168 )
    {
      v140 = v171;
      if ( !v171 )
      {
        v141 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
        WdLogEvent5_WdAssertion(v141);
      }
      v142 = v159;
      v63 = v159 == 2;
      *v78 = v140;
      if ( v63 )
        v142 = 0;
      v159 = v142;
    }
    goto LABEL_91;
  }
  if ( (v17 & 0x40000000) != 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
      0xA3C845u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
      v25,
      v147);
    if ( (v17 & 0x10000) == 0 )
    {
      v104 = 0LL;
      if ( gbBaseVideo )
      {
        v105 = WdLogNewEntry5_WdAssertion(0LL, v28, v31);
        WdLogEvent5_WdAssertion(v105);
      }
      LODWORD(v30) = GetPathsModality(v104, v177, 15LL, 0LL);
      if ( (int)v30 < 0 )
      {
        v149 = 2;
        goto LABEL_153;
      }
      v106 = *((_DWORD *)v177[0] + 8) & 0xF;
      if ( v106 != 1 && v106 != 8 )
      {
        LOBYTE(v29) = 1;
        v151 = 1;
        LOBYTE(v28) = v106 == 4;
        v27 = 1;
        ((void (__fastcall *)(__int64, __int64))qword_1C024CA38)(v29, v28);
        if ( v106 != 4 )
        {
          LODWORD(v17) = 132;
          goto LABEL_186;
        }
        v150 = 1;
        LODWORD(v30) = 0;
        v149 = 26;
        goto LABEL_93;
      }
      LODWORD(v30) = -1073741637;
      v149 = 25;
      goto LABEL_165;
    }
    v149 = 37;
    goto LABEL_164;
  }
  if ( (int)v17 >= 0 )
  {
    if ( (v17 & 0xF) != 0xF || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v25 )
    {
      if ( (v17 & 0x200) != 0
        || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v25
        || (v17 & 0x1F) != 0 && (v17 & 0x40) == 0 )
      {
        v27 = v25;
        v151 = v25;
        ((void (__fastcall *)(_QWORD))qword_1C024CA38)(0LL);
      }
      else
      {
        v27 = qword_1C024CA40();
        v151 = v27;
      }
      goto LABEL_13;
    }
    v151 = qword_1C024CA40();
    v27 = v151;
    if ( !v151 )
    {
LABEL_13:
      v166 = v17 & 0x10000;
      v182 = v17 & 0x80;
      if ( (v17 & 0x10000) != 0 )
      {
        LODWORD(v30) = ((__int64 (__fastcall *)(__int64, _QWORD, void **))qword_1C024CB18)(
                         a7,
                         (v17 & 0x80) != 0 ? 2031616 : 0x20000,
                         &v181);
        if ( (int)v30 < 0 )
        {
          v149 = 42;
          goto LABEL_153;
        }
      }
      LODWORD(v30) = ((__int64 (*)(void))qword_1C024C930)();
      if ( (int)v30 < 0 )
      {
        v18 = 6;
        v149 = 12;
        v155 = 6;
        goto LABEL_153;
      }
      v179 = 1;
      if ( (v17 & 0x80) != 0 )
      {
        v33 = 1LL;
        if ( !v27 && (v17 & 0xF) != 0 && (v161 & 0x20) == 0 )
          v33 = 3LL;
        v34 = ((__int64 (__fastcall *)(__int64))qword_1C024C948)(v33);
        v30 = v34;
        if ( v34 < 0 )
        {
          v107 = WdLogNewEntry5_WdEvent(v29, v28, v31);
          *(_QWORD *)(v107 + 24) = v30;
          WdLogEvent5_WdEvent(v107);
          DrvDxgkLogCodePointPacket(4LL, (unsigned int)v30, 0LL, 0LL);
          LODWORD(v30) = 0;
        }
      }
      if ( (v17 & 0x200) == 0 || (v35 = 1, (v17 & 0x40) != 0) )
        v35 = 0;
      v148 = v35;
      v170 = v17 & 0xF;
      while ( 1 )
      {
        v36 = WdLogNewEntry5_WdEvent(v29, v28, v31);
        v37 = v167;
        v175 = v167;
        *(_QWORD *)(v36 + 24) = v167;
        *(_QWORD *)(v36 + 32) = (int)v30;
        WdLogEvent5_WdEvent(v36);
        v38 = 0;
        v169 = 0;
        v153 = 0;
        v150 = 0;
        FreePathsModality(v177[0]);
        FreePathsModality(v177[1]);
        v177[1] = 0LL;
        v177[0] = 0LL;
        if ( v156 )
        {
          if ( v170 != 15 )
          {
            v108 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
            WdLogEvent5_WdAssertion(v108);
          }
          if ( v35 )
          {
            v109 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
            WdLogEvent5_WdAssertion(v109);
          }
          if ( v164 >= 6 )
          {
            if ( (int)v30 >= 0 )
            {
              v138 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
              WdLogEvent5_WdAssertion(v138);
              goto LABEL_153;
            }
            goto LABEL_275;
          }
          v110 = v164;
          v111 = (const struct _RETRY_MODE *)((char *)&unk_1C0220810 + 12 * v164);
          DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v111 + 1), *((unsigned int *)v111 + 2), 0LL);
          if ( *(_BYTE *)v111 )
          {
            v165 = 0;
            v164 = v110 + 1;
            LODWORD(v30) = GetPathsModality(0LL, v177, 15LL, 0LL);
          }
          else
          {
            v112 = DrvCreatePathModalityFromAllPaths(&v178, v165++, v177);
            LODWORD(v30) = v112;
            if ( v112 >= 0 )
            {
              if ( *((_WORD *)v177[0] + 10) != 1 )
              {
                v113 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
                WdLogEvent5_WdAssertion(v113);
              }
            }
            else
            {
              ++v164;
              v165 = 0;
            }
          }
          if ( (int)v30 < 0 )
          {
            v149 = 2;
            goto LABEL_207;
          }
          v114 = DrvFunctionalizeBaseVidMode(v111, v177[0]);
          v30 = v114;
          if ( v114 < 0 )
          {
            v117 = WdLogNewEntry5_WdError(v29, v115, v116);
            *(_QWORD *)(v117 + 24) = v30;
            WdLogEvent5_WdError(v117);
            v149 = 2;
            goto LABEL_212;
          }
          goto LABEL_40;
        }
        if ( v170 )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
            0xA3C845u,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
            0,
            v147);
          if ( v166 )
          {
            LODWORD(v30) = -1073741811;
            v149 = 39;
            goto LABEL_87;
          }
          if ( (v161 & 0x20) != 0 && *((_QWORD *)v173 + 4) )
          {
            v39 = 1;
            v40 = 1;
          }
          else
          {
            v39 = 0;
            v40 = 0;
          }
          if ( !v39 || *((_DWORD *)v173 + 5) )
          {
            v41 = v170;
            v42 = v170;
          }
          else
          {
            v41 = v170;
            v42 = 0x2000000;
          }
          v43 = v42 | ((v161 & 0x20) != 0 ? 0x9000 : 0);
          if ( (v42 & 0x2000000) != 0 && (_DWORD)v41 != 15 )
          {
            v119 = WdLogNewEntry5_WdAssertion(v41, v28, v31);
            WdLogEvent5_WdAssertion(v119);
          }
          LODWORD(v30) = GetPathsModality(v41, v177, v43, v40);
          if ( (int)v30 < 0 )
          {
            v149 = 2;
LABEL_217:
            v18 = 7;
            v155 = 7;
            goto LABEL_207;
          }
          v44 = v177[0];
          if ( !*((_WORD *)v177[0] + 10) )
          {
            v120 = WdLogNewEntry5_WdAssertion(v177[0], v28, v31);
            WdLogEvent5_WdAssertion(v120);
            v44 = v177[0];
          }
          if ( v151 || (v148 = 1, (v17 & 0x40) != 0) )
            v148 = 0;
          DrvSetDisplayConfigApplyDeviceHack(v44);
          if ( v39 )
          {
            v93 = v173;
            if ( !*((_DWORD *)v173 + 5) || (v148 = 1, !*((_DWORD *)v173 + 6)) )
              v148 = 0;
            LODWORD(v30) = DrvValidateAndApplyDevMode(v173, v177);
            if ( (int)v30 < 0 )
            {
              v18 = *((_DWORD *)v93 + 13);
              v159 = *((_DWORD *)v93 + 12);
              v121 = 2;
              v155 = v18;
              v29 = 23LL;
              if ( (_DWORD)v30 == -1073741266 )
                v121 = 23;
              v149 = v121;
              goto LABEL_207;
            }
            v38 = *((_DWORD *)v173 + 5) != 0;
            v169 = v38;
          }
          v18 = 10;
          v155 = 10;
          goto LABEL_40;
        }
        if ( (v17 & 0x10) != 0 )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
            0xA3C845u,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
            0,
            v147);
          if ( v166 )
          {
            LODWORD(v30) = -1073741811;
            v149 = 40;
            goto LABEL_87;
          }
          LODWORD(v30) = AllocatePathModalityForDisplayConfig(v162, v172, v177);
          if ( (int)v30 < 0 )
          {
            v149 = 3;
            goto LABEL_87;
          }
          LODWORD(v30) = ConvertDisplayConfigToPathModality(v162, v172, v177[0], 0LL);
          if ( (int)v30 < 0 )
          {
            v149 = 4;
            goto LABEL_87;
          }
          LODWORD(v30) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C024C8B0)(
                           v17 & 0x2000 | 0x2F,
                           v177[0],
                           0LL);
          if ( (int)v30 < 0 )
          {
            v149 = 5;
            goto LABEL_87;
          }
          v148 = !v151 && (v17 & 0x40) == 0;
          goto LABEL_40;
        }
        if ( (v17 & 0x20) == 0 )
        {
          v136 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
          *(_QWORD *)(v136 + 24) = (unsigned int)v17;
          WdLogEvent5_WdAssertion(v136);
          v149 = 9;
          goto LABEL_266;
        }
        v154[0] = 0;
        if ( (v161 & 8) != 0 )
        {
          v122 = SetDisplayConfigHandleOnlyProvidedPath(v172, v177, v154, (enum _DXGK_DIAG_SDC_STAGE *)&v149);
        }
        else
        {
          if ( !v166 )
          {
            v123 = v162;
            LODWORD(v30) = AllocatePathModalityForDisplayConfig(v162, v172, v177);
            if ( (int)v30 < 0 )
            {
              v149 = 6;
              goto LABEL_87;
            }
            LODWORD(v30) = ConvertDisplayConfigToPathModality(v123, v172, v177[0], v154);
            if ( (int)v30 < 0 )
            {
              v149 = 7;
              goto LABEL_87;
            }
            goto LABEL_241;
          }
          v122 = SetDisplayConfigHandleBrokerProvidedPaths(
                   v181,
                   0,
                   v162,
                   v172,
                   v177,
                   v154,
                   (enum _DXGK_DIAG_SDC_STAGE *)&v149);
        }
        LODWORD(v30) = v122;
        if ( v122 < 0 )
          goto LABEL_87;
LABEL_241:
        if ( v154[0] )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
            0xA3C845u,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
            0,
            v147);
          LODWORD(v30) = SetDisplayConfigHandlePreferredScaling(v177[0], (enum _DXGK_DIAG_SDC_STAGE *)&v149);
          if ( (int)v30 < 0 )
            goto LABEL_87;
        }
        LODWORD(v30) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C024C8B0)(
                         256LL,
                         v177[0],
                         0LL);
        if ( (int)v30 < 0 )
        {
          v149 = 8;
          goto LABEL_87;
        }
        v38 = 1;
        v169 = 1;
LABEL_40:
        if ( (v17 & 0x800) != 0 )
        {
          v163[0] = 0;
          PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(v29, v177[0], v163);
          v30 = PathPersistentMonitorsIfNeeded;
          if ( PathPersistentMonitorsIfNeeded < 0 )
          {
            v124 = WdLogNewEntry5_WdError(v47, v46, v48);
            *(_QWORD *)(v124 + 24) = v30;
            WdLogEvent5_WdError(v124);
            v149 = 10;
            goto LABEL_212;
          }
          v49 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C024C8D0)(
                  0x80000000LL,
                  v177[0]);
          v30 = v49;
          if ( v49 == -1073741266 )
          {
            v125 = WdLogNewEntry5_WdEvent(v51, v50, v52);
            *(_QWORD *)(v125 + 24) = v37;
            *(_QWORD *)(v125 + 32) = -1073741266LL;
            WdLogEvent5_WdEvent(v125);
            v149 = 23;
            goto LABEL_212;
          }
          if ( v49 < 0 )
          {
            v126 = WdLogNewEntry5_WdError(v51, v50, v52);
            *(_QWORD *)(v126 + 24) = v30;
            WdLogEvent5_WdError(v126);
            v149 = 22;
            goto LABEL_212;
          }
          if ( v163[0] )
          {
            v127 = WdLogNewEntry5_WdWarning();
            *(_QWORD *)(v127 + 24) = v37;
            *(_QWORD *)(v127 + 32) = v30;
            WdLogEvent5_WdWarning(v127);
            LODWORD(v30) = -1073741266;
            goto LABEL_212;
          }
        }
        v53 = GetCcdRawmodeFlag() | 0x8000;
        if ( (v161 & 0x20) != 0 && (!*((_QWORD *)v173 + 4) || *((_DWORD *)v173 + 2)) )
          v53 |= 0x20000u;
        v54 = v53;
        LODWORD(v54) = v53 | 0x1000000;
        if ( !v166 )
          v54 = v53;
        v55 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C024C8B8)(v54, v177[0]);
        v30 = v55;
        if ( v55 < 0 )
        {
          v118 = WdLogNewEntry5_WdEvent(v56, v28, v31);
          *(struct D3DKMT_GETPATHSMODALITY **)(v118 + 24) = v177[0];
          *(_QWORD *)(v118 + 32) = v30;
          WdLogEvent5_WdEvent(v118);
          v149 = 11;
          v18 = 7;
          goto LABEL_211;
        }
        if ( v182 )
        {
          LODWORD(v30) = GetPathsModality(v56, &v177[1], 1048640LL, 0LL);
          if ( (int)v30 < 0 )
          {
            v149 = 13;
            goto LABEL_217;
          }
          v57 = v17 & 0x1100;
          v58 = (16 * (v17 & 0x1000)) | 0x4000;
          if ( (v17 & 0x1100) == 0 )
            v58 = 16 * (v17 & 0x1000);
          if ( v58 )
          {
            LODWORD(v30) = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C024C8B0)(
                             v58,
                             v177[0],
                             0LL);
            if ( (int)v30 < 0 )
            {
              v149 = 14;
LABEL_207:
              v35 = v148;
              goto LABEL_87;
            }
          }
          v59 = v58 | 0x400000;
          v60 = 0;
          if ( (v161 & 0x10) == 0 )
            v59 = v58;
          v61 = v59 | 0x1000000;
          if ( !v166 )
            v61 = v59;
          v62 = gpGraphicsDeviceList;
          while ( v62 )
          {
            v63 = (*((_DWORD *)v62 + 40) & 0x800000) == 0;
            v64 = v60 + 1;
            v62 = (wchar_t *)*((_QWORD *)v62 + 16);
            if ( v63 )
              v64 = v60;
            v60 = v64;
          }
          v65 = 0LL;
          if ( v60 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v60, 0x7774656Cu);
            v65 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 76LL * v60);
              v67 = gpGraphicsDeviceList;
              for ( i = 0; v67; v67 = (wchar_t *)*((_QWORD *)v67 + 16) )
              {
                if ( (*((_DWORD *)v67 + 40) & 0x800000) != 0 )
                {
                  v69 = 76LL * i++;
                  *(_DWORD *)&v65[v69] = *((_DWORD *)v67 + 62);
                  *(_DWORD *)&v65[v69 + 4] = *((_DWORD *)v67 + 63);
                  *(_DWORD *)&v65[v69 + 8] = *((_DWORD *)v67 + 64);
                }
              }
            }
            v26 = 1;
          }
          DisplayScenarioJournalSetExpectedPathModality(
            272 * (unsigned int)*((unsigned __int16 *)v177[0] + 10),
            *((unsigned __int16 *)v177[0] + 10),
            (char *)v177[0] + 48,
            v60,
            v65);
          LOBYTE(v70) = v57 != 0;
          v71 = v168;
          v72 = v171;
          v73 = ApplyPathsModality(v177[0], v61, v70, (_DWORD)v183, (__int64)v171, (__int64)&v153, (__int64)v168, v184);
          v174 = v73;
          v74 = v73;
          v159 = v73;
          if ( v73 < 0 || v73 == 1 )
          {
            LODWORD(v30) = -1073741823;
            v149 = 16;
            v18 = 5;
LABEL_211:
            v155 = v18;
LABEL_212:
            v35 = v148;
            goto LABEL_87;
          }
          if ( v153 )
          {
            v128 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
            WdLogEvent5_WdAssertion(v128);
          }
          if ( v74 == 2 )
          {
            if ( v57 || *v71 )
            {
              v129 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
              WdLogEvent5_WdAssertion(v129);
            }
            v150 = 1;
          }
          else
          {
            if ( !*v71 )
            {
              v130 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
              WdLogEvent5_WdAssertion(v130);
            }
            v72 = 0LL;
            v171 = 0LL;
          }
          LOBYTE(v17) = v160;
          v38 = v169;
          v37 = v175;
        }
        else
        {
          if ( (v17 & 0x40) == 0 )
          {
            v135 = WdLogNewEntry5_WdAssertion(v56, v28, v31);
            *(_QWORD *)(v135 + 24) = (unsigned int)v17;
            WdLogEvent5_WdAssertion(v135);
            v35 = v148;
            v149 = 21;
LABEL_266:
            LODWORD(v30) = -1073741811;
            goto LABEL_87;
          }
          v72 = v171;
          v159 = 0;
        }
        v35 = v148;
        if ( !v148 )
          goto LABEL_85;
        v75 = ((__int64 (__fastcall *)(BOOL, struct D3DKMT_GETPATHSMODALITY *))qword_1C024C8D0)(v38, v177[0]);
        v30 = v75;
        if ( !a6 )
        {
          if ( v75 < 0 )
          {
            v131 = WdLogNewEntry5_WdError(v29, v28, v31);
            *(_QWORD *)(v131 + 24) = v30;
            WdLogEvent5_WdError(v131);
            LODWORD(v30) = 0;
          }
LABEL_85:
          v29 = (unsigned int)((int)v30 >> 31);
          v149 = v29 + 18;
          v18 = v29 + 10;
LABEL_86:
          v155 = v18;
          goto LABEL_87;
        }
        if ( v75 == -1073741266 )
        {
          if ( (v17 & 0x10) != 0 )
          {
            v132 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
            WdLogEvent5_WdAssertion(v132);
          }
          v133 = WdLogNewEntry5_WdEvent(v29, v28, v31);
          *(_QWORD *)(v133 + 24) = v37;
          *(_QWORD *)(v133 + 32) = -1073741266LL;
          WdLogEvent5_WdEvent(v133);
          if ( !v150 )
          {
            if ( v72 )
            {
              v134 = WdLogNewEntry5_WdAssertion(v29, v28, v31);
              WdLogEvent5_WdAssertion(v134);
            }
            v29 = (__int64)v168;
            v152 = 1;
            v171 = *v168;
            *v168 = 0LL;
          }
          v149 = 24;
          v18 = 9;
          goto LABEL_86;
        }
        if ( v75 >= 0 )
          goto LABEL_85;
        v18 = 9;
        v149 = 29;
        v155 = 9;
        LODWORD(v30) = 0;
LABEL_87:
        v76 = ++v167;
        if ( (_DWORD)v30 == -1073741266 )
        {
          if ( !v156 && v76 < 4 )
          {
            v137 = 3221226030LL;
            goto LABEL_272;
          }
        }
        else if ( (int)v30 >= 0 )
        {
          goto LABEL_89;
        }
        if ( !v157 )
          goto LABEL_153;
        v156 = 1;
        v35 = 0;
        v148 = 0;
        v137 = (unsigned int)v30;
LABEL_272:
        DisplayScenarioJournalRetry(v137);
        LODWORD(v17) = v160;
      }
    }
    LODWORD(v17) = v17 & 0xFFFFFFF0 | 4;
LABEL_186:
    v160 = v17;
    goto LABEL_13;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
    0xA3C845u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
    v25,
    v147);
  if ( (v17 & 0x10000) != 0 )
  {
    v149 = 38;
LABEL_164:
    LODWORD(v30) = -1073741811;
LABEL_165:
    v96 = v168;
    goto LABEL_166;
  }
  v151 = 0;
  v27 = 0;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C024CA38)(0LL, 0LL) )
  {
    LODWORD(v17) = 2191;
    goto LABEL_186;
  }
  LODWORD(v30) = 0;
  v150 = 1;
  v149 = 18;
LABEL_93:
  FreePathsModality(v177[1]);
  v177[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v177[1]) >= 0 )
  {
    DisplayScenarioJournalSetActualPathModality(
      272 * (unsigned int)*((unsigned __int16 *)v177[1] + 10),
      *((unsigned __int16 *)v177[1] + 10),
      (char *)v177[1] + 48);
    v79 = v177[1];
    v80 = 0;
    if ( *((_WORD *)v177[1] + 10) )
    {
      v81 = 0LL;
      do
      {
        if ( (*(_QWORD *)((_BYTE *)v79 + v81 + 48) & 0x8000001000000000uLL) == 0x8000000000000000uLL )
        {
          v195 = 0LL;
          v196 = 0;
          v192[0] = 9;
          v192[1] = 32;
          v193 = *(_QWORD *)((char *)v79 + v81 + 64);
          v194 = *(_DWORD *)((char *)v79 + v81 + 76);
          if ( (int)DrvDisplayConfigGetDeviceInfo(v192, 0x8000000000000000uLL, v31) >= 0 && (v195 & 1) != 0 )
          {
            v158 = 1;
            break;
          }
          v79 = v177[1];
        }
        ++v80;
        v81 += 272LL;
      }
      while ( v80 < *((unsigned __int16 *)v79 + 10) );
    }
  }
  if ( *v168 )
  {
    v94 = *((_QWORD *)*v168 + 5);
    if ( v94 )
    {
      v95 = *(_QWORD *)(v94 + 2576);
      if ( ((v95 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v95 + 160) & 0x2000000) != 0);
    }
  }
  v18 = v155;
LABEL_103:
  v82 = v167;
  if ( v186 )
    *v186 = v167;
  if ( v187 )
    *v187 = v149;
  if ( v188 )
  {
    if ( !v150 || v152 )
      v26 = 0;
    *v188 = v26;
  }
  if ( v189 )
    *v189 = v153;
  v83 = v161;
  if ( (v161 & 0x20) != 0 )
  {
    v84 = v173;
    v85 = (unsigned int)v159;
    v86 = (int)v30 >= 0;
    v87 = v159 < 0;
    *((_DWORD *)v173 + 12) = v159;
    *((_DWORD *)v84 + 13) = v18;
    if ( v86 != !v87 )
    {
      v144 = WdLogNewEntry5_WdAssertion(v86, v85, v31);
      WdLogEvent5_WdAssertion(v144);
    }
    v191[2] = v159;
    v191[0] = 0;
    v191[1] = 16;
    v191[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v191);
  }
  if ( (v83 & 0x40) == 0 )
    LogDiagSDC(v162, (__int64)v172, v17, v30, v82, v149, v190, v150);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v32) = v150;
  LOBYTE(v146) = v158;
  LOBYTE(v145) = v153;
  DisplayScenarioJournalFinalize((unsigned int)v30, (unsigned int)v149, v82, v32, v145, v146, v174, v184);
  v91 = WdLogNewEntry5_WdEvent(v89, v88, v90);
  *(_QWORD *)(v91 + 24) = (int)v30;
  WdLogEvent5_WdEvent(v91);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v176);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v185, 5);
  return (unsigned int)v30;
}

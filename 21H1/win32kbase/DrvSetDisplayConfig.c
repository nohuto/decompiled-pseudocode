/*
 * XREFs of DrvSetDisplayConfig @ 0x1C0098260
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0053340 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1C00552E4 (InitVideo.c)
 *     DrvChangeDisplaySettings @ 0x1C009C4A0 (DrvChangeDisplaySettings.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CBCC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01425E0 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C004903C (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C004B960 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C004DB24 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C004DBE8 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     LogDiagSDC @ 0x1C0053754 (LogDiagSDC.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0095300 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvIsWddmDriverPresent @ 0x1C00962A8 (DrvIsWddmDriverPresent.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0098090 (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0098E80 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0098EEC (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0098F20 (GetPathsModality.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0099034 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00A4ED8 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AB8A4 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00ACE78 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ApplyPathsModality @ 0x1C00B125C (ApplyPathsModality.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014CB8C (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C014D19C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C014DE50 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014E0E0 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C014F918 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C014FECC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01500B8 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
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
        unsigned int *a12,
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
  __int64 v22; // r9
  int IsWddmConnectedSession; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  char v28; // r14
  char v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // eax
  char v37; // di
  __int64 v38; // rax
  __int64 v39; // r13
  BOOL v40; // r12d
  char v41; // si
  unsigned __int16 v42; // di
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ebx
  struct D3DKMT_GETPATHSMODALITY *v46; // rcx
  int PathPersistentMonitorsIfNeeded; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  int v59; // r12d
  unsigned int v60; // edi
  int v61; // ecx
  unsigned int v62; // esi
  int v63; // r15d
  wchar_t *v64; // rcx
  bool v65; // zf
  unsigned int v66; // eax
  char *v67; // rdi
  char *PoolWithTag; // rax
  wchar_t *v69; // rdx
  unsigned int i; // r8d
  __int64 v71; // rcx
  int v72; // r8d
  struct _MDEV **v73; // rdi
  struct _MDEV *v74; // rsi
  int v75; // eax
  int v76; // r15d
  int v77; // eax
  unsigned int v78; // eax
  char v79; // al
  struct _MDEV **v80; // r12
  struct D3DKMT_GETPATHSMODALITY *v81; // rcx
  int v82; // esi
  __int64 v83; // rdi
  unsigned int v84; // r12d
  char v85; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v86; // rax
  __int64 v87; // rdx
  _BOOL8 v88; // rcx
  bool v89; // sf
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  struct _DISPLAYCONFIG_CDS_REQUEST *v95; // r12
  __int64 v96; // rax
  __int64 v97; // rcx
  struct _MDEV **v98; // r12
  int v99; // edi
  int v100; // eax
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rax
  int v108; // ebx
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  unsigned int v112; // ebx
  const struct _RETRY_MODE *v113; // rdi
  int v114; // eax
  __int64 v115; // rax
  int v116; // eax
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned int v123; // eax
  int v124; // eax
  unsigned int v125; // r12d
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
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // rax
  struct _MDEV *v142; // rdi
  __int64 v143; // rax
  int v144; // edx
  __int64 v145; // rax
  __int64 v146; // rax
  int v147; // [rsp+20h] [rbp-E0h]
  int v148; // [rsp+28h] [rbp-D8h]
  bool v149; // [rsp+40h] [rbp-C0h]
  unsigned int v150; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v151; // [rsp+48h] [rbp-B8h] BYREF
  char v152; // [rsp+49h] [rbp-B7h]
  char v153; // [rsp+4Ah] [rbp-B6h]
  char v154; // [rsp+4Bh] [rbp-B5h] BYREF
  bool v155[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v156; // [rsp+50h] [rbp-B0h]
  bool v157; // [rsp+54h] [rbp-ACh]
  bool v158; // [rsp+55h] [rbp-ABh]
  char v159; // [rsp+56h] [rbp-AAh]
  int v160; // [rsp+58h] [rbp-A8h] BYREF
  int v161; // [rsp+5Ch] [rbp-A4h]
  unsigned int v162; // [rsp+60h] [rbp-A0h]
  unsigned int v163; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 v164[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v165; // [rsp+6Ch] [rbp-94h]
  unsigned int v166; // [rsp+70h] [rbp-90h]
  int v167; // [rsp+74h] [rbp-8Ch]
  unsigned int v168; // [rsp+78h] [rbp-88h]
  struct _MDEV **v169; // [rsp+80h] [rbp-80h]
  int v170; // [rsp+88h] [rbp-78h]
  unsigned int v171; // [rsp+8Ch] [rbp-74h]
  struct _MDEV *v172; // [rsp+90h] [rbp-70h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v173; // [rsp+98h] [rbp-68h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v174; // [rsp+A0h] [rbp-60h]
  int v175; // [rsp+A8h] [rbp-58h]
  __int64 v176; // [rsp+B0h] [rbp-50h]
  _QWORD v177[6]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v178[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v179; // [rsp+100h] [rbp+0h] BYREF
  char v180; // [rsp+108h] [rbp+8h]
  __int64 v181; // [rsp+110h] [rbp+10h]
  void *v182; // [rsp+118h] [rbp+18h] BYREF
  int v183; // [rsp+120h] [rbp+20h]
  void *v184; // [rsp+128h] [rbp+28h]
  __int64 v185; // [rsp+130h] [rbp+30h]
  __int64 v186; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v187; // [rsp+140h] [rbp+40h]
  unsigned int *v188; // [rsp+148h] [rbp+48h]
  char *v189; // [rsp+150h] [rbp+50h]
  _BYTE *v190; // [rsp+158h] [rbp+58h]
  __int64 v191; // [rsp+160h] [rbp+60h]
  _DWORD v192[4]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v193[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v194; // [rsp+180h] [rbp+80h]
  int v195; // [rsp+188h] [rbp+88h]
  __int64 v196; // [rsp+18Ch] [rbp+8Ch]
  int v197; // [rsp+194h] [rbp+94h]
  __int64 retaddr; // [rsp+1E8h] [rbp+E8h]

  v16 = a9;
  v184 = a5;
  v187 = a11;
  v188 = a12;
  v190 = a14;
  v185 = a15;
  v163 = a1;
  v189 = a13;
  v17 = (unsigned int)a3;
  v162 = a4;
  v18 = 0;
  v157 = gbBaseVideo != 0;
  v161 = a3;
  v175 = -1;
  v173 = a2;
  v174 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v172 = a9;
  v169 = a10;
  v165 = gbBaseVideo != 0 ? 3 : 0;
  v168 = 0;
  v153 = 0;
  v151 = 0;
  v154 = 0;
  v150 = 0;
  v160 = -5;
  v156 = 0;
  v166 = 0;
  v159 = 0;
  v19 = WdLogNewEntry5_WdEvent(0LL, a2, a3);
  *(_QWORD *)(v19 + 24) = v17;
  WdLogEvent5_WdEvent(v19);
  v176 = MEMORY[0xFFFFF78000000320];
  v191 = v176 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)v17, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(200 * v163, v163, v173);
  v186 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v186, 4);
  *a10 = 0LL;
  if ( gOldModeChange )
  {
    v101 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
    WdLogEvent5_WdAssertion(v101);
  }
  if ( (v17 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v158 = (a4 & 2) != 0 && (v17 & 0x88F) == 2191;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v177);
  v179 = 0LL;
  v177[0] = &off_1C0206D50;
  v181 = v185;
  *(_OWORD *)v178 = 0LL;
  v180 = 0;
  v182 = 0LL;
  IsWddmConnectedSession = UserIsWddmConnectedSession();
  v27 = 0LL;
  v28 = 1;
  if ( !IsWddmConnectedSession || !(unsigned int)DrvIsWddmDriverPresent() || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v141 = WdLogNewEntry5_WdAssertion(v24, v27, v25, v26);
      WdLogEvent5_WdAssertion(v141);
    }
    v98 = v169;
    v99 = a4 & 1;
    LODWORD(v32) = DrvChangeDisplayFallback(
                     v184,
                     BYTE1(v17) & 1,
                     a4 & 1,
                     a9,
                     v169,
                     (enum _DXGK_DIAG_SDC_STAGE *)&v150,
                     (bool *)&v151,
                     &v160);
    if ( (int)v32 < 0 )
    {
LABEL_166:
      if ( v158 )
      {
        if ( a6 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
          WdLogEvent5_WdAssertion(v102);
        }
        LODWORD(v17) = v161;
        v103 = DrvChangeDisplayFallback(
                 v184,
                 BYTE1(v161) & 1,
                 1,
                 v16,
                 v98,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v150,
                 (bool *)&v151,
                 &v160);
        v32 = v103;
        if ( v103 < 0 )
        {
          v145 = WdLogNewEntry5_WdAssertion(v105, v104, v33, v34);
          WdLogEvent5_WdAssertion(v145);
          if ( !byte_1C025A430 )
          {
            LOBYTE(v148) = 0;
            byte_1C025A430 = 1;
            ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, int))qword_1C0252B30)(
              400LL,
              22LL,
              v32,
              v160,
              (int)v150,
              v148);
          }
        }
        else
        {
          v18 = 10;
          v150 = 31;
          v156 = 10;
        }
LABEL_92:
        if ( (_DWORD)v32 == -1073741811 )
          goto LABEL_103;
        goto LABEL_93;
      }
LABEL_91:
      LODWORD(v17) = v161;
      goto LABEL_92;
    }
    v100 = v150;
    v31 = 30LL;
    if ( v99 )
      v100 = 30;
    v150 = v100;
LABEL_153:
    if ( (int)v32 >= 0 )
    {
LABEL_89:
      v79 = v153;
    }
    else
    {
LABEL_275:
      v79 = v153;
      if ( v153 )
      {
        v18 = 9;
        v150 = 29;
        v156 = 9;
        LODWORD(v32) = 0;
        v160 = 0;
      }
      if ( (int)v32 < 0 )
      {
        v16 = v172;
        goto LABEL_165;
      }
    }
    v80 = v169;
    if ( v79 && !*v169 )
    {
      v142 = v172;
      if ( !v172 )
      {
        v143 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
        WdLogEvent5_WdAssertion(v143);
      }
      v144 = v160;
      v65 = v160 == 2;
      *v80 = v142;
      if ( v65 )
        v144 = 0;
      v160 = v144;
    }
    goto LABEL_91;
  }
  if ( (v17 & 0x40000000) != 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_BrokeredDisplays_ModeChanges__private_reporting,
      10733637LL,
      0LL,
      0LL,
      &Feature_BrokeredDisplays_ModeChanges_logged_traits,
      v27);
    if ( (v17 & 0x10000) == 0 )
    {
      v106 = 0LL;
      if ( gbBaseVideo )
      {
        v107 = WdLogNewEntry5_WdAssertion(0LL, v30, v33, v34);
        WdLogEvent5_WdAssertion(v107);
      }
      LODWORD(v32) = GetPathsModality(v106, v178, 15LL, 0LL);
      if ( (int)v32 < 0 )
      {
        v150 = 2;
        goto LABEL_153;
      }
      v108 = *((_DWORD *)v178[0] + 8) & 0xF;
      if ( v108 != 1 && v108 != 8 )
      {
        LOBYTE(v31) = 1;
        v152 = 1;
        LOBYTE(v30) = v108 == 4;
        v29 = 1;
        ((void (__fastcall *)(__int64, __int64))qword_1C0252A58)(v31, v30);
        if ( v108 != 4 )
        {
          LODWORD(v17) = 132;
          goto LABEL_186;
        }
        v151 = 1;
        LODWORD(v32) = 0;
        v150 = 26;
        goto LABEL_93;
      }
      LODWORD(v32) = -1073741637;
      v150 = 25;
      goto LABEL_165;
    }
    v150 = 37;
    goto LABEL_164;
  }
  if ( (int)v17 >= 0 )
  {
    if ( (v17 & 0xF) != 0xF || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v27 )
    {
      if ( (v17 & 0x200) != 0
        || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v27
        || (v17 & 0x1F) != 0 && (v17 & 0x40) == 0 )
      {
        v29 = v27;
        v152 = v27;
        ((void (__fastcall *)(_QWORD))qword_1C0252A58)(0LL);
      }
      else
      {
        v29 = qword_1C0252A60();
        v152 = v29;
      }
      goto LABEL_13;
    }
    v152 = qword_1C0252A60();
    v29 = v152;
    if ( !v152 )
    {
LABEL_13:
      v167 = v17 & 0x10000;
      v183 = v17 & 0x80;
      if ( (v17 & 0x10000) != 0 )
      {
        LODWORD(v32) = ((__int64 (__fastcall *)(__int64, _QWORD, void **))qword_1C0252B38)(
                         a7,
                         (v17 & 0x80) != 0 ? 2031616 : 0x20000,
                         &v182);
        if ( (int)v32 < 0 )
        {
          v150 = 42;
          goto LABEL_153;
        }
      }
      LODWORD(v32) = ((__int64 (*)(void))qword_1C0252950)();
      if ( (int)v32 < 0 )
      {
        v18 = 6;
        v150 = 12;
        v156 = 6;
        goto LABEL_153;
      }
      v180 = 1;
      if ( (v17 & 0x80) != 0 )
      {
        v35 = 1LL;
        if ( !v29 && (v17 & 0xF) != 0 && (v162 & 0x20) == 0 )
          v35 = 3LL;
        v36 = ((__int64 (__fastcall *)(__int64))qword_1C0252968)(v35);
        v32 = v36;
        if ( v36 < 0 )
        {
          v109 = WdLogNewEntry5_WdEvent(v31, v30, v33);
          *(_QWORD *)(v109 + 24) = v32;
          WdLogEvent5_WdEvent(v109);
          DrvDxgkLogCodePointPacket(4LL, (unsigned int)v32, 0LL);
          LODWORD(v32) = 0;
        }
      }
      if ( (v17 & 0x200) == 0 || (v37 = 1, (v17 & 0x40) != 0) )
        v37 = 0;
      v149 = v37;
      v171 = v17 & 0xF;
      while ( 1 )
      {
        v38 = WdLogNewEntry5_WdEvent(v31, v30, v33);
        v39 = v168;
        v176 = v168;
        *(_QWORD *)(v38 + 24) = v168;
        *(_QWORD *)(v38 + 32) = (int)v32;
        WdLogEvent5_WdEvent(v38);
        v40 = 0;
        v170 = 0;
        v154 = 0;
        v151 = 0;
        FreePathsModality(v178[0]);
        FreePathsModality(v178[1]);
        v178[1] = 0LL;
        v178[0] = 0LL;
        if ( v157 )
        {
          if ( v171 != 15 )
          {
            v110 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
            WdLogEvent5_WdAssertion(v110);
          }
          if ( v37 )
          {
            v111 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
            WdLogEvent5_WdAssertion(v111);
          }
          if ( v165 >= 6 )
          {
            if ( (int)v32 >= 0 )
            {
              v140 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
              WdLogEvent5_WdAssertion(v140);
              goto LABEL_153;
            }
            goto LABEL_275;
          }
          v112 = v165;
          v113 = (const struct _RETRY_MODE *)((char *)&unk_1C02264C0 + 12 * v165);
          DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v113 + 1), *((unsigned int *)v113 + 2));
          if ( *(_BYTE *)v113 )
          {
            v166 = 0;
            v165 = v112 + 1;
            LODWORD(v32) = GetPathsModality(0LL, v178, 15LL, 0LL);
          }
          else
          {
            v114 = DrvCreatePathModalityFromAllPaths(&v179, v166++, v178);
            LODWORD(v32) = v114;
            if ( v114 >= 0 )
            {
              if ( *((_WORD *)v178[0] + 10) != 1 )
              {
                v115 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                WdLogEvent5_WdAssertion(v115);
              }
            }
            else
            {
              ++v165;
              v166 = 0;
            }
          }
          if ( (int)v32 < 0 )
          {
            v150 = 2;
            goto LABEL_207;
          }
          v116 = DrvFunctionalizeBaseVidMode(v113, v178[0]);
          v32 = v116;
          if ( v116 < 0 )
          {
            v119 = WdLogNewEntry5_WdError(v31, v117, v118);
            *(_QWORD *)(v119 + 24) = v32;
            WdLogEvent5_WdError(v119);
            v150 = 2;
            goto LABEL_212;
          }
          goto LABEL_40;
        }
        if ( v171 )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_reporting,
            10733637LL,
            0LL,
            0LL,
            &Feature_BrokeredDisplays_ModeChanges_logged_traits,
            0);
          if ( v167 )
          {
            LODWORD(v32) = -1073741811;
            v150 = 39;
            goto LABEL_87;
          }
          if ( (v162 & 0x20) != 0 && *((_QWORD *)v174 + 4) )
          {
            v41 = 1;
            v42 = 1;
          }
          else
          {
            v41 = 0;
            v42 = 0;
          }
          if ( !v41 || *((_DWORD *)v174 + 5) )
          {
            v43 = v171;
            v44 = v171;
          }
          else
          {
            v43 = v171;
            v44 = 0x2000000;
          }
          v45 = v44 | ((v162 & 0x20) != 0 ? 0x9000 : 0);
          if ( (v44 & 0x2000000) != 0 && (_DWORD)v43 != 15 )
          {
            v121 = WdLogNewEntry5_WdAssertion(v43, v30, v33, v34);
            WdLogEvent5_WdAssertion(v121);
          }
          LODWORD(v32) = GetPathsModality(v43, v178, v45, v42);
          if ( (int)v32 < 0 )
          {
            v150 = 2;
LABEL_217:
            v18 = 7;
            v156 = 7;
            goto LABEL_207;
          }
          v46 = v178[0];
          if ( !*((_WORD *)v178[0] + 10) )
          {
            v122 = WdLogNewEntry5_WdAssertion(v178[0], v30, v33, v34);
            WdLogEvent5_WdAssertion(v122);
            v46 = v178[0];
          }
          if ( v152 || (v149 = 1, (v17 & 0x40) != 0) )
            v149 = 0;
          DrvSetDisplayConfigApplyDeviceHack(v46);
          if ( v41 )
          {
            v95 = v174;
            if ( !*((_DWORD *)v174 + 5) || (v149 = 1, !*((_DWORD *)v174 + 6)) )
              v149 = 0;
            LODWORD(v32) = DrvValidateAndApplyDevMode(v174, v178);
            if ( (int)v32 < 0 )
            {
              v18 = *((_DWORD *)v95 + 13);
              v160 = *((_DWORD *)v95 + 12);
              v123 = 2;
              v156 = v18;
              v31 = 23LL;
              if ( (_DWORD)v32 == -1073741266 )
                v123 = 23;
              v150 = v123;
              goto LABEL_207;
            }
            v40 = *((_DWORD *)v174 + 5) != 0;
            v170 = v40;
          }
          v18 = 10;
          v156 = 10;
          goto LABEL_40;
        }
        if ( (v17 & 0x10) != 0 )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_reporting,
            10733637LL,
            0LL,
            0LL,
            &Feature_BrokeredDisplays_ModeChanges_logged_traits,
            0);
          if ( v167 )
          {
            LODWORD(v32) = -1073741811;
            v150 = 40;
            goto LABEL_87;
          }
          LODWORD(v32) = AllocatePathModalityForDisplayConfig(v163, v173, v178);
          if ( (int)v32 < 0 )
          {
            v150 = 3;
            goto LABEL_87;
          }
          LODWORD(v32) = ConvertDisplayConfigToPathModality(v163, v173, v178[0], 0LL);
          if ( (int)v32 < 0 )
          {
            v150 = 4;
            goto LABEL_87;
          }
          LODWORD(v32) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02528D0)(
                           v17 & 0x2000 | 0x2F,
                           v178[0],
                           0LL);
          if ( (int)v32 < 0 )
          {
            v150 = 5;
            goto LABEL_87;
          }
          v149 = !v152 && (v17 & 0x40) == 0;
          goto LABEL_40;
        }
        if ( (v17 & 0x20) == 0 )
        {
          v138 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
          *(_QWORD *)(v138 + 24) = (unsigned int)v17;
          WdLogEvent5_WdAssertion(v138);
          v150 = 9;
          goto LABEL_266;
        }
        v155[0] = 0;
        if ( (v162 & 8) != 0 )
        {
          v124 = SetDisplayConfigHandleOnlyProvidedPath(v173, v178, v155, (enum _DXGK_DIAG_SDC_STAGE *)&v150);
        }
        else
        {
          if ( !v167 )
          {
            v125 = v163;
            LODWORD(v32) = AllocatePathModalityForDisplayConfig(v163, v173, v178);
            if ( (int)v32 < 0 )
            {
              v150 = 6;
              goto LABEL_87;
            }
            LODWORD(v32) = ConvertDisplayConfigToPathModality(v125, v173, v178[0], v155);
            if ( (int)v32 < 0 )
            {
              v150 = 7;
              goto LABEL_87;
            }
            goto LABEL_241;
          }
          v124 = SetDisplayConfigHandleBrokerProvidedPaths(
                   v182,
                   0,
                   v163,
                   v173,
                   v178,
                   v155,
                   (enum _DXGK_DIAG_SDC_STAGE *)&v150);
        }
        LODWORD(v32) = v124;
        if ( v124 < 0 )
          goto LABEL_87;
LABEL_241:
        if ( v155[0] )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            &Feature_BrokeredDisplays_ModeChanges__private_reporting,
            10733637LL,
            0LL,
            0LL,
            &Feature_BrokeredDisplays_ModeChanges_logged_traits,
            0);
          LODWORD(v32) = SetDisplayConfigHandlePreferredScaling(v178[0], (enum _DXGK_DIAG_SDC_STAGE *)&v150);
          if ( (int)v32 < 0 )
            goto LABEL_87;
        }
        LODWORD(v32) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02528D0)(
                         256LL,
                         v178[0],
                         0LL);
        if ( (int)v32 < 0 )
        {
          v150 = 8;
          goto LABEL_87;
        }
        v40 = 1;
        v170 = 1;
LABEL_40:
        if ( (v17 & 0x800) != 0 )
        {
          v164[0] = 0;
          PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(v31, v178[0], v164);
          v32 = PathPersistentMonitorsIfNeeded;
          if ( PathPersistentMonitorsIfNeeded < 0 )
          {
            v126 = WdLogNewEntry5_WdError(v49, v48, v50);
            *(_QWORD *)(v126 + 24) = v32;
            WdLogEvent5_WdError(v126);
            v150 = 10;
            goto LABEL_212;
          }
          v51 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C02528F0)(
                  0x80000000LL,
                  v178[0]);
          v32 = v51;
          if ( v51 == -1073741266 )
          {
            v127 = WdLogNewEntry5_WdEvent(v53, v52, v54);
            *(_QWORD *)(v127 + 24) = v39;
            *(_QWORD *)(v127 + 32) = -1073741266LL;
            WdLogEvent5_WdEvent(v127);
            v150 = 23;
            goto LABEL_212;
          }
          if ( v51 < 0 )
          {
            v128 = WdLogNewEntry5_WdError(v53, v52, v54);
            *(_QWORD *)(v128 + 24) = v32;
            WdLogEvent5_WdError(v128);
            v150 = 22;
            goto LABEL_212;
          }
          if ( v164[0] )
          {
            v129 = WdLogNewEntry5_WdWarning();
            *(_QWORD *)(v129 + 24) = v39;
            *(_QWORD *)(v129 + 32) = v32;
            WdLogEvent5_WdWarning(v129);
            LODWORD(v32) = -1073741266;
            goto LABEL_212;
          }
        }
        v55 = GetCcdRawmodeFlag() | 0x8000;
        if ( (v162 & 0x20) != 0 && (!*((_QWORD *)v174 + 4) || *((_DWORD *)v174 + 2)) )
          v55 |= 0x20000u;
        v56 = v55;
        LODWORD(v56) = v55 | 0x1000000;
        if ( !v167 )
          v56 = v55;
        v57 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C02528D8)(v56, v178[0]);
        v32 = v57;
        if ( v57 < 0 )
        {
          v120 = WdLogNewEntry5_WdEvent(v58, v30, v33);
          *(struct D3DKMT_GETPATHSMODALITY **)(v120 + 24) = v178[0];
          *(_QWORD *)(v120 + 32) = v32;
          WdLogEvent5_WdEvent(v120);
          v150 = 11;
          v18 = 7;
          goto LABEL_211;
        }
        if ( v183 )
        {
          LODWORD(v32) = GetPathsModality(v58, &v178[1], 1048640LL, 0LL);
          if ( (int)v32 < 0 )
          {
            v150 = 13;
            goto LABEL_217;
          }
          v59 = v17 & 0x1100;
          v60 = (16 * (v17 & 0x1000)) | 0x4000;
          if ( (v17 & 0x1100) == 0 )
            v60 = 16 * (v17 & 0x1000);
          if ( v60 )
          {
            LODWORD(v32) = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C02528D0)(
                             v60,
                             v178[0],
                             0LL);
            if ( (int)v32 < 0 )
            {
              v150 = 14;
LABEL_207:
              v37 = v149;
              goto LABEL_87;
            }
          }
          v61 = v60 | 0x400000;
          v62 = 0;
          if ( (v162 & 0x10) == 0 )
            v61 = v60;
          v63 = v61 | 0x1000000;
          if ( !v167 )
            v63 = v61;
          v64 = gpGraphicsDeviceList;
          while ( v64 )
          {
            v65 = (*((_DWORD *)v64 + 40) & 0x800000) == 0;
            v66 = v62 + 1;
            v64 = (wchar_t *)*((_QWORD *)v64 + 16);
            if ( v65 )
              v66 = v62;
            v62 = v66;
          }
          v67 = 0LL;
          if ( v62 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v62, 0x7774656Cu);
            v67 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 76LL * v62);
              v69 = gpGraphicsDeviceList;
              for ( i = 0; v69; v69 = (wchar_t *)*((_QWORD *)v69 + 16) )
              {
                if ( (*((_DWORD *)v69 + 40) & 0x800000) != 0 )
                {
                  v71 = 76LL * i++;
                  *(_DWORD *)&v67[v71] = *((_DWORD *)v69 + 62);
                  *(_DWORD *)&v67[v71 + 4] = *((_DWORD *)v69 + 63);
                  *(_DWORD *)&v67[v71 + 8] = *((_DWORD *)v69 + 64);
                }
              }
            }
            v28 = 1;
          }
          DisplayScenarioJournalSetExpectedPathModality(
            272 * (unsigned int)*((unsigned __int16 *)v178[0] + 10),
            *((unsigned __int16 *)v178[0] + 10),
            (char *)v178[0] + 48,
            v62,
            v67);
          LOBYTE(v72) = v59 != 0;
          v73 = v169;
          v74 = v172;
          v75 = ApplyPathsModality(v178[0], v63, v72, (_DWORD)v184, (__int64)v172, (__int64)&v154, (__int64)v169, v185);
          v175 = v75;
          v76 = v75;
          v160 = v75;
          if ( v75 < 0 || v75 == 1 )
          {
            LODWORD(v32) = -1073741823;
            v150 = 16;
            v18 = 5;
LABEL_211:
            v156 = v18;
LABEL_212:
            v37 = v149;
            goto LABEL_87;
          }
          if ( v154 )
          {
            v130 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
            WdLogEvent5_WdAssertion(v130);
          }
          if ( v76 == 2 )
          {
            if ( v59 || *v73 )
            {
              v131 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
              WdLogEvent5_WdAssertion(v131);
            }
            v151 = 1;
          }
          else
          {
            if ( !*v73 )
            {
              v132 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
              WdLogEvent5_WdAssertion(v132);
            }
            v74 = 0LL;
            v172 = 0LL;
          }
          LOBYTE(v17) = v161;
          v40 = v170;
          v39 = v176;
        }
        else
        {
          if ( (v17 & 0x40) == 0 )
          {
            v137 = WdLogNewEntry5_WdAssertion(v58, v30, v33, v34);
            *(_QWORD *)(v137 + 24) = (unsigned int)v17;
            WdLogEvent5_WdAssertion(v137);
            v37 = v149;
            v150 = 21;
LABEL_266:
            LODWORD(v32) = -1073741811;
            goto LABEL_87;
          }
          v74 = v172;
          v160 = 0;
        }
        v37 = v149;
        if ( !v149 )
          goto LABEL_85;
        v77 = ((__int64 (__fastcall *)(BOOL, struct D3DKMT_GETPATHSMODALITY *))qword_1C02528F0)(v40, v178[0]);
        v32 = v77;
        if ( !a6 )
        {
          if ( v77 < 0 )
          {
            v133 = WdLogNewEntry5_WdError(v31, v30, v33);
            *(_QWORD *)(v133 + 24) = v32;
            WdLogEvent5_WdError(v133);
            LODWORD(v32) = 0;
          }
LABEL_85:
          v31 = (unsigned int)((int)v32 >> 31);
          v150 = v31 + 18;
          v18 = v31 + 10;
LABEL_86:
          v156 = v18;
          goto LABEL_87;
        }
        if ( v77 == -1073741266 )
        {
          if ( (v17 & 0x10) != 0 )
          {
            v134 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
            WdLogEvent5_WdAssertion(v134);
          }
          v135 = WdLogNewEntry5_WdEvent(v31, v30, v33);
          *(_QWORD *)(v135 + 24) = v39;
          *(_QWORD *)(v135 + 32) = -1073741266LL;
          WdLogEvent5_WdEvent(v135);
          if ( !v151 )
          {
            if ( v74 )
            {
              v136 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
              WdLogEvent5_WdAssertion(v136);
            }
            v31 = (__int64)v169;
            v153 = 1;
            v172 = *v169;
            *v169 = 0LL;
          }
          v150 = 24;
          v18 = 9;
          goto LABEL_86;
        }
        if ( v77 >= 0 )
          goto LABEL_85;
        v18 = 9;
        v150 = 29;
        v156 = 9;
        LODWORD(v32) = 0;
LABEL_87:
        v78 = ++v168;
        if ( (_DWORD)v32 == -1073741266 )
        {
          if ( !v157 && v78 < 4 )
          {
            v139 = 3221226030LL;
            goto LABEL_272;
          }
        }
        else if ( (int)v32 >= 0 )
        {
          goto LABEL_89;
        }
        if ( !v158 )
          goto LABEL_153;
        v157 = 1;
        v37 = 0;
        v149 = 0;
        v139 = (unsigned int)v32;
LABEL_272:
        DisplayScenarioJournalRetry(v139);
        LODWORD(v17) = v161;
      }
    }
    LODWORD(v17) = v17 & 0xFFFFFFF0 | 4;
LABEL_186:
    v161 = v17;
    goto LABEL_13;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_BrokeredDisplays_ModeChanges__private_reporting,
    10733637LL,
    0LL,
    0LL,
    &Feature_BrokeredDisplays_ModeChanges_logged_traits,
    v27);
  if ( (v17 & 0x10000) != 0 )
  {
    v150 = 38;
LABEL_164:
    LODWORD(v32) = -1073741811;
LABEL_165:
    v98 = v169;
    goto LABEL_166;
  }
  v152 = 0;
  v29 = 0;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0252A58)(0LL, 0LL) )
  {
    LODWORD(v17) = 2191;
    goto LABEL_186;
  }
  LODWORD(v32) = 0;
  v151 = 1;
  v150 = 18;
LABEL_93:
  FreePathsModality(v178[1]);
  v178[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v178[1]) >= 0 )
  {
    DisplayScenarioJournalSetActualPathModality(
      272 * (unsigned int)*((unsigned __int16 *)v178[1] + 10),
      *((unsigned __int16 *)v178[1] + 10),
      (char *)v178[1] + 48);
    v81 = v178[1];
    v82 = 0;
    if ( *((_WORD *)v178[1] + 10) )
    {
      v83 = 0LL;
      do
      {
        if ( (*(_QWORD *)((_BYTE *)v81 + v83 + 48) & 0x8000001000000000uLL) == 0x8000000000000000uLL )
        {
          v196 = 0LL;
          v197 = 0;
          v193[0] = 9;
          v193[1] = 32;
          v194 = *(_QWORD *)((char *)v81 + v83 + 64);
          v195 = *(_DWORD *)((char *)v81 + v83 + 76);
          if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v193) >= 0
            && (v196 & 1) != 0 )
          {
            v159 = 1;
            break;
          }
          v81 = v178[1];
        }
        ++v82;
        v83 += 272LL;
      }
      while ( v82 < *((unsigned __int16 *)v81 + 10) );
    }
  }
  if ( *v169 )
  {
    v96 = *((_QWORD *)*v169 + 5);
    if ( v96 )
    {
      v97 = *(_QWORD *)(v96 + 2576);
      if ( ((v97 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v97 + 160) & 0x2000000) != 0);
    }
  }
  v18 = v156;
LABEL_103:
  v84 = v168;
  if ( v187 )
    *v187 = v168;
  if ( v188 )
    *v188 = v150;
  if ( v189 )
  {
    if ( !v151 || v153 )
      v28 = 0;
    *v189 = v28;
  }
  if ( v190 )
    *v190 = v154;
  v85 = v162;
  if ( (v162 & 0x20) != 0 )
  {
    v86 = v174;
    v87 = (unsigned int)v160;
    v88 = (int)v32 >= 0;
    v89 = v160 < 0;
    *((_DWORD *)v174 + 12) = v160;
    *((_DWORD *)v86 + 13) = v18;
    if ( v88 != !v89 )
    {
      v146 = WdLogNewEntry5_WdAssertion(v88, v87, v33, v34);
      WdLogEvent5_WdAssertion(v146);
    }
    v192[2] = v160;
    v192[0] = 0;
    v192[1] = 16;
    v192[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v192);
  }
  if ( (v85 & 0x40) == 0 )
    LogDiagSDC(v163, (__int64)v173, v17, v32, v84, v150, v191, v151);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v34) = v151;
  LOBYTE(v148) = v159;
  LOBYTE(v147) = v154;
  DisplayScenarioJournalFinalize((unsigned int)v32, v150, v84, v34, v147, v148, v175, v185);
  v93 = WdLogNewEntry5_WdEvent(v91, v90, v92);
  *(_QWORD *)(v93 + 24) = (int)v32;
  WdLogEvent5_WdEvent(v93);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v177);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v186, 5);
  return (unsigned int)v32;
}

/*
 * XREFs of DrvSetDisplayConfig @ 0x1C006C8A0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C006BCA4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C006C208 (DrvChangeDisplaySettings.c)
 *     xxxUserSetDisplayConfig @ 0x1C006FA20 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1C0095238 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0139F44 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C000CE40 (-DrvSetDisplayConfigApplyDeviceHack@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000DD30 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvIsWddmDriverPresent @ 0x1C000DF58 (DrvIsWddmDriverPresent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C000E870 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ApplyPathsModality @ 0x1C00109B4 (ApplyPathsModality.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C006C50C (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006C578 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C006C5AC (--0AUTO_TGO@@IEAA@XZ.c)
 *     LogDiagSDC @ 0x1C006FE34 (LogDiagSDC.c)
 *     ?DispBrokerGetCurrentMode@@YA?AW4DISPBROKER_MODE@@XZ @ 0x1C00957B4 (-DispBrokerGetCurrentMode@@YA-AW4DISPBROKER_MODE@@XZ.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00A7E9C (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C00A8064 (GetPathsModality.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C00B6A1C (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C00B9188 (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEBUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C00BB948 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00BBB6C (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014436C (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C014497C (-ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0145630 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01458C0 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01470F8 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01476AC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0147898 (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
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
        int *a12,
        char *a13,
        _BYTE *a14,
        __int64 a15)
{
  struct _MDEV *v16; // r13
  __int64 v17; // r15
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  char v24; // r14
  int IsWddmConnectedSession; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // ebx
  char v35; // r12
  __int64 v36; // r8
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  bool v40; // di
  __int64 v41; // rax
  __int64 v42; // r13
  BOOL v43; // r12d
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // ebx
  const struct _RETRY_MODE *v47; // rdi
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // r10d
  struct _DISPLAYCONFIG_CDS_REQUEST *v57; // rdx
  __int64 v58; // rcx
  bool v59; // di
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned int v62; // ebx
  int v63; // eax
  int v64; // ebx
  __int64 v65; // rax
  struct D3DKMT_GETPATHSMODALITY *v66; // rcx
  __int64 v67; // rax
  struct _DISPLAYCONFIG_CDS_REQUEST *v68; // r12
  int PathPersistentMonitorsIfNeeded; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rdx
  int v75; // eax
  int v76; // eax
  unsigned int v77; // r12d
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  unsigned int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  int v92; // r12d
  unsigned int v93; // edi
  int v94; // ecx
  unsigned int v95; // esi
  unsigned int v96; // r15d
  wchar_t *v97; // rcx
  unsigned int v98; // eax
  char *v99; // rdi
  char *PoolWithTag; // rax
  wchar_t *v101; // rdx
  unsigned int i; // r8d
  __int64 v103; // rcx
  struct _MDEV **v104; // rdi
  struct _MDEV *v105; // rsi
  int v106; // eax
  int v107; // r15d
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  int v111; // eax
  __int64 v112; // r8
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  struct _MDEV **v124; // r12
  int v125; // edi
  int v126; // eax
  char v127; // al
  __int64 v128; // rax
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  struct _MDEV **v132; // r12
  struct _MDEV *v133; // rdi
  __int64 v134; // rax
  int v135; // edx
  struct D3DKMT_GETPATHSMODALITY *v136; // rcx
  int v137; // esi
  __int64 v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  unsigned int v142; // r12d
  char v143; // di
  struct _DISPLAYCONFIG_CDS_REQUEST *v144; // rax
  __int64 v145; // rdx
  _BOOL8 v146; // rcx
  bool v147; // sf
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // rax
  int v154; // [rsp+20h] [rbp-E0h]
  int v155; // [rsp+28h] [rbp-D8h]
  char v156; // [rsp+40h] [rbp-C0h]
  int v157; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v158; // [rsp+48h] [rbp-B8h] BYREF
  char v159; // [rsp+49h] [rbp-B7h]
  char v160; // [rsp+4Ah] [rbp-B6h]
  char v161; // [rsp+4Bh] [rbp-B5h] BYREF
  bool v162[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v163; // [rsp+50h] [rbp-B0h]
  bool v164; // [rsp+54h] [rbp-ACh]
  bool v165; // [rsp+55h] [rbp-ABh]
  char v166; // [rsp+56h] [rbp-AAh]
  int v167; // [rsp+58h] [rbp-A8h] BYREF
  int v168; // [rsp+5Ch] [rbp-A4h]
  unsigned int v169; // [rsp+60h] [rbp-A0h]
  unsigned int v170; // [rsp+64h] [rbp-9Ch]
  unsigned __int16 v171[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v172; // [rsp+6Ch] [rbp-94h]
  unsigned int v173; // [rsp+70h] [rbp-90h]
  int v174; // [rsp+74h] [rbp-8Ch]
  unsigned int v175; // [rsp+78h] [rbp-88h]
  int v176; // [rsp+7Ch] [rbp-84h]
  struct _MDEV **v177; // [rsp+80h] [rbp-80h]
  unsigned int v178; // [rsp+88h] [rbp-78h]
  struct _MDEV *v179; // [rsp+90h] [rbp-70h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v180; // [rsp+98h] [rbp-68h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v181; // [rsp+A0h] [rbp-60h]
  int v182; // [rsp+A8h] [rbp-58h]
  __int64 v183; // [rsp+B0h] [rbp-50h]
  _QWORD v184[6]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v185[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v186; // [rsp+100h] [rbp+0h] BYREF
  char v187; // [rsp+108h] [rbp+8h]
  __int64 v188; // [rsp+110h] [rbp+10h]
  void *v189; // [rsp+118h] [rbp+18h] BYREF
  int v190; // [rsp+120h] [rbp+20h]
  void *v191; // [rsp+128h] [rbp+28h]
  __int64 v192; // [rsp+130h] [rbp+30h]
  void *v193; // [rsp+138h] [rbp+38h] BYREF
  unsigned int *v194; // [rsp+140h] [rbp+40h]
  int *v195; // [rsp+148h] [rbp+48h]
  char *v196; // [rsp+150h] [rbp+50h]
  _BYTE *v197; // [rsp+158h] [rbp+58h]
  __int64 v198; // [rsp+160h] [rbp+60h]
  _DWORD v199[4]; // [rsp+168h] [rbp+68h] BYREF
  _DWORD v200[2]; // [rsp+178h] [rbp+78h] BYREF
  __int64 v201; // [rsp+180h] [rbp+80h]
  int v202; // [rsp+188h] [rbp+88h]
  __int64 v203; // [rsp+18Ch] [rbp+8Ch]
  int v204; // [rsp+194h] [rbp+94h]
  void *retaddr; // [rsp+1E8h] [rbp+E8h]

  v16 = a9;
  v191 = a5;
  v194 = a11;
  v195 = a12;
  v197 = a14;
  v192 = a15;
  v170 = a1;
  v196 = a13;
  v17 = (unsigned int)a3;
  v169 = a4;
  v18 = 0;
  v164 = gbBaseVideo != 0;
  v168 = a3;
  v182 = -1;
  v180 = a2;
  v181 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a8;
  v179 = a9;
  v177 = a10;
  v172 = gbBaseVideo != 0 ? 3 : 0;
  v175 = 0;
  v160 = 0;
  v158 = 0;
  v161 = 0;
  v157 = 0;
  v167 = -5;
  v163 = 0;
  v173 = 0;
  v166 = 0;
  v19 = WdLogNewEntry5_WdEvent(0LL, a2, a3);
  *(_QWORD *)(v19 + 24) = v17;
  WdLogEvent5_WdEvent(v19);
  v183 = MEMORY[0xFFFFF78000000320];
  v198 = v183 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)v17, a4, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(200 * v170, v170, v180);
  v193 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v193, 4LL);
  v22 = gOldModeChange == 0;
  *a10 = 0LL;
  if ( !v22 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v21, v20);
    WdLogEvent5_WdAssertion(v23);
  }
  if ( (v17 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v24 = 1;
  v165 = (a4 & 2) != 0 && (v17 & 0x88F) == 0x88F;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v184);
  v184[0] = &off_1C01FCFC0;
  v188 = v192;
  *(_OWORD *)v185 = 0LL;
  v186 = 0LL;
  v187 = 0;
  v189 = 0LL;
  IsWddmConnectedSession = UserIsWddmConnectedSession();
  v27 = 0LL;
  if ( !IsWddmConnectedSession || !(unsigned int)DrvIsWddmDriverPresent() || (a4 & 1) != 0 )
  {
    if ( (a4 & 0x20) != 0 )
    {
      v123 = WdLogNewEntry5_WdAssertion(v26, v27);
      WdLogEvent5_WdAssertion(v123);
    }
    v124 = v177;
    v125 = a4 & 1;
    LODWORD(v31) = DrvChangeDisplayFallback(
                     v191,
                     BYTE1(v17) & 1,
                     a4 & 1,
                     a9,
                     v177,
                     (enum _DXGK_DIAG_SDC_STAGE *)&v157,
                     &v158,
                     &v167);
    if ( (int)v31 < 0 )
    {
LABEL_240:
      if ( v165 )
      {
        if ( a6 )
        {
          v128 = WdLogNewEntry5_WdAssertion(v29, v28);
          WdLogEvent5_WdAssertion(v128);
        }
        LODWORD(v17) = v168;
        v129 = DrvChangeDisplayFallback(
                 v191,
                 BYTE1(v168) & 1,
                 1u,
                 v16,
                 v124,
                 (enum _DXGK_DIAG_SDC_STAGE *)&v157,
                 &v158,
                 &v167);
        v31 = v129;
        if ( v129 < 0 )
        {
          v139 = WdLogNewEntry5_WdAssertion(v131, v130);
          WdLogEvent5_WdAssertion(v139);
          if ( !byte_1C024ABF0 )
          {
            LOBYTE(v155) = 0;
            byte_1C024ABF0 = 1;
            ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, int))qword_1C024AB10)(
              400LL,
              22LL,
              v31,
              v167,
              v157,
              v155);
          }
        }
        else
        {
          v18 = 10;
          v157 = 31;
          v163 = 10;
        }
LABEL_254:
        if ( (_DWORD)v31 == -1073741811 )
          goto LABEL_272;
        goto LABEL_255;
      }
LABEL_253:
      LODWORD(v17) = v168;
      goto LABEL_254;
    }
    v126 = v157;
    v29 = 30LL;
    if ( v125 )
      v126 = 30;
    v157 = v126;
LABEL_234:
    if ( (int)v31 >= 0 )
    {
LABEL_245:
      v127 = v160;
    }
    else
    {
LABEL_235:
      v127 = v160;
      if ( v160 )
      {
        v18 = 9;
        v157 = 29;
        v163 = 9;
        LODWORD(v31) = 0;
        v167 = 0;
      }
      if ( (int)v31 < 0 )
      {
        v16 = v179;
        goto LABEL_239;
      }
    }
    v132 = v177;
    if ( v127 && !*v177 )
    {
      v133 = v179;
      if ( !v179 )
      {
        v134 = WdLogNewEntry5_WdAssertion(v29, v28);
        WdLogEvent5_WdAssertion(v134);
      }
      v135 = v167;
      v22 = v167 == 2;
      *v132 = v133;
      if ( v22 )
        v135 = 0;
      v167 = v135;
    }
    goto LABEL_253;
  }
  if ( (v17 & 0x40000000) != 0 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
      0xA3C845u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
      v27,
      3);
    if ( (v17 & 0x10000) != 0 )
    {
      v157 = 37;
LABEL_16:
      LODWORD(v31) = -1073741811;
LABEL_239:
      v124 = v177;
      goto LABEL_240;
    }
    v32 = 0LL;
    if ( gbBaseVideo )
    {
      v33 = WdLogNewEntry5_WdAssertion(0LL, v28);
      WdLogEvent5_WdAssertion(v33);
    }
    LODWORD(v31) = GetPathsModality(v32, v185, 15LL);
    if ( (int)v31 < 0 )
    {
      v157 = 2;
      goto LABEL_234;
    }
    v34 = *((_DWORD *)v185[0] + 8) & 0xF;
    if ( v34 == 1 || v34 == 8 )
    {
      LODWORD(v31) = -1073741637;
      v157 = 25;
      goto LABEL_239;
    }
    LOBYTE(v29) = 1;
    v159 = 1;
    LOBYTE(v28) = v34 == 4;
    v35 = 1;
    ((void (__fastcall *)(__int64, __int64))qword_1C024AA38)(v29, v28);
    if ( v34 == 4 )
    {
      v158 = 1;
      LODWORD(v31) = 0;
      v157 = 26;
      goto LABEL_255;
    }
    LODWORD(v17) = 132;
    goto LABEL_38;
  }
  if ( (int)v17 >= 0 )
  {
    if ( (v17 & 0xF) != 0xF || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v27 )
    {
      if ( (v17 & 0x200) != 0
        || (a4 & 0x20) != 0 && *(_DWORD *)(a8 + 20) != (_DWORD)v27
        || (v17 & 0x1F) != 0 && (v17 & 0x40) == 0 )
      {
        v35 = v27;
        v159 = v27;
        ((void (__fastcall *)(_QWORD))qword_1C024AA38)(0LL);
      }
      else
      {
        v35 = ((__int64 (*)(void))qword_1C024AA40)();
        v159 = v35;
      }
      goto LABEL_46;
    }
    v159 = ((__int64 (*)(void))qword_1C024AA40)();
    v35 = v159;
    if ( !v159 )
    {
LABEL_46:
      v174 = v17 & 0x10000;
      v190 = v17 & 0x80;
      if ( (v17 & 0x10000) != 0 )
      {
        LODWORD(v31) = ((__int64 (__fastcall *)(__int64, _QWORD, void **))qword_1C024AB18)(
                         a7,
                         (v17 & 0x80) != 0 ? 2031616 : 0x20000,
                         &v189);
        if ( (int)v31 < 0 )
        {
          v157 = 42;
          goto LABEL_234;
        }
      }
      LODWORD(v31) = ((__int64 (*)(void))qword_1C024A930)();
      if ( (int)v31 < 0 )
      {
        v18 = 6;
        v157 = 12;
        v163 = 6;
        goto LABEL_234;
      }
      v187 = 1;
      if ( (v17 & 0x80) != 0 )
      {
        v37 = 1LL;
        if ( !v35 && (v17 & 0xF) != 0 && (v169 & 0x20) == 0 )
          v37 = 3LL;
        v38 = ((__int64 (__fastcall *)(__int64))qword_1C024A948)(v37);
        v31 = v38;
        if ( v38 < 0 )
        {
          v39 = WdLogNewEntry5_WdEvent(v29, v28, v36);
          *(_QWORD *)(v39 + 24) = v31;
          WdLogEvent5_WdEvent(v39);
          DrvDxgkLogCodePointPacket(4LL, (unsigned int)v31, 0LL, 0LL);
          LODWORD(v31) = 0;
        }
      }
      v40 = (v17 & 0x240) == 512;
      v178 = v17 & 0xF;
      v156 = v40;
      while ( 1 )
      {
        v41 = WdLogNewEntry5_WdEvent(v29, v28, v36);
        v42 = v175;
        v183 = v175;
        *(_QWORD *)(v41 + 24) = v175;
        *(_QWORD *)(v41 + 32) = (int)v31;
        WdLogEvent5_WdEvent(v41);
        v43 = 0;
        v176 = 0;
        v161 = 0;
        v158 = 0;
        FreePathsModality(v185[0]);
        FreePathsModality(v185[1]);
        v185[1] = 0LL;
        v185[0] = 0LL;
        if ( v164 )
        {
          if ( v178 != 15 )
          {
            v44 = WdLogNewEntry5_WdAssertion(v29, v28);
            WdLogEvent5_WdAssertion(v44);
          }
          if ( v40 )
          {
            v45 = WdLogNewEntry5_WdAssertion(v29, v28);
            WdLogEvent5_WdAssertion(v45);
          }
          if ( v172 >= 6 )
          {
            if ( (int)v31 >= 0 )
            {
              v122 = WdLogNewEntry5_WdAssertion(v29, v28);
              WdLogEvent5_WdAssertion(v122);
              goto LABEL_234;
            }
            goto LABEL_235;
          }
          v46 = v172;
          v47 = (const struct _RETRY_MODE *)((char *)&unk_1C0209EA0 + 12 * v172);
          DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v47 + 1), *((unsigned int *)v47 + 2), 0LL);
          if ( *(_BYTE *)v47 )
          {
            v173 = 0;
            v172 = v46 + 1;
            LODWORD(v31) = GetPathsModality(v48, v185, 15LL);
          }
          else
          {
            v49 = DrvCreatePathModalityFromAllPaths(&v186, v173++, v185);
            LODWORD(v31) = v49;
            if ( v49 >= 0 )
            {
              if ( *((_WORD *)v185[0] + 10) != 1 )
              {
                v50 = WdLogNewEntry5_WdAssertion(v29, v28);
                WdLogEvent5_WdAssertion(v50);
              }
            }
            else
            {
              ++v172;
              v173 = 0;
            }
          }
          if ( (int)v31 < 0 )
            goto LABEL_72;
          v51 = DrvFunctionalizeBaseVidMode(v47, v185[0]);
          v31 = v51;
          if ( v51 < 0 )
          {
            v54 = WdLogNewEntry5_WdError(v29, v52, v53);
            *(_QWORD *)(v54 + 24) = v31;
            WdLogEvent5_WdError(v54, v55);
            v157 = 2;
LABEL_76:
            v40 = v156;
            goto LABEL_218;
          }
LABEL_110:
          v40 = v156;
          goto LABEL_111;
        }
        if ( v178 )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
            0xA3C845u,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
            0,
            3);
          v56 = 0;
          if ( v174 )
          {
            LODWORD(v31) = -1073741811;
            v157 = 39;
            goto LABEL_218;
          }
          v57 = v181;
          v58 = v169 & 0x20;
          v59 = (v169 & 0x20) != 0 && *((_QWORD *)v181 + 4);
          if ( (v169 & 0x800) != 0 || !(unsigned int)DispBrokerGetCurrentMode(v58, v181) )
          {
            v63 = (_DWORD)v58 != 0 ? 0x9000 : 0;
            if ( v59 && *((_DWORD *)v57 + 5) == v56 )
            {
              v61 = v178;
              v64 = 0x2000000;
            }
            else
            {
              v61 = v178;
              v64 = v178;
            }
            v62 = v63 | v64;
            if ( (v62 & 0x2000000) != 0 && (_DWORD)v61 != 15 )
            {
              v65 = WdLogNewEntry5_WdAssertion(v61, v57);
              WdLogEvent5_WdAssertion(v65);
            }
          }
          else
          {
            if ( v59 )
            {
              v60 = WdLogNewEntry5_WdAssertion(v58, v57);
              WdLogEvent5_WdAssertion(v60);
            }
            DrvDxgkLogCodePointPacket(127LL, 0LL, 0LL, 0LL);
            v62 = 64;
          }
          LODWORD(v31) = GetPathsModality(v61, v185, v62);
          if ( (int)v31 < 0 )
          {
            v18 = 7;
            v163 = 7;
LABEL_72:
            v157 = 2;
LABEL_73:
            v40 = v156;
            goto LABEL_218;
          }
          v66 = v185[0];
          if ( !*((_WORD *)v185[0] + 10) )
          {
            v67 = WdLogNewEntry5_WdAssertion(v185[0], v28);
            WdLogEvent5_WdAssertion(v67);
            v66 = v185[0];
          }
          if ( v159 || (v156 = 1, (v17 & 0x40) != 0) )
            v156 = 0;
          DrvSetDisplayConfigApplyDeviceHack(v66);
          if ( v59 )
          {
            v68 = v181;
            if ( !*((_DWORD *)v181 + 5) || (v156 = 1, !*((_DWORD *)v181 + 6)) )
              v156 = 0;
            LODWORD(v31) = DrvValidateAndApplyDevMode(v181, v185);
            if ( (int)v31 < 0 )
            {
              v18 = *((_DWORD *)v68 + 13);
              v167 = *((_DWORD *)v68 + 12);
              v75 = 2;
              v163 = v18;
              v29 = 23LL;
              if ( (_DWORD)v31 == -1073741266 )
                v75 = 23;
              v157 = v75;
              goto LABEL_73;
            }
            v43 = *((_DWORD *)v181 + 5) != 0;
            v176 = v43;
          }
          v18 = 10;
          v163 = 10;
          goto LABEL_110;
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
            3);
          if ( v174 )
          {
            LODWORD(v31) = -1073741811;
            v157 = 40;
            goto LABEL_218;
          }
          LODWORD(v31) = AllocatePathModalityForDisplayConfig(v170, v180, v185);
          if ( (int)v31 < 0 )
          {
            v157 = 3;
            goto LABEL_218;
          }
          LODWORD(v31) = ConvertDisplayConfigToPathModality(v170, v180, v185[0], 0LL);
          if ( (int)v31 < 0 )
          {
            v157 = 4;
            goto LABEL_218;
          }
          LODWORD(v31) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C024A8B0)(
                           v17 & 0x2000 | 0x2F,
                           v185[0],
                           0LL);
          if ( (int)v31 < 0 )
          {
            v157 = 5;
            goto LABEL_218;
          }
          if ( v159 || (v17 & 0x40) != 0 )
          {
            v40 = 0;
            v156 = 0;
          }
          else
          {
            v40 = 1;
            v156 = 1;
          }
          goto LABEL_111;
        }
        if ( (v17 & 0x20) == 0 )
        {
          v119 = WdLogNewEntry5_WdAssertion(v29, v28);
          *(_QWORD *)(v119 + 24) = (unsigned int)v17;
          WdLogEvent5_WdAssertion(v119);
          v157 = 9;
          goto LABEL_217;
        }
        v162[0] = 0;
        if ( (v169 & 8) != 0 )
        {
          v76 = SetDisplayConfigHandleOnlyProvidedPath(v180, v185, v162, (enum _DXGK_DIAG_SDC_STAGE *)&v157);
        }
        else
        {
          if ( !v174 )
          {
            v77 = v170;
            LODWORD(v31) = AllocatePathModalityForDisplayConfig(v170, v180, v185);
            if ( (int)v31 < 0 )
            {
              v157 = 6;
              goto LABEL_218;
            }
            LODWORD(v31) = ConvertDisplayConfigToPathModality(v77, v180, v185[0], v162);
            if ( (int)v31 < 0 )
            {
              v157 = 7;
              goto LABEL_218;
            }
            goto LABEL_136;
          }
          v76 = SetDisplayConfigHandleBrokerProvidedPaths(
                  v189,
                  0,
                  v170,
                  v180,
                  v185,
                  v162,
                  (enum _DXGK_DIAG_SDC_STAGE *)&v157);
        }
        LODWORD(v31) = v76;
        if ( v76 < 0 )
          goto LABEL_218;
LABEL_136:
        if ( v162[0] )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
            0xA3C845u,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
            0,
            3);
          LODWORD(v31) = SetDisplayConfigHandlePreferredScaling(v185[0], (enum _DXGK_DIAG_SDC_STAGE *)&v157);
          if ( (int)v31 < 0 )
            goto LABEL_218;
        }
        LODWORD(v31) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C024A8B0)(
                         256LL,
                         v185[0],
                         0LL);
        if ( (int)v31 < 0 )
        {
          v157 = 8;
          goto LABEL_218;
        }
        v43 = 1;
        v176 = 1;
LABEL_111:
        if ( (v17 & 0x800) != 0 )
        {
          v171[0] = 0;
          PathPersistentMonitorsIfNeeded = CreatePathPersistentMonitorsIfNeeded(v29, v185[0], v171);
          v31 = PathPersistentMonitorsIfNeeded;
          if ( PathPersistentMonitorsIfNeeded < 0 )
          {
            v73 = WdLogNewEntry5_WdError(v71, v70, v72);
            *(_QWORD *)(v73 + 24) = v31;
            WdLogEvent5_WdError(v73, v74);
            v157 = 10;
            goto LABEL_218;
          }
          v78 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C024A8D0)(
                  0x80000000LL,
                  v185[0]);
          v31 = v78;
          if ( v78 == -1073741266 )
          {
            v82 = WdLogNewEntry5_WdEvent(v80, v79, v81);
            *(_QWORD *)(v82 + 24) = v42;
            *(_QWORD *)(v82 + 32) = -1073741266LL;
            WdLogEvent5_WdEvent(v82);
            v157 = 23;
            goto LABEL_218;
          }
          if ( v78 < 0 )
          {
            v83 = WdLogNewEntry5_WdError(v80, v79, v81);
            *(_QWORD *)(v83 + 24) = v31;
            WdLogEvent5_WdError(v83, v84);
            v157 = 22;
            goto LABEL_218;
          }
          if ( v171[0] )
          {
            v85 = WdLogNewEntry5_WdWarning(v80, v79, v81);
            *(_QWORD *)(v85 + 24) = v42;
            *(_QWORD *)(v85 + 32) = v31;
            WdLogEvent5_WdWarning(v85);
            LODWORD(v31) = -1073741266;
            goto LABEL_218;
          }
        }
        v86 = GetCcdRawmodeFlag() | 0x8000;
        if ( (v169 & 0x20) != 0 && (!*((_QWORD *)v181 + 4) || *((_DWORD *)v181 + 2)) )
          v86 |= 0x20000u;
        v87 = v86;
        LODWORD(v87) = v86 | 0x1000000;
        if ( !v174 )
          v87 = v86;
        v88 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C024A8B8)(v87, v185[0]);
        v31 = v88;
        if ( v88 < 0 )
        {
          v91 = WdLogNewEntry5_WdEvent(v89, v28, v90);
          *(struct D3DKMT_GETPATHSMODALITY **)(v91 + 24) = v185[0];
          *(_QWORD *)(v91 + 32) = v31;
          WdLogEvent5_WdEvent(v91);
          v18 = 7;
          v157 = 11;
          v163 = 7;
          goto LABEL_218;
        }
        if ( v190 )
        {
          LODWORD(v31) = GetPathsModality(v89, &v185[1], 1048640LL);
          if ( (int)v31 < 0 )
          {
            v157 = 13;
            v18 = 7;
            goto LABEL_162;
          }
          v92 = v17 & 0x1100;
          v93 = (16 * (v17 & 0x1000)) | 0x4000;
          if ( (v17 & 0x1100) == 0 )
            v93 = 16 * (v17 & 0x1000);
          if ( v93 )
          {
            LODWORD(v31) = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C024A8B0)(
                             v93,
                             v185[0],
                             0LL);
            if ( (int)v31 < 0 )
            {
              v157 = 14;
              goto LABEL_73;
            }
          }
          v94 = v93 | 0x400000;
          v95 = 0;
          if ( (v169 & 0x10) == 0 )
            v94 = v93;
          v96 = v94 | 0x1000000;
          if ( !v174 )
            v96 = v94;
          v97 = gpGraphicsDeviceList;
          while ( v97 )
          {
            v22 = (*((_DWORD *)v97 + 40) & 0x800000) == 0;
            v98 = v95 + 1;
            v97 = (wchar_t *)*((_QWORD *)v97 + 16);
            if ( v22 )
              v98 = v95;
            v95 = v98;
          }
          v99 = 0LL;
          if ( v95 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v95, 0x7774656Cu);
            v99 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 76LL * v95);
              v101 = gpGraphicsDeviceList;
              for ( i = 0; v101; v101 = (wchar_t *)*((_QWORD *)v101 + 16) )
              {
                if ( (*((_DWORD *)v101 + 40) & 0x800000) != 0 )
                {
                  v103 = 76LL * i++;
                  *(_DWORD *)&v99[v103] = *((_DWORD *)v101 + 62);
                  *(_DWORD *)&v99[v103 + 4] = *((_DWORD *)v101 + 63);
                  *(_DWORD *)&v99[v103 + 8] = *((_DWORD *)v101 + 64);
                }
              }
            }
            v24 = 1;
          }
          DisplayScenarioJournalSetExpectedPathModality(
            272 * (unsigned int)*((unsigned __int16 *)v185[0] + 10),
            *((unsigned __int16 *)v185[0] + 10),
            (char *)v185[0] + 48,
            v95,
            v99);
          v104 = v177;
          v105 = v179;
          v106 = ApplyPathsModality(
                   (__int64)v185[0],
                   v96,
                   v92 != 0,
                   (__int64)v191,
                   (__int64)v179,
                   &v161,
                   (__int64 *)v177,
                   v192);
          v182 = v106;
          v107 = v106;
          v167 = v106;
          if ( v106 < 0 || v106 == 1 )
          {
            v18 = 5;
            v157 = 16;
            v163 = 5;
            LODWORD(v31) = -1073741823;
            goto LABEL_76;
          }
          if ( v161 )
          {
            v108 = WdLogNewEntry5_WdAssertion(v29, v28);
            WdLogEvent5_WdAssertion(v108);
          }
          if ( v107 == 2 )
          {
            if ( v92 || *v104 )
            {
              v109 = WdLogNewEntry5_WdAssertion(v29, v28);
              WdLogEvent5_WdAssertion(v109);
            }
            v158 = 1;
          }
          else
          {
            if ( !*v104 )
            {
              v110 = WdLogNewEntry5_WdAssertion(v29, v28);
              WdLogEvent5_WdAssertion(v110);
            }
            v105 = 0LL;
            v179 = 0LL;
          }
          LOBYTE(v17) = v168;
          v43 = v176;
          v42 = v183;
          v40 = v156;
        }
        else
        {
          if ( (v17 & 0x40) == 0 )
          {
            v118 = WdLogNewEntry5_WdAssertion(v89, v28);
            *(_QWORD *)(v118 + 24) = (unsigned int)v17;
            WdLogEvent5_WdAssertion(v118);
            v157 = 21;
LABEL_217:
            LODWORD(v31) = -1073741811;
            goto LABEL_218;
          }
          v105 = v179;
          v167 = 0;
        }
        if ( !v40 )
          goto LABEL_204;
        v111 = ((__int64 (__fastcall *)(BOOL, struct D3DKMT_GETPATHSMODALITY *))qword_1C024A8D0)(v43, v185[0]);
        v31 = v111;
        if ( !a6 )
        {
          if ( v111 < 0 )
          {
            v113 = WdLogNewEntry5_WdError(v29, v28, v112);
            *(_QWORD *)(v113 + 24) = v31;
            WdLogEvent5_WdError(v113, v114);
            LODWORD(v31) = 0;
          }
LABEL_204:
          v29 = (unsigned int)((int)v31 >> 31);
          v157 = v29 + 18;
          v18 = v29 + 10;
LABEL_162:
          v163 = v18;
          goto LABEL_218;
        }
        if ( v111 == -1073741266 )
        {
          if ( (v17 & 0x10) != 0 )
          {
            v115 = WdLogNewEntry5_WdAssertion(v29, v28);
            WdLogEvent5_WdAssertion(v115);
          }
          v116 = WdLogNewEntry5_WdEvent(v29, v28, v112);
          *(_QWORD *)(v116 + 24) = v42;
          *(_QWORD *)(v116 + 32) = -1073741266LL;
          WdLogEvent5_WdEvent(v116);
          if ( !v158 )
          {
            if ( v105 )
            {
              v117 = WdLogNewEntry5_WdAssertion(v29, v28);
              WdLogEvent5_WdAssertion(v117);
            }
            v29 = (__int64)v177;
            v160 = 1;
            v179 = *v177;
            *v177 = 0LL;
          }
          v157 = 24;
          v18 = 9;
          goto LABEL_162;
        }
        if ( v111 >= 0 )
          goto LABEL_204;
        v18 = 9;
        v157 = 29;
        v163 = 9;
        LODWORD(v31) = 0;
LABEL_218:
        v120 = ++v175;
        if ( (_DWORD)v31 == -1073741266 )
        {
          if ( !v164 && v120 < 4 )
          {
            v121 = 3221226030LL;
            goto LABEL_225;
          }
        }
        else if ( (int)v31 >= 0 )
        {
          goto LABEL_245;
        }
        if ( !v165 )
          goto LABEL_234;
        v164 = 1;
        v40 = 0;
        v156 = 0;
        v121 = (unsigned int)v31;
LABEL_225:
        DisplayScenarioJournalRetry(v121);
        LODWORD(v17) = v168;
      }
    }
    LODWORD(v17) = v17 & 0xFFFFFFF0 | 4;
LABEL_38:
    v168 = v17;
    goto LABEL_46;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_BrokeredDisplays_ModeChanges__private_reporting,
    0xA3C845u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_BrokeredDisplays_ModeChanges_logged_traits,
    v27,
    3);
  if ( (v17 & 0x10000) != 0 )
  {
    v157 = 38;
    goto LABEL_16;
  }
  v159 = 0;
  v35 = 0;
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C024AA38)(0LL, 0LL) )
  {
    LODWORD(v17) = 2191;
    goto LABEL_38;
  }
  LODWORD(v31) = 0;
  v158 = 1;
  v157 = 18;
LABEL_255:
  FreePathsModality(v185[1]);
  v185[1] = 0LL;
  if ( (int)SetDisplayConfigGetActualPathsModality(&v185[1]) >= 0 )
  {
    DisplayScenarioJournalSetActualPathModality(
      272 * (unsigned int)*((unsigned __int16 *)v185[1] + 10),
      *((unsigned __int16 *)v185[1] + 10),
      (char *)v185[1] + 48);
    v136 = v185[1];
    v137 = 0;
    if ( *((_WORD *)v185[1] + 10) )
    {
      v138 = 0LL;
      do
      {
        if ( (*(_QWORD *)((_BYTE *)v136 + v138 + 48) & 0x8000001000000000uLL) == 0x8000000000000000uLL )
        {
          v203 = 0LL;
          v204 = 0;
          v200[0] = 9;
          v200[1] = 32;
          v201 = *(_QWORD *)((char *)v136 + v138 + 64);
          v202 = *(_DWORD *)((char *)v136 + v138 + 76);
          if ( (int)DrvDisplayConfigGetDeviceInfo((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v200) >= 0
            && (v203 & 1) != 0 )
          {
            v166 = 1;
            break;
          }
          v136 = v185[1];
        }
        ++v137;
        v138 += 272LL;
      }
      while ( v137 < *((unsigned __int16 *)v136 + 10) );
    }
  }
  if ( *v177 )
  {
    v140 = *((_QWORD *)*v177 + 5);
    if ( v140 )
    {
      v141 = *(_QWORD *)(v140 + 2576);
      if ( ((v141 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
        DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v141 + 160) & 0x2000000) != 0);
    }
  }
  v18 = v163;
LABEL_272:
  v142 = v175;
  if ( v194 )
    *v194 = v175;
  if ( v195 )
    *v195 = v157;
  if ( v196 )
  {
    if ( v160 || !v158 )
      v24 = 0;
    *v196 = v24;
  }
  if ( v197 )
    *v197 = v161;
  v143 = v169;
  if ( (v169 & 0x20) != 0 )
  {
    v144 = v181;
    v145 = (unsigned int)v167;
    v146 = (int)v31 >= 0;
    v147 = v167 < 0;
    *((_DWORD *)v181 + 12) = v167;
    *((_DWORD *)v144 + 13) = v18;
    if ( v146 != !v147 )
    {
      v148 = WdLogNewEntry5_WdAssertion(v146, v145);
      WdLogEvent5_WdAssertion(v148);
    }
    v199[2] = v167;
    v199[0] = 0;
    v199[1] = 16;
    v199[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v199);
  }
  if ( (v143 & 0x40) == 0 )
    LogDiagSDC(v170, (_DWORD)v180, v17, v31, v142, v157, v198, v158);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v30) = v158;
  LOBYTE(v155) = v166;
  LOBYTE(v154) = v161;
  DisplayScenarioJournalFinalize((unsigned int)v31, (unsigned int)v157, v142, v30, v154, v155, v182, v192);
  v152 = WdLogNewEntry5_WdEvent(v150, v149, v151);
  *(_QWORD *)(v152 + 24) = (int)v31;
  WdLogEvent5_WdEvent(v152);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v184);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v193, 5LL);
  return (unsigned int)v31;
}

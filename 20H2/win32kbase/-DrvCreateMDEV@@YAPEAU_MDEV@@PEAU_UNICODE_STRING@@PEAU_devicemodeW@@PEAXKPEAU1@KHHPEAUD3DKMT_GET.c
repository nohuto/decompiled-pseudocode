/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 * Callees:
 *     IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C00055C8 (IsGetWin8StyleDpiSettingFromRegistrySupported.c)
 *     GetWin8StyleDpiSettingFromRegistry @ 0x1C00055F4 (GetWin8StyleDpiSettingFromRegistry.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C000EABC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C0011C1C (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0012E00 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0013B40 (UserRemoteConnectedSessionUsingXddm.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C00146D0 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0014700 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0014818 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x1C0014908 (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     AlignRects @ 0x1C0014A58 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C0014ADC (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0014B00 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015424 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015544 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C00156E0 (DrvGetDisplayDriverNames.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047384 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00521C8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C0053270 (UserIsWddmConnectedSession.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     DrvGetDeviceFromName @ 0x1C005EB10 (DrvGetDeviceFromName.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C00B56B0 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00BEEF4 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00C9860 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00CA6E4 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CAE48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     wcsncmp @ 0x1C00CC0FC (wcsncmp.c)
 *     memcmp @ 0x1C00D2790 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0145040 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C0146CC4 (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
 *     IsGetDpiSettingWithNoDefaultSupported @ 0x1C01F5F20 (IsGetDpiSettingWithNoDefaultSupported.c)
 */

struct _MDEV *__fastcall DrvCreateMDEV(
        struct _UNICODE_STRING *a1,
        struct _devicemodeW *a2,
        void *a3,
        unsigned int a4,
        struct _MDEV *a5,
        int a6,
        int a7,
        int a8,
        struct D3DKMT_GETPATHSMODALITY *a9)
{
  __int64 v9; // rbx
  _QWORD *v12; // rax
  struct _MDEV *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  struct _devicemodeW *v18; // rax
  HDEV v19; // r11
  unsigned int v20; // r9d
  struct D3DKMT_GETPATHSMODALITY *v21; // r13
  int v22; // ebx
  int v23; // edi
  wchar_t *v24; // r8
  unsigned int cx; // r12d
  unsigned int v26; // r15d
  bool v27; // sf
  HDEV v28; // rdi
  wchar_t *DeviceFromName; // r14
  int i; // eax
  unsigned __int16 v31; // cx
  int PrimaryAttachFlags; // eax
  unsigned int v33; // r12d
  unsigned int *v34; // r14
  UNICODE_STRING *v35; // rax
  MULTIDEVLOCKOBJ *v36; // r15
  unsigned int v37; // edx
  unsigned int v38; // ebx
  unsigned int v39; // edx
  unsigned int *v40; // r8
  unsigned int v41; // eax
  char v42; // r9
  unsigned int v43; // ecx
  unsigned int v44; // ebx
  _DWORD *v45; // rdi
  struct D3DKMT_GETPATHSMODALITY *v46; // rax
  struct tagRECT *v47; // r13
  unsigned int v48; // r10d
  unsigned int v49; // r9d
  __int64 v50; // rdx
  __int64 v51; // rax
  _DWORD *v52; // r8
  __int64 v53; // rax
  unsigned int v54; // r12d
  __int64 v55; // rdi
  unsigned int v56; // ebx
  __int64 v57; // rbx
  int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  unsigned int v62; // r12d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned int v66; // r14d
  __int64 v67; // r12
  __int64 v68; // rbx
  void (__fastcall *v69)(__int64, __int64); // rax
  struct tagRECT v70; // xmm0
  __int64 v71; // rax
  int v73; // eax
  bool v74; // zf
  __int64 v75; // rax
  struct _DRV_NAMES *v76; // r13
  int v77; // ecx
  unsigned int v78; // edi
  unsigned int v79; // r15d
  unsigned int v80; // r12d
  struct _devicemodeW *v81; // rbx
  struct _devicemodeW *v82; // rcx
  int v83; // eax
  unsigned int v84; // ebx
  struct _devicemodeW *v85; // rax
  __int64 v86; // rbx
  __int64 v87; // r10
  __int64 DisplayDriverNames; // rax
  struct _DRV_NAMES *v89; // r12
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // r15
  unsigned __int16 v93; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v96; // rax
  int v97; // eax
  unsigned int v98; // eax
  HDEV v99; // rcx
  unsigned int v100; // eax
  HDEV *v101; // rdx
  __int64 v102; // r8
  HDEV v103; // rax
  unsigned int v104; // ecx
  unsigned int *v105; // rbx
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned int v110; // eax
  unsigned int v111; // edx
  unsigned int v112; // edx
  int v113; // ecx
  __int64 v114; // rax
  __int64 v115; // rax
  unsigned int v116; // edx
  int v117; // eax
  unsigned int v118; // edx
  unsigned int v119; // r8d
  int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rdx
  unsigned int v123; // r14d
  __int64 v124; // rbx
  unsigned int v125; // r14d
  bool v126; // r8
  unsigned int v127; // kr00_4
  unsigned int v128; // ecx
  unsigned int v129; // eax
  unsigned int v130; // edx
  unsigned int v131; // ecx
  unsigned int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  unsigned int v135; // r9d
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  int v138; // ecx
  __int64 v139; // rdx
  struct _ERESOURCE *v140; // rcx
  unsigned int v141; // eax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rax
  int v148; // eax
  __int64 v149; // rax
  struct _devicemodeW *v150; // rbx
  struct _devicemodeW *v151; // rcx
  struct _devicemodeW *v152; // rcx
  int v153; // ebx
  struct _devicemodeW *v154; // rax
  struct _devicemodeW *v155; // rdx
  int v156; // eax
  __int64 v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rax
  int DpiSettingWithNoDefaultSupported; // eax
  unsigned int v165; // eax
  _QWORD *v166; // rax
  __int64 v167; // rdx
  int v168; // edx
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // r14
  unsigned int v172; // ecx
  unsigned int v173; // eax
  int v174; // r8d
  unsigned int v175; // edx
  __int64 v176; // rdi
  __int64 v177; // r10
  __int64 v178; // rbx
  unsigned int v179; // r10d
  __int64 v180; // rdi
  unsigned int v181; // edx
  __int64 v182; // r9
  __int64 v183; // r8
  __int64 v184; // rax
  int v185; // ecx
  unsigned int *v186; // r12
  unsigned int v187; // r8d
  __int64 v188; // rbx
  unsigned int Src; // [rsp+28h] [rbp-D1h]
  unsigned int Srca; // [rsp+28h] [rbp-D1h]
  int v191; // [rsp+38h] [rbp-C1h]
  int v192; // [rsp+38h] [rbp-C1h]
  struct _DPI_INFORMATION *v193; // [rsp+40h] [rbp-B9h]
  int v194; // [rsp+40h] [rbp-B9h]
  int v195; // [rsp+58h] [rbp-A1h]
  unsigned int v196; // [rsp+5Ch] [rbp-9Dh]
  struct _devicemodeW *v197; // [rsp+60h] [rbp-99h] BYREF
  int v198; // [rsp+68h] [rbp-91h]
  int v199; // [rsp+6Ch] [rbp-8Dh] BYREF
  int v200; // [rsp+70h] [rbp-89h]
  int PruneFlag; // [rsp+74h] [rbp-85h]
  unsigned int v202; // [rsp+78h] [rbp-81h]
  int v203; // [rsp+7Ch] [rbp-7Dh]
  struct _devicemodeW *v204; // [rsp+80h] [rbp-79h]
  unsigned int v205; // [rsp+88h] [rbp-71h] BYREF
  int v206; // [rsp+8Ch] [rbp-6Dh]
  HDEV v207; // [rsp+90h] [rbp-69h] BYREF
  __int64 v208; // [rsp+98h] [rbp-61h]
  unsigned int v209; // [rsp+A0h] [rbp-59h] BYREF
  void *Buf2; // [rsp+A8h] [rbp-51h]
  struct tagSIZE v211; // [rsp+B0h] [rbp-49h] BYREF
  struct tagSIZE v212; // [rsp+B8h] [rbp-41h] BYREF
  struct tagSIZE v213; // [rsp+C0h] [rbp-39h]
  _DWORD v214[2]; // [rsp+C8h] [rbp-31h] BYREF
  struct tagSIZE *v215; // [rsp+D0h] [rbp-29h]
  struct tagSIZE v216[2]; // [rsp+D8h] [rbp-21h] BYREF
  __int128 v217; // [rsp+E8h] [rbp-11h]
  PCUNICODE_STRING String1a; // [rsp+148h] [rbp+4Fh]
  unsigned int v222; // [rsp+158h] [rbp+5Fh]
  unsigned int v224; // [rsp+160h] [rbp+67h]
  struct _MDEV *v225; // [rsp+168h] [rbp+6Fh]
  int v226; // [rsp+168h] [rbp+6Fh]

  v9 = a4;
  v195 = 0;
  v198 = 0;
  v203 = 0;
  v212.cx = 0;
  v206 = a4 & 1;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v13 = a5;
  v12[3] = a1;
  v12[4] = a3;
  v12[5] = v9;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  v14 = PALLOCMEM2(0x60uLL);
  v17 = v14;
  if ( !v14 )
    goto LABEL_90;
  *(_DWORD *)(v14 + 20) = 0;
  *(_QWORD *)(v14 + 24) = a3;
  v18 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL);
  v19 = 0LL;
  v204 = v18;
  if ( !v18 )
    goto LABEL_300;
  v20 = a6;
  v21 = a9;
  v200 = a8;
  PruneFlag = a6 != 0;
  v22 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    LODWORD(v208) = v22;
    while ( 2 )
    {
      v23 = v195;
      v16 = 1LL;
      v196 = 1;
      v15 = 0x1000000000LL;
      v207 = 0LL;
      v24 = 0LL;
      v213 = 0LL;
      cx = 0;
      v211.cx = 0;
      v26 = 0;
      v205 = 0;
      v209 = 0;
      v202 = 0;
      while ( 1 )
      {
        v27 = v23 < 0;
        if ( v23 )
          break;
        v28 = v19;
        Buf2 = v19;
        v207 = v19;
        if ( a1 )
        {
          if ( !v24 )
          {
            DeviceFromName = (wchar_t *)DrvGetDeviceFromName(a1);
            v20 = a6;
            v213 = (struct tagSIZE)DeviceFromName;
            v15 = a5 != 0LL ? v196 : 0;
            v19 = 0LL;
            v196 = v15;
            v16 = (unsigned int)v15;
            goto LABEL_15;
          }
        }
        else if ( !v24 )
        {
          goto LABEL_9;
        }
        if ( v13 )
        {
          if ( cx >= *((_DWORD *)v13 + 5) )
            goto LABEL_33;
          v137 = cx++;
          v211.cx = cx;
          v28 = (HDEV)*((_QWORD *)v13 + 7 * v137 + 5);
          Buf2 = v28;
          DeviceFromName = (wchar_t *)*((_QWORD *)v28 + 322);
          if ( DeviceFromName == v24 )
            goto LABEL_27;
          v138 = v198 ^ 1;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) == 0 )
            v138 = v198;
          if ( v138 )
            goto LABEL_27;
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(*((HSEMAPHORE *)v28 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6), 11LL);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v139 = *((_QWORD *)v28 + 443);
          ++*((_DWORD *)v28 + 3);
          ++*((_DWORD *)v28 + 2);
          TrackObjectReferenceIncrement(1LL, v139);
          if ( ((_DWORD)v28[10] & 0x400) != 0 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
              PsLeavePriorityRegion();
            }
            DrvEnableDisplay(v28);
            EngAcquireSemaphore(ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6));
          v140 = (struct _ERESOURCE *)*((_QWORD *)v28 + 6);
          if ( v140 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v140);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          v19 = 0LL;
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
            v19 = 0LL;
          }
          v16 = v196;
          v20 = a6;
          v141 = (*((_DWORD *)DeviceFromName + 40) >> 2) & 1;
          v205 = 1;
          v209 = v141;
          goto LABEL_15;
        }
LABEL_9:
        if ( v22 == 4 )
        {
          if ( v26 >= *((unsigned __int16 *)v21 + 10) )
            goto LABEL_33;
          v86 = v26;
          if ( (*((_QWORD *)v21 + 34 * v26 + 6) & 0x1000000000LL) != 0 )
            goto LABEL_223;
          if ( !IsPrimaryPathInCloneGroup(v21, v26) || *(_DWORD *)((char *)v21 + v87 + 240) < (int)v19 )
          {
            v16 = v196;
LABEL_223:
            v202 = ++v26;
            goto LABEL_29;
          }
          DeviceFromName = gpGraphicsDeviceList;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0
                && *((_DWORD *)DeviceFromName + 62) == *(_DWORD *)((char *)v21 + v87 + 64)
                && *((_DWORD *)DeviceFromName + 63) == *(_DWORD *)((char *)v21 + v87 + 68)
                && *((_DWORD *)DeviceFromName + 64) == *(_DWORD *)((char *)v21 + v87 + 72) )
              {
                break;
              }
              DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
            }
            while ( DeviceFromName );
            goto LABEL_120;
          }
          goto LABEL_232;
        }
        DeviceFromName = gpGraphicsDeviceList;
        for ( i = (int)v19; DeviceFromName && i != cx; ++i )
          DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
        v211.cx = ++cx;
        if ( gbBaseVideo != (_DWORD)v19 && DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x2800000) == 0 )
          goto LABEL_28;
LABEL_15:
        if ( v22 == 4 )
        {
          if ( v28 )
          {
            v142 = WdLogNewEntry5_WdAssertion(v16, v15);
            WdLogEvent5_WdAssertion(v142);
            v19 = 0LL;
          }
LABEL_120:
          if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 41) & 1) == 0 )
          {
            DisplayDriverNames = DrvGetDisplayDriverNames(DeviceFromName);
            v19 = 0LL;
            v89 = (struct _DRV_NAMES *)DisplayDriverNames;
            if ( !DisplayDriverNames )
              goto LABEL_132;
            v90 = *((unsigned __int16 *)v21 + 10);
            if ( v26 >= (unsigned int)v90 )
            {
              v143 = WdLogNewEntry5_WdAssertion(v90, v15);
              WdLogEvent5_WdAssertion(v143);
            }
            v91 = 0x1000000000LL;
            v92 = 272LL * v26;
            if ( (*(_QWORD *)((_BYTE *)v21 + v92 + 48) & 0x1000000000LL) != 0 )
            {
              v144 = WdLogNewEntry5_WdAssertion(0x1000000000LL, v15);
              WdLogEvent5_WdAssertion(v144);
            }
            if ( !*(_QWORD *)((char *)v21 + v92 + 272) )
            {
              v145 = WdLogNewEntry5_WdAssertion(v91, v15);
              WdLogEvent5_WdAssertion(v145);
            }
            v93 = gdmLogPixels;
            if ( !gdmLogPixels )
            {
              v93 = 0;
              v199 = 0;
              if ( qword_1C02507A0 )
              {
                qword_1C02507A0(1LL, &v199);
                v93 = v199;
              }
              gdmLogPixels = v93;
            }
            *(_WORD *)(*(_QWORD *)((char *)v21 + v92 + 272) + 166LL) = v93;
            DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            v28 = hCreateHDEV(
                    (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                    v89,
                    *(struct _devicemodeW **)((char *)v21 + v92 + 272),
                    a3,
                    DriverCapableOverRide,
                    DriverAccelerationsLevel,
                    v206,
                    (a4 >> 2) & 1,
                    1u,
                    &v207);
            Win32FreePool(v89);
            v19 = 0LL;
            if ( v28 )
            {
              v16 = *(unsigned int *)((char *)v21 + v92 + 236);
              v26 = v202;
              *((_DWORD *)v28 + 661) = v16;
LABEL_132:
              if ( v28 )
              {
LABEL_133:
                v202 = ++v26;
                goto LABEL_134;
              }
            }
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2LL);
            v26 = v202;
            v19 = 0LL;
          }
          if ( v28 )
            goto LABEL_133;
          v86 = v26;
LABEL_232:
          if ( !IsPrimaryPathInCloneGroup(v21, v26) || *((_DWORD *)v21 + 68 * v86 + 60) < (int)v19 )
          {
            v147 = WdLogNewEntry5_WdAssertion(v146, v15);
            WdLogEvent5_WdAssertion(v147);
            v19 = 0LL;
          }
          v16 = (unsigned __int16)v19;
          if ( (unsigned __int16)v19 < *((_WORD *)v21 + 10) )
          {
            do
            {
              v15 = 272LL * (unsigned __int16)v16;
              if ( *(_DWORD *)((char *)v21 + v15 + 232) == *((_DWORD *)v21 + 68 * v86 + 58) )
                *(_DWORD *)((char *)v21 + v15 + 240) = -1073741823;
              LOWORD(v16) = v16 + 1;
            }
            while ( (unsigned __int16)v16 < *((_WORD *)v21 + 10) );
          }
          goto LABEL_133;
        }
        if ( !DeviceFromName )
          goto LABEL_33;
        if ( (*((_DWORD *)DeviceFromName + 41) & 1) != 0 )
          goto LABEL_28;
        if ( v20 == -1 )
        {
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          LODWORD(v19) = 0;
        }
        if ( v28 )
        {
LABEL_135:
          v96 = WdLogNewEntry5_WdTrace(v16, v15);
          WdLogEvent5_WdTrace(v96);
          v97 = *((_DWORD *)DeviceFromName + 40);
          v19 = 0LL;
          v203 = 1;
          if ( v209 )
            v98 = v97 | 4;
          else
            v98 = v97 & 0xFFFFFFFB;
          *((_DWORD *)DeviceFromName + 40) = v98;
          v99 = v207;
          if ( !v207 )
          {
            if ( a5 )
            {
              v100 = *((_DWORD *)a5 + 5);
              if ( v100 )
              {
                v101 = (HDEV *)((char *)a5 + 40);
                v102 = v100;
                do
                {
                  v103 = *v101;
                  v101 += 7;
                  if ( DeviceFromName == *((wchar_t **)v103 + 322) )
                    v99 = v103;
                  v207 = v99;
                  --v102;
                }
                while ( v102 );
              }
            }
          }
          *(_QWORD *)(56LL * *(unsigned int *)(v17 + 20) + v17 + 40) = v28;
          *(_QWORD *)(56LL * *(unsigned int *)(v17 + 20) + v17 + 48) = v207;
          v104 = *(_DWORD *)(v17 + 20);
          if ( v104 + 2 >= v104 )
          {
            v105 = (unsigned int *)v17;
            *(_DWORD *)(v17 + 20) = v104 + 1;
            v106 = 96LL * (v104 + 2);
            if ( v106 > 0xFFFFFFFF )
            {
              v17 = 0LL;
            }
            else
            {
              v107 = PALLOCMEM2((unsigned int)v106);
              v19 = 0LL;
              v17 = v107;
            }
            if ( !v17 )
            {
              v13 = a5;
              v23 = -1073741670;
              v16 = v196;
              v17 = (__int64)v105;
              v195 = -1073741670;
              goto LABEL_30;
            }
            memmove((void *)v17, v105, 96LL * v105[5]);
            Win32FreePool(v105);
            v19 = 0LL;
          }
          goto LABEL_27;
        }
        if ( gForceDisconnect != (_DWORD)v19 || v22 == 3 )
          v31 = -1;
        else
          v31 = gProtocolType;
        PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)DeviceFromName, v31, &v209, &v205);
        v19 = 0LL;
        if ( !PrimaryAttachFlags )
          goto LABEL_33;
        if ( v22 == 1 || v22 == 3 )
        {
          if ( !v205 )
            goto LABEL_27;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
          {
            v73 = v198;
          }
          else
          {
            if ( !v198 )
              goto LABEL_96;
            v73 = 0;
          }
          v74 = v73 == 0;
        }
        else
        {
          if ( v22 != 2 )
          {
            v149 = WdLogNewEntry5_WdAssertion(v16, v15);
            WdLogEvent5_WdAssertion(v149);
            v19 = 0LL;
            if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || v203 )
              goto LABEL_27;
            goto LABEL_96;
          }
          v148 = *((_DWORD *)DeviceFromName + 40);
          if ( (v148 & 8) == 0 )
          {
            if ( (v148 & 0x2000000) != 0 || v203 || gProtocolType == -1 )
              goto LABEL_27;
            goto LABEL_96;
          }
          if ( !v205 )
            goto LABEL_27;
          v74 = v198 == 0;
        }
        if ( v74 )
          goto LABEL_27;
LABEL_96:
        v75 = DrvGetDisplayDriverNames(DeviceFromName);
        v19 = 0LL;
        v76 = (struct _DRV_NAMES *)v75;
        if ( !v75 )
          goto LABEL_27;
        v77 = *((_DWORD *)DeviceFromName + 40);
        v197 = 0LL;
        v199 = 0;
        if ( (v77 & 8) != 0 )
        {
          v78 = 4;
          v79 = 0;
          v80 = 0;
        }
        else
        {
          v78 = 1;
          v79 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v80 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        }
        if ( a2 )
        {
          v82 = a2;
        }
        else
        {
          v81 = v204;
          memset(v204, 0, sizeof(struct _devicemodeW));
          v82 = v81;
          v81->dmSize = 220;
        }
        v83 = DrvProbeAndCaptureDevmode(
                (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                &v197,
                &v199,
                0LL,
                v82,
                0,
                PruneFlag,
                a7,
                v200,
                0LL);
        if ( v83 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4LL);
LABEL_104:
          v84 = a4;
          v28 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  v76,
                  v197,
                  a3,
                  v79,
                  v80,
                  v206,
                  (a4 >> 2) & 1,
                  v78,
                  &v207);
          if ( !v28 && (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
          goto LABEL_105;
        }
        if ( v83 == -1073741776 )
        {
          v150 = *(struct _devicemodeW **)(*(_QWORD *)(v17 + 40) + 2592LL);
          if ( v197 && v197 != v204 )
          {
            Win32FreePool(v197);
            v197 = 0LL;
          }
          v83 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v197,
                  &v199,
                  0LL,
                  v150,
                  0,
                  PruneFlag,
                  a7,
                  v200,
                  0LL);
        }
        if ( v83 >= 0 )
          goto LABEL_104;
        DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
        v28 = (HDEV)Buf2;
        v84 = a4;
        if ( (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
          gulDriverFailureReason = 4;
LABEL_105:
        v85 = a2;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || a2 )
          goto LABEL_284;
        if ( !v28 )
        {
          DrvLogDisplayDriverEvent(4LL);
          v151 = v197;
          if ( v197 )
          {
            if ( v197->dmBitsPerPel == 4 )
            {
              DrvLogDisplayDriverEvent(5LL);
              v151 = v197;
            }
            if ( v151 != v204 )
            {
              Win32FreePool(v151);
              v197 = 0LL;
            }
          }
          memset(v204, 0, sizeof(struct _devicemodeW));
          v152 = v204;
          v204->dmSize = 220;
          if ( (int)DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                      &v197,
                      &v199,
                      0LL,
                      v152,
                      1,
                      PruneFlag,
                      a7,
                      v200,
                      0LL) < 0
            || (v153 = (v84 >> 2) & 1,
                (v28 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                         v76,
                         v197,
                         a3,
                         v79,
                         v80,
                         v206,
                         v153,
                         1u,
                         &v207)) != 0LL) )
          {
LABEL_279:
            v154 = v197;
          }
          else
          {
            v154 = v197;
            if ( v197->dmPelsWidth != 640 || v197->dmPelsHeight != 480 || v197->dmBitsPerPel != 4 )
            {
              if ( v197 != v204 )
              {
                Win32FreePool(v197);
                v197 = 0LL;
              }
              memset(v204, 0, sizeof(struct _devicemodeW));
              v155 = v204;
              v204->dmSize = 220;
              v156 = v200;
              v155->dmBitsPerPel = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0 ? 32 : 4;
              v194 = a7;
              v192 = PruneFlag;
              v155->dmPelsWidth = 640;
              v155->dmPelsHeight = 480;
              v155->dmFields = 1835008;
              if ( (int)DrvProbeAndCaptureDevmode(
                          (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                          &v197,
                          &v199,
                          0LL,
                          v155,
                          0,
                          v192,
                          v194,
                          v156,
                          0LL) >= 0 )
                v28 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        v76,
                        v197,
                        a3,
                        v79,
                        v80,
                        v206,
                        v153,
                        1u,
                        &v207);
              goto LABEL_279;
            }
          }
          if ( v154 )
          {
            v157 = v28 != 0LL;
          }
          else
          {
            v154 = v204;
            v157 = 2LL;
          }
          DrvDxgkLogCodePointPacket(26LL, v157, v154->dmPelsWidth, v154->dmPelsHeight);
          v85 = 0LL;
LABEL_284:
          if ( !v28 && !v85 )
          {
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2LL);
          }
        }
        if ( v197 && v197 != v204 )
          Win32FreePool(v197);
        Win32FreePool(v76);
        v26 = v202;
        v19 = 0LL;
LABEL_134:
        if ( v28 )
          goto LABEL_135;
LABEL_27:
        v16 = v196;
LABEL_28:
        v13 = a5;
LABEL_29:
        v23 = v195;
LABEL_30:
        v22 = v208;
        v15 = 0x1000000000LL;
        v21 = a9;
        cx = v211.cx;
        v24 = (wchar_t *)v213;
        v20 = a6;
        if ( !(_DWORD)v16 )
        {
          v27 = v23 < 0;
          break;
        }
      }
      if ( v27 )
        goto LABEL_291;
LABEL_33:
      if ( v22 == 4 )
      {
        if ( v203 != (_DWORD)v19 )
        {
          v108 = WdLogNewEntry5_WdTrace(v16, v15);
          WdLogEvent5_WdTrace(v108);
          v22 = 1;
          LODWORD(v208) = 1;
          goto LABEL_152;
        }
        v160 = WdLogNewEntry5_WdError(v16, v15, v24);
        *(_QWORD *)(v160 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v160, v161);
        goto LABEL_300;
      }
      if ( v203 != (_DWORD)v19 )
      {
        if ( v198 != (_DWORD)v19 )
        {
          v195 = (int)v19;
          goto LABEL_37;
        }
        v109 = WdLogNewEntry5_WdTrace(v16, v15);
        WdLogEvent5_WdTrace(v109);
LABEL_152:
        v13 = a5;
        v19 = 0LL;
        v20 = a6;
        v198 = 1;
        continue;
      }
      break;
    }
    if ( v22 == 1 )
    {
      v158 = WdLogNewEntry5_WdTrace(v16, v15);
      WdLogEvent5_WdTrace(v158);
      v19 = 0LL;
      v22 = 2;
      v200 = 0;
LABEL_298:
      v20 = a6;
      v13 = a5;
      continue;
    }
    break;
  }
  if ( v22 == 2 && (unsigned int)UserIsWddmConnectedSession(v16, v15) )
  {
    v159 = WdLogNewEntry5_WdTrace(v16, v15);
    WdLogEvent5_WdTrace(v159);
    v19 = 0LL;
    v22 = 3;
    goto LABEL_298;
  }
  if ( !cx )
  {
    v163 = WdLogNewEntry5_WdTrace(v16, v15);
    WdLogEvent5_WdTrace(v163);
    goto LABEL_300;
  }
  v162 = WdLogNewEntry5_WdTrace(v16, v15);
  WdLogEvent5_WdTrace(v162);
  v23 = -1073741204;
  v19 = 0LL;
  v195 = -1073741204;
LABEL_291:
  if ( v23 )
  {
LABEL_87:
    if ( v195 < 0 )
      goto LABEL_300;
    goto LABEL_88;
  }
LABEL_37:
  if ( (a4 & 2) != 0 )
    goto LABEL_87;
  v224 = (unsigned int)v19;
  v225 = (struct _MDEV *)v19;
  v33 = (unsigned int)v19;
  v34 = (unsigned int *)v19;
  v35 = (UNICODE_STRING *)Win32AllocPool(104LL, 1819109447LL);
  String1a = v35;
  v36 = (MULTIDEVLOCKOBJ *)v35;
  if ( v35 )
  {
    *(_QWORD *)&v35->Length = 1LL;
    v35->Buffer = 0LL;
    *(_QWORD *)&v35[1].Length = 0LL;
  }
  else
  {
    v36 = 0LL;
    String1a = 0LL;
  }
  if ( v36 )
  {
    MULTIDEVLOCKOBJ::vInit(v36, (struct _MDEV *)v17);
    if ( (*(_DWORD *)v36 & 1) != 0 )
    {
      MULTIDEVLOCKOBJ::vLock(v36);
      v38 = *(_DWORD *)(v17 + 20);
      v39 = 0;
      if ( v38 )
      {
        do
        {
          v40 = *(unsigned int **)(*(_QWORD *)(56LL * v39 + v17 + 40) + 2576LL);
          v41 = v40[40];
          if ( (v41 & 8) != 0 )
          {
            if ( (v41 & 4) != 0 )
            {
              v41 &= ~4u;
              v40[40] = v41;
            }
            v43 = v41;
            v42 = v41;
          }
          else
          {
            v42 = v40[40];
            v43 = v40[40];
            if ( !v34 )
              v33 = v39;
          }
          if ( (v42 & 4) != 0 )
          {
            if ( v34 )
            {
              v195 = -1073741438;
              v40[40] = v43 & 0xFFFFFFFB;
            }
            else
            {
              v34 = v40;
              v33 = v39;
            }
          }
          v38 = *(_DWORD *)(v17 + 20);
          ++v39;
        }
        while ( v39 < v38 );
        v224 = v33;
        v225 = (struct _MDEV *)v34;
      }
      v44 = 16 * v38;
      Buf2 = (void *)PALLOCMEM2(v44);
      v45 = Buf2;
      v46 = (struct D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(v44);
      a9 = v46;
      v47 = (struct tagRECT *)v46;
      if ( v45 )
      {
        if ( v46 )
        {
          v48 = 0;
          v222 = 0;
          v49 = 0;
          if ( *(_DWORD *)(v17 + 20) )
          {
            do
            {
              v50 = 2LL * v49;
              v51 = *(_QWORD *)(56LL * v49 + v17 + 40);
              v52 = *(_DWORD **)(v51 + 2592);
              v45[2 * v50] = v52[19];
              v45[2 * v50 + 1] = v52[20];
              v45[2 * v50 + 2] = v52[19] + v52[43];
              v45[2 * v50 + 3] = v52[20] + v52[44];
              if ( (*(_DWORD *)(*(_QWORD *)(v51 + 2576) + 160LL) & 8) == 0 )
              {
                if ( !v34 && !v52[19] && !v52[20] )
                {
                  v33 = v49;
                  v34 = *(unsigned int **)(v51 + 2576);
                }
                ++v48;
              }
              ++v49;
            }
            while ( v49 < *(_DWORD *)(v17 + 20) );
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v222 = v48;
            v224 = v33;
            v225 = (struct _MDEV *)v34;
          }
          memmove(v47, v45, v44);
          if ( !gDrvDpiAdjusted )
          {
            gDrvDpiWin8Style = 0;
            a6 = 0;
            if ( ((gProtocolType + 1) & 0xFFFE) == 0 && (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
            {
              GetWin8StyleDpiSettingFromRegistry();
              if ( gDrvDpiWin8Style )
              {
                DpiSettingWithNoDefaultSupported = IsGetDpiSettingWithNoDefaultSupported();
                if ( DpiSettingWithNoDefaultSupported >= 0 && qword_1C024F2E8 )
                  qword_1C024F2E8(0LL, &a6);
                v165 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v165 = 96;
                if ( v165 >= 0x1E0 )
                  LOWORD(v165) = 480;
                gdmLogPixels = v165;
              }
            }
          }
          v53 = v33;
          v54 = 0;
          v55 = *(_QWORD *)(56 * v53 + v17 + 40);
          v208 = v55;
          *(_DWORD *)(*(_QWORD *)(v55 + 2576) + 160LL) |= 4u;
          v56 = *(_DWORD *)(v17 + 20);
          if ( v56 )
          {
            do
            {
              v57 = *(_QWORD *)(56LL * v54 + v17 + 40);
              if ( (*(_DWORD *)(*(_QWORD *)(v57 + 2576) + 160LL) & 0x800000) != 0 )
              {
                v58 = 0;
                if ( v54 == v224 )
                  v58 = 32;
                *(_DWORD *)(v57 + 2548) = *(_DWORD *)(v57 + 2548) & 0xFFFFFFDF | v58;
                a6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))qword_1C024AA30)(
                       *(_QWORD *)(*(_QWORD *)(v57 + 2576) + 240LL),
                       *(unsigned int *)(*(_QWORD *)(v57 + 2576) + 256LL),
                       v57 + 2136);
                if ( a6 < 0 )
                {
                  v166 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
                  v166[3] = a6;
                  v166[4] = *(_QWORD *)(*(_QWORD *)(v57 + 2576) + 240LL);
                  v167 = *(unsigned int *)(*(_QWORD *)(v57 + 2576) + 256LL);
                  v166[5] = v167;
                  WdLogEvent5_WdError(v166, v167);
                }
              }
              v56 = *(_DWORD *)(v17 + 20);
              ++v54;
            }
            while ( v54 < v56 );
            v55 = v208;
            v34 = (unsigned int *)v225;
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v47 = (struct tagRECT *)a9;
          }
          v62 = 0;
          if ( !gDrvDpiAdjusted )
          {
            gDrvDpiWin8Style = 0;
            a6 = 0;
            if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
            {
              v110 = *(_DWORD *)(v55 + 3552);
              if ( v110 )
              {
                v111 = (96 * HIWORD(v110) + 50) / 0x64u;
              }
              else
              {
                if ( wcsncmp(*((const wchar_t **)v34 + 25), L"WORKERDD", v34[66])
                  && wcsncmp(*((const wchar_t **)v34 + 25), L"TSDDD", v34[66]) )
                {
                  gDrvDpiWin8Style = 1;
                }
                if ( qword_1C02507A0 )
                  qword_1C02507A0(2LL, &a6);
                v111 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v111 = 96;
                if ( v111 >= 0x1E0 )
                  v111 = 480;
                a6 = v111;
              }
              gdmLogPixels = v111;
              v112 = 0;
              v56 = *(_DWORD *)(v17 + 20);
              if ( v56 )
              {
                do
                {
                  v113 = gdmLogPixels;
                  v114 = v112++;
                  v115 = *(_QWORD *)(56 * v114 + v17 + 40);
                  *(_DWORD *)(v115 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v115 + 2176) = v113;
                  *(_WORD *)(*(_QWORD *)(v115 + 2592) + 166LL) = gdmLogPixels;
                  v56 = *(_DWORD *)(v17 + 20);
                }
                while ( v112 < v56 );
              }
            }
            else
            {
              v116 = (96 * *(_DWORD *)(v55 + 2468) + 50) / 0x64u;
              if ( (_WORD)v116 && qword_1C02507C0 )
                qword_1C02507C0(1LL, (unsigned __int16)v116);
              if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
                GetWin8StyleDpiSettingFromRegistry();
              if ( gDrvDpiWin8Style )
              {
                if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 && qword_1C024F2E8 )
                  qword_1C024F2E8(0LL, &a6);
                v118 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v118 = 96;
                if ( v118 >= 0x1E0 )
                  v118 = 480;
                a6 = v118;
              }
              else
              {
                v117 = *(_DWORD *)(v55 + 2464);
                if ( v117 )
                  v118 = (96 * v117 + 50) / 0x64u;
                else
                  LOWORD(v118) = 96;
              }
              gdmLogPixels = v118;
              v119 = 0;
              v56 = *(_DWORD *)(v17 + 20);
              if ( v56 )
              {
                do
                {
                  v120 = gdmLogPixels;
                  v121 = *(_QWORD *)(56LL * v119 + v17 + 40);
                  v122 = *(_QWORD *)(v121 + 2592);
                  *(_DWORD *)(v121 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v121 + 2176) = v120;
                  *(_WORD *)(v122 + 166) = gdmLogPixels;
                  if ( gDrvDpiWin8Style )
                  {
                    v168 = 100 * gdmLogPixels;
                    *(_DWORD *)(v121 + 2540) = 1234568;
                    *(_DWORD *)(v121 + 2464) = (v168 + 48) / 0x60u;
                  }
                  v56 = *(_DWORD *)(v17 + 20);
                  ++v119;
                }
                while ( v119 < v56 );
              }
            }
            gDrvDpiAdjusted = 1;
          }
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
          {
            v226 = 1;
            v123 = 1;
            if ( v56 )
            {
              do
              {
                v124 = *(_QWORD *)(56LL * v62 + v17 + 40);
                v125 = *(_DWORD *)(v124 + 3552);
                v126 = ((*(_DWORD *)(*(_QWORD *)(v124 + 2592) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                v127 = *(_DWORD *)(v124 + 2148);
                LOBYTE(a6) = v126;
                v128 = v127 / 0x3E8;
                v129 = *(_DWORD *)(v124 + 2144) / 0x3E8u;
                if ( v126 )
                {
                  v129 = v127 / 0x3E8;
                  v128 = *(_DWORD *)(v124 + 2144) / 0x3E8u;
                }
                v130 = *(_DWORD *)(v124 + 2156);
                v213 = (struct tagSIZE)__PAIR64__(v128, v129);
                v131 = *(_DWORD *)(v124 + 2152);
                v211 = v213;
                v132 = v131;
                if ( v126 )
                  v132 = v130;
                v214[0] = 1;
                if ( v126 )
                  v130 = v131;
                v197 = (struct _devicemodeW *)__PAIR64__(v130, v132);
                v212 = (struct tagSIZE)__PAIR64__(v130, v132);
                v215 = v216;
                *(_OWORD *)&v216[0].cx = 0LL;
                v214[1] = 32;
                v217 = 0LL;
                if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v214) < 0 )
                {
                  v169 = WdLogNewEntry5_WdAssertion(v134, v133);
                  WdLogEvent5_WdAssertion(v169);
                }
                v193 = (struct _DPI_INFORMATION *)(v124 + 2456);
                if ( v125 )
                {
                  FillDpiInfo(&v211, &v212, (struct tagSIZE)v216, v135, 0, HIWORD(v125), v191, v193);
                  *(_DWORD *)(v124 + 2548) |= 0x200u;
                  v123 = v226;
                }
                else
                {
                  *(_DWORD *)(v124 + 2548) &= ~0x200u;
                  v123 = 0;
                  v226 = 0;
                  FillDpiInfo(&v211, &v212, (struct tagSIZE)v216, v135, gdmLogPixels, 0, v191, v193);
                }
                GetRemoteScaleOverrideTestHook(
                  (const unsigned __int16 *)(*(_QWORD *)(v124 + 2576) + 64LL),
                  v136,
                  (struct _DPI_INFORMATION *)(v124 + 2456));
                ++v62;
                *(_DWORD *)(v124 + 2548) = *(_DWORD *)(v124 + 2548) & 0xFFFFFF7F | ((unsigned __int8)a6 << 7);
              }
              while ( v62 < *(_DWORD *)(v17 + 20) );
              v55 = v208;
              v47 = (struct tagRECT *)a9;
            }
            UserSetScaleFactorsFromRemoteMetric(v123);
            v212.cx = 1;
          }
          else
          {
            *((_DWORD *)gpsi + 559) &= ~0x40u;
          }
          gdmLogPixelsOfPrimary = (96 * *(_DWORD *)(v55 + 2468) + 50) / 0x64u;
          AlignRects(v47, v222);
          v45 = Buf2;
          if ( memcmp(v47, Buf2, 16LL * v222) )
          {
            v170 = WdLogNewEntry5_WdWarning(v64, v63, v65);
            WdLogEvent5_WdWarning(v170);
          }
          v66 = 0;
          if ( *(_DWORD *)(v17 + 20) )
          {
            do
            {
              v67 = 56LL * v66;
              v68 = *(_QWORD *)(v67 + v17 + 40);
              *(_QWORD *)(v68 + 2584) = *(_QWORD *)&v47[v66].left;
              v69 = *(void (__fastcall **)(__int64, __int64))(v68 + 3384);
              if ( v69 )
                v69((*(_QWORD *)(v68 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v68 + 2552) != 0LL), 2LL);
              v70 = v47[v66++];
              *(struct tagRECT *)(v67 + v17 + 56) = v70;
              *(_DWORD *)(v67 + v17 + 72) = *(_DWORD *)(v68 + 2464);
            }
            while ( v66 < *(_DWORD *)(v17 + 20) );
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v45 = Buf2;
          }
          if ( (unsigned int)bUniformSpaceDpiMode() )
          {
            v171 = PALLOCMEM2((unsigned int)(4 * *(_DWORD *)(v17 + 20)));
            if ( v171 )
            {
              v172 = *(_DWORD *)(v17 + 20);
              v173 = 0;
              if ( v172 )
              {
                do
                {
                  *(_DWORD *)(v171 + 4LL * v173) = v173;
                  ++v173;
                  v172 = *(_DWORD *)(v17 + 20);
                }
                while ( v173 < v172 );
                v36 = (MULTIDEVLOCKOBJ *)String1a;
              }
              do
              {
                v174 = 0;
                v175 = 0;
                if ( v172 == 1 )
                {
                  v172 = *(_DWORD *)(v17 + 20);
                }
                else
                {
                  do
                  {
                    v176 = v175 + 1;
                    v177 = *(unsigned int *)(v171 + 4 * v176);
                    v178 = *(unsigned int *)(v171 + 4LL * v175);
                    if ( *(_DWORD *)(56 * (v178 + 1) + v17) > *(_DWORD *)(56 * (v177 + 1) + v17) )
                    {
                      *(_DWORD *)(v171 + 4LL * v175) = v177;
                      v174 = 1;
                      *(_DWORD *)(v171 + 4 * v176) = v178;
                    }
                    v172 = *(_DWORD *)(v17 + 20);
                    ++v175;
                  }
                  while ( (unsigned int)v176 < v172 - 1 );
                }
              }
              while ( v174 );
              v47 = (struct tagRECT *)a9;
              v179 = v172 - 1;
              LODWORD(v180) = 0;
              v181 = 0;
              if ( v172 == 1 )
              {
LABEL_352:
                v186 = (unsigned int *)(v171 + 4LL * (unsigned int)v180);
                MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v17, *v186, 0xFFFFFFFF, 0, Src);
                v187 = v180;
                if ( (unsigned int)v180 < *(_DWORD *)(v17 + 20) - 1 )
                {
                  do
                  {
                    v188 = v187 + 1;
                    MapMonitorToUnifromSpaceInStripe(
                      (struct _MDEV *)v17,
                      *(_DWORD *)(v171 + 4 * v188),
                      *(_DWORD *)(v171 + 4LL * v187),
                      1,
                      Srca);
                    v187 = v188;
                  }
                  while ( (unsigned int)v188 < *(_DWORD *)(v17 + 20) - 1 );
                  v47 = (struct tagRECT *)a9;
                }
                while ( (_DWORD)v180 )
                {
                  v180 = (unsigned int)(v180 - 1);
                  MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v17, *(_DWORD *)(v171 + 4 * v180), *v186--, 0, Srca);
                }
                *(_DWORD *)(v17 + 16) |= 2u;
                *(_DWORD *)(v17 + 32) = 96;
                gbUniformSpaceDpiMode = 1;
              }
              else
              {
                while ( 1 )
                {
                  v182 = v181 + 1;
                  v183 = 56 * (*(unsigned int *)(v171 + 4LL * v181) + 1LL);
                  v184 = 56 * (*(unsigned int *)(v171 + 4 * v182) + 1LL);
                  v185 = *(_DWORD *)(v184 + v17);
                  if ( *(_DWORD *)(v183 + v17 + 8) != v185 )
                    break;
                  if ( *(_DWORD *)(v183 + v17) || *(_DWORD *)(v183 + v17 + 4) )
                  {
                    if ( !v185 && !*(_DWORD *)(v184 + v17 + 4) )
                      LODWORD(v180) = v181 + 1;
                  }
                  else
                  {
                    LODWORD(v180) = v181;
                  }
                  ++v181;
                  if ( (unsigned int)v182 >= v179 )
                    goto LABEL_352;
                }
              }
              Win32FreePool(v171);
              v45 = Buf2;
            }
          }
          else
          {
            gbUniformSpaceDpiMode = 0;
          }
        }
        Win32FreePool(v45);
      }
      if ( v47 )
        Win32FreePool(v47);
      MULTIDEVLOCKOBJ::vUnlock(v36);
      if ( v212.cx )
        ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    }
    MULTIDEVLOCKOBJ::`scalar deleting destructor'(v36, v37);
    goto LABEL_87;
  }
LABEL_300:
  if ( v17 )
  {
    DrvBackoutMDEV((struct _MDEV *)v17, v15);
    Win32FreePool(v17);
    v17 = 0LL;
  }
LABEL_88:
  if ( v204 )
    Win32FreePool(v204);
LABEL_90:
  v71 = WdLogNewEntry5_WdTrace(v16, v15);
  *(_QWORD *)(v71 + 24) = v17;
  WdLogEvent5_WdTrace(v71);
  return (struct _MDEV *)v17;
}

/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554
 * Callers:
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C0005608 (IsGetWin8StyleDpiSettingFromRegistrySupported.c)
 *     GetWin8StyleDpiSettingFromRegistry @ 0x1C0005634 (GetWin8StyleDpiSettingFromRegistry.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C0047B70 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C0051124 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C006A270 (DrvGetDeviceFromName.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C007FBF4 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     UserIsWddmConnectedSession @ 0x1C0093360 (UserIsWddmConnectedSession.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00942F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0096410 (UserRemoteConnectedSessionUsingXddm.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00ABAF0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C00ADA18 (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C00ADF70 (DrvGetDisplayDriverNames.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AE078 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AE208 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00AF4CC (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C00B025C (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B028C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B03A4 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x1C00B0494 (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     AlignRects @ 0x1C00B05D8 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C00B065C (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00B0680 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00C80E0 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00CADFC (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CB454 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     wcsncmp @ 0x1C00CC63C (wcsncmp.c)
 *     memcmp @ 0x1C00D1E60 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C014D860 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C014F4E4 (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
 *     IsGetDpiSettingWithNoDefaultSupported @ 0x1C01FD280 (IsGetDpiSettingWithNoDefaultSupported.c)
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
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct _devicemodeW *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  HDEV v20; // r11
  __int64 v21; // r9
  struct D3DKMT_GETPATHSMODALITY *v22; // r13
  int v23; // ebx
  int v24; // edi
  unsigned int cx; // r12d
  unsigned int v26; // r15d
  bool v27; // sf
  HDEV v28; // rdi
  wchar_t *DeviceFromName; // r14
  int i; // eax
  unsigned __int16 v31; // cx
  int PrimaryAttachFlags; // eax
  __int64 v33; // r9
  unsigned int v34; // r12d
  unsigned int *v35; // r14
  UNICODE_STRING *v36; // rax
  MULTIDEVLOCKOBJ *v37; // r15
  unsigned int v38; // edx
  unsigned int v39; // ebx
  unsigned int v40; // edx
  unsigned int *v41; // r8
  unsigned int v42; // eax
  char v43; // r9
  unsigned int v44; // ecx
  unsigned int v45; // ebx
  _DWORD *v46; // rdi
  struct D3DKMT_GETPATHSMODALITY *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  struct tagRECT *v50; // r13
  unsigned int v51; // r10d
  unsigned int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // rax
  _DWORD *v55; // r8
  __int64 v56; // rax
  unsigned int v57; // r12d
  __int64 v58; // rdi
  unsigned int v59; // ebx
  __int64 v60; // rbx
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned int v65; // r12d
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned int v69; // r14d
  __int64 v70; // r12
  __int64 v71; // rbx
  void (__fastcall *v72)(__int64, __int64); // rax
  struct tagRECT v73; // xmm0
  __int64 v74; // rax
  int v76; // eax
  bool v77; // zf
  unsigned int *v78; // rax
  struct _DRV_NAMES *v79; // r13
  int v80; // ecx
  unsigned int v81; // edi
  unsigned int v82; // r15d
  unsigned int v83; // r12d
  struct _devicemodeW *v84; // rbx
  struct _devicemodeW *v85; // rcx
  int v86; // eax
  __int64 v87; // r8
  unsigned int v88; // ebx
  __int64 v89; // rdx
  __int64 v90; // r8
  struct _devicemodeW *v91; // rax
  __int64 v92; // rbx
  __int64 v93; // r10
  unsigned int *DisplayDriverNames; // rax
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  struct _DRV_NAMES *v98; // r12
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // r15
  unsigned __int16 v102; // cx
  unsigned int DriverAccelerationsLevel; // ebx
  unsigned int DriverCapableOverRide; // eax
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // rax
  int v108; // eax
  unsigned int v109; // eax
  HDEV v110; // rcx
  unsigned int v111; // eax
  HDEV *v112; // rdx
  __int64 v113; // r8
  HDEV v114; // rax
  unsigned int v115; // ecx
  unsigned int *v116; // rbx
  unsigned __int64 v117; // rax
  void *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned int v123; // eax
  unsigned int v124; // edx
  unsigned int v125; // edx
  int v126; // ecx
  __int64 v127; // rax
  __int64 v128; // rax
  unsigned int v129; // edx
  int v130; // eax
  unsigned int v131; // edx
  unsigned int v132; // r8d
  int v133; // eax
  __int64 v134; // rcx
  __int64 v135; // rdx
  unsigned int v136; // r14d
  __int64 v137; // rbx
  unsigned int v138; // r14d
  bool v139; // r8
  unsigned int v140; // kr00_4
  unsigned int v141; // ecx
  unsigned int v142; // eax
  unsigned int v143; // edx
  unsigned int v144; // ecx
  unsigned int v145; // eax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  unsigned __int64 v150; // rdx
  __int64 v151; // rax
  int v152; // ecx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v153; // rdx
  int v154; // r8d
  __int64 v155; // rcx
  int v156; // r8d
  __int64 v157; // rcx
  int v158; // r8d
  struct _ERESOURCE *v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rcx
  unsigned int v162; // eax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // r9
  __int64 v171; // rax
  __int64 v172; // rdx
  int v173; // eax
  __int64 v174; // rax
  struct _devicemodeW *v175; // rbx
  __int64 v176; // rdx
  __int64 v177; // r8
  struct _devicemodeW *v178; // rcx
  struct _devicemodeW *v179; // rcx
  int v180; // ebx
  __int64 v181; // rdx
  __int64 v182; // r8
  struct _devicemodeW *v183; // rax
  struct _devicemodeW *v184; // rdx
  int v185; // eax
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 v191; // r8
  __int64 v192; // rax
  __int64 v193; // rax
  int DpiSettingWithNoDefaultSupported; // eax
  unsigned int v195; // eax
  _QWORD *v196; // rax
  int v197; // edx
  __int64 v198; // rax
  __int64 v199; // rax
  _DWORD *v200; // r14
  unsigned int v201; // ecx
  unsigned int v202; // eax
  int v203; // r8d
  int v204; // edx
  __int64 v205; // rdi
  __int64 v206; // r10
  __int64 v207; // rbx
  unsigned int v208; // r10d
  __int64 v209; // rdi
  __int64 v210; // rdx
  __int64 v211; // r9
  __int64 v212; // r8
  __int64 v213; // rax
  int v214; // ecx
  unsigned int *v215; // r12
  __int64 v216; // rbx
  unsigned int Src; // [rsp+28h] [rbp-D1h]
  unsigned int Srca; // [rsp+28h] [rbp-D1h]
  int v219; // [rsp+38h] [rbp-C1h]
  int v220; // [rsp+38h] [rbp-C1h]
  struct _DPI_INFORMATION *v221; // [rsp+40h] [rbp-B9h]
  int v222; // [rsp+40h] [rbp-B9h]
  int v223; // [rsp+58h] [rbp-A1h]
  unsigned int v224; // [rsp+5Ch] [rbp-9Dh]
  struct _devicemodeW *v225; // [rsp+60h] [rbp-99h] BYREF
  int v226; // [rsp+68h] [rbp-91h]
  int v227; // [rsp+6Ch] [rbp-8Dh] BYREF
  int v228; // [rsp+70h] [rbp-89h]
  int PruneFlag; // [rsp+74h] [rbp-85h]
  unsigned int v230; // [rsp+78h] [rbp-81h]
  int v231; // [rsp+7Ch] [rbp-7Dh]
  struct _devicemodeW *v232; // [rsp+80h] [rbp-79h]
  unsigned int v233; // [rsp+88h] [rbp-71h] BYREF
  int v234; // [rsp+8Ch] [rbp-6Dh]
  HDEV v235; // [rsp+90h] [rbp-69h] BYREF
  __int64 v236; // [rsp+98h] [rbp-61h]
  unsigned int v237; // [rsp+A0h] [rbp-59h] BYREF
  void *Buf2; // [rsp+A8h] [rbp-51h]
  struct tagSIZE v239; // [rsp+B0h] [rbp-49h] BYREF
  struct tagSIZE v240; // [rsp+B8h] [rbp-41h] BYREF
  struct tagSIZE v241; // [rsp+C0h] [rbp-39h]
  _DWORD v242[2]; // [rsp+C8h] [rbp-31h] BYREF
  struct tagSIZE *v243; // [rsp+D0h] [rbp-29h]
  struct tagSIZE v244[2]; // [rsp+D8h] [rbp-21h] BYREF
  __int128 v245; // [rsp+E8h] [rbp-11h]
  PCUNICODE_STRING String1a; // [rsp+148h] [rbp+4Fh]
  unsigned int v250; // [rsp+158h] [rbp+5Fh]
  unsigned int v252; // [rsp+160h] [rbp+67h]
  struct _MDEV *v253; // [rsp+168h] [rbp+6Fh]
  int v254; // [rsp+168h] [rbp+6Fh]

  v9 = a4;
  v223 = 0;
  v226 = 0;
  v231 = 0;
  v240.cx = 0;
  v234 = a4 & 1;
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v13 = a5;
  v12[3] = a1;
  v12[4] = a3;
  v12[5] = v9;
  v12[6] = a5;
  WdLogEvent5_WdEvent(v12);
  v14 = PALLOCMEM2(0x60uLL, 0x73726447u, 1);
  v16 = (__int64)v14;
  if ( !v14 )
    goto LABEL_90;
  v14[5] = 0;
  *((_QWORD *)v14 + 3) = a3;
  v17 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 0x76656447u, 0);
  v20 = 0LL;
  v232 = v17;
  if ( !v17 )
    goto LABEL_300;
  v21 = (unsigned int)a6;
  v22 = a9;
  v228 = a8;
  PruneFlag = a6 != 0;
  v23 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    LODWORD(v236) = v23;
    while ( 2 )
    {
      v24 = v223;
      v15 = 1LL;
      v224 = 1;
      v18 = 0x1000000000LL;
      v235 = 0LL;
      v19 = 0LL;
      v241 = 0LL;
      cx = 0;
      v239.cx = 0;
      v26 = 0;
      v233 = 0;
      v237 = 0;
      v230 = 0;
      while ( 1 )
      {
        v27 = v24 < 0;
        if ( v24 )
          break;
        v28 = v20;
        Buf2 = v20;
        v235 = v20;
        if ( a1 )
        {
          if ( !v19 )
          {
            DeviceFromName = DrvGetDeviceFromName(a1);
            v21 = (unsigned int)a6;
            v241 = (struct tagSIZE)DeviceFromName;
            v18 = a5 != 0LL ? v224 : 0;
            v20 = 0LL;
            v224 = v18;
            v15 = (unsigned int)v18;
            goto LABEL_15;
          }
        }
        else if ( !v19 )
        {
          goto LABEL_9;
        }
        if ( v13 )
        {
          if ( cx >= *((_DWORD *)v13 + 5) )
            goto LABEL_33;
          v151 = cx++;
          v239.cx = cx;
          v28 = (HDEV)*((_QWORD *)v13 + 7 * v151 + 5);
          Buf2 = v28;
          DeviceFromName = (wchar_t *)*((_QWORD *)v28 + 322);
          if ( DeviceFromName == (wchar_t *)v19 )
            goto LABEL_27;
          v152 = v226 ^ 1;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) == 0 )
            v152 = v226;
          if ( v152 )
            goto LABEL_27;
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
          EngAcquireSemaphore(*((HSEMAPHORE *)v28 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6), 11);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          v153 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v28 + 443);
          ++*((_DWORD *)v28 + 3);
          ++*((_DWORD *)v28 + 2);
          TrackObjectReferenceIncrement(1u, v153);
          if ( ((_DWORD)v28[10] & 0x400) != 0 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v154);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
              PsLeavePriorityRegion(v155);
            }
            DrvEnableDisplay(v28);
            EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v154);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v157);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6), v156);
          v159 = (struct _ERESOURCE *)*((_QWORD *)v28 + 6);
          if ( v159 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v159);
            PsLeavePriorityRegion(v160);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v158);
          v20 = 0LL;
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v161);
            v20 = 0LL;
          }
          v15 = v224;
          v21 = (unsigned int)a6;
          v162 = (*((_DWORD *)DeviceFromName + 40) >> 2) & 1;
          v233 = 1;
          v237 = v162;
          goto LABEL_15;
        }
LABEL_9:
        if ( v23 == 4 )
        {
          if ( v26 >= *((unsigned __int16 *)v22 + 10) )
            goto LABEL_33;
          v92 = v26;
          if ( (*((_QWORD *)v22 + 34 * v26 + 6) & 0x1000000000LL) != 0 )
            goto LABEL_223;
          if ( !IsPrimaryPathInCloneGroup(v22, v26) || *(_DWORD *)((char *)v22 + v93 + 240) < (int)v20 )
          {
            v15 = v224;
LABEL_223:
            v230 = ++v26;
            goto LABEL_29;
          }
          DeviceFromName = gpGraphicsDeviceList;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0
                && *((_DWORD *)DeviceFromName + 62) == *(_DWORD *)((char *)v22 + v93 + 64)
                && *((_DWORD *)DeviceFromName + 63) == *(_DWORD *)((char *)v22 + v93 + 68)
                && *((_DWORD *)DeviceFromName + 64) == *(_DWORD *)((char *)v22 + v93 + 72) )
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
        for ( i = (int)v20; DeviceFromName && i != cx; ++i )
          DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 16);
        v239.cx = ++cx;
        if ( gbBaseVideo != (_DWORD)v20 && DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x2800000) == 0 )
          goto LABEL_28;
LABEL_15:
        if ( v23 == 4 )
        {
          if ( v28 )
          {
            v163 = WdLogNewEntry5_WdAssertion(v15, v18, v19, v21);
            WdLogEvent5_WdAssertion(v163);
            v20 = 0LL;
          }
LABEL_120:
          if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 41) & 1) == 0 )
          {
            DisplayDriverNames = DrvGetDisplayDriverNames((__int64)DeviceFromName);
            v20 = 0LL;
            v98 = (struct _DRV_NAMES *)DisplayDriverNames;
            if ( !DisplayDriverNames )
              goto LABEL_132;
            v99 = *((unsigned __int16 *)v22 + 10);
            if ( v26 >= (unsigned int)v99 )
            {
              v164 = WdLogNewEntry5_WdAssertion(v99, v95, v96, v97);
              WdLogEvent5_WdAssertion(v164);
            }
            v100 = 0x1000000000LL;
            v101 = 272LL * v26;
            if ( (*(_QWORD *)((_BYTE *)v22 + v101 + 48) & 0x1000000000LL) != 0 )
            {
              v165 = WdLogNewEntry5_WdAssertion(0x1000000000LL, v95, v96, v97);
              WdLogEvent5_WdAssertion(v165);
            }
            if ( !*(_QWORD *)((char *)v22 + v101 + 272) )
            {
              v166 = WdLogNewEntry5_WdAssertion(v100, v95, v96, v97);
              WdLogEvent5_WdAssertion(v166);
            }
            v102 = gdmLogPixels;
            if ( !gdmLogPixels )
            {
              v102 = 0;
              v227 = 0;
              if ( qword_1C0258760 )
              {
                qword_1C0258760(1LL, &v227);
                v102 = v227;
              }
              gdmLogPixels = v102;
            }
            *(_WORD *)(*(_QWORD *)((char *)v22 + v101 + 272) + 166LL) = v102;
            DriverAccelerationsLevel = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            DriverCapableOverRide = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
            v28 = hCreateHDEV(
                    (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                    v98,
                    *(struct _devicemodeW **)((char *)v22 + v101 + 272),
                    a3,
                    DriverCapableOverRide,
                    DriverAccelerationsLevel,
                    v234,
                    (a4 >> 2) & 1,
                    1u,
                    &v235);
            Win32FreePool((__int64)v98, v105, v106);
            v20 = 0LL;
            if ( v28 )
            {
              v15 = *(unsigned int *)((char *)v22 + v101 + 236);
              v26 = v230;
              *((_DWORD *)v28 + 661) = v15;
LABEL_132:
              if ( v28 )
              {
LABEL_133:
                v230 = ++v26;
                goto LABEL_134;
              }
            }
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2);
            v26 = v230;
            v20 = 0LL;
          }
          if ( v28 )
            goto LABEL_133;
          v92 = v26;
LABEL_232:
          if ( !IsPrimaryPathInCloneGroup(v22, v26) || *((_DWORD *)v22 + 68 * v92 + 60) < (int)v20 )
          {
            v171 = WdLogNewEntry5_WdAssertion(v168, v167, v169, v170);
            WdLogEvent5_WdAssertion(v171);
            v20 = 0LL;
          }
          v15 = (unsigned __int16)v20;
          if ( (unsigned __int16)v20 < *((_WORD *)v22 + 10) )
          {
            do
            {
              v172 = 272LL * (unsigned __int16)v15;
              if ( *(_DWORD *)((char *)v22 + v172 + 232) == *((_DWORD *)v22 + 68 * v92 + 58) )
                *(_DWORD *)((char *)v22 + v172 + 240) = -1073741823;
              LOWORD(v15) = v15 + 1;
            }
            while ( (unsigned __int16)v15 < *((_WORD *)v22 + 10) );
          }
          goto LABEL_133;
        }
        if ( !DeviceFromName )
          goto LABEL_33;
        if ( (*((_DWORD *)DeviceFromName + 41) & 1) != 0 )
          goto LABEL_28;
        if ( (_DWORD)v21 == -1 )
        {
          PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          LODWORD(v20) = 0;
        }
        if ( v28 )
        {
LABEL_135:
          v107 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v107);
          v108 = *((_DWORD *)DeviceFromName + 40);
          v20 = 0LL;
          v231 = 1;
          if ( v237 )
            v109 = v108 | 4;
          else
            v109 = v108 & 0xFFFFFFFB;
          *((_DWORD *)DeviceFromName + 40) = v109;
          v110 = v235;
          if ( !v235 )
          {
            if ( a5 )
            {
              v111 = *((_DWORD *)a5 + 5);
              if ( v111 )
              {
                v112 = (HDEV *)((char *)a5 + 40);
                v113 = v111;
                do
                {
                  v114 = *v112;
                  v112 += 7;
                  if ( DeviceFromName == *((wchar_t **)v114 + 322) )
                    v110 = v114;
                  v235 = v110;
                  --v113;
                }
                while ( v113 );
              }
            }
          }
          *(_QWORD *)(56LL * *(unsigned int *)(v16 + 20) + v16 + 40) = v28;
          *(_QWORD *)(56LL * *(unsigned int *)(v16 + 20) + v16 + 48) = v235;
          v115 = *(_DWORD *)(v16 + 20);
          if ( v115 + 2 >= v115 )
          {
            v116 = (unsigned int *)v16;
            *(_DWORD *)(v16 + 20) = v115 + 1;
            v117 = 96LL * (v115 + 2);
            if ( v117 > 0xFFFFFFFF )
            {
              v16 = 0LL;
            }
            else
            {
              v118 = PALLOCMEM2((unsigned int)v117, 0x73726447u, 1);
              v20 = 0LL;
              v16 = (__int64)v118;
            }
            if ( !v16 )
            {
              v13 = a5;
              v24 = -1073741670;
              v15 = v224;
              v16 = (__int64)v116;
              v223 = -1073741670;
              goto LABEL_30;
            }
            memmove((void *)v16, v116, 96LL * v116[5]);
            Win32FreePool((__int64)v116, v119, v120);
            v20 = 0LL;
          }
          goto LABEL_27;
        }
        if ( gForceDisconnect != (_DWORD)v20 || v23 == 3 )
          v31 = -1;
        else
          v31 = gProtocolType;
        PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)DeviceFromName, v31, &v237, &v233);
        v20 = 0LL;
        if ( !PrimaryAttachFlags )
          goto LABEL_33;
        if ( v23 == 1 || v23 == 3 )
        {
          if ( !v233 )
            goto LABEL_27;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
          {
            v76 = v226;
          }
          else
          {
            if ( !v226 )
              goto LABEL_96;
            v76 = 0;
          }
          v77 = v76 == 0;
        }
        else
        {
          if ( v23 != 2 )
          {
            v174 = WdLogNewEntry5_WdAssertion(v15, v18, v19, v33);
            WdLogEvent5_WdAssertion(v174);
            v20 = 0LL;
            if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || v231 )
              goto LABEL_27;
            goto LABEL_96;
          }
          v173 = *((_DWORD *)DeviceFromName + 40);
          if ( (v173 & 8) == 0 )
          {
            if ( (v173 & 0x2000000) != 0 || v231 || gProtocolType == -1 )
              goto LABEL_27;
            goto LABEL_96;
          }
          if ( !v233 )
            goto LABEL_27;
          v77 = v226 == 0;
        }
        if ( v77 )
          goto LABEL_27;
LABEL_96:
        v78 = DrvGetDisplayDriverNames((__int64)DeviceFromName);
        v20 = 0LL;
        v79 = (struct _DRV_NAMES *)v78;
        if ( !v78 )
          goto LABEL_27;
        v80 = *((_DWORD *)DeviceFromName + 40);
        v225 = 0LL;
        v227 = 0;
        if ( (v80 & 8) != 0 )
        {
          v81 = 4;
          v82 = 0;
          v83 = 0;
        }
        else
        {
          v81 = 1;
          v82 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v83 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        }
        if ( a2 )
        {
          v85 = a2;
        }
        else
        {
          v84 = v232;
          memset(v232, 0, sizeof(struct _devicemodeW));
          v85 = v84;
          v84->dmSize = 220;
        }
        v86 = DrvProbeAndCaptureDevmode(
                (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                &v225,
                &v227,
                0LL,
                v85,
                0,
                PruneFlag,
                a7,
                v228,
                0LL);
        if ( v86 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4);
LABEL_104:
          v88 = a4;
          v28 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  v79,
                  v225,
                  a3,
                  v82,
                  v83,
                  v234,
                  (a4 >> 2) & 1,
                  v81,
                  &v235);
          if ( !v28 && (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
          goto LABEL_105;
        }
        if ( v86 == -1073741776 )
        {
          v175 = *(struct _devicemodeW **)(*(_QWORD *)(v16 + 40) + 2592LL);
          if ( v225 && v225 != v232 )
          {
            Win32FreePool((__int64)v225, 0LL, v87);
            v225 = 0LL;
          }
          v86 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v225,
                  &v227,
                  0LL,
                  v175,
                  0,
                  PruneFlag,
                  a7,
                  v228,
                  0LL);
        }
        if ( v86 >= 0 )
          goto LABEL_104;
        DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL);
        v28 = (HDEV)Buf2;
        v88 = a4;
        if ( (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
          gulDriverFailureReason = 4;
LABEL_105:
        v91 = a2;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || a2 )
          goto LABEL_284;
        if ( !v28 )
        {
          DrvLogDisplayDriverEvent(4);
          v178 = v225;
          if ( v225 )
          {
            if ( v225->dmBitsPerPel == 4 )
            {
              DrvLogDisplayDriverEvent(5);
              v178 = v225;
            }
            if ( v178 != v232 )
            {
              Win32FreePool((__int64)v178, v176, v177);
              v225 = 0LL;
            }
          }
          memset(v232, 0, sizeof(struct _devicemodeW));
          v179 = v232;
          v232->dmSize = 220;
          if ( (int)DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                      &v225,
                      &v227,
                      0LL,
                      v179,
                      1,
                      PruneFlag,
                      a7,
                      v228,
                      0LL) < 0
            || (v180 = (v88 >> 2) & 1,
                (v28 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                         v79,
                         v225,
                         a3,
                         v82,
                         v83,
                         v234,
                         v180,
                         1u,
                         &v235)) != 0LL) )
          {
LABEL_279:
            v183 = v225;
          }
          else
          {
            v183 = v225;
            if ( v225->dmPelsWidth != 640 || v225->dmPelsHeight != 480 || v225->dmBitsPerPel != 4 )
            {
              if ( v225 != v232 )
              {
                Win32FreePool((__int64)v225, v181, v182);
                v225 = 0LL;
              }
              memset(v232, 0, sizeof(struct _devicemodeW));
              v184 = v232;
              v232->dmSize = 220;
              v185 = v228;
              v184->dmBitsPerPel = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0 ? 32 : 4;
              v222 = a7;
              v220 = PruneFlag;
              v184->dmPelsWidth = 640;
              v184->dmPelsHeight = 480;
              v184->dmFields = 1835008;
              if ( (int)DrvProbeAndCaptureDevmode(
                          (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                          &v225,
                          &v227,
                          0LL,
                          v184,
                          0,
                          v220,
                          v222,
                          v185,
                          0LL) >= 0 )
                v28 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        v79,
                        v225,
                        a3,
                        v82,
                        v83,
                        v234,
                        v180,
                        1u,
                        &v235);
              goto LABEL_279;
            }
          }
          if ( v183 )
          {
            v186 = v28 != 0LL;
          }
          else
          {
            v183 = v232;
            v186 = 2LL;
          }
          DrvDxgkLogCodePointPacket(26LL, v186, v183->dmPelsWidth);
          v91 = 0LL;
LABEL_284:
          if ( !v28 && !v91 )
          {
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2);
          }
        }
        if ( v225 && v225 != v232 )
          Win32FreePool((__int64)v225, v89, v90);
        Win32FreePool((__int64)v79, v89, v90);
        v26 = v230;
        v20 = 0LL;
LABEL_134:
        if ( v28 )
          goto LABEL_135;
LABEL_27:
        v15 = v224;
LABEL_28:
        v13 = a5;
LABEL_29:
        v24 = v223;
LABEL_30:
        v23 = v236;
        v18 = 0x1000000000LL;
        v22 = a9;
        cx = v239.cx;
        v19 = (__int64)v241;
        v21 = (unsigned int)a6;
        if ( !(_DWORD)v15 )
        {
          v27 = v24 < 0;
          break;
        }
      }
      if ( v27 )
        goto LABEL_291;
LABEL_33:
      if ( v23 == 4 )
      {
        if ( v231 != (_DWORD)v20 )
        {
          v121 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v121);
          v23 = 1;
          LODWORD(v236) = 1;
          goto LABEL_152;
        }
        v189 = WdLogNewEntry5_WdError(v15, v18, v19);
        *(_QWORD *)(v189 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v189);
        goto LABEL_300;
      }
      if ( v231 != (_DWORD)v20 )
      {
        if ( v226 != (_DWORD)v20 )
        {
          v223 = (int)v20;
          goto LABEL_37;
        }
        v122 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v122);
LABEL_152:
        v13 = a5;
        v20 = 0LL;
        v21 = (unsigned int)a6;
        v226 = 1;
        continue;
      }
      break;
    }
    if ( v23 == 1 )
    {
      v187 = WdLogNewEntry5_WdTrace(v15);
      WdLogEvent5_WdTrace(v187);
      v20 = 0LL;
      v23 = 2;
      v228 = 0;
LABEL_298:
      v21 = (unsigned int)a6;
      v13 = a5;
      continue;
    }
    break;
  }
  if ( v23 == 2 && (unsigned int)UserIsWddmConnectedSession() )
  {
    v188 = WdLogNewEntry5_WdTrace(v15);
    WdLogEvent5_WdTrace(v188);
    v20 = 0LL;
    v23 = 3;
    goto LABEL_298;
  }
  if ( !cx )
  {
    v193 = WdLogNewEntry5_WdTrace(v15);
    WdLogEvent5_WdTrace(v193);
    goto LABEL_300;
  }
  v192 = WdLogNewEntry5_WdTrace(v15);
  WdLogEvent5_WdTrace(v192);
  v24 = -1073741204;
  v20 = 0LL;
  v223 = -1073741204;
LABEL_291:
  if ( v24 )
  {
LABEL_87:
    if ( v223 < 0 )
      goto LABEL_300;
    goto LABEL_88;
  }
LABEL_37:
  if ( (a4 & 2) != 0 )
    goto LABEL_87;
  v252 = (unsigned int)v20;
  v253 = (struct _MDEV *)v20;
  v34 = (unsigned int)v20;
  v35 = (unsigned int *)v20;
  v36 = (UNICODE_STRING *)Win32AllocPool(104LL, 0x6C6D6847u);
  String1a = v36;
  v37 = (MULTIDEVLOCKOBJ *)v36;
  if ( v36 )
  {
    *(_QWORD *)&v36->Length = 1LL;
    v36->Buffer = 0LL;
    *(_QWORD *)&v36[1].Length = 0LL;
  }
  else
  {
    v37 = 0LL;
    String1a = 0LL;
  }
  if ( v37 )
  {
    MULTIDEVLOCKOBJ::vInit(v37, (struct _MDEV *)v16);
    if ( (*(_DWORD *)v37 & 1) != 0 )
    {
      MULTIDEVLOCKOBJ::vLock(v37);
      v39 = *(_DWORD *)(v16 + 20);
      v40 = 0;
      if ( v39 )
      {
        do
        {
          v41 = *(unsigned int **)(*(_QWORD *)(56LL * v40 + v16 + 40) + 2576LL);
          v42 = v41[40];
          if ( (v42 & 8) != 0 )
          {
            if ( (v42 & 4) != 0 )
            {
              v42 &= ~4u;
              v41[40] = v42;
            }
            v44 = v42;
            v43 = v42;
          }
          else
          {
            v43 = v41[40];
            v44 = v41[40];
            if ( !v35 )
              v34 = v40;
          }
          if ( (v43 & 4) != 0 )
          {
            if ( v35 )
            {
              v223 = -1073741438;
              v41[40] = v44 & 0xFFFFFFFB;
            }
            else
            {
              v35 = v41;
              v34 = v40;
            }
          }
          v39 = *(_DWORD *)(v16 + 20);
          ++v40;
        }
        while ( v40 < v39 );
        v252 = v34;
        v253 = (struct _MDEV *)v35;
      }
      v45 = 16 * v39;
      Buf2 = PALLOCMEM2(v45, 0x73726447u, 0);
      v46 = Buf2;
      v47 = (struct D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(v45, 0x73726447u, 0);
      a9 = v47;
      v50 = (struct tagRECT *)v47;
      if ( v46 )
      {
        if ( v47 )
        {
          v51 = 0;
          v250 = 0;
          v52 = 0;
          if ( *(_DWORD *)(v16 + 20) )
          {
            do
            {
              v53 = 2LL * v52;
              v54 = *(_QWORD *)(56LL * v52 + v16 + 40);
              v55 = *(_DWORD **)(v54 + 2592);
              v46[2 * v53] = v55[19];
              v46[2 * v53 + 1] = v55[20];
              v46[2 * v53 + 2] = v55[19] + v55[43];
              v46[2 * v53 + 3] = v55[20] + v55[44];
              if ( (*(_DWORD *)(*(_QWORD *)(v54 + 2576) + 160LL) & 8) == 0 )
              {
                if ( !v35 && !v55[19] && !v55[20] )
                {
                  v34 = v52;
                  v35 = *(unsigned int **)(v54 + 2576);
                }
                ++v51;
              }
              ++v52;
            }
            while ( v52 < *(_DWORD *)(v16 + 20) );
            v37 = (MULTIDEVLOCKOBJ *)String1a;
            v250 = v51;
            v252 = v34;
            v253 = (struct _MDEV *)v35;
          }
          memmove(v50, v46, v45);
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
                if ( DpiSettingWithNoDefaultSupported >= 0 && qword_1C02572A8 )
                  qword_1C02572A8(0LL, &a6);
                v195 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v195 = 96;
                if ( v195 >= 0x1E0 )
                  LOWORD(v195) = 480;
                gdmLogPixels = v195;
              }
            }
          }
          v56 = v34;
          v57 = 0;
          v58 = *(_QWORD *)(56 * v56 + v16 + 40);
          v236 = v58;
          *(_DWORD *)(*(_QWORD *)(v58 + 2576) + 160LL) |= 4u;
          v59 = *(_DWORD *)(v16 + 20);
          if ( v59 )
          {
            do
            {
              v60 = *(_QWORD *)(56LL * v57 + v16 + 40);
              if ( (*(_DWORD *)(*(_QWORD *)(v60 + 2576) + 160LL) & 0x800000) != 0 )
              {
                v61 = 0;
                if ( v57 == v252 )
                  v61 = 32;
                *(_DWORD *)(v60 + 2548) = *(_DWORD *)(v60 + 2548) & 0xFFFFFFDF | v61;
                a6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))qword_1C0252A50)(
                       *(_QWORD *)(*(_QWORD *)(v60 + 2576) + 240LL),
                       *(unsigned int *)(*(_QWORD *)(v60 + 2576) + 256LL),
                       v60 + 2136);
                if ( a6 < 0 )
                {
                  v196 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62, v64);
                  v196[3] = a6;
                  v196[4] = *(_QWORD *)(*(_QWORD *)(v60 + 2576) + 240LL);
                  v196[5] = *(unsigned int *)(*(_QWORD *)(v60 + 2576) + 256LL);
                  WdLogEvent5_WdError(v196);
                }
              }
              v59 = *(_DWORD *)(v16 + 20);
              ++v57;
            }
            while ( v57 < v59 );
            v58 = v236;
            v35 = (unsigned int *)v253;
            v37 = (MULTIDEVLOCKOBJ *)String1a;
            v50 = (struct tagRECT *)a9;
          }
          v65 = 0;
          if ( !gDrvDpiAdjusted )
          {
            gDrvDpiWin8Style = 0;
            a6 = 0;
            if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
            {
              v123 = *(_DWORD *)(v58 + 3552);
              if ( v123 )
              {
                v124 = (96 * HIWORD(v123) + 50) / 0x64u;
              }
              else
              {
                if ( wcsncmp(*((const wchar_t **)v35 + 25), L"WORKERDD", v35[66])
                  && wcsncmp(*((const wchar_t **)v35 + 25), L"TSDDD", v35[66]) )
                {
                  gDrvDpiWin8Style = 1;
                }
                if ( qword_1C0258760 )
                  qword_1C0258760(2LL, &a6);
                v124 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v124 = 96;
                if ( v124 >= 0x1E0 )
                  v124 = 480;
                a6 = v124;
              }
              gdmLogPixels = v124;
              v125 = 0;
              v59 = *(_DWORD *)(v16 + 20);
              if ( v59 )
              {
                do
                {
                  v126 = gdmLogPixels;
                  v127 = v125++;
                  v128 = *(_QWORD *)(56 * v127 + v16 + 40);
                  *(_DWORD *)(v128 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v128 + 2176) = v126;
                  *(_WORD *)(*(_QWORD *)(v128 + 2592) + 166LL) = gdmLogPixels;
                  v59 = *(_DWORD *)(v16 + 20);
                }
                while ( v125 < v59 );
              }
            }
            else
            {
              v129 = (96 * *(_DWORD *)(v58 + 2468) + 50) / 0x64u;
              if ( (_WORD)v129 && qword_1C0258780 )
                qword_1C0258780(1LL, (unsigned __int16)v129);
              if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
                GetWin8StyleDpiSettingFromRegistry();
              if ( gDrvDpiWin8Style )
              {
                if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 && qword_1C02572A8 )
                  qword_1C02572A8(0LL, &a6);
                v131 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v131 = 96;
                if ( v131 >= 0x1E0 )
                  v131 = 480;
                a6 = v131;
              }
              else
              {
                v130 = *(_DWORD *)(v58 + 2464);
                if ( v130 )
                  v131 = (96 * v130 + 50) / 0x64u;
                else
                  LOWORD(v131) = 96;
              }
              gdmLogPixels = v131;
              v132 = 0;
              v59 = *(_DWORD *)(v16 + 20);
              if ( v59 )
              {
                do
                {
                  v133 = gdmLogPixels;
                  v134 = *(_QWORD *)(56LL * v132 + v16 + 40);
                  v135 = *(_QWORD *)(v134 + 2592);
                  *(_DWORD *)(v134 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v134 + 2176) = v133;
                  *(_WORD *)(v135 + 166) = gdmLogPixels;
                  if ( gDrvDpiWin8Style )
                  {
                    v197 = 100 * gdmLogPixels;
                    *(_DWORD *)(v134 + 2540) = 1234568;
                    *(_DWORD *)(v134 + 2464) = (v197 + 48) / 0x60u;
                  }
                  v59 = *(_DWORD *)(v16 + 20);
                  ++v132;
                }
                while ( v132 < v59 );
              }
            }
            gDrvDpiAdjusted = 1;
          }
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
          {
            v254 = 1;
            v136 = 1;
            if ( v59 )
            {
              do
              {
                v137 = *(_QWORD *)(56LL * v65 + v16 + 40);
                v138 = *(_DWORD *)(v137 + 3552);
                v139 = ((*(_DWORD *)(*(_QWORD *)(v137 + 2592) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                v140 = *(_DWORD *)(v137 + 2148);
                LOBYTE(a6) = v139;
                v141 = v140 / 0x3E8;
                v142 = *(_DWORD *)(v137 + 2144) / 0x3E8u;
                if ( v139 )
                {
                  v142 = v140 / 0x3E8;
                  v141 = *(_DWORD *)(v137 + 2144) / 0x3E8u;
                }
                v143 = *(_DWORD *)(v137 + 2156);
                v241 = (struct tagSIZE)__PAIR64__(v141, v142);
                v144 = *(_DWORD *)(v137 + 2152);
                v239 = v241;
                v145 = v144;
                if ( v139 )
                  v145 = v143;
                v242[0] = 1;
                if ( v139 )
                  v143 = v144;
                v225 = (struct _devicemodeW *)__PAIR64__(v143, v145);
                v240 = (struct tagSIZE)__PAIR64__(v143, v145);
                v243 = v244;
                *(_OWORD *)&v244[0].cx = 0LL;
                v242[1] = 32;
                v245 = 0LL;
                if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v242) < 0 )
                {
                  v198 = WdLogNewEntry5_WdAssertion(v147, v146, v148, v149);
                  WdLogEvent5_WdAssertion(v198);
                }
                v221 = (struct _DPI_INFORMATION *)(v137 + 2456);
                if ( v138 )
                {
                  FillDpiInfo(&v239, &v240, (struct tagSIZE)v244, v149, 0, HIWORD(v138), v219, v221);
                  *(_DWORD *)(v137 + 2548) |= 0x200u;
                  v136 = v254;
                }
                else
                {
                  *(_DWORD *)(v137 + 2548) &= ~0x200u;
                  v136 = 0;
                  v254 = 0;
                  FillDpiInfo(&v239, &v240, (struct tagSIZE)v244, v149, gdmLogPixels, 0, v219, v221);
                }
                GetRemoteScaleOverrideTestHook(
                  (const unsigned __int16 *)(*(_QWORD *)(v137 + 2576) + 64LL),
                  v150,
                  (struct _DPI_INFORMATION *)(v137 + 2456));
                ++v65;
                *(_DWORD *)(v137 + 2548) = *(_DWORD *)(v137 + 2548) & 0xFFFFFF7F | ((unsigned __int8)a6 << 7);
              }
              while ( v65 < *(_DWORD *)(v16 + 20) );
              v58 = v236;
              v50 = (struct tagRECT *)a9;
            }
            UserSetScaleFactorsFromRemoteMetric(v136);
            v240.cx = 1;
          }
          else
          {
            *((_DWORD *)gpsi + 559) &= ~0x40u;
          }
          gdmLogPixelsOfPrimary = (96 * *(_DWORD *)(v58 + 2468) + 50) / 0x64u;
          AlignRects(v50, v250);
          v46 = Buf2;
          if ( memcmp(v50, Buf2, 16LL * v250) )
          {
            v199 = WdLogNewEntry5_WdWarning(v67, v66, v68);
            WdLogEvent5_WdWarning(v199);
          }
          v69 = 0;
          if ( *(_DWORD *)(v16 + 20) )
          {
            do
            {
              v70 = 56LL * v69;
              v71 = *(_QWORD *)(v70 + v16 + 40);
              *(_QWORD *)(v71 + 2584) = *(_QWORD *)&v50[v69].left;
              v72 = *(void (__fastcall **)(__int64, __int64))(v71 + 3384);
              if ( v72 )
                v72((*(_QWORD *)(v71 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v71 + 2552) != 0LL), 2LL);
              v73 = v50[v69++];
              *(struct tagRECT *)(v70 + v16 + 56) = v73;
              *(_DWORD *)(v70 + v16 + 72) = *(_DWORD *)(v71 + 2464);
            }
            while ( v69 < *(_DWORD *)(v16 + 20) );
            v37 = (MULTIDEVLOCKOBJ *)String1a;
            v46 = Buf2;
          }
          if ( (unsigned int)bUniformSpaceDpiMode() )
          {
            v200 = PALLOCMEM2((unsigned int)(4 * *(_DWORD *)(v16 + 20)), 0x73726447u, 0);
            if ( v200 )
            {
              v201 = *(_DWORD *)(v16 + 20);
              v202 = 0;
              if ( v201 )
              {
                do
                {
                  v200[v202] = v202;
                  ++v202;
                  v201 = *(_DWORD *)(v16 + 20);
                }
                while ( v202 < v201 );
                v37 = (MULTIDEVLOCKOBJ *)String1a;
              }
              do
              {
                v203 = 0;
                v204 = 0;
                if ( v201 == 1 )
                {
                  v201 = *(_DWORD *)(v16 + 20);
                }
                else
                {
                  do
                  {
                    v205 = (unsigned int)(v204 + 1);
                    v206 = (unsigned int)v200[v205];
                    v207 = (unsigned int)v200[v204];
                    if ( *(_DWORD *)(56 * (v207 + 1) + v16) > *(_DWORD *)(56 * (v206 + 1) + v16) )
                    {
                      v200[v204] = v206;
                      v203 = 1;
                      v200[v205] = v207;
                    }
                    v201 = *(_DWORD *)(v16 + 20);
                    ++v204;
                  }
                  while ( (unsigned int)v205 < v201 - 1 );
                }
              }
              while ( v203 );
              v50 = (struct tagRECT *)a9;
              v208 = v201 - 1;
              LODWORD(v209) = 0;
              v210 = 0LL;
              if ( v201 == 1 )
              {
LABEL_352:
                v215 = &v200[(unsigned int)v209];
                MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, *v215, 0xFFFFFFFF, 0, Src);
                v212 = (unsigned int)v209;
                if ( (unsigned int)v209 < *(_DWORD *)(v16 + 20) - 1 )
                {
                  do
                  {
                    v216 = (unsigned int)(v212 + 1);
                    MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, v200[v216], v200[(unsigned int)v212], 1, Srca);
                    v212 = (unsigned int)v216;
                  }
                  while ( (unsigned int)v216 < *(_DWORD *)(v16 + 20) - 1 );
                  v50 = (struct tagRECT *)a9;
                }
                while ( (_DWORD)v209 )
                {
                  v209 = (unsigned int)(v209 - 1);
                  MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, v200[v209], *v215--, 0, Srca);
                }
                *(_DWORD *)(v16 + 16) |= 2u;
                *(_DWORD *)(v16 + 32) = 96;
                gbUniformSpaceDpiMode = 1;
              }
              else
              {
                while ( 1 )
                {
                  v211 = (unsigned int)(v210 + 1);
                  v212 = 56 * ((unsigned int)v200[(unsigned int)v210] + 1LL);
                  v213 = 56 * ((unsigned int)v200[v211] + 1LL);
                  v214 = *(_DWORD *)(v213 + v16);
                  if ( *(_DWORD *)(v212 + v16 + 8) != v214 )
                    break;
                  if ( *(_DWORD *)(v212 + v16) || *(_DWORD *)(v212 + v16 + 4) )
                  {
                    if ( !v214 && !*(_DWORD *)(v213 + v16 + 4) )
                      LODWORD(v209) = v210 + 1;
                  }
                  else
                  {
                    LODWORD(v209) = v210;
                  }
                  v210 = (unsigned int)v211;
                  if ( (unsigned int)v211 >= v208 )
                    goto LABEL_352;
                }
              }
              Win32FreePool((__int64)v200, v210, v212);
              v46 = Buf2;
            }
          }
          else
          {
            gbUniformSpaceDpiMode = 0;
          }
        }
        Win32FreePool((__int64)v46, v48, v49);
      }
      if ( v50 )
        Win32FreePool((__int64)v50, v48, v49);
      MULTIDEVLOCKOBJ::vUnlock(v37);
      if ( v240.cx )
        ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    }
    MULTIDEVLOCKOBJ::`scalar deleting destructor'(v37, v38);
    goto LABEL_87;
  }
LABEL_300:
  if ( v16 )
  {
    DrvBackoutMDEV((struct _MDEV *)v16, v18);
    Win32FreePool(v16, v190, v191);
    v16 = 0LL;
  }
LABEL_88:
  if ( v232 )
    Win32FreePool((__int64)v232, v18, v19);
LABEL_90:
  v74 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v74 + 24) = v16;
  WdLogEvent5_WdTrace(v74);
  return (struct _MDEV *)v16;
}

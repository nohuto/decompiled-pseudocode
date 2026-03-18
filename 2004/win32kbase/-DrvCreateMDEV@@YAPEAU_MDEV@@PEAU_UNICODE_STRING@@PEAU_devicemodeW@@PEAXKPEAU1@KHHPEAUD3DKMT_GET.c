/*
 * XREFs of ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4
 * Callers:
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C00055C8 (IsGetWin8StyleDpiSettingFromRegistrySupported.c)
 *     GetWin8StyleDpiSettingFromRegistry @ 0x1C00055F4 (GetWin8StyleDpiSettingFromRegistry.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00343D4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C005ADDC (-IsPrimaryPathInCloneGroup@@YAEPEBUD3DKMT_GETPATHSMODALITY@@I@Z.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005EB84 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0086C54 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     DrvGetDeviceFromName @ 0x1C00A5CD0 (DrvGetDeviceFromName.c)
 *     ?DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z @ 0x1C00B1910 (-DxgkEngQueryWin32Info@@YAJPEAU_DXGK_QUERY_WIN32_INFO@@@Z.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C00B3D60 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserIsWddmConnectedSession @ 0x1C00B4A70 (UserIsWddmConnectedSession.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00B6F3C (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C00B7E84 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B7EB4 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B7FCC (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUniformSpaceDpiMode@@YAHXZ @ 0x1C00B80BC (-bUniformSpaceDpiMode@@YAHXZ.c)
 *     AlignRects @ 0x1C00B8208 (AlignRects.c)
 *     UserSetScaleFactorsFromRemoteMetric @ 0x1C00B828C (UserSetScaleFactorsFromRemoteMetric.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00B82B0 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B8BD4 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B8CF4 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverNames @ 0x1C00B8E90 (DrvGetDisplayDriverNames.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00BAB50 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8880 (DrvDxgkLogCodePointPacket.c)
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00CA8A0 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00CB58C (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBCE8 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     wcsncmp @ 0x1C00CCEEC (wcsncmp.c)
 *     memcmp @ 0x1C00D28C0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0147510 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z @ 0x1C0149194 (-MapMonitorToUnifromSpaceInStripe@@YAXPEAU_MDEV@@KKHK@Z.c)
 *     IsGetDpiSettingWithNoDefaultSupported @ 0x1C01F7850 (IsGetDpiSettingWithNoDefaultSupported.c)
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
  __int64 v63; // r8
  unsigned int v64; // r14d
  __int64 v65; // r12
  __int64 v66; // rbx
  void (__fastcall *v67)(__int64, __int64); // rax
  struct tagRECT v68; // xmm0
  __int64 v69; // rax
  int v71; // eax
  bool v72; // zf
  __int64 v73; // rax
  struct _DRV_NAMES *v74; // r13
  int v75; // ecx
  unsigned int v76; // edi
  unsigned int v77; // r15d
  unsigned int v78; // r12d
  struct _devicemodeW *v79; // rbx
  struct _devicemodeW *v80; // rcx
  int v81; // eax
  unsigned int v82; // ebx
  struct _devicemodeW *v83; // rax
  __int64 v84; // rbx
  __int64 v85; // r10
  __int64 DisplayDriverNames; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
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
  void *v107; // rax
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
  unsigned int v126; // kr00_4
  unsigned int v127; // ecx
  unsigned int v128; // eax
  __int64 v129; // rdx
  unsigned int v130; // ecx
  unsigned int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  unsigned int v135; // r9d
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  int v138; // ecx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v139; // rdx
  int v140; // r8d
  __int64 v141; // rcx
  int v142; // r8d
  __int64 v143; // rcx
  int v144; // r8d
  struct _ERESOURCE *v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rcx
  unsigned int v148; // eax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // rax
  __int64 v157; // rdx
  int v158; // eax
  __int64 v159; // rax
  struct _devicemodeW *v160; // rbx
  struct _devicemodeW *v161; // rcx
  struct _devicemodeW *v162; // rcx
  int v163; // ebx
  struct _devicemodeW *v164; // rax
  struct _devicemodeW *v165; // rdx
  int v166; // eax
  __int64 v167; // rdx
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  int DpiSettingWithNoDefaultSupported; // eax
  unsigned int v174; // eax
  _QWORD *v175; // rax
  int v176; // edx
  __int64 v177; // rax
  __int64 v178; // rax
  _DWORD *v179; // r14
  unsigned int v180; // ecx
  unsigned int v181; // eax
  int v182; // r8d
  int v183; // edx
  __int64 v184; // rdi
  __int64 v185; // r10
  __int64 v186; // rbx
  unsigned int v187; // r10d
  __int64 v188; // rdi
  int v189; // edx
  __int64 v190; // r9
  __int64 v191; // r8
  __int64 v192; // rax
  int v193; // ecx
  unsigned int *v194; // r12
  int v195; // r8d
  __int64 v196; // rbx
  unsigned int Src; // [rsp+28h] [rbp-D1h]
  unsigned int Srca; // [rsp+28h] [rbp-D1h]
  int v199; // [rsp+38h] [rbp-C1h]
  int v200; // [rsp+38h] [rbp-C1h]
  struct _DPI_INFORMATION *v201; // [rsp+40h] [rbp-B9h]
  int v202; // [rsp+40h] [rbp-B9h]
  int v203; // [rsp+58h] [rbp-A1h]
  unsigned int v204; // [rsp+5Ch] [rbp-9Dh]
  struct _devicemodeW *v205; // [rsp+60h] [rbp-99h] BYREF
  int v206; // [rsp+68h] [rbp-91h]
  int v207; // [rsp+6Ch] [rbp-8Dh] BYREF
  int v208; // [rsp+70h] [rbp-89h]
  int PruneFlag; // [rsp+74h] [rbp-85h]
  unsigned int v210; // [rsp+78h] [rbp-81h]
  int v211; // [rsp+7Ch] [rbp-7Dh]
  struct _devicemodeW *v212; // [rsp+80h] [rbp-79h]
  unsigned int v213; // [rsp+88h] [rbp-71h] BYREF
  int v214; // [rsp+8Ch] [rbp-6Dh]
  HDEV v215; // [rsp+90h] [rbp-69h] BYREF
  __int64 v216; // [rsp+98h] [rbp-61h]
  unsigned int v217; // [rsp+A0h] [rbp-59h] BYREF
  void *Buf2; // [rsp+A8h] [rbp-51h]
  struct tagSIZE v219; // [rsp+B0h] [rbp-49h] BYREF
  struct tagSIZE v220; // [rsp+B8h] [rbp-41h] BYREF
  struct tagSIZE v221; // [rsp+C0h] [rbp-39h]
  _DWORD v222[2]; // [rsp+C8h] [rbp-31h] BYREF
  struct tagSIZE *v223; // [rsp+D0h] [rbp-29h]
  struct tagSIZE v224[2]; // [rsp+D8h] [rbp-21h] BYREF
  __int128 v225; // [rsp+E8h] [rbp-11h]
  PCUNICODE_STRING String1a; // [rsp+148h] [rbp+4Fh]
  unsigned int v230; // [rsp+158h] [rbp+5Fh]
  unsigned int v232; // [rsp+160h] [rbp+67h]
  struct _MDEV *v233; // [rsp+168h] [rbp+6Fh]
  int v234; // [rsp+168h] [rbp+6Fh]

  v9 = a4;
  v203 = 0;
  v206 = 0;
  v211 = 0;
  v220.cx = 0;
  v214 = a4 & 1;
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
  v19 = 0LL;
  v212 = v17;
  if ( !v17 )
    goto LABEL_300;
  v20 = a6;
  v21 = a9;
  v208 = a8;
  PruneFlag = a6 != 0;
  v22 = a9 != 0LL ? 4 : 1;
  while ( 2 )
  {
    LODWORD(v216) = v22;
    while ( 2 )
    {
      v23 = v203;
      v15 = 1LL;
      v204 = 1;
      v18 = 0x1000000000LL;
      v215 = 0LL;
      v24 = 0LL;
      v221 = 0LL;
      cx = 0;
      v219.cx = 0;
      v26 = 0;
      v213 = 0;
      v217 = 0;
      v210 = 0;
      while ( 1 )
      {
        v27 = v23 < 0;
        if ( v23 )
          break;
        v28 = v19;
        Buf2 = v19;
        v215 = v19;
        if ( a1 )
        {
          if ( !v24 )
          {
            DeviceFromName = DrvGetDeviceFromName(a1);
            v20 = a6;
            v221 = (struct tagSIZE)DeviceFromName;
            v18 = a5 != 0LL ? v204 : 0;
            v19 = 0LL;
            v204 = v18;
            v15 = (unsigned int)v18;
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
          v219.cx = cx;
          v28 = (HDEV)*((_QWORD *)v13 + 7 * v137 + 5);
          Buf2 = v28;
          DeviceFromName = (wchar_t *)*((_QWORD *)v28 + 322);
          if ( DeviceFromName == v24 )
            goto LABEL_27;
          v138 = v206 ^ 1;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) == 0 )
            v138 = v206;
          if ( v138 )
            goto LABEL_27;
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
          EngAcquireSemaphore(*((HSEMAPHORE *)v28 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6), 11);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          v139 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v28 + 443);
          ++*((_DWORD *)v28 + 3);
          ++*((_DWORD *)v28 + 2);
          TrackObjectReferenceIncrement(1u, v139);
          if ( ((_DWORD)v28[10] & 0x400) != 0 )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v140);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
              PsLeavePriorityRegion(v141);
            }
            DrvEnableDisplay(v28);
            EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v140);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v143);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemDevLock()", *((_QWORD *)v28 + 6), v142);
          v145 = (struct _ERESOURCE *)*((_QWORD *)v28 + 6);
          if ( v145 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v145);
            PsLeavePriorityRegion(v146);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v144);
          v19 = 0LL;
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v147);
            v19 = 0LL;
          }
          v15 = v204;
          v20 = a6;
          v148 = (*((_DWORD *)DeviceFromName + 40) >> 2) & 1;
          v213 = 1;
          v217 = v148;
          goto LABEL_15;
        }
LABEL_9:
        if ( v22 == 4 )
        {
          if ( v26 >= *((unsigned __int16 *)v21 + 10) )
            goto LABEL_33;
          v84 = v26;
          if ( (*((_QWORD *)v21 + 34 * v26 + 6) & 0x1000000000LL) != 0 )
            goto LABEL_223;
          if ( !IsPrimaryPathInCloneGroup(v21, v26) || *(_DWORD *)((char *)v21 + v85 + 240) < (int)v19 )
          {
            v15 = v204;
LABEL_223:
            v210 = ++v26;
            goto LABEL_29;
          }
          DeviceFromName = gpGraphicsDeviceList;
          if ( gpGraphicsDeviceList )
          {
            do
            {
              if ( (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0
                && *((_DWORD *)DeviceFromName + 62) == *(_DWORD *)((char *)v21 + v85 + 64)
                && *((_DWORD *)DeviceFromName + 63) == *(_DWORD *)((char *)v21 + v85 + 68)
                && *((_DWORD *)DeviceFromName + 64) == *(_DWORD *)((char *)v21 + v85 + 72) )
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
        v219.cx = ++cx;
        if ( gbBaseVideo != (_DWORD)v19 && DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x2800000) == 0 )
          goto LABEL_28;
LABEL_15:
        if ( v22 == 4 )
        {
          if ( v28 )
          {
            v149 = WdLogNewEntry5_WdAssertion(v15, v18, v24);
            WdLogEvent5_WdAssertion(v149);
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
              v150 = WdLogNewEntry5_WdAssertion(v90, v87, v88);
              WdLogEvent5_WdAssertion(v150);
            }
            v91 = 0x1000000000LL;
            v92 = 272LL * v26;
            if ( (*(_QWORD *)((_BYTE *)v21 + v92 + 48) & 0x1000000000LL) != 0 )
            {
              v151 = WdLogNewEntry5_WdAssertion(0x1000000000LL, v87, v88);
              WdLogEvent5_WdAssertion(v151);
            }
            if ( !*(_QWORD *)((char *)v21 + v92 + 272) )
            {
              v152 = WdLogNewEntry5_WdAssertion(v91, v87, v88);
              WdLogEvent5_WdAssertion(v152);
            }
            v93 = gdmLogPixels;
            if ( !gdmLogPixels )
            {
              v93 = 0;
              v207 = 0;
              if ( qword_1C02527A0 )
              {
                qword_1C02527A0(1LL, &v207);
                v93 = v207;
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
                    v214,
                    (a4 >> 2) & 1,
                    1u,
                    &v215);
            Win32FreePool((__int64)v89);
            v19 = 0LL;
            if ( v28 )
            {
              v15 = *(unsigned int *)((char *)v21 + v92 + 236);
              v26 = v210;
              *((_DWORD *)v28 + 661) = v15;
LABEL_132:
              if ( v28 )
              {
LABEL_133:
                v210 = ++v26;
                goto LABEL_134;
              }
            }
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2);
            v26 = v210;
            v19 = 0LL;
          }
          if ( v28 )
            goto LABEL_133;
          v84 = v26;
LABEL_232:
          if ( !IsPrimaryPathInCloneGroup(v21, v26) || *((_DWORD *)v21 + 68 * v84 + 60) < (int)v19 )
          {
            v156 = WdLogNewEntry5_WdAssertion(v154, v153, v155);
            WdLogEvent5_WdAssertion(v156);
            v19 = 0LL;
          }
          v15 = (unsigned __int16)v19;
          if ( (unsigned __int16)v19 < *((_WORD *)v21 + 10) )
          {
            do
            {
              v157 = 272LL * (unsigned __int16)v15;
              if ( *(_DWORD *)((char *)v21 + v157 + 232) == *((_DWORD *)v21 + 68 * v84 + 58) )
                *(_DWORD *)((char *)v21 + v157 + 240) = -1073741823;
              LOWORD(v15) = v15 + 1;
            }
            while ( (unsigned __int16)v15 < *((_WORD *)v21 + 10) );
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
          v96 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v96);
          v97 = *((_DWORD *)DeviceFromName + 40);
          v19 = 0LL;
          v211 = 1;
          if ( v217 )
            v98 = v97 | 4;
          else
            v98 = v97 & 0xFFFFFFFB;
          *((_DWORD *)DeviceFromName + 40) = v98;
          v99 = v215;
          if ( !v215 )
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
                  v215 = v99;
                  --v102;
                }
                while ( v102 );
              }
            }
          }
          *(_QWORD *)(56LL * *(unsigned int *)(v16 + 20) + v16 + 40) = v28;
          *(_QWORD *)(56LL * *(unsigned int *)(v16 + 20) + v16 + 48) = v215;
          v104 = *(_DWORD *)(v16 + 20);
          if ( v104 + 2 >= v104 )
          {
            v105 = (unsigned int *)v16;
            *(_DWORD *)(v16 + 20) = v104 + 1;
            v106 = 96LL * (v104 + 2);
            if ( v106 > 0xFFFFFFFF )
            {
              v16 = 0LL;
            }
            else
            {
              v107 = PALLOCMEM2((unsigned int)v106, 0x73726447u, 1);
              v19 = 0LL;
              v16 = (__int64)v107;
            }
            if ( !v16 )
            {
              v13 = a5;
              v23 = -1073741670;
              v15 = v204;
              v16 = (__int64)v105;
              v203 = -1073741670;
              goto LABEL_30;
            }
            memmove((void *)v16, v105, 96LL * v105[5]);
            Win32FreePool((__int64)v105);
            v19 = 0LL;
          }
          goto LABEL_27;
        }
        if ( gForceDisconnect != (_DWORD)v19 || v22 == 3 )
          v31 = -1;
        else
          v31 = gProtocolType;
        PrimaryAttachFlags = GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)DeviceFromName, v31, &v217, &v213);
        v19 = 0LL;
        if ( !PrimaryAttachFlags )
          goto LABEL_33;
        if ( v22 == 1 || v22 == 3 )
        {
          if ( !v213 )
            goto LABEL_27;
          if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 )
          {
            v71 = v206;
          }
          else
          {
            if ( !v206 )
              goto LABEL_96;
            v71 = 0;
          }
          v72 = v71 == 0;
        }
        else
        {
          if ( v22 != 2 )
          {
            v159 = WdLogNewEntry5_WdAssertion(v15, v18, v24);
            WdLogEvent5_WdAssertion(v159);
            v19 = 0LL;
            if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || v211 )
              goto LABEL_27;
            goto LABEL_96;
          }
          v158 = *((_DWORD *)DeviceFromName + 40);
          if ( (v158 & 8) == 0 )
          {
            if ( (v158 & 0x2000000) != 0 || v211 || gProtocolType == -1 )
              goto LABEL_27;
            goto LABEL_96;
          }
          if ( !v213 )
            goto LABEL_27;
          v72 = v206 == 0;
        }
        if ( v72 )
          goto LABEL_27;
LABEL_96:
        v73 = DrvGetDisplayDriverNames(DeviceFromName);
        v19 = 0LL;
        v74 = (struct _DRV_NAMES *)v73;
        if ( !v73 )
          goto LABEL_27;
        v75 = *((_DWORD *)DeviceFromName + 40);
        v205 = 0LL;
        v207 = 0;
        if ( (v75 & 8) != 0 )
        {
          v76 = 4;
          v77 = 0;
          v78 = 0;
        }
        else
        {
          v76 = 1;
          v77 = DrvGetDriverCapableOverRide((struct tagGRAPHICS_DEVICE *)DeviceFromName);
          v78 = DrvGetDriverAccelerationsLevel((struct tagGRAPHICS_DEVICE *)DeviceFromName);
        }
        if ( a2 )
        {
          v80 = a2;
        }
        else
        {
          v79 = v212;
          memset(v212, 0, sizeof(struct _devicemodeW));
          v80 = v79;
          v79->dmSize = 220;
        }
        v81 = DrvProbeAndCaptureDevmode(
                (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                &v205,
                &v207,
                0LL,
                v80,
                0,
                PruneFlag,
                a7,
                v208,
                0LL);
        if ( v81 == 1073741839 )
        {
          DrvLogDisplayDriverEvent(4);
LABEL_104:
          v82 = a4;
          v28 = hCreateHDEV(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  v74,
                  v205,
                  a3,
                  v77,
                  v78,
                  v214,
                  (a4 >> 2) & 1,
                  v76,
                  &v215);
          if ( !v28 && (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
            gulDriverFailureReason = 5;
          goto LABEL_105;
        }
        if ( v81 == -1073741776 )
        {
          v160 = *(struct _devicemodeW **)(*(_QWORD *)(v16 + 40) + 2592LL);
          if ( v205 && v205 != v212 )
          {
            Win32FreePool((__int64)v205);
            v205 = 0LL;
          }
          v81 = DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                  &v205,
                  &v207,
                  0LL,
                  v160,
                  0,
                  PruneFlag,
                  a7,
                  v208,
                  0LL);
        }
        if ( v81 >= 0 )
          goto LABEL_104;
        DrvDxgkLogCodePointPacket(58LL, 2LL, 0LL, 0LL);
        v28 = (HDEV)Buf2;
        v82 = a4;
        if ( (*((_DWORD *)DeviceFromName + 40) & 0x2000000) != 0 )
          gulDriverFailureReason = 4;
LABEL_105:
        v83 = a2;
        if ( (*((_DWORD *)DeviceFromName + 40) & 8) != 0 || a2 )
          goto LABEL_284;
        if ( !v28 )
        {
          DrvLogDisplayDriverEvent(4);
          v161 = v205;
          if ( v205 )
          {
            if ( v205->dmBitsPerPel == 4 )
            {
              DrvLogDisplayDriverEvent(5);
              v161 = v205;
            }
            if ( v161 != v212 )
            {
              Win32FreePool((__int64)v161);
              v205 = 0LL;
            }
          }
          memset(v212, 0, sizeof(struct _devicemodeW));
          v162 = v212;
          v212->dmSize = 220;
          if ( (int)DrvProbeAndCaptureDevmode(
                      (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                      &v205,
                      &v207,
                      0LL,
                      v162,
                      1,
                      PruneFlag,
                      a7,
                      v208,
                      0LL) < 0
            || (v163 = (v82 >> 2) & 1,
                (v28 = hCreateHDEV(
                         (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                         v74,
                         v205,
                         a3,
                         v77,
                         v78,
                         v214,
                         v163,
                         1u,
                         &v215)) != 0LL) )
          {
LABEL_279:
            v164 = v205;
          }
          else
          {
            v164 = v205;
            if ( v205->dmPelsWidth != 640 || v205->dmPelsHeight != 480 || v205->dmBitsPerPel != 4 )
            {
              if ( v205 != v212 )
              {
                Win32FreePool((__int64)v205);
                v205 = 0LL;
              }
              memset(v212, 0, sizeof(struct _devicemodeW));
              v165 = v212;
              v212->dmSize = 220;
              v166 = v208;
              v165->dmBitsPerPel = (*((_DWORD *)DeviceFromName + 40) & 0x800000) != 0 ? 32 : 4;
              v202 = a7;
              v200 = PruneFlag;
              v165->dmPelsWidth = 640;
              v165->dmPelsHeight = 480;
              v165->dmFields = 1835008;
              if ( (int)DrvProbeAndCaptureDevmode(
                          (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                          &v205,
                          &v207,
                          0LL,
                          v165,
                          0,
                          v200,
                          v202,
                          v166,
                          0LL) >= 0 )
                v28 = hCreateHDEV(
                        (struct tagGRAPHICS_DEVICE *)DeviceFromName,
                        v74,
                        v205,
                        a3,
                        v77,
                        v78,
                        v214,
                        v163,
                        1u,
                        &v215);
              goto LABEL_279;
            }
          }
          if ( v164 )
          {
            v167 = v28 != 0LL;
          }
          else
          {
            v164 = v212;
            v167 = 2LL;
          }
          DrvDxgkLogCodePointPacket(26LL, v167, v164->dmPelsWidth, v164->dmPelsHeight);
          v83 = 0LL;
LABEL_284:
          if ( !v28 && !v83 )
          {
            gpLastFailedPhysDisp = (__int64)DeviceFromName;
            DrvLogDisplayDriverEvent(2);
          }
        }
        if ( v205 && v205 != v212 )
          Win32FreePool((__int64)v205);
        Win32FreePool((__int64)v74);
        v26 = v210;
        v19 = 0LL;
LABEL_134:
        if ( v28 )
          goto LABEL_135;
LABEL_27:
        v15 = v204;
LABEL_28:
        v13 = a5;
LABEL_29:
        v23 = v203;
LABEL_30:
        v22 = v216;
        v18 = 0x1000000000LL;
        v21 = a9;
        cx = v219.cx;
        v24 = (wchar_t *)v221;
        v20 = a6;
        if ( !(_DWORD)v15 )
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
        if ( v211 != (_DWORD)v19 )
        {
          v108 = WdLogNewEntry5_WdTrace(v15);
          WdLogEvent5_WdTrace(v108);
          v22 = 1;
          LODWORD(v216) = 1;
          goto LABEL_152;
        }
        v170 = WdLogNewEntry5_WdError(v15, v18, v24);
        *(_QWORD *)(v170 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v170);
        goto LABEL_300;
      }
      if ( v211 != (_DWORD)v19 )
      {
        if ( v206 != (_DWORD)v19 )
        {
          v203 = (int)v19;
          goto LABEL_37;
        }
        v109 = WdLogNewEntry5_WdTrace(v15);
        WdLogEvent5_WdTrace(v109);
LABEL_152:
        v13 = a5;
        v19 = 0LL;
        v20 = a6;
        v206 = 1;
        continue;
      }
      break;
    }
    if ( v22 == 1 )
    {
      v168 = WdLogNewEntry5_WdTrace(v15);
      WdLogEvent5_WdTrace(v168);
      v19 = 0LL;
      v22 = 2;
      v208 = 0;
LABEL_298:
      v20 = a6;
      v13 = a5;
      continue;
    }
    break;
  }
  if ( v22 == 2 && (unsigned int)UserIsWddmConnectedSession() )
  {
    v169 = WdLogNewEntry5_WdTrace(v15);
    WdLogEvent5_WdTrace(v169);
    v19 = 0LL;
    v22 = 3;
    goto LABEL_298;
  }
  if ( !cx )
  {
    v172 = WdLogNewEntry5_WdTrace(v15);
    WdLogEvent5_WdTrace(v172);
    goto LABEL_300;
  }
  v171 = WdLogNewEntry5_WdTrace(v15);
  WdLogEvent5_WdTrace(v171);
  v23 = -1073741204;
  v19 = 0LL;
  v203 = -1073741204;
LABEL_291:
  if ( v23 )
  {
LABEL_87:
    if ( v203 < 0 )
      goto LABEL_300;
    goto LABEL_88;
  }
LABEL_37:
  if ( (a4 & 2) != 0 )
    goto LABEL_87;
  v232 = (unsigned int)v19;
  v233 = (struct _MDEV *)v19;
  v33 = (unsigned int)v19;
  v34 = (unsigned int *)v19;
  v35 = (UNICODE_STRING *)Win32AllocPool(104LL, 0x6C6D6847u);
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
    MULTIDEVLOCKOBJ::vInit(v36, (struct _MDEV *)v16);
    if ( (*(_DWORD *)v36 & 1) != 0 )
    {
      MULTIDEVLOCKOBJ::vLock(v36);
      v38 = *(_DWORD *)(v16 + 20);
      v39 = 0;
      if ( v38 )
      {
        do
        {
          v40 = *(unsigned int **)(*(_QWORD *)(56LL * v39 + v16 + 40) + 2576LL);
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
              v203 = -1073741438;
              v40[40] = v43 & 0xFFFFFFFB;
            }
            else
            {
              v34 = v40;
              v33 = v39;
            }
          }
          v38 = *(_DWORD *)(v16 + 20);
          ++v39;
        }
        while ( v39 < v38 );
        v232 = v33;
        v233 = (struct _MDEV *)v34;
      }
      v44 = 16 * v38;
      Buf2 = PALLOCMEM2(v44, 0x73726447u, 0);
      v45 = Buf2;
      v46 = (struct D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(v44, 0x73726447u, 0);
      a9 = v46;
      v47 = (struct tagRECT *)v46;
      if ( v45 )
      {
        if ( v46 )
        {
          v48 = 0;
          v230 = 0;
          v49 = 0;
          if ( *(_DWORD *)(v16 + 20) )
          {
            do
            {
              v50 = 2LL * v49;
              v51 = *(_QWORD *)(56LL * v49 + v16 + 40);
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
            while ( v49 < *(_DWORD *)(v16 + 20) );
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v230 = v48;
            v232 = v33;
            v233 = (struct _MDEV *)v34;
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
                if ( DpiSettingWithNoDefaultSupported >= 0 && qword_1C02512E8 )
                  qword_1C02512E8(0LL, &a6);
                v174 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v174 = 96;
                if ( v174 >= 0x1E0 )
                  LOWORD(v174) = 480;
                gdmLogPixels = v174;
              }
            }
          }
          v53 = v33;
          v54 = 0;
          v55 = *(_QWORD *)(56 * v53 + v16 + 40);
          v216 = v55;
          *(_DWORD *)(*(_QWORD *)(v55 + 2576) + 160LL) |= 4u;
          v56 = *(_DWORD *)(v16 + 20);
          if ( v56 )
          {
            do
            {
              v57 = *(_QWORD *)(56LL * v54 + v16 + 40);
              if ( (*(_DWORD *)(*(_QWORD *)(v57 + 2576) + 160LL) & 0x800000) != 0 )
              {
                v58 = 0;
                if ( v54 == v232 )
                  v58 = 32;
                *(_DWORD *)(v57 + 2548) = *(_DWORD *)(v57 + 2548) & 0xFFFFFFDF | v58;
                a6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))qword_1C024CA30)(
                       *(_QWORD *)(*(_QWORD *)(v57 + 2576) + 240LL),
                       *(unsigned int *)(*(_QWORD *)(v57 + 2576) + 256LL),
                       v57 + 2136);
                if ( a6 < 0 )
                {
                  v175 = (_QWORD *)WdLogNewEntry5_WdError(v60, v59, v61);
                  v175[3] = a6;
                  v175[4] = *(_QWORD *)(*(_QWORD *)(v57 + 2576) + 240LL);
                  v175[5] = *(unsigned int *)(*(_QWORD *)(v57 + 2576) + 256LL);
                  WdLogEvent5_WdError(v175);
                }
              }
              v56 = *(_DWORD *)(v16 + 20);
              ++v54;
            }
            while ( v54 < v56 );
            v55 = v216;
            v34 = (unsigned int *)v233;
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
                if ( qword_1C02527A0 )
                  qword_1C02527A0(2LL, &a6);
                v111 = a6;
                if ( (unsigned int)a6 <= 0x60 )
                  v111 = 96;
                if ( v111 >= 0x1E0 )
                  v111 = 480;
                a6 = v111;
              }
              gdmLogPixels = v111;
              v112 = 0;
              v56 = *(_DWORD *)(v16 + 20);
              if ( v56 )
              {
                do
                {
                  v113 = gdmLogPixels;
                  v114 = v112++;
                  v115 = *(_QWORD *)(56 * v114 + v16 + 40);
                  *(_DWORD *)(v115 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v115 + 2176) = v113;
                  *(_WORD *)(*(_QWORD *)(v115 + 2592) + 166LL) = gdmLogPixels;
                  v56 = *(_DWORD *)(v16 + 20);
                }
                while ( v112 < v56 );
              }
            }
            else
            {
              v116 = (96 * *(_DWORD *)(v55 + 2468) + 50) / 0x64u;
              if ( (_WORD)v116 && qword_1C02527C0 )
                qword_1C02527C0(1LL, (unsigned __int16)v116);
              if ( (int)IsGetWin8StyleDpiSettingFromRegistrySupported() >= 0 )
                GetWin8StyleDpiSettingFromRegistry();
              if ( gDrvDpiWin8Style )
              {
                if ( (int)IsGetDpiSettingWithNoDefaultSupported() >= 0 && qword_1C02512E8 )
                  qword_1C02512E8(0LL, &a6);
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
              v56 = *(_DWORD *)(v16 + 20);
              if ( v56 )
              {
                do
                {
                  v120 = gdmLogPixels;
                  v121 = *(_QWORD *)(56LL * v119 + v16 + 40);
                  v122 = *(_QWORD *)(v121 + 2592);
                  *(_DWORD *)(v121 + 2180) = gdmLogPixels;
                  *(_DWORD *)(v121 + 2176) = v120;
                  *(_WORD *)(v122 + 166) = gdmLogPixels;
                  if ( gDrvDpiWin8Style )
                  {
                    v176 = 100 * gdmLogPixels;
                    *(_DWORD *)(v121 + 2540) = 1234568;
                    *(_DWORD *)(v121 + 2464) = (v176 + 48) / 0x60u;
                  }
                  v56 = *(_DWORD *)(v16 + 20);
                  ++v119;
                }
                while ( v119 < v56 );
              }
            }
            gDrvDpiAdjusted = 1;
          }
          if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
          {
            v234 = 1;
            v123 = 1;
            if ( v56 )
            {
              do
              {
                v124 = *(_QWORD *)(56LL * v62 + v16 + 40);
                v125 = *(_DWORD *)(v124 + 3552);
                LOBYTE(v63) = ((*(_DWORD *)(*(_QWORD *)(v124 + 2592) + 84LL) - 1) & 0xFFFFFFFD) == 0;
                v126 = *(_DWORD *)(v124 + 2148);
                LOBYTE(a6) = v63;
                v127 = v126 / 0x3E8;
                v128 = *(_DWORD *)(v124 + 2144) / 0x3E8u;
                if ( (_BYTE)v63 )
                {
                  v128 = v126 / 0x3E8;
                  v127 = *(_DWORD *)(v124 + 2144) / 0x3E8u;
                }
                v129 = *(unsigned int *)(v124 + 2156);
                v221 = (struct tagSIZE)__PAIR64__(v127, v128);
                v130 = *(_DWORD *)(v124 + 2152);
                v219 = v221;
                v131 = v130;
                if ( (_BYTE)v63 )
                  v131 = v129;
                v222[0] = 1;
                if ( (_BYTE)v63 )
                  v129 = v130;
                v205 = (struct _devicemodeW *)__PAIR64__(v129, v131);
                v220 = (struct tagSIZE)__PAIR64__(v129, v131);
                v223 = v224;
                *(_OWORD *)&v224[0].cx = 0LL;
                v222[1] = 32;
                v225 = 0LL;
                if ( (int)DxgkEngQueryWin32Info((struct _DXGK_QUERY_WIN32_INFO *)v222, v129, v63) < 0 )
                {
                  v177 = WdLogNewEntry5_WdAssertion(v133, v132, v134);
                  WdLogEvent5_WdAssertion(v177);
                }
                v201 = (struct _DPI_INFORMATION *)(v124 + 2456);
                if ( v125 )
                {
                  FillDpiInfo(&v219, &v220, (struct tagSIZE)v224, v135, 0, HIWORD(v125), v199, v201);
                  *(_DWORD *)(v124 + 2548) |= 0x200u;
                  v123 = v234;
                }
                else
                {
                  *(_DWORD *)(v124 + 2548) &= ~0x200u;
                  v123 = 0;
                  v234 = 0;
                  FillDpiInfo(&v219, &v220, (struct tagSIZE)v224, v135, gdmLogPixels, 0, v199, v201);
                }
                GetRemoteScaleOverrideTestHook(
                  (const unsigned __int16 *)(*(_QWORD *)(v124 + 2576) + 64LL),
                  v136,
                  (struct _DPI_INFORMATION *)(v124 + 2456));
                ++v62;
                *(_DWORD *)(v124 + 2548) = *(_DWORD *)(v124 + 2548) & 0xFFFFFF7F | ((unsigned __int8)a6 << 7);
              }
              while ( v62 < *(_DWORD *)(v16 + 20) );
              v55 = v216;
              v47 = (struct tagRECT *)a9;
            }
            UserSetScaleFactorsFromRemoteMetric(v123);
            v220.cx = 1;
          }
          else
          {
            *((_DWORD *)gpsi + 559) &= ~0x40u;
          }
          gdmLogPixelsOfPrimary = (96 * *(_DWORD *)(v55 + 2468) + 50) / 0x64u;
          AlignRects(v47, v230);
          v45 = Buf2;
          if ( memcmp(v47, Buf2, 16LL * v230) )
          {
            v178 = WdLogNewEntry5_WdWarning();
            WdLogEvent5_WdWarning(v178);
          }
          v64 = 0;
          if ( *(_DWORD *)(v16 + 20) )
          {
            do
            {
              v65 = 56LL * v64;
              v66 = *(_QWORD *)(v65 + v16 + 40);
              *(_QWORD *)(v66 + 2584) = *(_QWORD *)&v47[v64].left;
              v67 = *(void (__fastcall **)(__int64, __int64))(v66 + 3384);
              if ( v67 )
                v67((*(_QWORD *)(v66 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v66 + 2552) != 0LL), 2LL);
              v68 = v47[v64++];
              *(struct tagRECT *)(v65 + v16 + 56) = v68;
              *(_DWORD *)(v65 + v16 + 72) = *(_DWORD *)(v66 + 2464);
            }
            while ( v64 < *(_DWORD *)(v16 + 20) );
            v36 = (MULTIDEVLOCKOBJ *)String1a;
            v45 = Buf2;
          }
          if ( (unsigned int)bUniformSpaceDpiMode() )
          {
            v179 = PALLOCMEM2((unsigned int)(4 * *(_DWORD *)(v16 + 20)), 0x73726447u, 0);
            if ( v179 )
            {
              v180 = *(_DWORD *)(v16 + 20);
              v181 = 0;
              if ( v180 )
              {
                do
                {
                  v179[v181] = v181;
                  ++v181;
                  v180 = *(_DWORD *)(v16 + 20);
                }
                while ( v181 < v180 );
                v36 = (MULTIDEVLOCKOBJ *)String1a;
              }
              do
              {
                v182 = 0;
                v183 = 0;
                if ( v180 == 1 )
                {
                  v180 = *(_DWORD *)(v16 + 20);
                }
                else
                {
                  do
                  {
                    v184 = (unsigned int)(v183 + 1);
                    v185 = (unsigned int)v179[v184];
                    v186 = (unsigned int)v179[v183];
                    if ( *(_DWORD *)(56 * (v186 + 1) + v16) > *(_DWORD *)(56 * (v185 + 1) + v16) )
                    {
                      v179[v183] = v185;
                      v182 = 1;
                      v179[v184] = v186;
                    }
                    v180 = *(_DWORD *)(v16 + 20);
                    ++v183;
                  }
                  while ( (unsigned int)v184 < v180 - 1 );
                }
              }
              while ( v182 );
              v47 = (struct tagRECT *)a9;
              v187 = v180 - 1;
              LODWORD(v188) = 0;
              v189 = 0;
              if ( v180 == 1 )
              {
LABEL_352:
                v194 = &v179[(unsigned int)v188];
                MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, *v194, 0xFFFFFFFF, 0, Src);
                v195 = v188;
                if ( (unsigned int)v188 < *(_DWORD *)(v16 + 20) - 1 )
                {
                  do
                  {
                    v196 = (unsigned int)(v195 + 1);
                    MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, v179[v196], v179[v195], 1, Srca);
                    v195 = v196;
                  }
                  while ( (unsigned int)v196 < *(_DWORD *)(v16 + 20) - 1 );
                  v47 = (struct tagRECT *)a9;
                }
                while ( (_DWORD)v188 )
                {
                  v188 = (unsigned int)(v188 - 1);
                  MapMonitorToUnifromSpaceInStripe((struct _MDEV *)v16, v179[v188], *v194--, 0, Srca);
                }
                *(_DWORD *)(v16 + 16) |= 2u;
                *(_DWORD *)(v16 + 32) = 96;
                gbUniformSpaceDpiMode = 1;
              }
              else
              {
                while ( 1 )
                {
                  v190 = (unsigned int)(v189 + 1);
                  v191 = 56 * ((unsigned int)v179[v189] + 1LL);
                  v192 = 56 * ((unsigned int)v179[v190] + 1LL);
                  v193 = *(_DWORD *)(v192 + v16);
                  if ( *(_DWORD *)(v191 + v16 + 8) != v193 )
                    break;
                  if ( *(_DWORD *)(v191 + v16) || *(_DWORD *)(v191 + v16 + 4) )
                  {
                    if ( !v193 && !*(_DWORD *)(v192 + v16 + 4) )
                      LODWORD(v188) = v189 + 1;
                  }
                  else
                  {
                    LODWORD(v188) = v189;
                  }
                  ++v189;
                  if ( (unsigned int)v190 >= v187 )
                    goto LABEL_352;
                }
              }
              Win32FreePool((__int64)v179);
              v45 = Buf2;
            }
          }
          else
          {
            gbUniformSpaceDpiMode = 0;
          }
        }
        Win32FreePool((__int64)v45);
      }
      if ( v47 )
        Win32FreePool((__int64)v47);
      MULTIDEVLOCKOBJ::vUnlock(v36);
      if ( v220.cx )
        ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
    }
    MULTIDEVLOCKOBJ::`scalar deleting destructor'(v36, v37);
    goto LABEL_87;
  }
LABEL_300:
  if ( v16 )
  {
    DrvBackoutMDEV((struct _MDEV *)v16, v18);
    Win32FreePool(v16);
    v16 = 0LL;
  }
LABEL_88:
  if ( v212 )
    Win32FreePool((__int64)v212);
LABEL_90:
  v69 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v69 + 24) = v16;
  WdLogEvent5_WdTrace(v69);
  return (struct _MDEV *)v16;
}

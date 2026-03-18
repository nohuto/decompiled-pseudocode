/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324
 * Callers:
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C005B660 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C00B1024 (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C00B9B28 (ApplyPathsModality.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C002B29C (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00343D4 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C004F858 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C005527C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C005A940 (GreIncrementDisplaySettingsUniqueness.c)
 *     Win32AllocPool @ 0x1C0080DF0 (Win32AllocPool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0086C54 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00B38E8 (DrvUpdateDisplayDriverParameters.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00B5D98 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C00B7E84 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B7EB4 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B7FCC (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00B82B0 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B8F98 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C00B9430 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00B96B8 (DrvEnableMDEV.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00B997C (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C00B9A1C (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C00BA624 (DrvDestroyMDEV.c)
 *     IsGreHideSpritesSupported @ 0x1C00BA70C (IsGreHideSpritesSupported.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00BAB50 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00BE074 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicModeChange @ 0x1C00BE134 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00BF0A0 (bDynamicProcessAllDriverRealizations.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00C1AA0 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8880 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01295F0 (McTemplateK0_EtwWriteTransfer.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0147510 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0147884 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C0148218 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C014829C (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C014837C (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0148488 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C01F7824 (IsDrvRealizeHalftonePaletteSupported.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        struct _ERESOURCE *a4,
        int a5,
        int a6,
        struct _MDEV *a7,
        struct _MDEV **a8,
        unsigned int a9,
        int a10,
        int a11,
        int a12,
        char a13)
{
  __int64 v14; // rcx
  int v15; // r12d
  struct _UNICODE_STRING *p_DestinationString; // rbx
  int v18; // r14d
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // r15d
  struct _MDEV *MDEV; // rdi
  int v24; // eax
  int v25; // eax
  int v26; // r13d
  struct _MDEV *v27; // rax
  unsigned int v28; // r11d
  unsigned int v29; // r9d
  char *v30; // rcx
  signed __int64 v31; // r8
  __int64 v32; // r10
  __int64 v33; // rdx
  int v34; // r12d
  HDEV v35; // rbx
  HDEV v36; // r13
  MULTIDEVLOCKOBJ *v37; // rax
  MULTIDEVLOCKOBJ *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  HDEV v41; // r8
  __int64 v42; // r9
  MULTIDEVLOCKOBJ *v43; // r15
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // edx
  __int64 v47; // rcx
  int v48; // r8d
  unsigned int v49; // r15d
  HDEV v50; // rcx
  int v51; // eax
  struct PDEV *v52; // rdx
  int v53; // r8d
  int v54; // r8d
  __int64 v55; // rcx
  int v56; // r8d
  __int64 v57; // rcx
  int v58; // r8d
  __int64 v59; // rcx
  int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // rcx
  int v63; // r8d
  struct _MDEV *v64; // rcx
  struct _ERESOURCE *v65; // rbx
  struct PDEV *v66; // rbx
  __int64 v67; // rcx
  int v68; // r8d
  int v69; // r8d
  __int64 v70; // rcx
  int v71; // r8d
  __int64 v72; // rcx
  struct _ERESOURCE *v73; // rbx
  __int64 v74; // rcx
  HDEV *v75; // rbx
  unsigned int i; // edx
  __int64 v77; // rax
  __int64 v78; // rcx
  wchar_t *j; // rax
  unsigned int k; // r9d
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rdx
  int v84; // ecx
  int v85; // r10d
  unsigned int m; // ebx
  unsigned int v87; // r8d
  unsigned int v88; // edx
  HDEV n; // r9
  struct _devicemodeW **v90; // rbx
  struct _devicemodeW *v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  bool v95; // cc
  __int64 v96; // rax
  __int64 v97; // rax
  int PruneFlag; // edi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  struct _devicemodeW *v102; // rcx
  __int64 v103; // rax
  DWORD dmFields; // edi
  _QWORD *v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rcx
  int v108; // eax
  int updated; // eax
  struct _devicemodeW *v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // rax
  unsigned int v116; // edx
  __int64 v117; // r15
  HDEV CloneHDEV; // rax
  __int64 v119; // r15
  int v120; // r15d
  HDEV v121; // rax
  unsigned int v122; // eax
  __int64 v123; // r9
  void *v124; // r9
  HDEV v125; // rax
  struct _ERESOURCE *v126; // r15
  int v127; // edx
  __int64 v128; // rcx
  int v129; // r8d
  struct PDEV *v130; // rdx
  __int64 v131; // rdx
  HDEV v132; // rcx
  int v133; // r8d
  int v134; // r8d
  int v135; // r8d
  __int64 v136; // rcx
  int v137; // r8d
  __int64 v138; // rcx
  int v139; // r8d
  __int64 v140; // rcx
  int v141; // r8d
  __int64 v142; // rcx
  int v143; // r8d
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 v146; // rax
  signed __int32 v147; // ett
  signed __int32 v148; // ett
  __int64 v149; // rcx
  HDEV v150; // rax
  HDEV v151; // r15
  __int64 v152; // rax
  unsigned int v153; // edx
  struct PDEV *v154; // rdx
  int v155; // r8d
  __int64 v156; // rcx
  HSEMAPHORE hsema; // [rsp+58h] [rbp-A8h]
  int v159[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v160[2]; // [rsp+68h] [rbp-98h] BYREF
  MULTIDEVLOCKOBJ *v161; // [rsp+70h] [rbp-90h]
  struct _devicemodeW *v162; // [rsp+78h] [rbp-88h] BYREF
  int v163; // [rsp+80h] [rbp-80h] BYREF
  PERESOURCE Resource; // [rsp+88h] [rbp-78h]
  MULTIDEVLOCKOBJ *v165; // [rsp+90h] [rbp-70h]
  PERESOURCE v166; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *v167; // [rsp+A0h] [rbp-60h]
  HDEV v168; // [rsp+A8h] [rbp-58h] BYREF
  HDEV v169; // [rsp+B0h] [rbp-50h] BYREF
  HDEV v170; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v171; // [rsp+C0h] [rbp-40h] BYREF
  struct PDEV *v172; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v174[3]; // [rsp+E0h] [rbp-20h] BYREF
  HDEV v175[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v176; // [rsp+108h] [rbp+8h]
  __int128 v177; // [rsp+118h] [rbp+18h]
  __int64 v178; // [rsp+128h] [rbp+28h]

  v14 = 0LL;
  v15 = a10;
  p_DestinationString = 0LL;
  v159[0] = a12;
  v18 = 0;
  v166 = a4;
  LODWORD(Resource) = a9 != 0;
  v160[0] = a9;
  DestinationString = 0LL;
  v162 = 0LL;
  v163 = 0;
  v161 = 0LL;
  v165 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(0LL, &DrvChangeDisplaySettingsStart, 0LL);
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, a2, a3);
  v19[4] = a6;
  v19[5] = a5;
  v19[3] = a1;
  v19[6] = a9;
  v19[7] = a10;
  WdLogEvent5_WdEvent(v19);
  if ( a2 )
  {
    if ( !a1 )
    {
      v96 = WdLogNewEntry5_WdAssertion(0LL, v20, v21);
      WdLogEvent5_WdAssertion(v96);
    }
    if ( a3 )
    {
      v97 = WdLogNewEntry5_WdAssertion(0LL, v20, v21);
      WdLogEvent5_WdAssertion(v97);
    }
  }
  gbDeferredInvalidateDualView = 0;
  gbDeferredOrgMdev = 0LL;
  *a8 = 0LL;
  if ( a1 )
  {
    if ( a9 == -1 )
      PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)a1);
    else
      PruneFlag = (int)Resource;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 64));
    p_DestinationString = &DestinationString;
    v167 = &DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v162,
                  &v163,
                  0LL,
                  a2,
                  0,
                  PruneFlag,
                  a10,
                  v159[0],
                  0LL) < 0 )
      {
        v102 = v162;
        if ( v162 )
          Win32FreePool((__int64)v162);
        v103 = WdLogNewEntry5_WdTrace(v102);
        WdLogEvent5_WdTrace(v103);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_134;
      }
      dmFields = a2->dmFields;
      v105 = (_QWORD *)WdLogNewEntry5_WdEvent(v100, v99, v101);
      v105[3] = PsGetCurrentProcess(v107, v106);
      v105[4] = a2->dmPelsWidth;
      v105[5] = a2->dmPelsHeight;
      v105[6] = a2->dmBitsPerPel;
      v105[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v105);
      p_DestinationString = v167;
      v108 = 1;
      if ( dmFields )
        v108 = a10;
      v15 = v108;
    }
    else
    {
      v15 = 1;
    }
  }
  if ( a5 && a1 && a2 && gProtocolType != -1 )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v162, v163, 1);
    v22 = 0;
    if ( updated < 0 )
    {
      v18 = -2;
      if ( updated == -1073741582 )
        v18 = -5;
    }
  }
  else
  {
    v22 = 0;
  }
  if ( !a6 || v18 )
    goto LABEL_126;
  DrvAcquireChangeDisplaySettingLocks();
  v18 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    MDEV = DrvCreateMDEV(p_DestinationString, v162, v166, a11 != 0 ? 4 : 0, 0LL, v160[0], v15, v159[0], a3);
    if ( MDEV )
      v18 = 0;
    goto LABEL_28;
  }
  v24 = CheckAndNotifyDualView(p_DestinationString, (__int64)a7);
  if ( !v24 )
  {
LABEL_15:
    if ( (a13 & 1) != 0 && (unsigned int)DrvUpdateDisplayModeInMdev(a7, a3) )
    {
      v90 = (struct _devicemodeW **)a8;
      *a8 = a7;
      DrvReleaseChangeDisplaySettingLocks();
      v18 = 3;
      v115 = WdLogNewEntry5_WdEvent(v113, v112, v114);
      WdLogEvent5_WdEvent(v115);
      goto LABEL_127;
    }
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      v26 = gdmLogPixels;
      v27 = DrvCreateMDEV(p_DestinationString, v162, v166, a11 != 0 ? 4 : 0, a7, v160[0], v15, v159[0], a3);
      v22 = 0;
      MDEV = v27;
      if ( v27 )
      {
        v28 = *((_DWORD *)v27 + 5);
        v18 = 2;
        if ( v28 == *((_DWORD *)a7 + 5) && v26 == gdmLogPixels )
        {
          v29 = 0;
          if ( v28 )
          {
            v30 = (char *)v27 + 40;
            v31 = a7 - v27;
            do
            {
              if ( *(_QWORD *)v30 != *(_QWORD *)&v30[v31] || *((_DWORD *)v30 + 8) != *(_DWORD *)&v30[v31 + 32] )
                goto LABEL_137;
              v32 = 56LL * v29;
              v33 = *(_QWORD *)((char *)v27 + v32 + 56) - *(_QWORD *)((char *)a7 + v32 + 56);
              if ( !v33 )
                v33 = *(_QWORD *)((char *)v27 + v32 + 64) - *(_QWORD *)((char *)a7 + v32 + 64);
              if ( v33 )
LABEL_137:
                v18 = 0;
              ++v29;
              v30 += 56;
            }
            while ( v29 < v28 );
          }
        }
        else
        {
          v18 = 0;
        }
      }
      else
      {
        DrvEnableMDEV(a7, 0LL, 0LL);
      }
    }
    else
    {
      v22 = 0;
    }
LABEL_28:
    v34 = 0;
    v160[0] = 0;
    v35 = 0LL;
    v159[0] = 0;
    v36 = 0LL;
    *a8 = MDEV;
    if ( v18 )
    {
      if ( v18 == 2 )
      {
        v95 = *((_DWORD *)MDEV + 5) <= 1u;
        *(_QWORD *)MDEV = *(_QWORD *)a7;
        *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
        if ( !v95 )
        {
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          v154 = *(struct PDEV **)MDEV;
          ++*((_DWORD *)v154 + 3);
          ++*((_DWORD *)v154 + 2);
          TrackObjectReferenceIncrement(
            1u,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v154 + 443));
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v155);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v156);
          }
        }
      }
      goto LABEL_111;
    }
    v167 = 0LL;
    v166 = 0LL;
    v178 = 0LL;
    *(_OWORD *)v175 = 0LL;
    hsema = 0LL;
    Resource = 0LL;
    v176 = 0LL;
    v177 = 0LL;
    v37 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v161 = v37;
    if ( v37 )
    {
      *(_QWORD *)v37 = 1LL;
      *((_QWORD *)v37 + 1) = 0LL;
      *((_QWORD *)v37 + 2) = 0LL;
    }
    else
    {
      v37 = 0LL;
      v161 = 0LL;
    }
    if ( !v37 )
    {
LABEL_126:
      v90 = (struct _devicemodeW **)a8;
LABEL_127:
      v91 = v162;
      if ( v162 )
        Win32FreePool((__int64)v162);
      if ( !a6 || v18 )
      {
        if ( v18 == 2 )
        {
          v91 = *v90;
          if ( *v90 )
          {
            Win32FreePool((__int64)v91);
            *v90 = 0LL;
          }
        }
      }
      else if ( a7 )
      {
        Win32FreePool((__int64)a7);
      }
      v92 = WdLogNewEntry5_WdTrace(v91);
      *(_QWORD *)(v92 + 24) = v18;
      WdLogEvent5_WdTrace(v92);
      gbDeferredInvalidateDualView = 0;
      gbDeferredOrgMdev = 0LL;
      goto LABEL_134;
    }
    v38 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v165 = v38;
    if ( v38 )
    {
      *(_QWORD *)v38 = 1LL;
      *((_QWORD *)v38 + 1) = 0LL;
      *((_QWORD *)v38 + 2) = 0LL;
    }
    else
    {
      v38 = 0LL;
      v165 = 0LL;
    }
    if ( !v38 )
    {
LABEL_124:
      if ( v161 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v161, v39);
      goto LABEL_126;
    }
    if ( *((_DWORD *)MDEV + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v22++ + 5));
      while ( v22 < *((_DWORD *)MDEV + 5) );
    }
    if ( !a7 )
    {
LABEL_64:
      if ( v34 )
        goto LABEL_70;
      if ( a7 && *((_DWORD *)a7 + 5) == 1 )
      {
        *(_QWORD *)a7 = *((_QWORD *)a7 + 5);
        *((_QWORD *)a7 + 1) = *((_QWORD *)a7 + 6);
      }
      if ( *((_DWORD *)MDEV + 5) == 1 )
      {
        *(_QWORD *)MDEV = *((_QWORD *)MDEV + 5);
        *((_QWORD *)MDEV + 1) = *((_QWORD *)MDEV + 6);
        goto LABEL_70;
      }
      v124 = (void *)*((_QWORD *)MDEV + 3);
      v174[2] = MulEnableDriver;
      v174[0] = 1LL;
      v169 = 0LL;
      v174[1] = 0LL;
      v125 = hCreateHDEV(
               (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
               (struct _DRV_NAMES *)v174,
               (struct _devicemodeW *)MDEV,
               v124,
               0,
               0,
               1,
               0,
               2u,
               &v169);
      *(_QWORD *)MDEV = v125;
      if ( v125 )
      {
        if ( !a7 )
        {
LABEL_84:
          v66 = *(struct PDEV **)MDEV;
          if ( *((_DWORD *)MDEV + 5) == 1 )
          {
            v171 = *((_QWORD *)v66 + 226);
            if ( *((struct PDEV **)v66 + 3) != v66 )
              *((_QWORD *)v66 + 3) = v66;
            *((_QWORD *)v66 + 221) = *((_QWORD *)v66 + 358);
            XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v171);
          }
          else
          {
            DrvSetSharedDevLock(MDEV);
            v150 = DrvSetSharedPalette(MDEV);
            v151 = v150;
            if ( (*((_DWORD *)v66 + 543) & 0x100) == 0
              && v150
              && (int)IsDrvRealizeHalftonePaletteSupported() >= 0
              && qword_1C0251288 )
            {
              qword_1C0251288(v151, 1LL);
            }
          }
LABEL_88:
          if ( hsema )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"hsemOrgMdevDevLock", (int)hsema, (int)v41);
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsema);
            PsLeavePriorityRegion(v67);
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v68);
            if ( ghsemHT )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
              PsLeavePriorityRegion(v70);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v69);
            if ( ghsemSprite )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
              PsLeavePriorityRegion(v72);
            }
            v73 = Resource;
            EtwTraceGreLockReleaseSemaphore((__int64)L"hsemOrgMdevPointer", (int)Resource, v71);
            if ( v73 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v73);
              PsLeavePriorityRegion(v74);
            }
          }
          v75 = (HDEV *)v167;
          if ( v167 )
          {
            GreIncrementDisplaySettingsUniqueness();
            if ( v75 != v175 )
              Win32FreePool((__int64)v75);
          }
          if ( v34 )
          {
            v152 = WdLogNewEntry5_WdError(v40, v39, v41);
            WdLogEvent5_WdError(v152);
            DrvBackoutMDEV(MDEV, v153);
            Win32FreePool((__int64)MDEV);
            *a8 = 0LL;
            if ( a7 )
              DrvEnableMDEV(a7, 0LL, 0LL);
            ++gcFailedModeChanges;
            v18 = -1;
          }
          else
          {
            if ( a7 )
            {
              for ( i = 0; i < *((_DWORD *)a7 + 5); *(_DWORD *)(v78 + 160) &= ~1u )
              {
                v77 = i++;
                v78 = *(_QWORD *)(*((_QWORD *)a7 + 7 * v77 + 5) + 2576LL);
              }
            }
            for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
              *((_DWORD *)j + 40) &= ~4u;
            for ( k = 0; k < *((_DWORD *)MDEV + 5); ++k )
            {
              v81 = 56LL * k;
              v82 = *(_QWORD *)((char *)MDEV + v81 + 40);
              v83 = *(_QWORD *)(v82 + 2592);
              *(_DWORD *)(*(_QWORD *)(v82 + 2576) + 160LL) |= 1u;
              v84 = *(_DWORD *)((char *)MDEV + v81 + 56);
              *(_DWORD *)(v83 + 76) = v84;
              v85 = *(_DWORD *)((char *)MDEV + v81 + 60);
              *(_DWORD *)(v83 + 80) = v85;
              if ( !v84 && !v85 )
                *(_DWORD *)(*(_QWORD *)(v82 + 2576) + 160LL) |= 4u;
            }
            v172 = *(struct PDEV **)MDEV;
            vGetDeviceCaps((struct PDEVOBJ *)&v172, gpGdiDevCaps);
          }
LABEL_111:
          if ( a7 && (v18 & 0xFFFFFFFD) == 0 )
          {
            DrvEnableMDEV(MDEV, 0LL, 0LL);
            if ( !v18 )
            {
              for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
              {
                v87 = *((_DWORD *)MDEV + 5);
                v88 = 0;
                for ( n = (HDEV)*((_QWORD *)a7 + 7 * m + 5); v88 < v87; ++v88 )
                {
                  if ( *((_QWORD *)n + 322) == *(_QWORD *)(*((_QWORD *)MDEV + 7 * v88 + 5) + 2576LL) )
                    break;
                }
                if ( v88 == v87 )
                  DrvDisableDisplay(n, 1);
              }
            }
            DrvDestroyMDEV(a7);
          }
          DrvReleaseChangeDisplaySettingLocks();
          if ( v165 )
            MULTIDEVLOCKOBJ::`scalar deleting destructor'(v165, v39);
          goto LABEL_124;
        }
        v126 = (struct _ERESOURCE *)*((_QWORD *)v125 + 6);
        EngAcquireSemaphore((HSEMAPHORE)v126);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemParentDevLock", (int)v126, 11);
        EngAcquireSemaphore(ghsemDwmState);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 14);
        EngAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
        EngAcquireSemaphore(ghsemRFONTList);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 16);
        GreAcquireHmgrSemaphore(v128, v127, v129);
        v130 = *(struct PDEV **)MDEV;
        if ( v160[0] )
        {
          if ( (unsigned int)bDynamicModeChange(*((struct PDEV **)a7 + 5), v130) == 1 )
          {
            v132 = *(HDEV *)MDEV;
            *(_QWORD *)MDEV = *((_QWORD *)a7 + 5);
            *(_QWORD *)a7 = v132;
            *((_QWORD *)a7 + 5) = v132;
            if ( !v35 )
              v132 = v36;
            v36 = v132;
            goto LABEL_235;
          }
        }
        else if ( (unsigned int)bDynamicModeChange(*(struct PDEV **)a7, v130) == 1 )
        {
          v132 = *(HDEV *)a7;
          *(_QWORD *)a7 = *(_QWORD *)MDEV;
          *(_QWORD *)MDEV = v132;
LABEL_235:
          GreReleaseHmgrSemaphore((int)v132, v131, v133);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, v134);
          if ( ghsemRFONTList )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
            PsLeavePriorityRegion(v136);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, v135);
          if ( ghsemPublicPFT )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
            PsLeavePriorityRegion(v138);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (int)ghsemPalette, v137);
          if ( ghsemPalette )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemPalette);
            PsLeavePriorityRegion(v140);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v139);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v142);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v141);
          if ( ghsemDwmState )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
            PsLeavePriorityRegion(v144);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"hsemParentDevLock", (int)v126, v143);
          if ( v126 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v126);
            PsLeavePriorityRegion(v145);
          }
          goto LABEL_70;
        }
        v34 = 1;
        goto LABEL_235;
      }
LABEL_231:
      v34 = 1;
      goto LABEL_70;
    }
    v167 = (struct _UNICODE_STRING *)DrvDisableDirectDrawForModeChange(a7, MDEV, v175);
    if ( !v167 )
      goto LABEL_231;
    v43 = v165;
    MULTIDEVLOCKOBJ::vInit(v165, a7);
    MULTIDEVLOCKOBJ::vInit(v161, MDEV);
    v40 = (__int64)v161;
    if ( (*(_DWORD *)v161 & 1) == 0 || (*(_DWORD *)v43 & 1) == 0 )
    {
      v34 = 1;
      goto LABEL_47;
    }
    hsema = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
    Resource = *(PERESOURCE *)(*(_QWORD *)a7 + 64LL);
    EngAcquireSemaphore((HSEMAPHORE)Resource);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemOrgMdevPointer", (int)Resource, 4);
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
    EngAcquireSemaphore(hsema);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemOrgMdevDevLock", (int)hsema, 11);
    MULTIDEVLOCKOBJ::vLock(v43);
    MULTIDEVLOCKOBJ::vLock(v161);
    v44 = ((__int64 (*)(void))IsGreHideSpritesSupported)();
    v41 = 0LL;
    if ( v44 >= 0 && qword_1C0251308 )
    {
      qword_1C0251308(*(_QWORD *)a7, 1LL);
      v41 = 0LL;
    }
    v39 = *((unsigned int *)MDEV + 5);
    v45 = *((_DWORD *)a7 + 5);
    if ( (_DWORD)v39 == 1 )
    {
      if ( v45 != 1 )
      {
        v116 = 0;
        if ( v45 )
        {
          while ( 1 )
          {
            v117 = v116;
            if ( *((_QWORD *)a7 + 7 * v116 + 5) == *((_QWORD *)MDEV + 5) )
              break;
            if ( ++v116 >= v45 )
              goto LABEL_46;
          }
          CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5), v116);
          v35 = CloneHDEV;
          if ( CloneHDEV )
          {
            v39 = 56 * v117;
            *(_QWORD *)((char *)a7 + v39 + 40) = CloneHDEV;
            v40 = *((_QWORD *)MDEV + 5);
            *(_QWORD *)((char *)a7 + v39 + 48) = v40;
            v36 = (HDEV)*((_QWORD *)MDEV + 5);
          }
          else
          {
            v34 = 1;
          }
          goto LABEL_193;
        }
      }
    }
    else if ( v45 == 1 )
    {
      v40 = 0LL;
      if ( (_DWORD)v39 )
      {
        v41 = (HDEV)*((_QWORD *)a7 + 5);
        while ( 1 )
        {
          v119 = (unsigned int)v40;
          if ( *((HDEV *)MDEV + 7 * (unsigned int)v40 + 5) == v41 )
            break;
          v40 = (unsigned int)(v40 + 1);
          if ( (unsigned int)v40 >= (unsigned int)v39 )
            goto LABEL_192;
        }
        v121 = DrvCreateCloneHDEV(*((HDEV *)a7 + 5), v39);
        v35 = v121;
        if ( !v121 )
        {
          v34 = 1;
          goto LABEL_70;
        }
        v40 = 56 * v119;
        v159[0] = 1;
        *(_QWORD *)((char *)MDEV + v40 + 40) = v121;
        *(_QWORD *)((char *)MDEV + v40 + 48) = *((_QWORD *)a7 + 5);
        v36 = (HDEV)*((_QWORD *)a7 + 5);
      }
LABEL_192:
      v160[0] = 1;
LABEL_193:
      v49 = 0;
      if ( v35 )
      {
        v166 = (PERESOURCE)*((_QWORD *)v35 + 6);
        v120 = (int)v166;
        EngAcquireSemaphore((HSEMAPHORE)v166);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemCloneHdevDevLock", v120, 11);
        v49 = 0;
      }
      if ( v34 )
      {
LABEL_48:
        v42 = 0x10000LL;
        if ( v36 )
        {
          v170 = v36;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v170) )
          {
            if ( ((unsigned int)v42 & (_DWORD)v36[532]) == 0 )
            {
              v40 = (unsigned int)-((unsigned int)bDynamicProcessAllDriverRealizations(v36, 0LL, 1LL) != 0);
              v34 &= v40;
            }
          }
        }
        if ( v34 )
        {
LABEL_70:
          if ( a7 )
          {
            if ( !v34 && v35 && v36 )
            {
              *(_QWORD *)v160 = v35;
              v168 = v36;
              if ( v159[0] )
              {
                v146 = *((_QWORD *)v36 + 319);
                *((_QWORD *)v35 + 319) = v146;
                if ( v146 )
                  *(_QWORD *)(v146 + 48) = v35;
                *((_QWORD *)v35 + 225) = *((_QWORD *)v36 + 225);
                DrvTransferGdiObjects(v35, v36, (unsigned int)v41);
                *((_QWORD *)v36 + 319) = 0LL;
                *((_QWORD *)v36 + 225) = 0LL;
                _m_prefetchw(v36 + 10);
                do
                  v147 = *((_DWORD *)v36 + 10);
                while ( v147 != _InterlockedCompareExchange((volatile signed __int32 *)v36 + 10, v147 | 0x80000, v147) );
                _m_prefetchw(v35 + 10);
                do
                  v148 = *((_DWORD *)v35 + 10);
                while ( v148 != _InterlockedCompareExchange(
                                  (volatile signed __int32 *)v35 + 10,
                                  v148 & 0xFFF7FFFF,
                                  v148) );
                PDEVOBJ::bDisabled((PDEVOBJ *)&v168, 1);
                (*((void (__fastcall **)(_QWORD, HDEV))v35 + 337))(*((_QWORD *)v35 + 225), v35);
              }
              else
              {
                *((_QWORD *)v35 + 319) = 0LL;
                PDEVOBJ::bDisabled((PDEVOBJ *)v160, 1);
              }
            }
            *(_QWORD *)v159 = *(_QWORD *)a7;
            if ( (*(_DWORD *)(*(_QWORD *)v159 + 40LL) & 0x20000) != 0 )
              PDEVOBJ::bDisabled((PDEVOBJ *)v159, 1);
            if ( (int)IsGreHideSpritesSupported(v40, v39, v41, v42) >= 0 && qword_1C0251308 )
            {
              v64 = MDEV;
              if ( v34 )
                v64 = a7;
              qword_1C0251308(*(_QWORD *)v64, 0LL);
            }
            v65 = v166;
            if ( v166 )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"hsemCloneHdevDevLock", (int)v166, v63);
              ExReleaseResourceAndLeaveCriticalRegion(v65);
              PsLeavePriorityRegion(v149);
            }
            MULTIDEVLOCKOBJ::vUnlock(v161);
            MULTIDEVLOCKOBJ::vUnlock(v165);
          }
          if ( v34 )
            goto LABEL_88;
          goto LABEL_84;
        }
        LODWORD(v50) = *((_DWORD *)MDEV + 5);
        v51 = *((_DWORD *)a7 + 5);
        if ( (_DWORD)v50 != 1 )
        {
          if ( v51 != 1 && (_DWORD)v50 )
          {
            do
            {
              LODWORD(v41) = *((_DWORD *)a7 + 5);
              v169 = (HDEV)(56LL * v49);
              v39 = *(_QWORD *)((char *)MDEV + (_QWORD)v169 + 40);
              v122 = 0;
              if ( (_DWORD)v41 )
              {
                v123 = *(_QWORD *)(v39 + 2576);
                while ( 1 )
                {
                  v168 = (HDEV)v122;
                  v50 = (HDEV)*((_QWORD *)a7 + 7 * v122 + 5);
                  if ( v123 == *((_QWORD *)v50 + 322) )
                    break;
                  if ( ++v122 >= (unsigned int)v41 )
                    goto LABEL_222;
                }
                LODWORD(v41) = 1;
                if ( (*(_DWORD *)(v39 + 2128) & 0x10000) != 0 )
                  LODWORD(v41) = ((_DWORD)v50[532] & 0x10000) == 0;
                if ( (HDEV)v39 != v50 )
                {
                  if ( (unsigned int)bDynamicModeChange((struct PDEV *)v50, (struct PDEV *)v39) == 1 )
                  {
                    v39 = 56LL * (_QWORD)v168;
                    v41 = v169;
                    v50 = (HDEV)*((_QWORD *)a7 + 7 * (_QWORD)v168 + 5);
                    *((_QWORD *)a7 + 7 * (_QWORD)v168 + 5) = *(_QWORD *)((char *)MDEV + (_QWORD)v169 + 40);
                    *(_QWORD *)((char *)MDEV + (_QWORD)v41 + 40) = v50;
                  }
                  else
                  {
                    v34 = 1;
                  }
                }
              }
LABEL_222:
              ++v49;
            }
            while ( v49 < *((_DWORD *)MDEV + 5) );
          }
          goto LABEL_54;
        }
        v52 = (struct PDEV *)*((_QWORD *)MDEV + 5);
        if ( v51 == 1 )
        {
          if ( (unsigned int)bDynamicModeChange(*((struct PDEV **)a7 + 5), v52) == 1 )
          {
            v50 = (HDEV)*((_QWORD *)a7 + 5);
            *((_QWORD *)a7 + 5) = *((_QWORD *)MDEV + 5);
            *((_QWORD *)MDEV + 5) = v50;
LABEL_54:
            GreReleaseHmgrSemaphore((int)v50, v39, (int)v41);
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, v53);
            if ( ghsemRFONTList )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
              PsLeavePriorityRegion(v55);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, v54);
            if ( ghsemPublicPFT )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
              PsLeavePriorityRegion(v57);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (int)ghsemPalette, v56);
            if ( ghsemPalette )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemPalette);
              PsLeavePriorityRegion(v59);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v58);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
              PsLeavePriorityRegion(v61);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v60);
            v40 = (__int64)ghsemDwmState;
            if ( ghsemDwmState )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
              PsLeavePriorityRegion(v62);
            }
            goto LABEL_64;
          }
        }
        else if ( (unsigned int)bDynamicModeChange(*(struct PDEV **)a7, v52) == 1 )
        {
          v50 = *(HDEV *)a7;
          *(_QWORD *)a7 = *((_QWORD *)MDEV + 5);
          *((_QWORD *)MDEV + 5) = v50;
          if ( !v35 )
            v50 = v36;
          v36 = v50;
          goto LABEL_54;
        }
        v34 = 1;
        goto LABEL_54;
      }
    }
LABEL_46:
    EngAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 13);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 16);
    GreAcquireHmgrSemaphore(v47, v46, v48);
LABEL_47:
    v49 = 0;
    goto LABEL_48;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
LABEL_14:
    v15 = 1;
    goto LABEL_15;
  }
  if ( v25 == 1 )
  {
    gbDeferredInvalidateDualView = 1;
    gbDeferredOrgMdev = a7;
    goto LABEL_14;
  }
  DrvReleaseChangeDisplaySettingLocks();
  v110 = v162;
  if ( v162 )
    Win32FreePool((__int64)v162);
  v111 = WdLogNewEntry5_WdTrace(v110);
  WdLogEvent5_WdTrace(v111);
  v18 = -6;
LABEL_134:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v93, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v18;
}

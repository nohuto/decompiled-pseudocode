/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC
 * Callers:
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C004DBE8 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C009C4A0 (DrvChangeDisplaySettings.c)
 *     ApplyPathsModality @ 0x1C00B125C (ApplyPathsModality.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0047A7C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C004CD60 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0055454 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C007FBF4 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00942F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0097074 (DrvUpdateDisplayDriverParameters.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0099794 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicModeChange @ 0x1C0099854 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C009A7C0 (bDynamicProcessAllDriverRealizations.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C00AAA2C (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C00ABAF0 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     IsGreHideSpritesSupported @ 0x1C00ADBD4 (IsGreHideSpritesSupported.c)
 *     DrvDestroyMDEV @ 0x1C00ADC00 (DrvDestroyMDEV.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00ADDC4 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C00ADE64 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00AE328 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C00B025C (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B028C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B03A4 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00B0680 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     DrvDisableMDEV @ 0x1C00B0730 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00B09B8 (DrvEnableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B0C7C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C00B1110 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00B4CE8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C012F5E0 (McTemplateK0_EtwWriteTransfer.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C014D860 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C014DBD4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C014E568 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C014E5EC (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C014E6CC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C014E7D8 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C01FD254 (IsDrvRealizeHalftonePaletteSupported.c)
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
  HDEV v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r15d
  struct _MDEV *MDEV; // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // eax
  __int64 v30; // rdx
  PERESOURCE v31; // rcx
  signed __int64 v32; // r8
  int v33; // r13d
  struct _MDEV *v34; // rax
  unsigned int v35; // r11d
  unsigned int v36; // r9d
  __int64 v37; // r10
  int v38; // r12d
  HDEV v39; // rbx
  HDEV v40; // r13
  MULTIDEVLOCKOBJ *v41; // rax
  MULTIDEVLOCKOBJ *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r9d
  MULTIDEVLOCKOBJ *v45; // r15
  int v46; // eax
  unsigned int v47; // ecx
  int v48; // edx
  __int64 v49; // rcx
  int v50; // r8d
  unsigned int v51; // r15d
  HDEV v52; // rcx
  int v53; // eax
  HDEV v54; // rdx
  int v55; // r8d
  int v56; // r8d
  __int64 v57; // rcx
  int v58; // r8d
  __int64 v59; // rcx
  int v60; // r8d
  __int64 v61; // rcx
  int v62; // r8d
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // r8d
  struct _MDEV *v66; // rcx
  struct _ERESOURCE *v67; // rbx
  HDEV v68; // rbx
  __int64 v69; // rcx
  int v70; // r8d
  int v71; // r8d
  __int64 v72; // rcx
  int v73; // r8d
  __int64 v74; // rcx
  struct _ERESOURCE *v75; // rbx
  __int64 v76; // rcx
  HDEV *v77; // rbx
  unsigned int i; // edx
  __int64 v79; // rax
  __int64 v80; // rcx
  wchar_t *j; // rax
  unsigned int k; // r9d
  __int64 v83; // r8
  __int64 v84; // rax
  __int64 v85; // rdx
  int v86; // ecx
  int v87; // r10d
  __int64 v88; // rdx
  __int64 v89; // r8
  unsigned int m; // ebx
  HDEV n; // r9
  struct _devicemodeW **v92; // rbx
  struct _devicemodeW *v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  bool v97; // cc
  __int64 v98; // rax
  __int64 v99; // rax
  int PruneFlag; // edi
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  struct _devicemodeW *v104; // rcx
  __int64 v105; // rax
  DWORD dmFields; // edi
  _QWORD *v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // rcx
  int v110; // eax
  int updated; // eax
  __int64 v112; // rdx
  __int64 v113; // r8
  struct _devicemodeW *v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  int v118; // r8d
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // rax
  unsigned int v123; // edx
  __int64 v124; // r15
  HDEV CloneHDEV; // rax
  __int64 v126; // r15
  int v127; // r15d
  HDEV v128; // rax
  int v129; // r9d
  unsigned int v130; // eax
  __int64 v131; // r9
  void *v132; // r9
  HDEV v133; // rax
  struct _ERESOURCE *v134; // r15
  int v135; // edx
  __int64 v136; // rcx
  int v137; // r8d
  HDEV v138; // rdx
  __int64 v139; // rdx
  HDEV v140; // rcx
  int v141; // r8d
  int v142; // r8d
  int v143; // r8d
  __int64 v144; // rcx
  int v145; // r8d
  __int64 v146; // rcx
  int v147; // r8d
  __int64 v148; // rcx
  int v149; // r8d
  __int64 v150; // rcx
  int v151; // r8d
  __int64 v152; // rcx
  __int64 v153; // rcx
  __int64 v154; // rax
  signed __int32 v155; // ett
  signed __int32 v156; // ett
  __int64 v157; // rcx
  HDEV v158; // rax
  HDEV v159; // r15
  __int64 v160; // rax
  unsigned int v161; // edx
  __int64 v162; // rdx
  __int64 v163; // r8
  HDEV v164; // rdx
  int v165; // r8d
  __int64 v166; // rcx
  HSEMAPHORE hsema; // [rsp+58h] [rbp-A8h]
  int v169[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v170[2]; // [rsp+68h] [rbp-98h] BYREF
  MULTIDEVLOCKOBJ *v171; // [rsp+70h] [rbp-90h]
  struct _devicemodeW *v172; // [rsp+78h] [rbp-88h] BYREF
  int v173; // [rsp+80h] [rbp-80h] BYREF
  PERESOURCE Resource; // [rsp+88h] [rbp-78h]
  MULTIDEVLOCKOBJ *v175; // [rsp+90h] [rbp-70h]
  PERESOURCE v176; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *v177; // [rsp+A0h] [rbp-60h]
  HDEV v178; // [rsp+A8h] [rbp-58h] BYREF
  HDEV v179; // [rsp+B0h] [rbp-50h] BYREF
  HDEV v180; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v181; // [rsp+C0h] [rbp-40h] BYREF
  HDEV v182; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v184[3]; // [rsp+E0h] [rbp-20h] BYREF
  HDEV v185[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v186; // [rsp+108h] [rbp+8h]
  __int128 v187; // [rsp+118h] [rbp+18h]
  __int64 v188; // [rsp+128h] [rbp+28h]

  v14 = 0LL;
  v15 = a10;
  p_DestinationString = 0LL;
  v169[0] = a12;
  v18 = 0;
  v176 = a4;
  LODWORD(Resource) = a9 != 0;
  v170[0] = a9;
  DestinationString = 0LL;
  v172 = 0LL;
  v173 = 0;
  v171 = 0LL;
  v175 = 0LL;
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
      v98 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
      WdLogEvent5_WdAssertion(v98);
    }
    if ( a3 )
    {
      v99 = WdLogNewEntry5_WdAssertion(0LL, v20, v21, v22);
      WdLogEvent5_WdAssertion(v99);
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
    v177 = &DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v172,
                  &v173,
                  0LL,
                  a2,
                  0,
                  PruneFlag,
                  a10,
                  v169[0],
                  0LL) < 0 )
      {
        v104 = v172;
        if ( v172 )
          Win32FreePool((__int64)v172, v101, v103);
        v105 = WdLogNewEntry5_WdTrace(v104);
        WdLogEvent5_WdTrace(v105);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL);
        v18 = -2;
        goto LABEL_134;
      }
      dmFields = a2->dmFields;
      v107 = (_QWORD *)WdLogNewEntry5_WdEvent(v102, v101, v103);
      v107[3] = PsGetCurrentProcess(v109, v108);
      v107[4] = a2->dmPelsWidth;
      v107[5] = a2->dmPelsHeight;
      v107[6] = a2->dmBitsPerPel;
      v107[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v107);
      p_DestinationString = v177;
      v110 = 1;
      if ( dmFields )
        v110 = a10;
      v15 = v110;
    }
    else
    {
      v15 = 1;
    }
  }
  if ( a5 && a1 && a2 && gProtocolType != -1 )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v172, (unsigned int)v173, 1);
    v23 = 0;
    if ( updated < 0 )
    {
      v18 = -2;
      if ( updated == -1073741582 )
        v18 = -5;
    }
  }
  else
  {
    v23 = 0;
  }
  if ( !a6 || v18 )
    goto LABEL_126;
  DrvAcquireChangeDisplaySettingLocks();
  v18 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    MDEV = DrvCreateMDEV(p_DestinationString, v172, v176, a11 != 0 ? 4 : 0, 0LL, v170[0], v15, v169[0], a3);
    if ( MDEV )
      v18 = 0;
    goto LABEL_28;
  }
  v25 = CheckAndNotifyDualView(p_DestinationString, (__int64)a7);
  if ( !v25 )
  {
LABEL_15:
    if ( (a13 & 1) != 0 && (unsigned int)DrvUpdateDisplayModeInMdev(a7, a3) )
    {
      v92 = (struct _devicemodeW **)a8;
      *a8 = a7;
      DrvReleaseChangeDisplaySettingLocks(v117, v116, v118);
      v18 = 3;
      v122 = WdLogNewEntry5_WdEvent(v120, v119, v121);
      WdLogEvent5_WdEvent(v122);
      goto LABEL_127;
    }
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      v33 = gdmLogPixels;
      v34 = DrvCreateMDEV(p_DestinationString, v172, v176, a11 != 0 ? 4 : 0, a7, v170[0], v15, v169[0], a3);
      v23 = 0;
      MDEV = v34;
      if ( v34 )
      {
        v35 = *((_DWORD *)v34 + 5);
        v18 = 2;
        if ( v35 == *((_DWORD *)a7 + 5) && v33 == gdmLogPixels )
        {
          v36 = 0;
          if ( v35 )
          {
            v31 = (PERESOURCE)((char *)v34 + 40);
            v32 = a7 - v34;
            do
            {
              if ( v31->SystemResourcesList.Flink != *(struct _LIST_ENTRY **)((char *)&v31->SystemResourcesList.Flink
                                                                            + v32)
                || LODWORD(v31->SharedWaiters) != *(_DWORD *)((char *)&v31->SharedWaiters + v32) )
              {
                goto LABEL_137;
              }
              v37 = 56LL * v36;
              v30 = *(_QWORD *)((char *)v34 + v37 + 56) - *(_QWORD *)((char *)a7 + v37 + 56);
              if ( !v30 )
                v30 = *(_QWORD *)((char *)v34 + v37 + 64) - *(_QWORD *)((char *)a7 + v37 + 64);
              if ( v30 )
LABEL_137:
                v18 = 0;
              ++v36;
              v31 = (PERESOURCE)((char *)v31 + 56);
            }
            while ( v36 < v35 );
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
      v23 = 0;
    }
LABEL_28:
    v38 = 0;
    v170[0] = 0;
    v39 = 0LL;
    v169[0] = 0;
    v40 = 0LL;
    *a8 = MDEV;
    if ( v18 )
    {
      if ( v18 == 2 )
      {
        v97 = *((_DWORD *)MDEV + 5) <= 1u;
        *(_QWORD *)MDEV = *(_QWORD *)a7;
        *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
        if ( !v97 )
        {
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          v164 = *(HDEV *)MDEV;
          ++*((_DWORD *)v164 + 3);
          ++*((_DWORD *)v164 + 2);
          TrackObjectReferenceIncrement(
            1u,
            *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)v164 + 443));
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v165);
          v31 = ghsemDriverMgmt;
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v166);
          }
        }
      }
      goto LABEL_111;
    }
    v177 = 0LL;
    v176 = 0LL;
    v188 = 0LL;
    *(_OWORD *)v185 = 0LL;
    hsema = 0LL;
    Resource = 0LL;
    v186 = 0LL;
    v187 = 0LL;
    v41 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v171 = v41;
    if ( v41 )
    {
      *(_QWORD *)v41 = 1LL;
      *((_QWORD *)v41 + 1) = 0LL;
      *((_QWORD *)v41 + 2) = 0LL;
    }
    else
    {
      v41 = 0LL;
      v171 = 0LL;
    }
    if ( !v41 )
    {
LABEL_126:
      v92 = (struct _devicemodeW **)a8;
LABEL_127:
      v93 = v172;
      if ( v172 )
        Win32FreePool((__int64)v172, v20, (__int64)v21);
      if ( !a6 || v18 )
      {
        if ( v18 == 2 )
        {
          v93 = *v92;
          if ( *v92 )
          {
            Win32FreePool((__int64)v93, v20, (__int64)v21);
            *v92 = 0LL;
          }
        }
      }
      else if ( a7 )
      {
        Win32FreePool((__int64)a7, v20, (__int64)v21);
      }
      v94 = WdLogNewEntry5_WdTrace(v93);
      *(_QWORD *)(v94 + 24) = v18;
      WdLogEvent5_WdTrace(v94);
      gbDeferredInvalidateDualView = 0;
      gbDeferredOrgMdev = 0LL;
      goto LABEL_134;
    }
    v42 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 0x6C6D6847u);
    v175 = v42;
    if ( v42 )
    {
      *(_QWORD *)v42 = 1LL;
      *((_QWORD *)v42 + 1) = 0LL;
      *((_QWORD *)v42 + 2) = 0LL;
    }
    else
    {
      v42 = 0LL;
      v175 = 0LL;
    }
    if ( !v42 )
    {
LABEL_124:
      if ( v171 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v171, v20);
      goto LABEL_126;
    }
    if ( *((_DWORD *)MDEV + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v23++ + 5));
      while ( v23 < *((_DWORD *)MDEV + 5) );
    }
    if ( !a7 )
    {
LABEL_64:
      if ( v38 )
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
      v132 = (void *)*((_QWORD *)MDEV + 3);
      v184[2] = MulEnableDriver;
      v184[0] = 1LL;
      v179 = 0LL;
      v184[1] = 0LL;
      v133 = hCreateHDEV(
               (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
               (struct _DRV_NAMES *)v184,
               (struct _devicemodeW *)MDEV,
               v132,
               0,
               0,
               1,
               0,
               2u,
               &v179);
      *(_QWORD *)MDEV = v133;
      if ( v133 )
      {
        if ( !a7 )
        {
LABEL_84:
          v68 = *(HDEV *)MDEV;
          if ( *((_DWORD *)MDEV + 5) == 1 )
          {
            v181 = *((_QWORD *)v68 + 226);
            if ( *((HDEV *)v68 + 3) != v68 )
              *((_QWORD *)v68 + 3) = v68;
            *((_QWORD *)v68 + 221) = *((_QWORD *)v68 + 358);
            XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v181);
          }
          else
          {
            DrvSetSharedDevLock(MDEV);
            v158 = DrvSetSharedPalette(MDEV);
            v159 = v158;
            if ( ((_DWORD)v68[543] & 0x100) == 0
              && v158
              && (int)IsDrvRealizeHalftonePaletteSupported() >= 0
              && qword_1C0257248 )
            {
              qword_1C0257248(v159, 1LL);
            }
          }
LABEL_88:
          if ( hsema )
          {
            EtwTraceGreLockReleaseSemaphore((__int64)L"hsemOrgMdevDevLock", (int)hsema, (int)v21);
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsema);
            PsLeavePriorityRegion(v69);
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v70);
            if ( ghsemHT )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
              PsLeavePriorityRegion(v72);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v71);
            if ( ghsemSprite )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
              PsLeavePriorityRegion(v74);
            }
            v75 = Resource;
            EtwTraceGreLockReleaseSemaphore((__int64)L"hsemOrgMdevPointer", (int)Resource, v73);
            if ( v75 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v75);
              PsLeavePriorityRegion(v76);
            }
          }
          v77 = (HDEV *)v177;
          if ( v177 )
          {
            GreIncrementDisplaySettingsUniqueness();
            if ( v77 != v185 )
              Win32FreePool((__int64)v77, v20, (__int64)v21);
          }
          if ( v38 )
          {
            v160 = WdLogNewEntry5_WdError(v43, v20, v21);
            WdLogEvent5_WdError(v160);
            DrvBackoutMDEV(MDEV, v161);
            Win32FreePool((__int64)MDEV, v162, v163);
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
              for ( i = 0; i < *((_DWORD *)a7 + 5); *(_DWORD *)(v80 + 160) &= ~1u )
              {
                v79 = i++;
                v80 = *(_QWORD *)(*((_QWORD *)a7 + 7 * v79 + 5) + 2576LL);
              }
            }
            for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
              *((_DWORD *)j + 40) &= ~4u;
            for ( k = 0; k < *((_DWORD *)MDEV + 5); ++k )
            {
              v83 = 56LL * k;
              v84 = *(_QWORD *)((char *)MDEV + v83 + 40);
              v85 = *(_QWORD *)(v84 + 2592);
              *(_DWORD *)(*(_QWORD *)(v84 + 2576) + 160LL) |= 1u;
              v86 = *(_DWORD *)((char *)MDEV + v83 + 56);
              *(_DWORD *)(v85 + 76) = v86;
              v87 = *(_DWORD *)((char *)MDEV + v83 + 60);
              *(_DWORD *)(v85 + 80) = v87;
              if ( !v86 && !v87 )
                *(_DWORD *)(*(_QWORD *)(v84 + 2576) + 160LL) |= 4u;
            }
            v182 = *(HDEV *)MDEV;
            vGetDeviceCaps((struct PDEVOBJ *)&v182, gpGdiDevCaps);
          }
LABEL_111:
          if ( a7 && (v18 & 0xFFFFFFFD) == 0 )
          {
            DrvEnableMDEV(MDEV, 0LL, 0LL);
            if ( !v18 )
            {
              for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
              {
                v89 = *((unsigned int *)MDEV + 5);
                v88 = 0LL;
                for ( n = (HDEV)*((_QWORD *)a7 + 7 * m + 5);
                      (unsigned int)v88 < (unsigned int)v89;
                      v88 = (unsigned int)(v88 + 1) )
                {
                  if ( *((_QWORD *)n + 322) == *(_QWORD *)(*((_QWORD *)MDEV + 7 * (unsigned int)v88 + 5) + 2576LL) )
                    break;
                }
                if ( (_DWORD)v88 == (_DWORD)v89 )
                  DrvDisableDisplay(n, 1);
              }
            }
            DrvDestroyMDEV((__int64)a7, v88, v89);
          }
          DrvReleaseChangeDisplaySettingLocks((__int64)v31, v30, v32);
          if ( v175 )
            MULTIDEVLOCKOBJ::`scalar deleting destructor'(v175, v20);
          goto LABEL_124;
        }
        v134 = (struct _ERESOURCE *)*((_QWORD *)v133 + 6);
        EngAcquireSemaphore((HSEMAPHORE)v134);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemParentDevLock", (int)v134, 11);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        EngAcquireSemaphore(ghsemPalette);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 14);
        EngAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
        EngAcquireSemaphore(ghsemRFONTList);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 16);
        GreAcquireHmgrSemaphore(v136, v135, v137);
        v138 = *(HDEV *)MDEV;
        if ( v170[0] )
        {
          if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v138, 1u) == 1 )
          {
            v140 = *(HDEV *)MDEV;
            *(_QWORD *)MDEV = *((_QWORD *)a7 + 5);
            *(_QWORD *)a7 = v140;
            *((_QWORD *)a7 + 5) = v140;
            if ( !v39 )
              v140 = v40;
            v40 = v140;
            goto LABEL_235;
          }
        }
        else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v138, 1u) == 1 )
        {
          v140 = *(HDEV *)a7;
          *(_QWORD *)a7 = *(_QWORD *)MDEV;
          *(_QWORD *)MDEV = v140;
LABEL_235:
          GreReleaseHmgrSemaphore((int)v140, v139, v141);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, v142);
          if ( ghsemRFONTList )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
            PsLeavePriorityRegion(v144);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, v143);
          if ( ghsemPublicPFT )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
            PsLeavePriorityRegion(v146);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (int)ghsemPalette, v145);
          if ( ghsemPalette )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
            PsLeavePriorityRegion(v148);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v147);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v150);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v149);
          if ( ghsemDwmState )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
            PsLeavePriorityRegion(v152);
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"hsemParentDevLock", (int)v134, v151);
          if ( v134 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v134);
            PsLeavePriorityRegion(v153);
          }
          goto LABEL_70;
        }
        v38 = 1;
        goto LABEL_235;
      }
LABEL_231:
      v38 = 1;
      goto LABEL_70;
    }
    v177 = (struct _UNICODE_STRING *)DrvDisableDirectDrawForModeChange(a7, MDEV, v185, v44);
    if ( !v177 )
      goto LABEL_231;
    v45 = v175;
    MULTIDEVLOCKOBJ::vInit(v175, a7);
    MULTIDEVLOCKOBJ::vInit(v171, MDEV);
    v43 = (__int64)v171;
    if ( (*(_DWORD *)v171 & 1) == 0 || (*(_DWORD *)v45 & 1) == 0 )
    {
      v38 = 1;
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
    MULTIDEVLOCKOBJ::vLock(v45);
    MULTIDEVLOCKOBJ::vLock(v171);
    v46 = IsGreHideSpritesSupported();
    v21 = 0LL;
    if ( v46 >= 0 && qword_1C02572C8 )
    {
      qword_1C02572C8(*(_QWORD *)a7, 1LL);
      v21 = 0LL;
    }
    v20 = *((unsigned int *)MDEV + 5);
    v47 = *((_DWORD *)a7 + 5);
    if ( (_DWORD)v20 == 1 )
    {
      if ( v47 != 1 )
      {
        v123 = 0;
        if ( v47 )
        {
          while ( 1 )
          {
            v124 = v123;
            if ( *((_QWORD *)a7 + 7 * v123 + 5) == *((_QWORD *)MDEV + 5) )
              break;
            if ( ++v123 >= v47 )
              goto LABEL_46;
          }
          CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5), v123);
          v39 = CloneHDEV;
          if ( CloneHDEV )
          {
            v20 = 56 * v124;
            *(_QWORD *)((char *)a7 + v20 + 40) = CloneHDEV;
            v43 = *((_QWORD *)MDEV + 5);
            *(_QWORD *)((char *)a7 + v20 + 48) = v43;
            v40 = (HDEV)*((_QWORD *)MDEV + 5);
          }
          else
          {
            v38 = 1;
          }
          goto LABEL_193;
        }
      }
    }
    else if ( v47 == 1 )
    {
      v43 = 0LL;
      if ( (_DWORD)v20 )
      {
        v21 = (HDEV)*((_QWORD *)a7 + 5);
        while ( 1 )
        {
          v126 = (unsigned int)v43;
          if ( *((HDEV *)MDEV + 7 * (unsigned int)v43 + 5) == v21 )
            break;
          v43 = (unsigned int)(v43 + 1);
          if ( (unsigned int)v43 >= (unsigned int)v20 )
            goto LABEL_192;
        }
        v128 = DrvCreateCloneHDEV(*((HDEV *)a7 + 5), v20);
        v39 = v128;
        if ( !v128 )
        {
          v38 = 1;
          goto LABEL_70;
        }
        v43 = 56 * v126;
        v169[0] = 1;
        *(_QWORD *)((char *)MDEV + v43 + 40) = v128;
        *(_QWORD *)((char *)MDEV + v43 + 48) = *((_QWORD *)a7 + 5);
        v40 = (HDEV)*((_QWORD *)a7 + 5);
      }
LABEL_192:
      v170[0] = 1;
LABEL_193:
      v51 = 0;
      if ( v39 )
      {
        v176 = (PERESOURCE)*((_QWORD *)v39 + 6);
        v127 = (int)v176;
        EngAcquireSemaphore((HSEMAPHORE)v176);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemCloneHdevDevLock", v127, 11);
        v51 = 0;
      }
      if ( v38 )
      {
LABEL_48:
        if ( v40 )
        {
          v180 = v40;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v180) )
          {
            if ( (v129 & (_DWORD)v40[532]) == 0 )
            {
              v43 = (unsigned int)-((unsigned int)bDynamicProcessAllDriverRealizations((__int64)v40, 0LL, 1) != 0);
              v38 &= v43;
            }
          }
        }
        if ( v38 )
        {
LABEL_70:
          if ( a7 )
          {
            if ( !v38 && v39 && v40 )
            {
              *(_QWORD *)v170 = v39;
              v178 = v40;
              if ( v169[0] )
              {
                v154 = *((_QWORD *)v40 + 319);
                *((_QWORD *)v39 + 319) = v154;
                if ( v154 )
                  *(_QWORD *)(v154 + 48) = v39;
                *((_QWORD *)v39 + 225) = *((_QWORD *)v40 + 225);
                DrvTransferGdiObjects(v39, v40, (unsigned int)v21);
                *((_QWORD *)v40 + 319) = 0LL;
                *((_QWORD *)v40 + 225) = 0LL;
                _m_prefetchw(v40 + 10);
                do
                  v155 = *((_DWORD *)v40 + 10);
                while ( v155 != _InterlockedCompareExchange((volatile signed __int32 *)v40 + 10, v155 | 0x80000, v155) );
                _m_prefetchw(v39 + 10);
                do
                  v156 = *((_DWORD *)v39 + 10);
                while ( v156 != _InterlockedCompareExchange(
                                  (volatile signed __int32 *)v39 + 10,
                                  v156 & 0xFFF7FFFF,
                                  v156) );
                PDEVOBJ::bDisabled((PDEVOBJ *)&v178, 1);
                (*((void (__fastcall **)(_QWORD, HDEV))v39 + 337))(*((_QWORD *)v39 + 225), v39);
              }
              else
              {
                *((_QWORD *)v39 + 319) = 0LL;
                PDEVOBJ::bDisabled((PDEVOBJ *)v170, 1);
              }
            }
            *(_QWORD *)v169 = *(_QWORD *)a7;
            if ( (*(_DWORD *)(*(_QWORD *)v169 + 40LL) & 0x20000) != 0 )
              PDEVOBJ::bDisabled((PDEVOBJ *)v169, 1);
            if ( (int)IsGreHideSpritesSupported() >= 0 && qword_1C02572C8 )
            {
              v66 = MDEV;
              if ( v38 )
                v66 = a7;
              qword_1C02572C8(*(_QWORD *)v66, 0LL);
            }
            v67 = v176;
            if ( v176 )
            {
              EtwTraceGreLockReleaseSemaphore((__int64)L"hsemCloneHdevDevLock", (int)v176, v65);
              ExReleaseResourceAndLeaveCriticalRegion(v67);
              PsLeavePriorityRegion(v157);
            }
            MULTIDEVLOCKOBJ::vUnlock(v171);
            MULTIDEVLOCKOBJ::vUnlock(v175);
          }
          if ( v38 )
            goto LABEL_88;
          goto LABEL_84;
        }
        LODWORD(v52) = *((_DWORD *)MDEV + 5);
        v53 = *((_DWORD *)a7 + 5);
        if ( (_DWORD)v52 != 1 )
        {
          if ( v53 != 1 && (_DWORD)v52 )
          {
            do
            {
              LODWORD(v21) = *((_DWORD *)a7 + 5);
              v179 = (HDEV)(56LL * v51);
              v20 = *(_QWORD *)((char *)MDEV + (_QWORD)v179 + 40);
              v130 = 0;
              if ( (_DWORD)v21 )
              {
                v131 = *(_QWORD *)(v20 + 2576);
                while ( 1 )
                {
                  v178 = (HDEV)v130;
                  v52 = (HDEV)*((_QWORD *)a7 + 7 * v130 + 5);
                  if ( v131 == *((_QWORD *)v52 + 322) )
                    break;
                  if ( ++v130 >= (unsigned int)v21 )
                    goto LABEL_222;
                }
                LODWORD(v21) = 1;
                if ( (*(_DWORD *)(v20 + 2128) & 0x10000) != 0 )
                  LODWORD(v21) = ((_DWORD)v52[532] & 0x10000) == 0;
                if ( (HDEV)v20 != v52 )
                {
                  if ( (unsigned int)bDynamicModeChange(v52, (HDEV)v20, (unsigned int)v21) == 1 )
                  {
                    v20 = 56LL * (_QWORD)v178;
                    v21 = v179;
                    v52 = (HDEV)*((_QWORD *)a7 + 7 * (_QWORD)v178 + 5);
                    *((_QWORD *)a7 + 7 * (_QWORD)v178 + 5) = *(_QWORD *)((char *)MDEV + (_QWORD)v179 + 40);
                    *(_QWORD *)((char *)MDEV + (_QWORD)v21 + 40) = v52;
                  }
                  else
                  {
                    v38 = 1;
                  }
                }
              }
LABEL_222:
              ++v51;
            }
            while ( v51 < *((_DWORD *)MDEV + 5) );
          }
          goto LABEL_54;
        }
        v54 = (HDEV)*((_QWORD *)MDEV + 5);
        if ( v53 == 1 )
        {
          if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v54, 1u) == 1 )
          {
            v52 = (HDEV)*((_QWORD *)a7 + 5);
            *((_QWORD *)a7 + 5) = *((_QWORD *)MDEV + 5);
            *((_QWORD *)MDEV + 5) = v52;
LABEL_54:
            GreReleaseHmgrSemaphore((int)v52, v20, (int)v21);
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, v55);
            if ( ghsemRFONTList )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
              PsLeavePriorityRegion(v57);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, v56);
            if ( ghsemPublicPFT )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
              PsLeavePriorityRegion(v59);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemPalette", (int)ghsemPalette, v58);
            if ( ghsemPalette )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
              PsLeavePriorityRegion(v61);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v60);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
              PsLeavePriorityRegion(v63);
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v62);
            v43 = (__int64)ghsemDwmState;
            if ( ghsemDwmState )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemDwmState);
              PsLeavePriorityRegion(v64);
            }
            goto LABEL_64;
          }
        }
        else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v54, 1u) == 1 )
        {
          v52 = *(HDEV *)a7;
          *(_QWORD *)a7 = *((_QWORD *)MDEV + 5);
          *((_QWORD *)MDEV + 5) = v52;
          if ( !v39 )
            v52 = v40;
          v40 = v52;
          goto LABEL_54;
        }
        v38 = 1;
        goto LABEL_54;
      }
    }
LABEL_46:
    EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    EngAcquireSemaphore(ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPalette", (int)ghsemPalette, 13);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemPublicPFT", (int)ghsemPublicPFT, 15);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemRFONTList", (int)ghsemRFONTList, 16);
    GreAcquireHmgrSemaphore(v49, v48, v50);
LABEL_47:
    v51 = 0;
    goto LABEL_48;
  }
  v29 = v25 - 1;
  if ( !v29 )
  {
LABEL_14:
    v15 = 1;
    goto LABEL_15;
  }
  if ( v29 == 1 )
  {
    gbDeferredInvalidateDualView = 1;
    gbDeferredOrgMdev = a7;
    goto LABEL_14;
  }
  DrvReleaseChangeDisplaySettingLocks(v27, v26, v28);
  v114 = v172;
  if ( v172 )
    Win32FreePool((__int64)v172, v112, v113);
  v115 = WdLogNewEntry5_WdTrace(v114);
  WdLogEvent5_WdTrace(v115);
  v18 = -6;
LABEL_134:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v95, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v18;
}

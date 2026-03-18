/*
 * XREFs of ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70
 * Callers:
 *     ApplyPathsModality @ 0x1C00109B4 (ApplyPathsModality.c)
 *     DrvChangeDisplaySettings @ 0x1C006C208 (DrvChangeDisplaySettings.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00BBB6C (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 * Callees:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C000EABC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C000FDEC (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C00100D4 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C00108C4 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0011C5C (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C00146D0 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0014700 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0014818 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0014B00 (-vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C00157E8 (-DrvReleaseChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C00158F4 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0015994 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0015E30 (DrvDisableMDEV.c)
 *     DrvEnableMDEV @ 0x1C00160B8 (DrvEnableMDEV.c)
 *     DrvDestroyMDEV @ 0x1C0016458 (DrvDestroyMDEV.c)
 *     IsGreHideSpritesSupported @ 0x1C0016540 (IsGreHideSpritesSupported.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00190D4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicModeChange @ 0x1C0019194 (bDynamicModeChange.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C001A100 (bDynamicProcessAllDriverRealizations.c)
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047384 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00521C8 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0060CA8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0092708 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00953AC (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BAAC0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C01272A0 (McTemplateK0_EtwWriteTransfer.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0145040 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01453B4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C0145D48 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C0145DCC (-DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C0145EAC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0145FB8 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     IsDrvRealizeHalftonePaletteSupported @ 0x1C01F5EF4 (IsDrvRealizeHalftonePaletteSupported.c)
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
  int v14; // r12d
  struct _UNICODE_STRING *p_DestinationString; // rbx
  int v17; // r14d
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r15d
  struct _MDEV *MDEV; // rdi
  int v22; // eax
  int v23; // eax
  int v24; // r13d
  struct _MDEV *v25; // rax
  unsigned int v26; // r11d
  unsigned int v27; // r9d
  char *v28; // rcx
  signed __int64 v29; // r8
  __int64 v30; // r10
  __int64 v31; // rdx
  int v32; // r12d
  HDEV v33; // rbx
  HDEV v34; // r13
  MULTIDEVLOCKOBJ *v35; // rax
  MULTIDEVLOCKOBJ *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  MULTIDEVLOCKOBJ *v40; // r15
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // r15d
  int v44; // ecx
  int v45; // eax
  HDEV v46; // rdx
  __int64 v47; // rcx
  struct _MDEV *v48; // rcx
  struct _ERESOURCE *v49; // rbx
  HDEV v50; // rbx
  struct _ERESOURCE *v51; // rbx
  HDEV *v52; // rbx
  unsigned int i; // edx
  __int64 v54; // rax
  __int64 v55; // rcx
  wchar_t *j; // rax
  unsigned int k; // r9d
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // ecx
  int v62; // r10d
  unsigned int m; // ebx
  unsigned int v64; // r8d
  unsigned int v65; // edx
  HDEV n; // r9
  struct _devicemodeW **v67; // rbx
  struct _devicemodeW *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  bool v72; // cc
  __int64 v73; // rax
  __int64 v74; // rax
  int PruneFlag; // edi
  __int64 v76; // rdx
  struct _devicemodeW *v77; // rcx
  __int64 v78; // rax
  DWORD dmFields; // edi
  _QWORD *v80; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // eax
  int updated; // eax
  __int64 v85; // rdx
  struct _devicemodeW *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // edx
  __int64 v90; // r15
  HDEV CloneHDEV; // rax
  __int64 v92; // r15
  PERESOURCE v93; // r15
  HDEV v94; // rax
  HDEV v95; // rcx
  unsigned int v96; // r8d
  HDEV v97; // rdx
  unsigned int v98; // eax
  __int64 v99; // r9
  HDEV v100; // rcx
  HDEV v101; // r8
  __int64 v102; // rcx
  void *v103; // r9
  HDEV v104; // rax
  struct _ERESOURCE *v105; // r15
  HDEV v106; // rdx
  HDEV v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rax
  signed __int32 v110; // ett
  signed __int32 v111; // ett
  HDEV v112; // rax
  HDEV v113; // r15
  __int64 v114; // rax
  __int64 v115; // rdx
  unsigned int v116; // edx
  HDEV v117; // rdx
  HSEMAPHORE hsema; // [rsp+58h] [rbp-A8h]
  int v120[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v121[2]; // [rsp+68h] [rbp-98h] BYREF
  MULTIDEVLOCKOBJ *v122; // [rsp+70h] [rbp-90h]
  struct _devicemodeW *v123; // [rsp+78h] [rbp-88h] BYREF
  int v124; // [rsp+80h] [rbp-80h] BYREF
  PERESOURCE Resource; // [rsp+88h] [rbp-78h]
  MULTIDEVLOCKOBJ *v126; // [rsp+90h] [rbp-70h]
  PERESOURCE v127; // [rsp+98h] [rbp-68h]
  struct _UNICODE_STRING *v128; // [rsp+A0h] [rbp-60h]
  HDEV v129; // [rsp+A8h] [rbp-58h] BYREF
  HDEV v130; // [rsp+B0h] [rbp-50h] BYREF
  HDEV v131; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v132; // [rsp+C0h] [rbp-40h] BYREF
  HDEV v133; // [rsp+C8h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v135[3]; // [rsp+E0h] [rbp-20h] BYREF
  HDEV v136[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v137; // [rsp+108h] [rbp+8h]
  __int128 v138; // [rsp+118h] [rbp+18h]
  __int64 v139; // [rsp+128h] [rbp+28h]

  v14 = a10;
  p_DestinationString = 0LL;
  v120[0] = a12;
  v17 = 0;
  v127 = a4;
  LODWORD(Resource) = a9 != 0;
  v121[0] = a9;
  DestinationString = 0LL;
  v123 = 0LL;
  v124 = 0;
  v122 = 0LL;
  v126 = 0LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(0LL, &DrvChangeDisplaySettingsStart, 0LL);
  v18 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v18[4] = a6;
  v18[5] = a5;
  v18[3] = a1;
  v18[6] = a9;
  v18[7] = a10;
  WdLogEvent5_WdEvent(v18);
  if ( a2 )
  {
    if ( !a1 )
    {
      v73 = WdLogNewEntry5_WdAssertion(0LL, v19);
      WdLogEvent5_WdAssertion(v73);
    }
    if ( a3 )
    {
      v74 = WdLogNewEntry5_WdAssertion(0LL, v19);
      WdLogEvent5_WdAssertion(v74);
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
    v128 = &DestinationString;
    if ( a2 )
    {
      if ( (int)DrvProbeAndCaptureDevmode(
                  (struct tagGRAPHICS_DEVICE *)a1,
                  &v123,
                  &v124,
                  0LL,
                  a2,
                  0,
                  PruneFlag,
                  a10,
                  v120[0],
                  0LL) < 0 )
      {
        v77 = v123;
        if ( v123 )
          Win32FreePool(v123);
        v78 = WdLogNewEntry5_WdTrace(v77, v76);
        WdLogEvent5_WdTrace(v78);
        DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
        v17 = -2;
        goto LABEL_134;
      }
      dmFields = a2->dmFields;
      v80 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v80[3] = PsGetCurrentProcess(v82, v81);
      v80[4] = a2->dmPelsWidth;
      v80[5] = a2->dmPelsHeight;
      v80[6] = a2->dmBitsPerPel;
      v80[7] = a2->dmDisplayOrientation;
      WdLogEvent5_WdEvent(v80);
      p_DestinationString = v128;
      v83 = 1;
      if ( dmFields )
        v83 = a10;
      v14 = v83;
    }
    else
    {
      v14 = 1;
    }
  }
  if ( a5 && a1 && a2 && gProtocolType != -1 )
  {
    updated = DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)a1, v123, v124, 1);
    v20 = 0;
    if ( updated < 0 )
    {
      v17 = -2;
      if ( updated == -1073741582 )
        v17 = -5;
    }
  }
  else
  {
    v20 = 0;
  }
  if ( !a6 || v17 )
    goto LABEL_126;
  DrvAcquireChangeDisplaySettingLocks();
  v17 = -1;
  MDEV = 0LL;
  if ( !a7 )
  {
    CheckAndNotifyDualView(p_DestinationString, 0LL);
    MDEV = DrvCreateMDEV(p_DestinationString, v123, v127, a11 != 0 ? 4 : 0, 0LL, v121[0], v14, v120[0], a3);
    if ( MDEV )
      v17 = 0;
    goto LABEL_28;
  }
  v22 = CheckAndNotifyDualView(p_DestinationString, (__int64)a7);
  if ( !v22 )
  {
LABEL_15:
    if ( (a13 & 1) != 0 && (unsigned int)DrvUpdateDisplayModeInMdev(a7, a3) )
    {
      v67 = (struct _devicemodeW **)a8;
      *a8 = a7;
      DrvReleaseChangeDisplaySettingLocks();
      v17 = 3;
      v88 = WdLogNewEntry5_WdEvent();
      WdLogEvent5_WdEvent(v88);
      goto LABEL_127;
    }
    if ( (unsigned int)DrvDisableMDEV(a7) )
    {
      v24 = gdmLogPixels;
      v25 = DrvCreateMDEV(p_DestinationString, v123, v127, a11 != 0 ? 4 : 0, a7, v121[0], v14, v120[0], a3);
      v20 = 0;
      MDEV = v25;
      if ( v25 )
      {
        v26 = *((_DWORD *)v25 + 5);
        v17 = 2;
        if ( v26 == *((_DWORD *)a7 + 5) && v24 == gdmLogPixels )
        {
          v27 = 0;
          if ( v26 )
          {
            v28 = (char *)v25 + 40;
            v29 = a7 - v25;
            do
            {
              if ( *(_QWORD *)v28 != *(_QWORD *)&v28[v29] || *((_DWORD *)v28 + 8) != *(_DWORD *)&v28[v29 + 32] )
                goto LABEL_137;
              v30 = 56LL * v27;
              v31 = *(_QWORD *)((char *)v25 + v30 + 56) - *(_QWORD *)((char *)a7 + v30 + 56);
              if ( !v31 )
                v31 = *(_QWORD *)((char *)v25 + v30 + 64) - *(_QWORD *)((char *)a7 + v30 + 64);
              if ( v31 )
LABEL_137:
                v17 = 0;
              ++v27;
              v28 += 56;
            }
            while ( v27 < v26 );
          }
        }
        else
        {
          v17 = 0;
        }
      }
      else
      {
        DrvEnableMDEV(a7, 0LL, 0LL);
      }
    }
    else
    {
      v20 = 0;
    }
LABEL_28:
    v32 = 0;
    v121[0] = 0;
    v33 = 0LL;
    v120[0] = 0;
    v34 = 0LL;
    *a8 = MDEV;
    if ( v17 )
    {
      if ( v17 == 2 )
      {
        v72 = *((_DWORD *)MDEV + 5) <= 1u;
        *(_QWORD *)MDEV = *(_QWORD *)a7;
        *((_QWORD *)MDEV + 1) = *((_QWORD *)a7 + 1);
        if ( !v72 )
        {
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          v117 = *(HDEV *)MDEV;
          ++*((_DWORD *)v117 + 3);
          ++*((_DWORD *)v117 + 2);
          TrackObjectReferenceIncrement(1LL, *((_QWORD *)v117 + 443));
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
        }
      }
      goto LABEL_111;
    }
    v128 = 0LL;
    v127 = 0LL;
    v139 = 0LL;
    *(_OWORD *)v136 = 0LL;
    hsema = 0LL;
    Resource = 0LL;
    v137 = 0LL;
    v138 = 0LL;
    v35 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 1819109447LL);
    v122 = v35;
    if ( v35 )
    {
      *(_QWORD *)v35 = 1LL;
      *((_QWORD *)v35 + 1) = 0LL;
      *((_QWORD *)v35 + 2) = 0LL;
    }
    else
    {
      v35 = 0LL;
      v122 = 0LL;
    }
    if ( !v35 )
    {
LABEL_126:
      v67 = (struct _devicemodeW **)a8;
LABEL_127:
      v68 = v123;
      if ( v123 )
        Win32FreePool(v123);
      if ( !a6 || v17 )
      {
        if ( v17 == 2 )
        {
          v68 = *v67;
          if ( *v67 )
          {
            Win32FreePool(v68);
            *v67 = 0LL;
          }
        }
      }
      else if ( a7 )
      {
        Win32FreePool(a7);
      }
      v69 = WdLogNewEntry5_WdTrace(v68, v19);
      *(_QWORD *)(v69 + 24) = v17;
      WdLogEvent5_WdTrace(v69);
      gbDeferredInvalidateDualView = 0;
      gbDeferredOrgMdev = 0LL;
      goto LABEL_134;
    }
    v36 = (MULTIDEVLOCKOBJ *)Win32AllocPool(104LL, 1819109447LL);
    v126 = v36;
    if ( v36 )
    {
      *(_QWORD *)v36 = 1LL;
      *((_QWORD *)v36 + 1) = 0LL;
      *((_QWORD *)v36 + 2) = 0LL;
    }
    else
    {
      v36 = 0LL;
      v126 = 0LL;
    }
    if ( !v36 )
    {
LABEL_124:
      if ( v122 )
        MULTIDEVLOCKOBJ::`scalar deleting destructor'(v122, v19);
      goto LABEL_126;
    }
    if ( *((_DWORD *)MDEV + 5) )
    {
      do
        DrvUpdatePDevForWDDMDevice(*((_QWORD *)MDEV + 7 * v20++ + 5));
      while ( v20 < *((_DWORD *)MDEV + 5) );
    }
    if ( !a7 )
    {
LABEL_64:
      if ( v32 )
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
      v103 = (void *)*((_QWORD *)MDEV + 3);
      v135[2] = MulEnableDriver;
      v135[0] = 1LL;
      v130 = 0LL;
      v135[1] = 0LL;
      v104 = hCreateHDEV(
               (struct tagGRAPHICS_DEVICE *)0xFFFFFFFFFFFFFFFCLL,
               (struct _DRV_NAMES *)v135,
               (struct _devicemodeW *)MDEV,
               v103,
               0,
               0,
               1,
               0,
               2u,
               &v130);
      *(_QWORD *)MDEV = v104;
      if ( v104 )
      {
        if ( !a7 )
        {
LABEL_84:
          v50 = *(HDEV *)MDEV;
          if ( *((_DWORD *)MDEV + 5) == 1 )
          {
            v132 = *((_QWORD *)v50 + 226);
            if ( *((HDEV *)v50 + 3) != v50 )
              *((_QWORD *)v50 + 3) = v50;
            *((_QWORD *)v50 + 221) = *((_QWORD *)v50 + 358);
            XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v132);
          }
          else
          {
            DrvSetSharedDevLock(MDEV);
            v112 = DrvSetSharedPalette(MDEV);
            v113 = v112;
            if ( ((_DWORD)v50[543] & 0x100) == 0
              && v112
              && (int)IsDrvRealizeHalftonePaletteSupported() >= 0
              && qword_1C024F288 )
            {
              qword_1C024F288(v113, 1LL);
            }
          }
LABEL_88:
          if ( hsema )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevDevLock", hsema);
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)hsema);
            PsLeavePriorityRegion();
            EtwTraceGreLockReleaseSemaphore(L"ghsemHT", ghsemHT);
            if ( ghsemHT )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
            if ( ghsemSprite )
            {
              ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
              PsLeavePriorityRegion();
            }
            v51 = Resource;
            EtwTraceGreLockReleaseSemaphore(L"hsemOrgMdevPointer", Resource);
            if ( v51 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v51);
              PsLeavePriorityRegion();
            }
          }
          v52 = (HDEV *)v128;
          if ( v128 )
          {
            GreIncrementDisplaySettingsUniqueness(v37, v19, v38, v39);
            if ( v52 != v136 )
              Win32FreePool(v52);
          }
          if ( v32 )
          {
            v114 = WdLogNewEntry5_WdError(v37, v19, v38);
            WdLogEvent5_WdError(v114, v115);
            DrvBackoutMDEV(MDEV, v116);
            Win32FreePool(MDEV);
            *a8 = 0LL;
            if ( a7 )
              DrvEnableMDEV(a7, 0LL, 0LL);
            ++gcFailedModeChanges;
            v17 = -1;
          }
          else
          {
            if ( a7 )
            {
              for ( i = 0; i < *((_DWORD *)a7 + 5); *(_DWORD *)(v55 + 160) &= ~1u )
              {
                v54 = i++;
                v55 = *(_QWORD *)(*((_QWORD *)a7 + 7 * v54 + 5) + 2576LL);
              }
            }
            for ( j = gpGraphicsDeviceList; j; j = (wchar_t *)*((_QWORD *)j + 16) )
              *((_DWORD *)j + 40) &= ~4u;
            for ( k = 0; k < *((_DWORD *)MDEV + 5); ++k )
            {
              v58 = 56LL * k;
              v59 = *(_QWORD *)((char *)MDEV + v58 + 40);
              v60 = *(_QWORD *)(v59 + 2592);
              *(_DWORD *)(*(_QWORD *)(v59 + 2576) + 160LL) |= 1u;
              v61 = *(_DWORD *)((char *)MDEV + v58 + 56);
              *(_DWORD *)(v60 + 76) = v61;
              v62 = *(_DWORD *)((char *)MDEV + v58 + 60);
              *(_DWORD *)(v60 + 80) = v62;
              if ( !v61 && !v62 )
                *(_DWORD *)(*(_QWORD *)(v59 + 2576) + 160LL) |= 4u;
            }
            v133 = *(HDEV *)MDEV;
            vGetDeviceCaps((struct PDEVOBJ *)&v133, gpGdiDevCaps);
          }
LABEL_111:
          if ( a7 && (v17 & 0xFFFFFFFD) == 0 )
          {
            DrvEnableMDEV(MDEV, 0LL, 0LL);
            if ( !v17 )
            {
              for ( m = 0; m < *((_DWORD *)a7 + 5); ++m )
              {
                v64 = *((_DWORD *)MDEV + 5);
                v65 = 0;
                for ( n = (HDEV)*((_QWORD *)a7 + 7 * m + 5); v65 < v64; ++v65 )
                {
                  if ( *((_QWORD *)n + 322) == *(_QWORD *)(*((_QWORD *)MDEV + 7 * v65 + 5) + 2576LL) )
                    break;
                }
                if ( v65 == v64 )
                  DrvDisableDisplay(n, 1);
              }
            }
            DrvDestroyMDEV(a7);
          }
          DrvReleaseChangeDisplaySettingLocks();
          if ( v126 )
            MULTIDEVLOCKOBJ::`scalar deleting destructor'(v126, v19);
          goto LABEL_124;
        }
        v105 = (struct _ERESOURCE *)*((_QWORD *)v104 + 6);
        EngAcquireSemaphore((HSEMAPHORE)v105);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemParentDevLock", v105, 11LL);
        EngAcquireSemaphore(ghsemDwmState);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        EngAcquireSemaphore(ghsemPalette);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 14LL);
        EngAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
        EngAcquireSemaphore(ghsemRFONTList);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
        GreAcquireHmgrSemaphore();
        v106 = *(HDEV *)MDEV;
        if ( v121[0] )
        {
          if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v106) == 1 )
          {
            v107 = *(HDEV *)MDEV;
            *(_QWORD *)MDEV = *((_QWORD *)a7 + 5);
            *(_QWORD *)a7 = v107;
            *((_QWORD *)a7 + 5) = v107;
            if ( !v33 )
              v107 = v34;
            v34 = v107;
            goto LABEL_233;
          }
        }
        else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v106) == 1 )
        {
          v108 = *(_QWORD *)a7;
          *(_QWORD *)a7 = *(_QWORD *)MDEV;
          *(_QWORD *)MDEV = v108;
LABEL_233:
          GreReleaseHmgrSemaphore();
          EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
          if ( ghsemRFONTList )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
          if ( ghsemPublicPFT )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
          if ( ghsemPalette )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          if ( ghsemDwmState )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
            PsLeavePriorityRegion();
          }
          EtwTraceGreLockReleaseSemaphore(L"hsemParentDevLock", v105);
          if ( v105 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v105);
            PsLeavePriorityRegion();
          }
          goto LABEL_70;
        }
        v32 = 1;
        goto LABEL_233;
      }
LABEL_229:
      v32 = 1;
      goto LABEL_70;
    }
    v128 = (struct _UNICODE_STRING *)DrvDisableDirectDrawForModeChange(a7, MDEV, v136);
    if ( !v128 )
      goto LABEL_229;
    v40 = v126;
    MULTIDEVLOCKOBJ::vInit(v126, a7);
    MULTIDEVLOCKOBJ::vInit(v122, MDEV);
    v37 = (__int64)v122;
    if ( (*(_DWORD *)v122 & 1) == 0 || (*(_DWORD *)v40 & 1) == 0 )
    {
      v32 = 1;
      goto LABEL_47;
    }
    hsema = *(HSEMAPHORE *)(*(_QWORD *)a7 + 48LL);
    Resource = *(PERESOURCE *)(*(_QWORD *)a7 + 64LL);
    EngAcquireSemaphore((HSEMAPHORE)Resource);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevPointer", Resource, 4LL);
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
    EngAcquireSemaphore(ghsemHT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemHT", ghsemHT, 6LL);
    EngAcquireSemaphore(hsema);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemOrgMdevDevLock", hsema, 11LL);
    MULTIDEVLOCKOBJ::vLock(v40);
    MULTIDEVLOCKOBJ::vLock(v122);
    v41 = ((__int64 (*)(void))IsGreHideSpritesSupported)();
    v38 = 0LL;
    if ( v41 >= 0 && qword_1C024F308 )
    {
      qword_1C024F308(*(_QWORD *)a7, 1LL);
      v38 = 0LL;
    }
    v19 = *((unsigned int *)MDEV + 5);
    v42 = *((_DWORD *)a7 + 5);
    if ( (_DWORD)v19 == 1 )
    {
      if ( v42 != 1 )
      {
        v89 = 0;
        if ( v42 )
        {
          while ( 1 )
          {
            v90 = v89;
            if ( *((_QWORD *)a7 + 7 * v89 + 5) == *((_QWORD *)MDEV + 5) )
              break;
            if ( ++v89 >= v42 )
              goto LABEL_46;
          }
          CloneHDEV = DrvCreateCloneHDEV(*((HDEV *)MDEV + 5), v89);
          v33 = CloneHDEV;
          if ( CloneHDEV )
          {
            v19 = 56 * v90;
            *(_QWORD *)((char *)a7 + v19 + 40) = CloneHDEV;
            v37 = *((_QWORD *)MDEV + 5);
            *(_QWORD *)((char *)a7 + v19 + 48) = v37;
            v34 = (HDEV)*((_QWORD *)MDEV + 5);
          }
          else
          {
            v32 = 1;
          }
          goto LABEL_193;
        }
      }
    }
    else if ( v42 == 1 )
    {
      v37 = 0LL;
      if ( (_DWORD)v19 )
      {
        v38 = *((_QWORD *)a7 + 5);
        while ( 1 )
        {
          v92 = (unsigned int)v37;
          if ( *((_QWORD *)MDEV + 7 * (unsigned int)v37 + 5) == v38 )
            break;
          v37 = (unsigned int)(v37 + 1);
          if ( (unsigned int)v37 >= (unsigned int)v19 )
            goto LABEL_192;
        }
        v94 = DrvCreateCloneHDEV(*((HDEV *)a7 + 5), v19);
        v33 = v94;
        if ( !v94 )
        {
          v32 = 1;
          goto LABEL_70;
        }
        v37 = 56 * v92;
        v120[0] = 1;
        *(_QWORD *)((char *)MDEV + v37 + 40) = v94;
        *(_QWORD *)((char *)MDEV + v37 + 48) = *((_QWORD *)a7 + 5);
        v34 = (HDEV)*((_QWORD *)a7 + 5);
      }
LABEL_192:
      v121[0] = 1;
LABEL_193:
      v43 = 0;
      if ( v33 )
      {
        v127 = (PERESOURCE)*((_QWORD *)v33 + 6);
        v93 = v127;
        EngAcquireSemaphore((HSEMAPHORE)v127);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemCloneHdevDevLock", v93, 11LL);
        v43 = 0;
      }
      if ( v32 )
      {
LABEL_48:
        v39 = 0x10000LL;
        if ( v34 )
        {
          v131 = v34;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v131) )
          {
            if ( ((unsigned int)v39 & (_DWORD)v34[532]) == 0 )
            {
              v37 = (unsigned int)-((unsigned int)bDynamicProcessAllDriverRealizations(v34, 0LL, 1LL) != 0);
              v32 &= v37;
            }
          }
        }
        if ( v32 )
        {
LABEL_70:
          if ( a7 )
          {
            if ( !v32 && v33 && v34 )
            {
              *(_QWORD *)v121 = v33;
              v129 = v34;
              if ( v120[0] )
              {
                v109 = *((_QWORD *)v34 + 319);
                *((_QWORD *)v33 + 319) = v109;
                if ( v109 )
                  *(_QWORD *)(v109 + 48) = v33;
                *((_QWORD *)v33 + 225) = *((_QWORD *)v34 + 225);
                DrvTransferGdiObjects(v33, v34, v38);
                *((_QWORD *)v34 + 319) = 0LL;
                *((_QWORD *)v34 + 225) = 0LL;
                _m_prefetchw(v34 + 10);
                do
                  v110 = *((_DWORD *)v34 + 10);
                while ( v110 != _InterlockedCompareExchange((volatile signed __int32 *)v34 + 10, v110 | 0x80000, v110) );
                _m_prefetchw(v33 + 10);
                do
                  v111 = *((_DWORD *)v33 + 10);
                while ( v111 != _InterlockedCompareExchange(
                                  (volatile signed __int32 *)v33 + 10,
                                  v111 & 0xFFF7FFFF,
                                  v111) );
                PDEVOBJ::bDisabled((PDEVOBJ *)&v129, 1);
                (*((void (__fastcall **)(_QWORD, HDEV))v33 + 337))(*((_QWORD *)v33 + 225), v33);
              }
              else
              {
                *((_QWORD *)v33 + 319) = 0LL;
                PDEVOBJ::bDisabled((PDEVOBJ *)v121, 1);
              }
            }
            *(_QWORD *)v120 = *(_QWORD *)a7;
            if ( (*(_DWORD *)(*(_QWORD *)v120 + 40LL) & 0x20000) != 0 )
              PDEVOBJ::bDisabled((PDEVOBJ *)v120, 1);
            if ( (int)IsGreHideSpritesSupported(v37, v19, v38, v39) >= 0 && qword_1C024F308 )
            {
              v48 = MDEV;
              if ( v32 )
                v48 = a7;
              qword_1C024F308(*(_QWORD *)v48, 0LL);
            }
            v49 = v127;
            if ( v127 )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsemCloneHdevDevLock", v127);
              ExReleaseResourceAndLeaveCriticalRegion(v49);
              PsLeavePriorityRegion();
            }
            MULTIDEVLOCKOBJ::vUnlock(v122);
            MULTIDEVLOCKOBJ::vUnlock(v126);
          }
          if ( v32 )
            goto LABEL_88;
          goto LABEL_84;
        }
        v44 = *((_DWORD *)MDEV + 5);
        v45 = *((_DWORD *)a7 + 5);
        if ( v44 != 1 )
        {
          if ( v45 != 1 && v44 )
          {
            do
            {
              v96 = *((_DWORD *)a7 + 5);
              v130 = (HDEV)(56LL * v43);
              v97 = *(HDEV *)((char *)MDEV + (_QWORD)v130 + 40);
              v98 = 0;
              if ( v96 )
              {
                v99 = *((_QWORD *)v97 + 322);
                while ( 1 )
                {
                  v129 = (HDEV)v98;
                  v100 = (HDEV)*((_QWORD *)a7 + 7 * v98 + 5);
                  if ( v99 == *((_QWORD *)v100 + 322) )
                    break;
                  if ( ++v98 >= v96 )
                    goto LABEL_220;
                }
                if ( v97 != v100 )
                {
                  if ( (unsigned int)bDynamicModeChange(v100, v97) == 1 )
                  {
                    v101 = v130;
                    v102 = *((_QWORD *)a7 + 7 * (_QWORD)v129 + 5);
                    *((_QWORD *)a7 + 7 * (_QWORD)v129 + 5) = *(_QWORD *)((char *)MDEV + (_QWORD)v130 + 40);
                    *(_QWORD *)((char *)MDEV + (_QWORD)v101 + 40) = v102;
                  }
                  else
                  {
                    v32 = 1;
                  }
                }
              }
LABEL_220:
              ++v43;
            }
            while ( v43 < *((_DWORD *)MDEV + 5) );
          }
          goto LABEL_54;
        }
        v46 = (HDEV)*((_QWORD *)MDEV + 5);
        if ( v45 == 1 )
        {
          if ( (unsigned int)bDynamicModeChange(*((HDEV *)a7 + 5), v46) == 1 )
          {
            v47 = *((_QWORD *)a7 + 5);
            *((_QWORD *)a7 + 5) = *((_QWORD *)MDEV + 5);
            *((_QWORD *)MDEV + 5) = v47;
LABEL_54:
            GreReleaseHmgrSemaphore();
            EtwTraceGreLockReleaseSemaphore(L"ghsemRFONTList", ghsemRFONTList);
            if ( ghsemRFONTList )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemRFONTList);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
            if ( ghsemPublicPFT )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPublicPFT);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemPalette", ghsemPalette);
            if ( ghsemPalette )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemPalette);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
            if ( ghsemDriverMgmt )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
              PsLeavePriorityRegion();
            }
            EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
            v37 = (__int64)ghsemDwmState;
            if ( ghsemDwmState )
            {
              ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
              PsLeavePriorityRegion();
            }
            goto LABEL_64;
          }
        }
        else if ( (unsigned int)bDynamicModeChange(*(HDEV *)a7, v46) == 1 )
        {
          v95 = *(HDEV *)a7;
          *(_QWORD *)a7 = *((_QWORD *)MDEV + 5);
          *((_QWORD *)MDEV + 5) = v95;
          if ( !v33 )
            v95 = v34;
          v34 = v95;
          goto LABEL_54;
        }
        v32 = 1;
        goto LABEL_54;
      }
    }
LABEL_46:
    EngAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    EngAcquireSemaphore(ghsemPalette);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPalette", ghsemPalette, 13LL);
    EngAcquireSemaphore(ghsemPublicPFT);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
    EngAcquireSemaphore(ghsemRFONTList);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemRFONTList", ghsemRFONTList, 16LL);
    GreAcquireHmgrSemaphore();
LABEL_47:
    v43 = 0;
    goto LABEL_48;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
LABEL_14:
    v14 = 1;
    goto LABEL_15;
  }
  if ( v23 == 1 )
  {
    gbDeferredInvalidateDualView = 1;
    gbDeferredOrgMdev = a7;
    goto LABEL_14;
  }
  DrvReleaseChangeDisplaySettingLocks();
  v86 = v123;
  if ( v123 )
    Win32FreePool(v123);
  v87 = WdLogNewEntry5_WdTrace(v86, v85);
  WdLogEvent5_WdTrace(v87);
  v17 = -6;
LABEL_134:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0_EtwWriteTransfer(v70, &DrvChangeDisplaySettingsEnd, 0LL);
  return (unsigned int)v17;
}

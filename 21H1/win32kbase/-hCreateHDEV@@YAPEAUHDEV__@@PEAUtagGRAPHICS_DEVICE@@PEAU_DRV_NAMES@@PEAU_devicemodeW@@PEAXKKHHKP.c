/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00058E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00177C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ldevLoadInternal @ 0x1C0044270 (ldevLoadInternal.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00448E0 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C004D734 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C004DDCC (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C007FBF4 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00810A0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0099794 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ldevUnloadImage @ 0x1C00AD180 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C00AD2C0 (ldevLoadDriver.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00ADCE8 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B0C7C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00B4CE8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CB454 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C00D1E60 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

struct PDEV *__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        struct PDEV *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct _DRV_NAMES *v12; // r14
  struct PDEV *v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  HDEV v17; // rcx
  unsigned int v18; // edi
  HDEV v19; // rbx
  BOOL v20; // r15d
  int v21; // r8d
  struct PDEV *v22; // rdi
  struct PDEV *v23; // rcx
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  char *v31; // rbx
  struct _LDEV *Driver; // rax
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 v35; // rcx
  int v36; // r8d
  struct PDEV *v37; // rax
  unsigned int DeviceObject; // ecx
  struct HOBJ__ **v39; // rbx
  __int64 v40; // rcx
  bool v41; // zf
  struct PDEV *v42; // rcx
  void *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v49; // rdx
  int v50; // r8d
  __int64 v51; // rcx
  HDEV v52; // rsi
  struct PDEV *v53; // r13
  const struct _devicemodeW *v54; // rdx
  int v55; // ecx
  int v56; // r8d
  int v57; // r8d
  struct _ERESOURCE *v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  int v61; // r8d
  int v62; // r8d
  __int64 v63; // rcx
  int v64; // r8d
  int v65; // r8d
  __int64 v66; // rcx
  int v67; // r8d
  struct _ERESOURCE *v68; // rcx
  __int64 v69; // rcx
  PERESOURCE v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  struct _ERESOURCE *v74; // rcx
  __int64 v75; // rcx
  int v76; // eax
  int v77; // r14d
  HDEV v78; // rax
  __int64 v79; // rcx
  int v80; // r8d
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  struct PDEV *v85; // [rsp+70h] [rbp-10h] BYREF
  struct PDEV *v86; // [rsp+78h] [rbp-8h] BYREF
  struct PDEV *v87; // [rsp+C0h] [rbp+40h] BYREF
  struct _DRV_NAMES *v88; // [rsp+C8h] [rbp+48h]
  struct PDEV *v89; // [rsp+D8h] [rbp+58h] BYREF

  v89 = a4;
  v88 = a2;
  v87 = a1;
  v12 = a2;
  v13 = a1;
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v15 = a5;
  v16 = a6;
  v14[7] = a9;
  v14[3] = v13;
  v14[4] = a4;
  v14[5] = v15;
  v14[6] = v16;
  WdLogEvent5_WdEvent(v14);
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  *a10 = 0LL;
  if ( v13 != (struct PDEV *)-4LL )
  {
    if ( !a3 )
      goto LABEL_111;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    v22 = gppdevList;
    if ( gppdevList )
    {
      do
      {
        v23 = (struct PDEV *)*((_QWORD *)v22 + 322);
        v85 = v22;
        if ( (((unsigned __int64)v23 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && v13 == v23 )
        {
          v49 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v22 + 443);
          ++*((_DWORD *)v22 + 2);
          TrackObjectReferenceIncrement(1u, v49);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v50);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v51);
          }
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
          EngAcquireSemaphore(*((HSEMAPHORE *)v22 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v22 + 6), 11);
          v52 = 0LL;
          v53 = 0LL;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v85) )
            v55 = DevmodeEqualEx(a3, v54);
          else
            v55 = memcmp(a3, v54, 0xDCuLL) == 0;
          if ( (*((_DWORD *)v22 + 10) & 0x80000) == 0
            && *((struct PDEV **)v22 + 321) == v89
            && *((_DWORD *)v22 + 652) == a5
            && *((_DWORD *)v22 + 653) == a6
            && v55
            && !a8 )
          {
            if ( v19 )
            {
              v77 = *((_DWORD *)v22 + 10) & 0x400;
              if ( !v77 )
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v85, 0LL, v56);
              v52 = v19;
              v78 = (HDEV)v22;
              if ( v77 )
              {
                v78 = v19;
                v52 = 0LL;
              }
              v19 = v78;
            }
            else
            {
              PDEVOBJ::vReferencePdev((PDEVOBJ *)&v85, 0LL, v56);
              v19 = (HDEV)v22;
            }
            v53 = (struct PDEV *)v52;
          }
          else if ( a7 == 1 )
          {
            v20 = 1;
          }
          else
          {
            v52 = (HDEV)v22;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)v22 + 6), v56);
          v58 = (struct _ERESOURCE *)*((_QWORD *)v22 + 6);
          if ( v58 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v58);
            PsLeavePriorityRegion(v59);
          }
          if ( v52 )
          {
            if ( gbDeferredInvalidateDualView )
            {
              gbDeferredInvalidateDualView = 0;
              v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
            }
            EngAcquireSemaphore(*((HSEMAPHORE *)v52 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v52 + 6), 11);
            if ( ((_DWORD)v52[10] & 0x400) == 0 )
            {
              if ( (unsigned int)DrvDisableDisplay((HSEMAPHORE *)v52, 0LL, v73) )
                *a10 = v52;
              else
                v20 = 1;
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v52 + 6), v73);
            v74 = (struct _ERESOURCE *)*((_QWORD *)v52 + 6);
            if ( v74 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v74);
              PsLeavePriorityRegion(v75);
            }
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v57);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v60);
          }
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          if ( v53 )
          {
            v86 = v53;
            PDEVOBJ::vUnreferencePdev(&v86, 0, v61);
          }
          v22 = *(struct PDEV **)v22;
          PDEVOBJ::vUnreferencePdev(&v85, 0, v61);
          v13 = v87;
        }
        else
        {
          v22 = *(struct PDEV **)v22;
        }
      }
      while ( v22 );
      v12 = v88;
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v21);
    v17 = (HDEV)ghsemDriverMgmt;
    v18 = 0;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v25);
    }
    if ( v20 )
    {
      if ( v19 )
      {
        v89 = (struct PDEV *)v19;
        PDEVOBJ::vUnreferencePdev(&v89, 0, v24);
      }
      goto LABEL_111;
    }
    if ( v19 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      *((_QWORD *)v19 + 4) = 0LL;
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v62);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v63);
      }
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
      EngAcquireSemaphore(*((HSEMAPHORE *)v19 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v19 + 6), 11);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      ++*((_DWORD *)v19 + 3);
      if ( ((_DWORD)v19[10] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v64);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion(v79);
        }
        DrvEnableDisplay(v19);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v64);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v66);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)v19 + 6), v65);
      v68 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
      if ( v68 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v68);
        PsLeavePriorityRegion(v69);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v67);
      v70 = ghsemDynamicModeChange;
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v71);
      }
      v72 = WdLogNewEntry5_WdTrace(v70);
      *(_QWORD *)(v72 + 24) = v19;
      WdLogEvent5_WdTrace(v72);
      return (struct PDEV *)v19;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
      v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v80);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v81);
      }
      if ( v20 )
        goto LABEL_109;
    }
  }
  v27 = PALLOCMEM2(0x840uLL, 0x706D7447u, 1);
  if ( !v27 )
    goto LABEL_109;
  if ( !*(_DWORD *)v12 )
    goto LABEL_108;
  while ( 1 )
  {
    if ( a9 == 1 )
    {
      v29 = 1LL;
      v30 = (*((_DWORD *)v13 + 40) & 0x4000000 | 0x2000000u) >> 25;
LABEL_17:
      v31 = (char *)v12 + 16 * v18;
      Driver = ldevLoadDriver(*((PCWSTR *)v31 + 2), v29, v30);
      goto LABEL_18;
    }
    if ( a9 == 2 )
      break;
    v33 = a9 - 3;
    if ( a9 == 4 )
    {
      v29 = 4LL;
      v30 = 1LL;
      goto LABEL_17;
    }
LABEL_100:
    v82 = WdLogNewEntry5_WdTrace(v33);
    WdLogEvent5_WdTrace(v82);
LABEL_104:
    if ( ++v18 >= *(_DWORD *)v12 )
      goto LABEL_108;
  }
  v31 = (char *)v12 + 16 * v18;
  Driver = (struct _LDEV *)ldevLoadInternal(*((unsigned int (__fastcall **)(__int64, __int64, __int128 *))v31 + 2), 3);
LABEL_18:
  v33 = 0LL;
  v34 = (__int64)Driver;
  if ( !Driver )
  {
    v12 = v88;
    goto LABEL_100;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v87,
    Driver,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v31 + 2),
    *((void **)v31 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v87 )
  {
    v83 = WdLogNewEntry5_WdTrace(v35);
    WdLogEvent5_WdTrace(v83);
    ldevUnloadImage(v34);
LABEL_103:
    v12 = v88;
    goto LABEL_104;
  }
  *((_QWORD *)v87 + 322) = v13;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v87, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v87, 0, v36);
    goto LABEL_103;
  }
  v37 = v87;
  DeviceObject = (unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  *((_QWORD *)v87 + 197) = 0LL;
  *((_QWORD *)v37 + 194) = 0LL;
  *((_DWORD *)v37 + 390) = 0;
  v39 = (struct HOBJ__ **)HmgShareLockCheck(DeviceObject, 16);
  v27[122] = v27 + 68;
  *((_DWORD *)v27 + 182) = 0;
  *(_DWORD *)(v27[122] + 176LL) = 0xFFFFFF;
  v40 = v27[122];
  *((_DWORD *)v27 + 30) = 0;
  *(_QWORD *)(v40 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (int *)v87 + 386,
    (__int64)v27,
    (__int64)v39,
    (__int64)ppalDefault,
    *(_QWORD *)(*((_QWORD *)v87 + 319) + 128LL),
    *((_QWORD *)v87 + 319),
    1u);
  DEC_SHARE_REF_CNT_LAZY0(v39);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v87;
  v41 = a9 == 2;
  v42 = v89;
  *((_QWORD *)v87 + 322) = v13;
  *((_QWORD *)v87 + 321) = v42;
  if ( !v41 )
  {
    *((_QWORD *)v87 + 324) = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 0x76656447u, 0);
    v43 = (void *)*((_QWORD *)v87 + 324);
    if ( v43 )
    {
      memmove(v43, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v87 + 324) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(v13, 1);
    }
    else
    {
      v20 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v87, 0);
  if ( (*((_DWORD *)v87 + 10) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v87 + 322) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v87 + 11) |= 4u;
    }
    else
    {
      if ( qword_1C0257260 )
        v76 = qword_1C0257260();
      else
        v76 = -1073741637;
      if ( v76 >= 0 && qword_1C0257268 )
        qword_1C0257268(&v87);
    }
  }
  if ( !v20 )
  {
    Win32FreePool((__int64)v27, v44, v45);
    v47 = WdLogNewEntry5_WdTrace(v46);
    *(_QWORD *)(v47 + 24) = v87;
    WdLogEvent5_WdTrace(v47);
    return v87;
  }
  PDEVOBJ::vUnreferencePdev(&v87, 0, v45);
LABEL_108:
  Win32FreePool((__int64)v27, v26, v28);
LABEL_109:
  v17 = *a10;
  if ( *a10 )
    DrvEnableDisplay(v17);
LABEL_111:
  v84 = WdLogNewEntry5_WdTrace(v17);
  WdLogEvent5_WdTrace(v84);
  return 0LL;
}

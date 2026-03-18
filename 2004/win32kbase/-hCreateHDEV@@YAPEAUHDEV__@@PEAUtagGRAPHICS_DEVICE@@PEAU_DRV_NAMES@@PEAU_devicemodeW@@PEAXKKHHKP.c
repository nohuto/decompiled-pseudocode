/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0027540 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ldevLoadInternal @ 0x1C0051150 (ldevLoadInternal.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C0052410 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C005B1A4 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C007FBC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0086C54 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0088170 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C0088B80 (HmgShareLockCheck.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B8F98 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00BA548 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00BA8B4 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ldevLoadDriver @ 0x1C00BBEE0 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1C00BD4E0 (ldevUnloadImage.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00BE074 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00C1150 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C2650 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CBCE8 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C00D28C0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
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
  struct tagGRAPHICS_DEVICE *v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  HDEV v17; // rcx
  unsigned int v18; // edi
  HDEV v19; // rbx
  BOOL v20; // r15d
  int v21; // r8d
  struct PDEV *v22; // rdi
  struct tagGRAPHICS_DEVICE *v23; // rcx
  int v24; // r8d
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  char *v27; // rbx
  struct _LDEV *Driver; // rax
  __int64 v29; // rcx
  struct _LDEV *v30; // r14
  __int64 v31; // rcx
  int v32; // r8d
  struct PDEV *v33; // rax
  ULONG NumberOfMapRegisters; // ecx
  struct HOBJ__ **v35; // rbx
  __int64 v36; // rcx
  bool v37; // zf
  struct PDEV *v38; // rcx
  void *v39; // rcx
  int v40; // r8d
  __int64 v41; // rcx
  __int64 v42; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v44; // rdx
  int v45; // r8d
  __int64 v46; // rcx
  HDEV v47; // rsi
  struct PDEV *v48; // r13
  const struct _devicemodeW *v49; // rdx
  int v50; // ecx
  int v51; // r8d
  int v52; // r8d
  struct _ERESOURCE *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // r8d
  int v57; // r8d
  __int64 v58; // rcx
  int v59; // r8d
  int v60; // r8d
  __int64 v61; // rcx
  int v62; // r8d
  struct _ERESOURCE *v63; // rcx
  __int64 v64; // rcx
  PERESOURCE v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // r8d
  struct _ERESOURCE *v69; // rcx
  __int64 v70; // rcx
  int v71; // eax
  int v72; // r14d
  HDEV v73; // rax
  __int64 v74; // rcx
  int v75; // r8d
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  struct PDEV *v80; // [rsp+70h] [rbp-10h] BYREF
  struct PDEV *v81; // [rsp+78h] [rbp-8h] BYREF
  struct PDEV *v82; // [rsp+C0h] [rbp+40h] BYREF
  struct _DRV_NAMES *v83; // [rsp+C8h] [rbp+48h]
  struct PDEV *v84; // [rsp+D8h] [rbp+58h] BYREF

  v84 = a4;
  v83 = a2;
  v82 = a1;
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
  if ( v13 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_110;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    v22 = gppdevList;
    if ( gppdevList )
    {
      do
      {
        v23 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v22 + 322);
        v80 = v22;
        if ( (((unsigned __int64)v23 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && v13 == v23 )
        {
          v44 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)v22 + 443);
          ++*((_DWORD *)v22 + 2);
          TrackObjectReferenceIncrement(1u, v44);
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v45);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v46);
          }
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
          EngAcquireSemaphore(*((HSEMAPHORE *)v22 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v22 + 6), 11);
          v47 = 0LL;
          v48 = 0LL;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v80) )
            v50 = DevmodeEqualEx(a3, v49);
          else
            v50 = memcmp(a3, v49, 0xDCuLL) == 0;
          if ( (*((_DWORD *)v22 + 10) & 0x80000) == 0
            && *((struct PDEV **)v22 + 321) == v84
            && *((_DWORD *)v22 + 652) == a5
            && *((_DWORD *)v22 + 653) == a6
            && v50
            && !a8 )
          {
            if ( v19 )
            {
              v72 = *((_DWORD *)v22 + 10) & 0x400;
              if ( !v72 )
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v80, 0LL, v51);
              v47 = v19;
              v73 = (HDEV)v22;
              if ( v72 )
              {
                v73 = v19;
                v47 = 0LL;
              }
              v19 = v73;
            }
            else
            {
              PDEVOBJ::vReferencePdev((PDEVOBJ *)&v80, 0LL, v51);
              v19 = (HDEV)v22;
            }
            v48 = (struct PDEV *)v47;
          }
          else if ( a7 == 1 )
          {
            v20 = 1;
          }
          else
          {
            v47 = (HDEV)v22;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)v22 + 6), v51);
          v53 = (struct _ERESOURCE *)*((_QWORD *)v22 + 6);
          if ( v53 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v53);
            PsLeavePriorityRegion(v54);
          }
          if ( v47 )
          {
            if ( gbDeferredInvalidateDualView )
            {
              gbDeferredInvalidateDualView = 0;
              v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
            }
            EngAcquireSemaphore(*((HSEMAPHORE *)v47 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v47 + 6), 11);
            if ( ((_DWORD)v47[10] & 0x400) == 0 )
            {
              if ( (unsigned int)DrvDisableDisplay(v47, 0) )
                *a10 = v47;
              else
                v20 = 1;
            }
            EtwTraceGreLockReleaseSemaphore((__int64)L"poDisable.hsemDevLock()", *((_QWORD *)v47 + 6), v68);
            v69 = (struct _ERESOURCE *)*((_QWORD *)v47 + 6);
            if ( v69 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v69);
              PsLeavePriorityRegion(v70);
            }
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v52);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion(v55);
          }
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          if ( v48 )
          {
            v81 = v48;
            PDEVOBJ::vUnreferencePdev(&v81, 0, v56);
          }
          v22 = *(struct PDEV **)v22;
          PDEVOBJ::vUnreferencePdev(&v80, 0, v56);
          v13 = v82;
        }
        else
        {
          v22 = *(struct PDEV **)v22;
        }
      }
      while ( v22 );
      v12 = v83;
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
        v84 = (struct PDEV *)v19;
        PDEVOBJ::vUnreferencePdev(&v84, 0, v24);
      }
      goto LABEL_110;
    }
    if ( v19 )
    {
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      *((_QWORD *)v19 + 4) = 0LL;
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v57);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v58);
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
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v59);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion(v74);
        }
        DrvEnableDisplay(v19);
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v59);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v61);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)v19 + 6), v60);
      v63 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
      if ( v63 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v63);
        PsLeavePriorityRegion(v64);
      }
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v62);
      v65 = ghsemDynamicModeChange;
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v66);
      }
      v67 = WdLogNewEntry5_WdTrace(v65);
      *(_QWORD *)(v67 + 24) = v19;
      WdLogEvent5_WdTrace(v67);
      return (struct PDEV *)v19;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
      v20 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v75);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v76);
      }
      if ( v20 )
        goto LABEL_108;
    }
  }
  v26 = PALLOCMEM2(0x840uLL, 0x706D7447u, 1);
  if ( !v26 )
    goto LABEL_108;
  if ( !*(_DWORD *)v12 )
    goto LABEL_107;
  while ( 1 )
  {
    if ( a9 == 1 )
    {
LABEL_16:
      v27 = (char *)v12 + 16 * v18;
      Driver = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v27 + 2));
      goto LABEL_17;
    }
    if ( a9 == 2 )
      break;
    v29 = a9 - 3;
    if ( a9 == 4 )
      goto LABEL_16;
LABEL_99:
    v77 = WdLogNewEntry5_WdTrace(v29);
    WdLogEvent5_WdTrace(v77);
LABEL_103:
    if ( ++v18 >= *(_DWORD *)v12 )
      goto LABEL_107;
  }
  v27 = (char *)v12 + 16 * v18;
  Driver = (struct _LDEV *)ldevLoadInternal(*((unsigned int (__fastcall **)(__int64, __int64, __int128 *))v27 + 2), 3);
LABEL_17:
  v29 = 0LL;
  v30 = Driver;
  if ( !Driver )
  {
    v12 = v83;
    goto LABEL_99;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v82,
    Driver,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v27 + 2),
    *((void **)v27 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v82 )
  {
    v78 = WdLogNewEntry5_WdTrace(v31);
    WdLogEvent5_WdTrace(v78);
    ldevUnloadImage(v30);
LABEL_102:
    v12 = v83;
    goto LABEL_103;
  }
  *((_QWORD *)v82 + 322) = v13;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v82, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v82, 0, v32);
    goto LABEL_102;
  }
  v33 = v82;
  NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  *((_QWORD *)v82 + 197) = 0LL;
  *((_QWORD *)v33 + 194) = 0LL;
  *((_DWORD *)v33 + 390) = 0;
  v35 = (struct HOBJ__ **)HmgShareLockCheck(NumberOfMapRegisters, 16);
  v26[122] = v26 + 68;
  *((_DWORD *)v26 + 182) = 0;
  *(_DWORD *)(v26[122] + 176LL) = 0xFFFFFF;
  v36 = v26[122];
  *((_DWORD *)v26 + 30) = 0;
  *(_QWORD *)(v36 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (char *)v82 + 1544,
    v26,
    v35,
    ppalDefault,
    *(_QWORD *)(*((_QWORD *)v82 + 319) + 128LL),
    *((_QWORD *)v82 + 319),
    1);
  DEC_SHARE_REF_CNT_LAZY0(v35);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v82;
  v37 = a9 == 2;
  v38 = v84;
  *((_QWORD *)v82 + 322) = v13;
  *((_QWORD *)v82 + 321) = v38;
  if ( !v37 )
  {
    *((_QWORD *)v82 + 324) = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra, 0x76656447u, 0);
    v39 = (void *)*((_QWORD *)v82 + 324);
    if ( v39 )
    {
      memmove(v39, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v82 + 324) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(v13, 1);
    }
    else
    {
      v20 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v82, 0);
  if ( (*((_DWORD *)v82 + 10) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v82 + 322) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v82 + 11) |= 4u;
    }
    else
    {
      if ( qword_1C02512A0 )
        v71 = qword_1C02512A0();
      else
        v71 = -1073741637;
      if ( v71 >= 0 && qword_1C02512A8 )
        qword_1C02512A8(&v82);
    }
  }
  if ( !v20 )
  {
    Win32FreePool((__int64)v26);
    v42 = WdLogNewEntry5_WdTrace(v41);
    *(_QWORD *)(v42 + 24) = v82;
    WdLogEvent5_WdTrace(v42);
    return v82;
  }
  PDEVOBJ::vUnreferencePdev(&v82, 0, v40);
LABEL_107:
  Win32FreePool((__int64)v26);
LABEL_108:
  v17 = *a10;
  if ( *a10 )
    DrvEnableDisplay(v17);
LABEL_110:
  v79 = WdLogNewEntry5_WdTrace(v17);
  WdLogEvent5_WdTrace(v79);
  return 0LL;
}

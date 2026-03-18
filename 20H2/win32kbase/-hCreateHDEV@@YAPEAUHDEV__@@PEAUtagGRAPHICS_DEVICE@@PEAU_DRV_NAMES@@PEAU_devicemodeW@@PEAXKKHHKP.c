/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0011970 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0015994 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C001637C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1C00166E4 (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C0016734 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ldevLoadDriver @ 0x1C00167D0 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1C0017DD0 (ldevUnloadImage.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0017F10 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00190D4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0042ED0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047384 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0060CA8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ldevLoadInternal @ 0x1C00B1C10 (ldevLoadInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1350 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00C1F50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CAE48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     memcmp @ 0x1C00D2790 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        HDEV a4,
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
  __int64 v17; // rdx
  HDEV v18; // rcx
  unsigned int v19; // edi
  HDEV v20; // rbx
  BOOL v21; // r15d
  struct PDEV *v22; // rdi
  struct tagGRAPHICS_DEVICE *v23; // rcx
  __int64 v24; // rsi
  char *v25; // rbx
  struct _LDEV *Driver; // rax
  __int64 v27; // rcx
  struct _LDEV *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  struct tagGRAPHICS_DEVICE *v32; // rax
  __int64 v33; // rcx
  struct BRUSH *v34; // rbx
  __int64 v35; // rcx
  bool v36; // zf
  HDEV v37; // rcx
  void *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v43; // rdx
  HDEV v44; // rsi
  HDEV v45; // r13
  const struct _devicemodeW *v46; // rdx
  int v47; // ecx
  int v48; // r8d
  struct _ERESOURCE *v49; // rcx
  struct _ERESOURCE *v50; // rcx
  __int64 v51; // rdx
  PERESOURCE v52; // rcx
  __int64 v53; // rax
  struct _ERESOURCE *v54; // rcx
  int v55; // eax
  int v56; // r14d
  HDEV v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  struct PDEV *v61; // [rsp+70h] [rbp-10h] BYREF
  HDEV v62; // [rsp+78h] [rbp-8h] BYREF
  struct tagGRAPHICS_DEVICE *v63; // [rsp+C0h] [rbp+40h] BYREF
  struct _DRV_NAMES *v64; // [rsp+C8h] [rbp+48h]
  HDEV v65; // [rsp+D8h] [rbp+58h] BYREF

  v65 = a4;
  v64 = a2;
  v63 = a1;
  v12 = a2;
  v13 = a1;
  v14 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v15 = a5;
  v16 = a6;
  v14[7] = a9;
  v14[3] = v13;
  v14[4] = a4;
  v14[5] = v15;
  v14[6] = v16;
  WdLogEvent5_WdEvent(v14);
  v19 = 0;
  v20 = 0LL;
  v21 = 0;
  *a10 = 0LL;
  if ( v13 != (struct tagGRAPHICS_DEVICE *)-4LL )
  {
    if ( !a3 )
      goto LABEL_110;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    v22 = gppdevList;
    if ( gppdevList )
    {
      do
      {
        v23 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v22 + 322);
        v61 = v22;
        if ( (((unsigned __int64)v23 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && v13 == v23 )
        {
          v43 = *((_QWORD *)v22 + 443);
          ++*((_DWORD *)v22 + 2);
          TrackObjectReferenceIncrement(1LL, v43);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion();
          }
          EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
          EngAcquireSemaphore(*((HSEMAPHORE *)v22 + 6));
          EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v22 + 6), 11LL);
          v44 = 0LL;
          v45 = 0LL;
          if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v61) )
            v47 = DevmodeEqualEx(a3, v46);
          else
            v47 = memcmp(a3, v46, 0xDCuLL) == 0;
          if ( (*((_DWORD *)v22 + 10) & 0x80000) == 0
            && *((HDEV *)v22 + 321) == v65
            && *((_DWORD *)v22 + 652) == a5
            && *((_DWORD *)v22 + 653) == a6
            && v47
            && !a8 )
          {
            if ( v20 )
            {
              v56 = *((_DWORD *)v22 + 10) & 0x400;
              if ( !v56 )
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v61, 0LL, v48);
              v44 = v20;
              v57 = (HDEV)v22;
              if ( v56 )
              {
                v57 = v20;
                v44 = 0LL;
              }
              v20 = v57;
            }
            else
            {
              PDEVOBJ::vReferencePdev((PDEVOBJ *)&v61, 0LL, v48);
              v20 = (HDEV)v22;
            }
            v45 = v44;
          }
          else if ( a7 == 1 )
          {
            v21 = 1;
          }
          else
          {
            v44 = (HDEV)v22;
          }
          EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v22 + 6));
          v49 = (struct _ERESOURCE *)*((_QWORD *)v22 + 6);
          if ( v49 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v49);
            PsLeavePriorityRegion();
          }
          if ( v44 )
          {
            if ( gbDeferredInvalidateDualView )
            {
              gbDeferredInvalidateDualView = 0;
              v21 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
            }
            EngAcquireSemaphore(*((HSEMAPHORE *)v44 + 6));
            EtwTraceGreLockAcquireSemaphoreExclusive(L"poDisable.hsemDevLock()", *((_QWORD *)v44 + 6), 11LL);
            if ( ((_DWORD)v44[10] & 0x400) == 0 )
            {
              if ( (unsigned int)DrvDisableDisplay(v44, 0) )
                *a10 = v44;
              else
                v21 = 1;
            }
            EtwTraceGreLockReleaseSemaphore(L"poDisable.hsemDevLock()", *((_QWORD *)v44 + 6));
            v54 = (struct _ERESOURCE *)*((_QWORD *)v44 + 6);
            if ( v54 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v54);
              PsLeavePriorityRegion();
            }
          }
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
          if ( ghsemDynamicModeChange )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
            PsLeavePriorityRegion();
          }
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
          if ( v45 )
          {
            v62 = v45;
            PDEVOBJ::vUnreferencePdev(&v62, 0LL);
          }
          v22 = *(struct PDEV **)v22;
          PDEVOBJ::vUnreferencePdev(&v61, 0LL);
          v13 = v63;
        }
        else
        {
          v22 = *(struct PDEV **)v22;
        }
      }
      while ( v22 );
      v12 = v64;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v18 = (HDEV)ghsemDriverMgmt;
    v19 = 0;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    if ( v21 )
    {
      if ( v20 )
      {
        v65 = v20;
        PDEVOBJ::vUnreferencePdev(&v65, 0LL);
      }
      goto LABEL_110;
    }
    if ( v20 )
    {
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      *((_QWORD *)v20 + 4) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      EngAcquireSemaphore(*((HSEMAPHORE *)v20 + 6));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *((_QWORD *)v20 + 6), 11LL);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      ++*((_DWORD *)v20 + 3);
      if ( ((_DWORD)v20[10] & 0x400) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion();
        }
        DrvEnableDisplay(v20);
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion();
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", *((_QWORD *)v20 + 6));
      v50 = (struct _ERESOURCE *)*((_QWORD *)v20 + 6);
      if ( v50 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v50);
        PsLeavePriorityRegion();
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      v52 = ghsemDynamicModeChange;
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      v53 = WdLogNewEntry5_WdTrace(v52, v51);
      *(_QWORD *)(v53 + 24) = v20;
      WdLogEvent5_WdTrace(v53);
      return (struct tagGRAPHICS_DEVICE *)v20;
    }
    if ( gbDeferredInvalidateDualView )
    {
      gbDeferredInvalidateDualView = 0;
      EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
      v21 = DrvDisableMDEVChildren(gbDeferredOrgMdev, 0, 0) == 0;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
      if ( v21 )
        goto LABEL_108;
    }
  }
  v24 = PALLOCMEM2(0x840uLL);
  if ( !v24 )
    goto LABEL_108;
  if ( !*(_DWORD *)v12 )
    goto LABEL_107;
  while ( 1 )
  {
    if ( a9 == 1 )
    {
LABEL_16:
      v25 = (char *)v12 + 16 * v19;
      Driver = (struct _LDEV *)ldevLoadDriver(*((PCWSTR *)v25 + 2));
      goto LABEL_17;
    }
    if ( a9 == 2 )
      break;
    v27 = a9 - 3;
    if ( a9 == 4 )
      goto LABEL_16;
LABEL_99:
    v58 = WdLogNewEntry5_WdTrace(v27, v17);
    WdLogEvent5_WdTrace(v58);
LABEL_103:
    if ( ++v19 >= *(_DWORD *)v12 )
      goto LABEL_107;
  }
  v25 = (char *)v12 + 16 * v19;
  Driver = (struct _LDEV *)ldevLoadInternal(*((_QWORD *)v25 + 2), 3LL);
LABEL_17:
  v27 = 0LL;
  v28 = Driver;
  if ( !Driver )
  {
    v12 = v64;
    goto LABEL_99;
  }
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v63,
    Driver,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v25 + 2),
    *((void **)v25 + 1),
    0LL,
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v63 )
  {
    v59 = WdLogNewEntry5_WdTrace(v30, v29);
    WdLogEvent5_WdTrace(v59);
    ldevUnloadImage(v28);
LABEL_102:
    v12 = v64;
    goto LABEL_103;
  }
  *((_QWORD *)v63 + 322) = v13;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v63, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev(&v63, 0LL);
    goto LABEL_102;
  }
  v32 = v63;
  v33 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
  LOBYTE(v31) = 16;
  *((_QWORD *)v63 + 197) = 0LL;
  *((_QWORD *)v32 + 194) = 0LL;
  *((_DWORD *)v32 + 390) = 0;
  v34 = (struct BRUSH *)HmgShareLockCheck(v33, v31);
  *(_QWORD *)(v24 + 976) = v24 + 544;
  *(_DWORD *)(v24 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v24 + 976) + 176LL) = 0xFFFFFF;
  v35 = *(_QWORD *)(v24 + 976);
  *(_DWORD *)(v24 + 120) = 0;
  *(_QWORD *)(v35 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (char *)v63 + 1544,
    v24,
    v34,
    ppalDefault,
    *(_QWORD *)(*((_QWORD *)v63 + 319) + 128LL),
    *((_QWORD *)v63 + 319),
    1);
  DEC_SHARE_REF_CNT_LAZY0(v34);
  if ( !*((_QWORD *)SURFACE::pdibDefault + 6) )
    *((_QWORD *)SURFACE::pdibDefault + 6) = v63;
  v36 = a9 == 2;
  v37 = v65;
  *((_QWORD *)v63 + 322) = v13;
  *((_QWORD *)v63 + 321) = v37;
  if ( !v36 )
  {
    *((_QWORD *)v63 + 324) = PALLOCMEM2(a3->dmSize + (unsigned int)a3->dmDriverExtra);
    v38 = (void *)*((_QWORD *)v63 + 324);
    if ( v38 )
    {
      memmove(v38, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v63 + 324) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(v13, 1u);
    }
    else
    {
      v21 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v63, 0);
  if ( (*((_DWORD *)v63 + 10) & 0x20000) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v63 + 322) + 160LL) & 0x800000) != 0 )
    {
      *((_DWORD *)v63 + 11) |= 4u;
    }
    else
    {
      if ( qword_1C024F2A0 )
        v55 = qword_1C024F2A0();
      else
        v55 = -1073741637;
      if ( v55 >= 0 && qword_1C024F2A8 )
        qword_1C024F2A8(&v63);
    }
  }
  if ( !v21 )
  {
    Win32FreePool(v24);
    v41 = WdLogNewEntry5_WdTrace(v40, v39);
    *(_QWORD *)(v41 + 24) = v63;
    WdLogEvent5_WdTrace(v41);
    return v63;
  }
  PDEVOBJ::vUnreferencePdev(&v63, 0LL);
LABEL_107:
  Win32FreePool(v24);
LABEL_108:
  v18 = *a10;
  if ( *a10 )
    DrvEnableDisplay(v18);
LABEL_110:
  v60 = WdLogNewEntry5_WdTrace(v18, v17);
  WdLogEvent5_WdTrace(v60);
  return 0LL;
}

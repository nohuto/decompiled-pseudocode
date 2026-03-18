/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C014D860
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     HmgSafeNextObjtByIndex @ 0x1C009AADC (HmgSafeNextObjtByIndex.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C00B0C7C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CB454 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C014C4C0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d
  unsigned int v7; // eax
  unsigned int i; // edi
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r8d
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r8d
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rdi
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct SURFACE *v29; // [rsp+50h] [rbp+8h] BYREF
  struct PDEV *v30; // [rsp+60h] [rbp+18h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  v7 = *((_DWORD *)a1 + 5);
  for ( i = 0; i < v7; ++i )
  {
    v9 = 0;
    v10 = 56LL * i;
    v29 = 0LL;
    v11 = *(_QWORD *)((char *)a1 + v10 + 40);
    v30 = (struct PDEV *)v11;
    while ( 1 )
    {
      GreAcquireHmgrSemaphore(v10, v5, v6);
      v9 = HmgSafeNextObjtByIndex((GdiHandleManager *)v9, 5, &v29);
      if ( !v9 )
        break;
      GreReleaseHmgrSemaphore(v13, v12, v14);
      v10 = (__int64)v29;
      if ( *((_QWORD *)v29 + 5) == *(_QWORD *)(v11 + 1800) && (*((_DWORD *)v29 + 29) & 1) != 0 )
        vCleanupRedirectionSurface(v29, 1);
    }
    GreReleaseHmgrSemaphore(v13, v12, v14);
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    if ( *(_DWORD *)(v11 + 12) == 1 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v15);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
        PsLeavePriorityRegion(v17);
      }
      DrvDisableDisplay((HSEMAPHORE *)v11, 0LL, v16);
      EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v15);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v18);
    }
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    --*(_DWORD *)(v11 + 12);
    PDEVOBJ::vUnreferencePdev(&v30, 0, v19);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v20);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v21);
    }
    v7 = *((_DWORD *)a1 + 5);
  }
  v22 = 0;
  if ( v7 )
  {
    do
    {
      v23 = *((_QWORD *)a1 + 7 * v22 + 6);
      if ( v23 )
      {
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        if ( *(_DWORD *)(v23 + 12) == 1 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v24);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v27);
          }
          DrvEnableDisplay((HSEMAPHORE *)v23, v25, v26);
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v24);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
          PsLeavePriorityRegion(v28);
        }
      }
      ++v22;
    }
    while ( v22 < *((_DWORD *)a1 + 5) );
  }
}

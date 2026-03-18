/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0145040
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0015994 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     HmgSafeNextObjtByIndex @ 0x1C001A41C (HmgSafeNextObjtByIndex.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CAE48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0143CD0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
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
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r8d
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rdi
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct SURFACE *v28; // [rsp+50h] [rbp+8h] BYREF
  struct PDEV *v29; // [rsp+60h] [rbp+18h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  v7 = *((_DWORD *)a1 + 5);
  for ( i = 0; i < v7; ++i )
  {
    v9 = 0;
    v10 = 56LL * i;
    v28 = 0LL;
    v11 = *(_QWORD *)((char *)a1 + v10 + 40);
    v29 = (struct PDEV *)v11;
    while ( 1 )
    {
      GreAcquireHmgrSemaphore(v10, v5, v6);
      v9 = HmgSafeNextObjtByIndex((GdiHandleManager *)v9, 5, &v28);
      if ( !v9 )
        break;
      GreReleaseHmgrSemaphore(v13, v12, v14);
      v10 = (__int64)v28;
      if ( *((_QWORD *)v28 + 5) == *(_QWORD *)(v11 + 1800) && (*((_DWORD *)v28 + 29) & 1) != 0 )
        vCleanupRedirectionSurface(v28, 1);
    }
    GreReleaseHmgrSemaphore(v13, v12, v14);
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    if ( *(_DWORD *)(v11 + 12) == 1 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v15);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v16);
      }
      DrvDisableDisplay((HSEMAPHORE *)v11, 0);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v15);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v17);
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    --*(_DWORD *)(v11 + 12);
    PDEVOBJ::vUnreferencePdev(&v29, 0, v18);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v19);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v20);
    }
    v7 = *((_DWORD *)a1 + 5);
  }
  v21 = 0;
  if ( v7 )
  {
    do
    {
      v22 = *((_QWORD *)a1 + 7 * v21 + 6);
      if ( v22 )
      {
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        if ( *(_DWORD *)(v22 + 12) == 1 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v23);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion(v26);
          }
          DrvEnableDisplay((HSEMAPHORE *)v22, v24, v25);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v23);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion(v27);
        }
      }
      ++v21;
    }
    while ( v21 < *((_DWORD *)a1 + 5) );
  }
}

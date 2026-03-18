/*
 * XREFs of DrvDestroyMDEV @ 0x1C00ADC00
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C004E3B8 (DrvCleanupAndDestroyMDEV.c)
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall DrvDestroyMDEV(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int i; // esi
  struct PDEV *v7; // rbx
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // rcx
  struct PDEV *v11; // rbx
  int v12; // r8d
  int v13; // r8d
  __int64 v14; // rcx
  struct PDEV *v15; // [rsp+30h] [rbp+8h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  v5 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v5; ++i )
  {
    v15 = *(struct PDEV **)(56LL * i + a1 + 40);
    v7 = v15;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    --*((_DWORD *)v7 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v8);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v10);
    }
    PDEVOBJ::vUnreferencePdev(&v15, 0, v9);
    v5 = *(_DWORD *)(a1 + 20);
  }
  if ( v5 > 1 )
  {
    v15 = *(struct PDEV **)a1;
    v11 = v15;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    --*((_DWORD *)v11 + 3);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v12);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v14);
    }
    PDEVOBJ::vUnreferencePdev(&v15, 0, v13);
  }
}

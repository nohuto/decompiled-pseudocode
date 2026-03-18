/*
 * XREFs of DrvDestroyMDEV @ 0x1C0016458
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00BC1E8 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall DrvDestroyMDEV(__int64 *a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v2 + 24) = a1;
  WdLogEvent5_WdEvent(v2);
  result = *((unsigned int *)a1 + 5);
  for ( i = 0; i < (unsigned int)result; ++i )
  {
    v7 = a1[7 * i + 5];
    v5 = v7;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    --*(_DWORD *)(v5 + 12);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    PDEVOBJ::vUnreferencePdev(&v7, 0LL);
    result = *((unsigned int *)a1 + 5);
  }
  if ( (unsigned int)result > 1 )
  {
    v7 = *a1;
    v6 = v7;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
    --*(_DWORD *)(v6 + 12);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    return PDEVOBJ::vUnreferencePdev(&v7, 0LL);
  }
  return result;
}

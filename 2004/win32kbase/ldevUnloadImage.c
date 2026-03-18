/*
 * XREFs of ldevUnloadImage @ 0x1C00BD4E0
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C0023520 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ldevLoadDriver @ 0x1C00BBEE0 (ldevLoadDriver.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00BC638 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00BD990 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  int v5; // r8d
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  void (*v9)(void); // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  if ( (*(_DWORD *)(a1 + 28))-- == 1 )
  {
    v8 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v8);
    v9 = *(void (**)(void))(a1 + 128);
    if ( v9 )
      v9();
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 && (*(_DWORD *)(a1 + 32) & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v10 + 24), 8uLL);
    v11 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(v11 + 8) = *(_QWORD *)(a1 + 8);
      v11 = *(_QWORD *)a1;
    }
    v12 = *(_QWORD **)(a1 + 8);
    if ( v12 )
      *v12 = v11;
    else
      gpldevDrivers = (struct _LDEV *)v11;
    v13 = *(_QWORD *)(a1 + 16);
    if ( v13 )
    {
      Win32FreePool(*(_QWORD *)(v13 + 8));
      Win32FreePool(*(_QWORD *)(a1 + 16));
    }
    Win32FreePool(a1);
  }
  else
  {
    v4 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v4);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v5);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    return PsLeavePriorityRegion(v7);
  }
  return result;
}

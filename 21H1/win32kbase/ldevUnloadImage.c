/*
 * XREFs of ldevUnloadImage @ 0x1C00AD180
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C000E5E0 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00AD02C (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x1C00AD2C0 (ldevLoadDriver.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rax
  int v5; // r8d
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  void (*v10)(void); // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  if ( (*(_DWORD *)(a1 + 28))-- == 1 )
  {
    v8 = WdLogNewEntry5_WdTrace(v2);
    WdLogEvent5_WdTrace(v8);
    v10 = *(void (**)(void))(a1 + 128);
    if ( v10 )
      v10();
    v11 = *(_QWORD *)(a1 + 16);
    if ( v11 && (*(_DWORD *)(a1 + 32) & 2) == 0 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v11 + 24), 8uLL);
    v12 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(a1 + 8);
      v12 = *(_QWORD *)a1;
    }
    v13 = *(_QWORD **)(a1 + 8);
    if ( v13 )
      *v13 = v12;
    else
      gpldevDrivers = (struct _LDEV *)v12;
    v14 = *(_QWORD *)(a1 + 16);
    if ( v14 )
    {
      Win32FreePool(*(_QWORD *)(v14 + 8), v11, v9);
      Win32FreePool(*(_QWORD *)(a1 + 16), v15, v16);
    }
    Win32FreePool(a1, v11, v9);
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

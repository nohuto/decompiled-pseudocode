/*
 * XREFs of ldevLoadInternal @ 0x1C0051150
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B8358 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C0051348 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, __int128 *), int a2)
{
  __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rbx
  struct _LDEV *v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  v4 = PALLOCMEM2(0x388uLL);
  v6 = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 60) = 0;
    *(_QWORD *)(v4 + 896) = v4 + 64;
    v10 = 0LL;
    if ( a1(196865LL, 16LL, &v10) && (unsigned int)ldevFillTable(v6, &v10) )
    {
      *(_DWORD *)(v6 + 24) = a2;
      *(_DWORD *)(v6 + 28) = 1;
      if ( gpldevDrivers )
        *((_QWORD *)gpldevDrivers + 1) = v6;
      v7 = gpldevDrivers;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)v6 = v7;
      gpldevDrivers = (struct _LDEV *)v6;
      *(_QWORD *)(v6 + 16) = 0LL;
    }
    else
    {
      Win32FreePool(v6);
      v6 = 0LL;
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v5);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v8);
  }
  return v6;
}

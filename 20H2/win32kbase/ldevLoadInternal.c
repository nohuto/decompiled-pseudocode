/*
 * XREFs of ldevLoadInternal @ 0x1C00B1C10
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00B1E08 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, __int128 *), int a2)
{
  _DWORD *v4; // rax
  int v5; // r8d
  __int64 v6; // rbx
  struct _LDEV *v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  v4 = PALLOCMEM2(0x388uLL, 1986292807LL, 1);
  v6 = (__int64)v4;
  if ( v4 )
  {
    v4[15] = 0;
    *((_QWORD *)v4 + 112) = v4 + 16;
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
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v8);
  }
  return v6;
}

/*
 * XREFs of ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00CAE48
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvEnableMDEV @ 0x1C00160B8 (DrvEnableMDEV.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C001637C (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0145040 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00190D4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BAAC0 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvEnableDisplay(HSEMAPHORE *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  int v6; // r8d
  int v7; // r8d
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rcx
  int v14; // r8d
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  HSEMAPHORE *v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = a1;
  v4 = 1;
  v5 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v5 + 24) = a1;
  WdLogEvent5_WdEvent(v5);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(a1[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", (int)a1[8], 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(a1[6]);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", (int)a1[6], 11);
  if ( a1[341] )
  {
    while ( !((unsigned int (__fastcall *)(HSEMAPHORE, __int64))a1[341])(a1[225], 1LL) )
      ;
  }
  else
  {
    v4 = 0;
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v19, 0);
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", (int)a1[6], v6);
  v8 = (struct _ERESOURCE *)a1[6];
  if ( v8 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion(v9);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v7);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v10);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", (int)a1[8], v12);
  v15 = (struct _ERESOURCE *)a1[8];
  if ( v15 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v15);
    PsLeavePriorityRegion(v16);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v14);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v17);
  }
  GreIncrementDisplaySettingsUniqueness();
  return v4;
}

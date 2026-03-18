/*
 * XREFs of DrvDisableMDEV @ 0x1C00B9430
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     SafeDisableMDEV @ 0x1C00CC7F0 (SafeDisableMDEV.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     GreSuspendDirectDraw @ 0x1C004F950 (GreSuspendDirectDraw.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C005A940 (GreIncrementDisplaySettingsUniqueness.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1C00BA548 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00BE074 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 */

__int64 __fastcall DrvDisableMDEV(HDEV *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdi
  __int64 v6; // rax
  HDEV v7; // rbx
  int v8; // eax
  int v9; // r8d
  __int64 v10; // rsi
  int v11; // r8d
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rcx
  int v18; // r8d
  struct _ERESOURCE *v19; // rcx
  __int64 v20; // rcx
  PERESOURCE v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  HDEV v25; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v7 = *a1;
  v25 = *a1;
  if ( (_DWORD)v4 )
    GreSuspendDirectDraw(v7, 0);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore(*((HSEMAPHORE *)v7 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemPointer()", *((_QWORD *)v7 + 8), 4);
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
  EngAcquireSemaphore(ghsemHT);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemHT", (int)ghsemHT, 6);
  EngAcquireSemaphore(*((HSEMAPHORE *)v7 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"poParent.hsemDevLock()", *((_QWORD *)v7 + 6), 11);
  v8 = DrvDisableMDEVChildren((struct _MDEV *)a1, v4, v3);
  v10 = v8;
  if ( v8 && (_DWORD)v4 )
    PDEVOBJ::bDisabled((PDEVOBJ *)&v25, 1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemDevLock()", *((_QWORD *)v7 + 6), v9);
  v12 = (struct _ERESOURCE *)*((_QWORD *)v7 + 6);
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v13);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemHT", (int)ghsemHT, v11);
  if ( ghsemHT )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemHT);
    PsLeavePriorityRegion(v15);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v14);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v17);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"poParent.hsemPointer()", *((_QWORD *)v7 + 8), v16);
  v19 = (struct _ERESOURCE *)*((_QWORD *)v7 + 8);
  if ( v19 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v19);
    PsLeavePriorityRegion(v20);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v18);
  v21 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v22);
  }
  if ( !(_DWORD)v10 && (_DWORD)v4 )
    GreIncrementDisplaySettingsUniqueness();
  v23 = WdLogNewEntry5_WdTrace(v21);
  *(_QWORD *)(v23 + 24) = v10;
  WdLogEvent5_WdTrace(v23);
  return (unsigned int)v10;
}

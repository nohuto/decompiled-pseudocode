/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C00B2230
 * Callers:
 *     ApplyPathsModality @ 0x1C00B125C (ApplyPathsModality.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0016870 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00B1200 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00B4CE8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C00B4FA0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00B5170 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00B51B0 (GreUnlockDisplayDevice.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(char a1, __int64 a2, int a3)
{
  __int64 i; // rcx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rbx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore(ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  for ( i = 0LL; ; i = v7 )
  {
    v5 = hdevEnumerate(i);
    v7 = v5;
    if ( !v5 )
      break;
    v15 = v5;
    v14 = *(_DWORD *)(v5 + 40);
    if ( (v14 & 1) != 0
      && (v14 & 0x400) == 0
      && (v14 & 0x20000) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v15) )
    {
      GreLockDisplayDevice(v7);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v15,
        (struct _SURFOBJ *)((*(_QWORD *)(v7 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v7 + 2552) != 0LL)),
        0LL,
        a1 != 0 ? 30 : 18);
      GreUnlockDisplayDevice(v7);
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v6);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion(v9);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v8);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v11);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v10);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v13);
  }
  return result;
}

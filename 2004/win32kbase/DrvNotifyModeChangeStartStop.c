/*
 * XREFs of DrvNotifyModeChangeStartStop @ 0x1C00B9E20
 * Callers:
 *     ApplyPathsModality @ 0x1C00B9B28 (ApplyPathsModality.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0024CC0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     hdevEnumerate @ 0x1C00A6690 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C00A7D10 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00A7D50 (GreUnlockDisplayDevice.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00BA080 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 */

__int64 __fastcall DrvNotifyModeChangeStartStop(char a1, __int64 a2, int a3)
{
  int v4; // edx
  int v5; // r8d
  struct PDEV *i; // rcx
  struct PDEV *v7; // rax
  __int64 v8; // rbx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r8d
  struct PDEV *v18; // [rsp+38h] [rbp+10h] BYREF

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  for ( i = 0LL; ; i = (struct PDEV *)v8 )
  {
    v7 = hdevEnumerate(i, v4, v5);
    v8 = (__int64)v7;
    if ( !v7 )
      break;
    v18 = v7;
    v15 = *((_DWORD *)v7 + 10);
    if ( (v15 & 1) != 0
      && (v15 & 0x400) == 0
      && (v15 & 0x20000) == 0
      && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v18) )
    {
      GreLockDisplayDevice(v8);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v18,
        (struct _SURFOBJ *)((*(_QWORD *)(v8 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v8 + 2552) != 0LL)),
        0LL,
        a1 != 0 ? 30 : 18);
      GreUnlockDisplayDevice(v8, v16, v17);
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, v5);
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion(v10);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (int)ghsemGreLock, v9);
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion(v12);
  }
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v11);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v14);
  }
  return result;
}

/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C008213C
 * Callers:
 *     GreGetDeviceCaps @ 0x1C00138C0 (GreGetDeviceCaps.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00D0C50 (--1SURFREFGC@@QEAA@XZ.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0145E20 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v3);
  }
}

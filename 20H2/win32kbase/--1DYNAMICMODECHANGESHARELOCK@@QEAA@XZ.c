/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003D8E8
 * Callers:
 *     GreGetDeviceCaps @ 0x1C001EC40 (GreGetDeviceCaps.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CFCA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??1SURFREFGC@@QEAA@XZ @ 0x1C00D08F0 (--1SURFREFGC@@QEAA@XZ.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0143990 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  __int64 v1; // rcx

  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v1);
  }
}

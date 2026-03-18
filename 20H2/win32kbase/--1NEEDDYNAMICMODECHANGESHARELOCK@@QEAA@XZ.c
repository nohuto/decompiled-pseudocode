/*
 * XREFs of ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0094D5C
 * Callers:
 *     GreGetDeviceCaps @ 0x1C001EC40 (GreGetDeviceCaps.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C003A250 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0143990 (NtGdiGetDeviceCapsAll.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK(
        NEEDDYNAMICMODECHANGESHARELOCK *this,
        __int64 a2,
        int a3)
{
  __int64 v3; // rcx

  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
    if ( ghsemDynamicModeChange )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
      PsLeavePriorityRegion(v3);
    }
  }
}

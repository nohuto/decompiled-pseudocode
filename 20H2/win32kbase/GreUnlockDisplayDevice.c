/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C0011B00
 * Callers:
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C0010F90 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     GreSuspendDirectDraw @ 0x1C0011120 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0011340 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00113EC (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0011738 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1)
{
  __int64 result; // rax
  struct _ERESOURCE *v3; // rcx

  result = EtwTraceGreLockReleaseSemaphore(L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48));
  v3 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    return PsLeavePriorityRegion();
  }
  return result;
}

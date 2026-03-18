/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C00B51B0
 * Callers:
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00B1560 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00B16E8 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C00B2010 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B2230 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockDisplayDevice(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rcx

  result = EtwTraceGreLockReleaseSemaphore((__int64)L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48), a3);
  v5 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v5 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v5);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}

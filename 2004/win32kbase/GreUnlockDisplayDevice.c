/*
 * XREFs of GreUnlockDisplayDevice @ 0x1C00A7D50
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C004F950 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C004FB70 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00A67B0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B9E20 (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C00BA0E0 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
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

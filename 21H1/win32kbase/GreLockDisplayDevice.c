/*
 * XREFs of GreLockDisplayDevice @ 0x1C00B5170
 * Callers:
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0046DB0 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00B16E8 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreSuspendDirectDraw @ 0x1C00B2010 (GreSuspendDirectDraw.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C00B2230 (DrvNotifyModeChangeStartStop.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 */

__int64 __fastcall GreLockDisplayDevice(__int64 a1)
{
  EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"pdo.hsemDevLock()", *(_QWORD *)(a1 + 48), 11);
}

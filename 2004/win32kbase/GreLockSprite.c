/*
 * XREFs of GreLockSprite @ 0x1C00A5A70
 * Callers:
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C004FB70 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00A67B0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 */

__int64 GreLockSprite()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemSprite", (int)ghsemSprite, 5);
}

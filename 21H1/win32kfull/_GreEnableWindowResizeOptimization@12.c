/*
 * XREFs of _GreEnableWindowResizeOptimization@12 @ 0xE90AC
 * Callers:
 *     _NtUserEnableWindowResizeOptimization@12 @ 0xE907E (_NtUserEnableWindowResizeOptimization@12.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __fastcall GreEnableWindowResizeOptimization(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  if ( !gfDwmResizeOptimizationOverride )
  {
    gdwDwmResizeOptimizationOptions = a1;
    gdwDwmResizeTimeoutGdi = a2;
    gdwDwmResizeTimeoutModern = a3;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  return 1;
}

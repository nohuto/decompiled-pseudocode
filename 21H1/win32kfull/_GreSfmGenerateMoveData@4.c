/*
 * XREFs of _GreSfmGenerateMoveData@4 @ 0x2014BE
 * Callers:
 *     _NtGdiHLSurfSetInformation@16 @ 0x21FD4 (_NtGdiHLSurfSetInformation@16.c)
 * Callees:
 *     <none>
 */

int __thiscall GreSfmGenerateMoveData(void *this)
{
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  g_bUseMoveHints = (int)this;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  return 0;
}

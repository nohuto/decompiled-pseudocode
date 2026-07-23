/*
 * XREFs of LdrpInitMuiCrits @ 0x140227A24
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140226CD4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140227884 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EFAC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F8C0 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x140684010 (NtDelayExecution.c)
 */

NTSTATUS LdrpInitMuiCrits()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&MuiLockInitCount, 1, 0);
    if ( !result )
      break;
    if ( MuiLockInitCount == 1 )
      result = NtDelayExecution(0, &DelayInterval);
    if ( MuiLockInitCount == 2 )
      return result;
  }
  result = KiInitializeMutant((ULONG_PTR)&MuiMutex);
  MuiLockInitCount = 2;
  return result;
}

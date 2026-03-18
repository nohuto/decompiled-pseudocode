/*
 * XREFs of LdrpInitMuiCrits @ 0x1402FD4C0
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402FC820 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402FD320 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC1C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F530 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x14036093C (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x140688190 (NtDelayExecution.c)
 */

__int64 LdrpInitMuiCrits()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(&MuiLockInitCount, 1, 0);
    if ( !(_DWORD)result )
      break;
    if ( MuiLockInitCount == 1 )
      result = NtDelayExecution(0LL, &v1);
    if ( MuiLockInitCount == 2 )
      return result;
  }
  result = KiInitializeMutant((ULONG_PTR)&MuiMutex);
  MuiLockInitCount = 2;
  return result;
}

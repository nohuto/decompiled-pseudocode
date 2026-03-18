/*
 * XREFs of LdrpInitMuiCrits @ 0x1402D749C
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x14025C690 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1402D72FC (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1402D7A40 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1403D525C (LdrpSetAlternateResourceModuleHandle.c)
 * Callees:
 *     KiInitializeMutant @ 0x140261ADC (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x14073A240 (NtDelayExecution.c)
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
  result = KiInitializeMutant((__int64)&MuiMutex, 0, 1, 0);
  MuiLockInitCount = 2;
  return result;
}

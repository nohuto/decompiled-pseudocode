/*
 * XREFs of LdrpInitMuiCrits @ 0x14033A660
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x14033A4C0 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14033B550 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037C27C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037CD40 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x1405EDE90 (NtDelayExecution.c)
 */

__int64 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = -1000000LL;
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(&MuiLockInitCount, 1, 0);
    if ( !(_DWORD)result )
      break;
    if ( MuiLockInitCount == 1 )
      result = NtDelayExecution(0LL, &v5);
    if ( MuiLockInitCount == 2 )
      return result;
  }
  LOBYTE(a3) = 1;
  result = KiInitializeMutant((__int64)&MuiMutex, 0LL, a3, a4);
  MuiLockInitCount = 2;
  return result;
}

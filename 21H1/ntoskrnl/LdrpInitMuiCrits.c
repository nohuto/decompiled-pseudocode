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

signed __int32 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  signed __int32 result; // eax
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
  LOBYTE(a3) = 1;
  result = KiInitializeMutant((__int64)&MuiMutex, 0LL, a3, a4);
  MuiLockInitCount = 2;
  return result;
}

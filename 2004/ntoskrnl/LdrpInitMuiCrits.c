/*
 * XREFs of LdrpInitMuiCrits @ 0x1403629B4
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140361C64 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140362814 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037CEEC (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037D800 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402FF79C (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x140697390 (NtDelayExecution.c)
 */

__int64 __fastcall LdrpInitMuiCrits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = -1000000LL;
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(&MuiLockInitCount, 1, 0);
    if ( !(_DWORD)result )
      break;
    if ( MuiLockInitCount == 1 )
      result = NtDelayExecution(0LL, &v4);
    if ( MuiLockInitCount == 2 )
      return result;
  }
  LOBYTE(a3) = 1;
  result = KiInitializeMutant((ULONG_PTR)&MuiMutex, 0, a3, 0LL);
  MuiLockInitCount = 2;
  return result;
}

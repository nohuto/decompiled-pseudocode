/*
 * XREFs of LdrUnlockLoaderLock @ 0x18007DFB0
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18003E6A4 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x1800601E8 (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x1800D57DC (LdrpGenericExceptionFilter.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrUnlockLoaderLock(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else
  {
    v2 = 0;
    if ( a2 )
    {
      v4 = a1 & 1;
      if ( a2 >= 0x1000000000000000LL || ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ HIWORD(a2)) & 0xFFF) != 0 )
      {
        if ( (_DWORD)v4 )
          RtlRaiseStatus(3221225712LL);
        return (unsigned int)-1073741584;
      }
      else if ( (_DWORD)v4 )
      {
        LdrpReleaseLoaderLock(v4, 13LL, 0LL);
      }
      else
      {
        LdrpReleaseLoaderLock(v4, 14LL, 0LL);
      }
    }
  }
  return v2;
}

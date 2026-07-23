/*
 * XREFs of LdrUnlockLoaderLock @ 0x18007E950
 * Callers:
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x18003E664 (LdrpReleaseLoaderLock.c)
 *     LdrpLogError @ 0x1800616D8 (LdrpLogError.c)
 *     LdrpGenericExceptionFilter @ 0x1800D554C (LdrpGenericExceptionFilter.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // ebx
  __int64 v4; // rcx

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else
  {
    v2 = 0;
    if ( Cookie )
    {
      v4 = Flags & 1;
      if ( (unsigned __int64)Cookie >= 0x1000000000000000LL
        || ((LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ ((unsigned __int64)Cookie >> 48)) & 0xFFF) != 0 )
      {
        if ( (_DWORD)v4 )
          RtlRaiseStatus(-1073741584);
        return -1073741584;
      }
      else if ( (_DWORD)v4 )
      {
        LdrpReleaseLoaderLock(v4, 13, 0);
      }
      else
      {
        LdrpReleaseLoaderLock(v4, 14, 0);
      }
    }
  }
  return v2;
}

/*
 * XREFs of _LdrUnlockLoaderLock@8 @ 0x4B2EA6A0
 * Callers:
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _TppIopExecuteCallback@16 @ 0x4B2EB530 (_TppIopExecuteCallback@16.c)
 * Callees:
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpLogError@16 @ 0x4B2EC95F (_LdrpLogError@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

NTSTATUS __cdecl LdrUnlockLoaderLock(ULONG Flags, PVOID Cookie)
{
  NTSTATUS v2; // esi

  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else if ( Cookie )
  {
    if ( (unsigned int)Cookie >= 0x10000000
      || (((int)NtCurrentTeb()->ClientId.UniqueThread ^ ((unsigned int)Cookie >> 16)) & 0xFFF) != 0 )
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
      return -1073741584;
    }
    else
    {
      v2 = 0;
      if ( (Flags & 1) != 0 )
        LdrpReleaseLoaderLock(Flags & 1, 13, 0, Flags & 1);
      else
        LdrpReleaseLoaderLock(0, 14, 0, 0);
    }
  }
  else
  {
    return 0;
  }
  return v2;
}

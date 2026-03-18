/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x1409CBB18
 * Callers:
 *     VfDriverInitSuccess @ 0x1409C57BC (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x1409C55C8 (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x1409DBAB4 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x140A96F3C (VfSuspectDriversIsLoaded.c)
 */

void __fastcall ViDriverReApplyVerifierForAll(__int64 **a1)
{
  __int64 *i; // rbx

  if ( ViVerifierDriverAddedThunkListHead )
  {
    for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
    {
      if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && (i[13] & 0x2000000) != 0 )
      {
        VfDriverLock();
        if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
          VfThunkApplyDriverAddedThunks(i);
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
      }
    }
  }
}

/*
 * XREFs of VfAddVerifierEntry @ 0x1409EF9D8
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x14061FE70 (RtlEqualUnicodeString.c)
 *     MmReleaseLoadLock @ 0x1406592C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140659320 (MmAcquireLoadLock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1409C55C8 (VfDriverLock.c)
 *     MmEnableVerifierForDriver @ 0x1409C8BC4 (MmEnableVerifierForDriver.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C9D50 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverEnableVerifierForAll @ 0x1409CB7C8 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409DC838 (VfSuspectDriversAllocateEntry.c)
 */

__int64 __fastcall VfAddVerifierEntry(const void **String2)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  struct _KTHREAD *Lock; // rbx
  void **Entry; // rax
  void **v6; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  DestinationString = 0LL;
  if ( VfSafeMode )
  {
    return (unsigned int)-1073740961;
  }
  else
  {
    VfDriverLock();
    VfInitSystemNoRebootNeeded(v3, 0);
    ViDriversLoadLockOwner = 0LL;
    KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
    RtlInitUnicodeString(&DestinationString, L"*");
    if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)String2, 1u) )
    {
      Lock = MmAcquireLoadLock();
      v2 = VfDriverEnableVerifierForAll();
      MmReleaseLoadLock((__int64)Lock);
    }
    else
    {
      Entry = VfSuspectDriversAllocateEntry(String2);
      v6 = Entry;
      if ( Entry )
      {
        v2 = MmEnableVerifierForDriver((__int64)Entry, &v9);
        if ( !v9 )
          ExFreePoolWithTag(v6, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v2;
}

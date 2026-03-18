/*
 * XREFs of VfAddVerifierEntry @ 0x1409E9958
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1409BF5A8 (VfDriverLock.c)
 *     MmEnableVerifierForDriver @ 0x1409C2B94 (MmEnableVerifierForDriver.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C3D20 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C5798 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409D67B8 (VfSuspectDriversAllocateEntry.c)
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
    KeReleaseMutex(&ViDriversLoadLock, 0);
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

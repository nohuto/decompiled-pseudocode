/*
 * XREFs of SSHSupportAllocatePaged @ 0x1406DAE0C
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14032AEF0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14032AFF0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x14057E1E0 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocatePaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}

/*
 * XREFs of SSHSupportAllocatePaged @ 0x1406E4DFC
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14031C7E0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14031C8E0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x14057A170 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocatePaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}

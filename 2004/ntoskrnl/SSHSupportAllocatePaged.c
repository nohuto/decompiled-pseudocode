/*
 * XREFs of SSHSupportAllocatePaged @ 0x140708A5C
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x14035A3C0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14035A4C0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SshpCopyDataEntry @ 0x14057A7B0 (SshpCopyDataEntry.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SSHSupportAllocatePaged(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, Tag);
}

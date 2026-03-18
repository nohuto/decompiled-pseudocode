/*
 * XREFs of VfFastIoSnapState @ 0x1409C6A7C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14026F940 (IopCompleteUnloadOrDelete.c)
 *     IopGetBasicInformationFile @ 0x140617B38 (IopGetBasicInformationFile.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     IopQueryInformation @ 0x1406DABE0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x1409C6B74 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}

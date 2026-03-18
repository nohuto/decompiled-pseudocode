/*
 * XREFs of VfFastIoSnapState @ 0x1409C6A6C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x14033FAD0 (IopCompleteUnloadOrDelete.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     IopGetBasicInformationFile @ 0x14066F258 (IopGetBasicInformationFile.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     IopQueryInformation @ 0x1406B98D0 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x1409C6B64 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}

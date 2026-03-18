/*
 * XREFs of VfFastIoSnapState @ 0x1409CCA9C
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140203590 (IopCompleteUnloadOrDelete.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     IopWriteFile @ 0x1405CCA7C (IopWriteFile.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopQueryInformation @ 0x140600E10 (IopQueryInformation.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     NtUnlockFile @ 0x1406B6C50 (NtUnlockFile.c)
 *     IopGetBasicInformationFile @ 0x1406C792C (IopGetBasicInformationFile.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     ViIoCallbackSnapState @ 0x1409CCB94 (ViIoCallbackSnapState.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 */

__int64 VfFastIoSnapState()
{
  if ( !ViIoCallbacksInitialized || (MmVerifierData & 0x10) == 0 )
    return 0LL;
  if ( !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC9u, 0xC2uLL, 0LL, 0LL, 0LL);
  return ViIoCallbackSnapState();
}

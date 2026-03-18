/*
 * XREFs of VfFastIoCheckState @ 0x1409CC9C4
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
 *     ExFreeToNPagedLookasideList @ 0x14020B100 (ExFreeToNPagedLookasideList.c)
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfFastIoCheckState(_DWORD *Entry, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x10) != 0 && !KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0xC3uLL, a2, 0LL, 0LL);
  if ( (MmVerifierData & 0x10) != 0 && *(_BYTE *)Entry != KeGetCurrentIrql() )
    VerifierBugCheckIfAppropriate(0xC9u, 0x11uLL, a2, *(unsigned __int8 *)Entry, KeGetCurrentIrql());
  if ( (MmVerifierData & 0x10) != 0 && Entry[1] != KeGetCurrentThread()->WaitBlock[3].SpareLong )
    VerifierBugCheckIfAppropriate(0xC4u, 0xC6uLL, a2, KeGetCurrentThread()->CombinedApcDisable, (unsigned int)Entry[1]);
  ExFreeToNPagedLookasideList(&ViIoCallbackStateLookaside, Entry);
}

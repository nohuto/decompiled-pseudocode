/*
 * XREFs of VfFastIoCheckState @ 0x1409C6994
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
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
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

/*
 * XREFs of ViZwCheckApcRequirement @ 0x1409E9774
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x1409E64C0 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1409E6AD0 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x1409E7B50 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1409E88D0 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x1409E9670 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402A5D40 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViZwCheckApcRequirement(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 0x100) != 0 && (CurrentIrql || KeAreAllApcsDisabled()) )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0xE6uLL,
      BugCheckParameter2,
      CurrentIrql,
      KeGetCurrentThread()->SpecialApcDisable);
}

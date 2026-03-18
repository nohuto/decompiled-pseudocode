/*
 * XREFs of ViZwCheckApcRequirement @ 0x1409E97D4
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x1409E6520 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1409E6B30 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x1409E7BB0 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1409E8930 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x1409E96D0 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14024CD10 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
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

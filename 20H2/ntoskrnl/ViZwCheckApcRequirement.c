/*
 * XREFs of ViZwCheckApcRequirement @ 0x1409EF7F4
 * Callers:
 *     VfZwDeviceIoControlFile @ 0x1409EC540 (VfZwDeviceIoControlFile.c)
 *     VfZwFsControlFile @ 0x1409ECB50 (VfZwFsControlFile.c)
 *     VfZwQueryDirectoryFile @ 0x1409EDBD0 (VfZwQueryDirectoryFile.c)
 *     VfZwReadFile @ 0x1409EE950 (VfZwReadFile.c)
 *     VfZwWriteFile @ 0x1409EF6F0 (VfZwWriteFile.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402339C0 (KeAreAllApcsDisabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
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

/*
 * XREFs of MmReplaceImportEntry @ 0x140590A00
 * Callers:
 *     KsepPatchImportTableEntry @ 0x140964650 (KsepPatchImportTableEntry.c)
 *     ViThunkReplaceIatEntryForClassDriverThunk @ 0x140A9445C (ViThunkReplaceIatEntryForClassDriverThunk.c)
 *     ViThunkReplaceIatEntryForWdmThunk @ 0x140A944BC (ViThunkReplaceIatEntryForWdmThunk.c)
 *     ViThunkReplaceSharedExports @ 0x140A94590 (ViThunkReplaceSharedExports.c)
 * Callees:
 *     MiReplaceImportEntry @ 0x1405905F0 (MiReplaceImportEntry.c)
 */

__int64 __fastcall MmReplaceImportEntry(ULONG_PTR a1, ULONG_PTR a2)
{
  return MiReplaceImportEntry(a1, a2);
}

/*
 * XREFs of AddAllFlEntryWorker @ 0xEC6BE
 * Callers:
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AddAllFlEntryWorker(PCWSTR Path, void *a2)
{
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)BuildAndLoadLinkedFontRoutine;
  SharedQueryTable.Flags = 4;
  SharedQueryTable.Name = 0;
  SharedQueryTable.EntryContext = a2;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.DefaultData = 0;
  SharedQueryTable.DefaultLength = 0;
  dword_273FDC = 0;
  dword_273FE0 = 0;
  dword_273FE4 = 0;
  return RtlQueryRegistryValues(0, Path, &SharedQueryTable, 0, 0);
}

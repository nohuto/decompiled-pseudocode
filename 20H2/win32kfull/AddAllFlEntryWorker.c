/*
 * XREFs of AddAllFlEntryWorker @ 0x1C0022044
 * Callers:
 *     bAddAllFlEntry @ 0x1C0021078 (bAddAllFlEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall AddAllFlEntryWorker(PCWSTR Path, int a2)
{
  SharedQueryTable.Flags = 4;
  SharedQueryTable.Name = 0LL;
  SharedQueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)BuildAndLoadLinkedFontRoutine;
  SharedQueryTable.DefaultType = 0;
  SharedQueryTable.DefaultData = 0LL;
  SharedQueryTable.DefaultLength = 0;
  qword_1C0339878 = 0LL;
  dword_1C0339880 = 0;
  qword_1C0339888 = 0LL;
  SharedQueryTable.EntryContext = (PVOID)a2;
  return RtlQueryRegistryValues(0, Path, &SharedQueryTable, 0LL, 0LL);
}

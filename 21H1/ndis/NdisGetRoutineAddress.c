/*
 * XREFs of NdisGetRoutineAddress @ 0x1C003C860
 * Callers:
 *     ?ndisVerifierGetRoutineAddress@@YAPEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00AB810 (-ndisVerifierGetRoutineAddress@@YAPEAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     FindExportedRoutineByName @ 0x1C003C8C8 (FindExportedRoutineByName.c)
 */

PVOID __stdcall NdisGetRoutineAddress(PNDIS_STRING NdisRoutineName)
{
  void *ExportedRoutineByName; // rbx
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( RtlUnicodeStringToAnsiString(&DestinationString, NdisRoutineName, 1u) < 0 )
    return 0LL;
  ExportedRoutineByName = (void *)FindExportedRoutineByName(*((_QWORD *)ndisDriverObject + 3), &DestinationString);
  RtlFreeAnsiString(&DestinationString);
  return ExportedRoutineByName;
}

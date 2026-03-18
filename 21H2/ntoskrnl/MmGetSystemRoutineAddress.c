/*
 * XREFs of MmGetSystemRoutineAddress @ 0x140759130
 * Callers:
 *     HalpCmciLoadThresholdConfiguration @ 0x1403D2888 (HalpCmciLoadThresholdConfiguration.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x14051EAEC (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetLoadConfiguration @ 0x14051EF00 (HalpMcGetLoadConfiguration.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MiMarkKernelCfgTarget @ 0x1402D7FD0 (MiMarkKernelCfgTarget.c)
 *     RtlFreeAnsiString @ 0x14070AFC0 (RtlFreeAnsiString.c)
 *     RtlFindExportedRoutineByName @ 0x140757F00 (RtlFindExportedRoutineByName.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 */

PVOID __stdcall MmGetSystemRoutineAddress(PUNICODE_STRING SystemRoutineName)
{
  const UNICODE_STRING *i; // rdx
  void *ExportedRoutineByName; // rbx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  for ( i = SystemRoutineName; RtlUnicodeStringToAnsiString(&DestinationString, i, 1u) < 0; i = SystemRoutineName )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsNtosImageBase, DestinationString.Buffer);
  if ( !ExportedRoutineByName )
    ExportedRoutineByName = (void *)RtlFindExportedRoutineByName(PsHalImageBase, DestinationString.Buffer);
  RtlFreeAnsiString(&DestinationString);
  if ( ExportedRoutineByName && (int)MiMarkKernelCfgTarget() < 0 )
    return 0LL;
  else
    return ExportedRoutineByName;
}

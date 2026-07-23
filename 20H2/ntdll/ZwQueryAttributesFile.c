/*
 * XREFs of ZwQueryAttributesFile @ 0x18009D850
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x18005F31C (LdrpGetNtPathFromDosPath.c)
 *     LdrpIsReparsePoint @ 0x180069FE4 (LdrpIsReparsePoint.c)
 *     LdrAddDllDirectory @ 0x18008B710 (LdrAddDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800DB920 (AvrfMiniLoadDll.c)
 *     LdrpResValidateFilePath @ 0x1800E5068 (LdrpResValidateFilePath.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 61;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

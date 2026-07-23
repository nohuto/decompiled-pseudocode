/*
 * XREFs of NtInitializeNlsFiles @ 0x18009F080
 * Callers:
 *     RtlGetLocaleFileMappingAddress @ 0x18007C890 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax

  result = 255;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

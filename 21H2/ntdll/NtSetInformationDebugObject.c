/*
 * XREFs of NtSetInformationDebugObject @ 0x1800A08D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationDebugObject(
        HANDLE DebugObjectHandle,
        DEBUGOBJECTINFOCLASS DebugObjectInformationClass,
        PVOID DebugInformation,
        ULONG DebugInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 407;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

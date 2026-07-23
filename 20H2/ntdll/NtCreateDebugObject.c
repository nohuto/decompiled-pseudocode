/*
 * XREFs of NtCreateDebugObject @ 0x18009E540
 * Callers:
 *     DbgUiConnectToDbg @ 0x1800CC780 (DbgUiConnectToDbg.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateDebugObject(
        PHANDLE DebugObjectHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  NTSTATUS result; // eax

  result = 165;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

/*
 * XREFs of NtCompareObjects @ 0x18009E160
 * Callers:
 *     RtlIsCurrentProcess @ 0x180074AE0 (RtlIsCurrentProcess.c)
 *     RtlIsCurrentThread @ 0x1800FF030 (RtlIsCurrentThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  NTSTATUS result; // eax

  result = 155;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

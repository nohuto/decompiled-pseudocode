/*
 * XREFs of ZwQueryObject @ 0x18009D2B0
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DC5C0 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC730 (RtlWow64SuspendThread.c)
 *     PsspWalkHandleTable @ 0x1801164C4 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryObject()
{
  __int64 result; // rax

  result = 16LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

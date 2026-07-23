/*
 * XREFs of ZwShutdownWorkerFactory @ 0x1800A0740
 * Callers:
 *     TpReleasePool @ 0x180054CB0 (TpReleasePool.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  NTSTATUS result; // eax

  result = 437;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

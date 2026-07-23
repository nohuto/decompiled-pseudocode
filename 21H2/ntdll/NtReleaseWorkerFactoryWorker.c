/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1800A0410
 * Callers:
 *     TpPostTask @ 0x180012A98 (TpPostTask.c)
 *     TppPrepareDirectParams @ 0x18004E250 (TppPrepareDirectParams.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 369;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

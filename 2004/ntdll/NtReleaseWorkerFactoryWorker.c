/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x18009FBE0
 * Callers:
 *     TpPostTask @ 0x180012A98 (TpPostTask.c)
 *     TppPrepareDirectParams @ 0x180053C10 (TppPrepareDirectParams.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax

  result = 367;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

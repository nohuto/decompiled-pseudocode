/*
 * XREFs of NtGetEnvironmentVariableEx @ 0x140956850
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     IoGetEnvironmentVariableEx @ 0x14089C47C (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtGetEnvironmentVariableEx(const size_t *a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx

  if ( dword_140C19690 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, a3, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return EnvironmentVariable;
}

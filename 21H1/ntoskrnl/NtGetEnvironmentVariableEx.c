/*
 * XREFs of NtGetEnvironmentVariableEx @ 0x14094F6F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     IoGetEnvironmentVariableEx @ 0x1408954AC (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtGetEnvironmentVariableEx(const size_t *a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( dword_140C19730 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, a3, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  return EnvironmentVariable;
}

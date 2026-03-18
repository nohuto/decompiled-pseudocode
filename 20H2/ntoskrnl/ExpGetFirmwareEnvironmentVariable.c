/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x140952FE4
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406E0510 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406E05E0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExUnlockUserBuffer @ 0x14025EE10 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14065C658 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x14089C47C (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpGetFirmwareEnvironmentVariable(
        const size_t *a1,
        __int64 a2,
        unsigned __int64 a3,
        int *a4,
        int *a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v13 = 0LL;
  if ( !*a4 || (result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v13, (struct _MDL **)&P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v13, a4, a5);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    return EnvironmentVariable;
  }
  return result;
}

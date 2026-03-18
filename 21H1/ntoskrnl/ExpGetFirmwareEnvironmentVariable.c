/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x14094BE84
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EA3F0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406EA4C0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x1408954AC (IoGetEnvironmentVariableEx.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID P; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  v16 = 0LL;
  if ( !*a4 || (result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v16, (struct _MDL **)&P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v16, a4, a5);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    return EnvironmentVariable;
  }
  return result;
}

/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x1409FCB38
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406DC9F0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406DCAC0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140231450 (ExUnlockUserBuffer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x14093E520 (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpGetFirmwareEnvironmentVariable(
        const WCHAR *a1,
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    return EnvironmentVariable;
  }
  return result;
}

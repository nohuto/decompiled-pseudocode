/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x1409FE284
 * Callers:
 *     NtSetSystemEnvironmentValueEx @ 0x1406DCB10 (NtSetSystemEnvironmentValueEx.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1409FB890 (ExSetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x140231450 (ExUnlockUserBuffer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExLockUserBuffer @ 0x1406A904C (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x14093E830 (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpSetFirmwareEnvironmentVariable(
        const WCHAR *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  PVOID P; // [rsp+38h] [rbp-10h] BYREF

  P = 0LL;
  v12 = 0LL;
  if ( !a4 || (result = ExLockUserBuffer(a3, a4, a6, IoReadAccess, &v12, (struct _MDL **)&P), (int)result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v11 = IoSetEnvironmentVariableEx(a1, a2, v12, a4, a5);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    return v11;
  }
  return result;
}

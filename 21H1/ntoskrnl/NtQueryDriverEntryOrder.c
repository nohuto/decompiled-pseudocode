/*
 * XREFs of NtQueryDriverEntryOrder @ 0x14094FD90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     HalGetEnvironmentVariableEx @ 0x1403B6980 (HalGetEnvironmentVariableEx.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 */

__int64 __fastcall NtQueryDriverEntryOrder(volatile void *Address, unsigned int *a2)
{
  __int64 result; // rax
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  struct _KTHREAD *v9; // rax
  int EnvironmentVariable; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // rdx
  unsigned __int16 *v16; // r9
  _DWORD *i; // r10
  unsigned int v18; // ebx
  __int64 v19; // [rsp+38h] [rbp-40h] BYREF
  PVOID P; // [rsp+40h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-20h]
  unsigned int v22; // [rsp+98h] [rbp+20h] BYREF

  v19 = 0LL;
  v22 = 0;
  P = 0LL;
  if ( dword_140C19730 != 2 )
    return 3221225474LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *a2;
    v22 = v7;
    v8 = v7;
    if ( !Address )
    {
      v7 = 0;
      v22 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Address, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return 3221225569LL;
  }
  else
  {
    v7 = Address != 0LL ? 4 * *a2 : 0;
    v22 = v7;
  }
  if ( !v7
    || (result = ExLockUserBuffer((unsigned __int64)Address, v7, PreviousMode, IoWriteAccess, &v19, (struct _MDL **)&P),
        (int)result >= 0) )
  {
    v22 = v7 >> 1;
    v9 = KeGetCurrentThread();
    --v9->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = HalGetEnvironmentVariableEx(L"DriverOrder", (int)&EfiDriverVariablesGuid, v19, &v22, 0LL);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v22 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v14 = v22 >> 1;
      v15 = (v22 >> 1) - 1;
      v16 = (unsigned __int16 *)(v19 + 2 * v15);
      for ( i = (_DWORD *)(v19 + 4 * v15); v14; --v14 )
        *i-- = *v16--;
    }
    v18 = 2 * v22;
    v22 *= 2;
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    *a2 = v18 >> 2;
    return (unsigned int)EnvironmentVariable;
  }
  return result;
}

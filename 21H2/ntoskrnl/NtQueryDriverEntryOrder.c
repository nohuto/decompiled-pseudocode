/*
 * XREFs of NtQueryDriverEntryOrder @ 0x140954890
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BADC0 (HalGetEnvironmentVariableEx.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  struct _KTHREAD *v9; // rax
  NTSTATUS EnvironmentVariable; // edi
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
  if ( dword_140C197B0 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Count < 0x7FFFFFFF0000LL )
      v6 = (__int64)Count;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = 4 * *Count;
    v22 = v7;
    v8 = v7;
    if ( !Ids )
    {
      v7 = 0;
      v22 = 0;
      v8 = 0;
    }
    if ( v8 )
      ProbeForWrite(Ids, v8, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v7 = Ids != 0LL ? 4 * *Count : 0;
    v22 = v7;
  }
  if ( !v7
    || (result = ExLockUserBuffer((unsigned __int64)Ids, v7, PreviousMode, IoWriteAccess, &v19, (struct _MDL **)&P),
        result >= 0) )
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
    *Count = v18 >> 2;
    return EnvironmentVariable;
  }
  return result;
}

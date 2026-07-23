/*
 * XREFs of NtQueryBootEntryOrder @ 0x140954310
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x140899BAC (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __cdecl NtQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v6; // rcx
  ULONG v7; // eax
  struct _KTHREAD *v8; // rax
  NTSTATUS EnvironmentVariable; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r8d
  __int64 v14; // rdx
  unsigned __int16 *v15; // r9
  _DWORD *i; // r10
  unsigned int v17; // eax
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]
  ULONG v21; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0LL;
  v21 = 0;
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
    v21 = v7;
    if ( !Ids )
    {
      v21 = 0;
      v7 = 0;
    }
    if ( v7 )
      ProbeForWrite(Ids, v7, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v21 = Ids != 0LL ? 4 * *Count : 0;
  }
  if ( !v21
    || (result = ExLockUserBuffer((unsigned __int64)Ids, v21, PreviousMode, IoWriteAccess, &v18, (struct _MDL **)&P),
        result >= 0) )
  {
    v21 >>= 1;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (const size_t *)L"BootOrder",
                            (__int64)&EfiBootVariablesGuid,
                            v18,
                            (int *)&v21,
                            0LL);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
    if ( EnvironmentVariable < 0 )
    {
      if ( EnvironmentVariable == -1073741568 )
      {
        v21 = 0;
        EnvironmentVariable = 0;
      }
    }
    else
    {
      v13 = v21 >> 1;
      v14 = (v21 >> 1) - 1;
      v15 = (unsigned __int16 *)(v18 + 2 * v14);
      for ( i = (_DWORD *)(v18 + 4 * v14); v13; --v13 )
        *i-- = *v15--;
    }
    v17 = 2 * v21;
    v21 *= 2;
    if ( P )
    {
      ExUnlockUserBuffer((struct _MDL *)P);
      v17 = v21;
    }
    *Count = v17 >> 2;
    return EnvironmentVariable;
  }
  return result;
}

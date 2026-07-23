/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x14094F4F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     IoEnumerateEnvironmentVariablesEx @ 0x14089534C (IoEnumerateEnvironmentVariablesEx.c)
 */

NTSTATUS __cdecl NtEnumerateSystemEnvironmentValuesEx(ULONG InformationClass, PVOID Buffer, PULONG BufferLength)
{
  NTSTATUS result; // eax
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  ULONG v9; // eax
  struct _KTHREAD *v10; // rax
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG v15; // [rsp+34h] [rbp-34h] BYREF
  __int64 v16; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+40h] [rbp-28h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-10h]

  v16 = 0LL;
  v15 = 0;
  P = 0LL;
  if ( dword_140C19730 != 2 )
    return -1073741822;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
      v8 = (__int64)BufferLength;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    v9 = *BufferLength;
    v15 = *BufferLength;
    if ( !Buffer )
    {
      v15 = 0;
      v9 = 0;
    }
    if ( v9 )
      ProbeForWrite(Buffer, v9, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v15 = Buffer != 0LL ? *BufferLength : 0;
  }
  if ( !v15
    || (result = ExLockUserBuffer((unsigned __int64)Buffer, v15, PreviousMode, IoWriteAccess, &v16, (struct _MDL **)&P),
        result >= 0) )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v11 = IoEnumerateEnvironmentVariablesEx(InformationClass, 0LL, v16, &v15);
    ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
    if ( P )
      ExUnlockUserBuffer((struct _MDL *)P);
    *BufferLength = v15;
    return v11;
  }
  return result;
}

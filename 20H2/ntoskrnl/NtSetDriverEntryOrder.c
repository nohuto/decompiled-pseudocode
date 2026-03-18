/*
 * XREFs of NtSetDriverEntryOrder @ 0x140957960
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IoSetEnvironmentVariableEx @ 0x14089C78C (IoSetEnvironmentVariableEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetDriverEntryOrder(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  unsigned int i; // ecx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // edi

  v2 = a2;
  PoolWithTag = 0LL;
  if ( dword_140C19690 != 2 )
    return 3221225474LL;
  if ( a2 > 0x3FFFFFFF )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return 3221225569LL;
  if ( (_DWORD)v2 )
  {
    v8 = 4 * v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v2, 0x72766E45u);
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( PreviousMode && v8 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = a1 + v8;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      if ( *(_DWORD *)(a1 + 4LL * i) > 0xFFFFu )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return 3221225485LL;
      }
      *((_WORD *)PoolWithTag + i) = *(_WORD *)(a1 + 4LL * i);
    }
  }
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v12 = IoSetEnvironmentVariableEx(
          (const size_t *)L"DriverOrder",
          (__int64)&EfiDriverVariablesGuid,
          (__int64)PoolWithTag,
          2 * (int)v2,
          1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 == -1073741568 )
    v12 = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}

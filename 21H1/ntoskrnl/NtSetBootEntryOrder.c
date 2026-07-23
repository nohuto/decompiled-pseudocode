/*
 * XREFs of NtSetBootEntryOrder @ 0x1409503E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IoSetEnvironmentVariableEx @ 0x1408957BC (IoSetEnvironmentVariableEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  __int64 v2; // rsi
  PVOID PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r14
  unsigned int v8; // r15d
  char *v9; // rcx
  unsigned int i; // ecx
  struct _KTHREAD *v11; // rax
  NTSTATUS v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v2 = Count;
  PoolWithTag = 0LL;
  if ( dword_140C19730 != 2 )
    return -1073741822;
  if ( Count > 0x3FFFFFFF )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, CurrentThread->PreviousMode) )
    return -1073741727;
  if ( (_DWORD)v2 )
  {
    v8 = v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 2 * v2, 0x72766E45u);
    if ( !PoolWithTag )
      return -1073741670;
    if ( PreviousMode && v8 * 4 )
    {
      if ( ((unsigned __int8)Ids & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (char *)&Ids[v8];
      if ( (unsigned __int64)v9 > 0x7FFFFFFF0000LL || v9 < (char *)Ids )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    for ( i = 0; i < (unsigned int)v2; ++i )
    {
      if ( Ids[i] > 0xFFFF )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        return -1073741811;
      }
      *((_WORD *)PoolWithTag + i) = Ids[i];
    }
  }
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v12 = IoSetEnvironmentVariableEx(
          (const size_t *)L"BootOrder",
          (__int64)&EfiBootVariablesGuid,
          (__int64)PoolWithTag,
          2 * (int)v2,
          1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  if ( v12 == -1073741568 )
    v12 = 0;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}

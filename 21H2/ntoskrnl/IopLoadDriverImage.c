/*
 * XREFs of IopLoadDriverImage @ 0x140399FC8
 * Callers:
 *     NtLoadDriver @ 0x1407809C0 (NtLoadDriver.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CB09C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     IopLoadUnloadDriver @ 0x1407809E0 (IopLoadUnloadDriver.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopLoadDriverImage(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  void *PoolWithQuota_2; // rbx
  void *Src[2]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE WorkItem[80]; // [rsp+50h] [rbp-58h] BYREF

  *(_OWORD *)Src = 0LL;
  memset(WorkItem, 0, sizeof(WorkItem));
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo(v5, v4) )
      return 0LL;
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    v7 = *(_DWORD *)v6;
    LODWORD(Src[0]) = v7;
    v8 = *(void **)(v6 + 8);
    Src[1] = v8;
    if ( !(_WORD)v7 )
      return 3221225485LL;
    if ( ((unsigned __int8)v8 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (unsigned __int64)v8 + (unsigned __int16)v7;
    if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)v8 )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithQuota_2 = (void *)IopVerifierExAllocatePoolWithQuota_2(v8, LOWORD(Src[0]));
    memmove(PoolWithQuota_2, Src[1], LOWORD(Src[0]));
    Src[1] = PoolWithQuota_2;
  }
  else
  {
    *(_OWORD *)Src = *a1;
    PoolWithQuota_2 = 0LL;
  }
  WorkItem[34] = 6;
  *(_DWORD *)&WorkItem[36] = 0;
  *(_QWORD *)&WorkItem[48] = &WorkItem[40];
  *(_QWORD *)&WorkItem[40] = &WorkItem[40];
  *(_QWORD *)&WorkItem[56] = 0LL;
  *(_QWORD *)&WorkItem[64] = Src;
  if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
  {
    IopLoadUnloadDriver(WorkItem);
  }
  else
  {
    *(_QWORD *)&WorkItem[16] = IopLoadUnloadDriver;
    *(_QWORD *)&WorkItem[24] = WorkItem;
    *(_QWORD *)WorkItem = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&WorkItem[32], UserRequest, 0, 0, 0LL);
  }
  if ( PoolWithQuota_2 )
    ExFreePoolWithTag(PoolWithQuota_2, 0);
  return *(unsigned int *)&WorkItem[72];
}

/*
 * XREFs of MiGetUltraMdlContext @ 0x140559EC8
 * Callers:
 *     MmMapMdl @ 0x1405320E0 (MmMapMdl.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDeleteUltraMapContext @ 0x1402E1528 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402E1DB8 (MiCreateUltraThreadContextHelper.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiGetUltraMdlContext()
{
  unsigned int v0; // edi
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  PSLIST_ENTRY result; // rax
  PVOID Pool; // rax
  void *v5; // rbx
  int v6; // edi
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v0 = 0;
  v1 = __rdtsc() >> 4;
  v2 = 8LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  do
  {
    LODWORD(v1) = v1 & 7;
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(qword_140C4EA38 + ((v2 + (unsigned int)v1) << 6)));
    if ( result )
      return result;
    LOBYTE(v1) = v1 + 1;
    ++v0;
  }
  while ( v0 < 8 );
  if ( (unsigned int)dword_140C4EA30 >= 0x80 )
    return 0LL;
  Pool = MiAllocatePool(64, 0x28uLL, 0x6D55694Du);
  v5 = Pool;
  if ( !Pool )
    return 0LL;
  if ( !(unsigned int)MiCreateUltraThreadContextHelper((__int64)Pool + 8, 3u, 0) )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  v6 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C4E9F0, &LockHandle);
  if ( (unsigned int)dword_140C4EA30 >= 0x80 )
    v6 = 1;
  else
    ++dword_140C4EA30;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v6 )
  {
    MiDeleteUltraMapContext((__int64)v5 + 8, 3u);
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)v5;
}

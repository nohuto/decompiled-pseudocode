/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x1402DBFD0
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x1402898C0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x140289C90 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14028A9F0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeList @ 0x1402DBA70 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x1402DBB00 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x1402DBD14 (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall RtlpHpAcquireQueuedLockExclusive(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *CurrentThread; // rax

  v4 = a3;
  if ( a2 )
  {
    *(_QWORD *)(a3 + 8) = a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (unsigned int)SchedulerAssist[5];
      SchedulerAssist[5] = a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(a1, CurrentIrql, a3, (__int64)SchedulerAssist);
    *(_QWORD *)(v4 + 16) = CurrentIrql;
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a3 + 8) = a1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  }
}

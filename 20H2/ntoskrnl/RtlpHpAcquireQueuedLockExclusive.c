/*
 * XREFs of RtlpHpAcquireQueuedLockExclusive @ 0x14023BA10
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x1402147E0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x140214BB0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140215910 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeList @ 0x14023B30C (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14023B39C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14023B850 (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __fastcall RtlpHpAcquireQueuedLockExclusive(ULONG_PTR a1, int a2, unsigned __int64 a3)
{
  _QWORD *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *SchedulerAssist; // r9

  v3 = (_QWORD *)a3;
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
      ExpAcquireSpinLockExclusive(a1, CurrentIrql, a3);
    v3[2] = CurrentIrql;
  }
  else
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a3 + 8) = a1;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1, 0LL);
  }
}

/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x1402CF3DC
 * Callers:
 *     RtlpHpSegMgrCommitInitiate @ 0x14025A70C (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSlotAllocate @ 0x14028D3E0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1402CA924 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402CB580 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402CBF00 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1402CC4A4 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockAcquire @ 0x1402CF3B0 (RtlpHpSegLockAcquire.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402D843C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1402D8F3C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x1402D9EA4 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1402DA278 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeLockAcquire @ 0x1402DAEBC (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14033A4D4 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14034DBC8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x14035B66C (RtlpHpHeapExtendContext.c)
 *     RtlpHpFixedVsAllocate @ 0x14035EFC0 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedVsFree @ 0x14037E390 (RtlpHpFixedVsFree.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14058F740 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall RtlpHpAcquireLockExclusive(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
    return ExAcquireSpinLockExclusive(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  return -1;
}

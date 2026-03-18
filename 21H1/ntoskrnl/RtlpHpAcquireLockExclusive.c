/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x14023C5AC
 * Callers:
 *     RtlpHpLfhBucketGetSubsegment @ 0x140237AF4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140238750 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402390D0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140239674 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockAcquire @ 0x14023C580 (RtlpHpSegLockAcquire.c)
 *     RtlpHpLfhSlotAllocate @ 0x140250B40 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402B373C (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x1402FD194 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140310538 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x14031DA7C (RtlpHpHeapExtendContext.c)
 *     RtlpHpFixedVsAllocate @ 0x140321610 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLargeLockAcquire @ 0x14035F990 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140360090 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpVaMgrCtxFree @ 0x140360210 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x140360D10 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140361C78 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpFixedVsFree @ 0x14037D8D0 (RtlpHpFixedVsFree.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14058F050 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
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

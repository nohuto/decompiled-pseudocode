/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x1402D4324
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140212CB0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x1402CEE70 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402D1660 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402D1FE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegLockAcquire @ 0x1402D42F8 (RtlpHpSegLockAcquire.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403066D4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x1403071D4 (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14030813C (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140308510 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeLockAcquire @ 0x1403090B0 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14030C934 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1403107B4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140310A68 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14031E918 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpHeapExtendContext @ 0x14032C0CC (RtlpHpHeapExtendContext.c)
 *     RtlpHpFixedVsAllocate @ 0x14032FDC0 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpFixedVsFree @ 0x1403800C0 (RtlpHpFixedVsFree.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1405931E0 (RtlpHpSegMgrVaCtxFree.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
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

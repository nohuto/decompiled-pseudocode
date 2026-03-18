/*
 * XREFs of RtlpHpAcquireLockShared @ 0x1402D1620
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140212CB0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhContextCompact @ 0x1402D13D8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402D14C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402D1FE0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x140309B20 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLargeLockAcquireShared @ 0x140593C6C (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)a1, 0LL);
  return -1;
}

/*
 * XREFs of RtlpHpAcquireLockShared @ 0x140238714
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x140237F10 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhContextCompact @ 0x1402384CC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402385B4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402390D0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhSlotAllocate @ 0x140250B40 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLargeLockAcquireShared @ 0x14058FADC (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
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

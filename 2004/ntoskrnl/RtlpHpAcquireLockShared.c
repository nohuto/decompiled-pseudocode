/*
 * XREFs of RtlpHpAcquireLockShared @ 0x1402CB544
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14028D3E0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1402CAD40 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhContextCompact @ 0x1402CB2FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402CB3E4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402CBF00 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1405901CC (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
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

/*
 * XREFs of MiLockImageExtentsExclusive @ 0x1408D2AC4
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408D1AE4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D2850 (MiDeleteImageExtentList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void MiLockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB28, 0LL);
}

/*
 * XREFs of MiLockImageExtentsExclusive @ 0x1408CCC84
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CBCA4 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408CCA10 (MiDeleteImageExtentList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void MiLockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CAA8, 0LL);
}

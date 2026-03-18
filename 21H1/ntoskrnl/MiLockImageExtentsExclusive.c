/*
 * XREFs of MiLockImageExtentsExclusive @ 0x1408CB934
 * Callers:
 *     MiAllocateEntireImageFileExtents @ 0x1408CA954 (MiAllocateEntireImageFileExtents.c)
 *     MiDeleteImageExtentList @ 0x1408CB6C0 (MiDeleteImageExtentList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void MiLockImageExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CBE8, 0LL);
}

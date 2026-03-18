/*
 * XREFs of MiLockFileExtentsExclusive @ 0x140970960
 * Callers:
 *     MiInsertCopyExtents @ 0x14059F6F4 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14059FC8C (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x140970668 (MiDeleteFileExtentList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void MiLockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F468, 0LL);
}

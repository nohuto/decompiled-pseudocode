/*
 * XREFs of LOCK_CM_RM_LIST @ 0x140659620
 * Callers:
 *     CmpInitCmRM @ 0x14065A51C (CmpInitCmRM.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_CM_RM_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
}

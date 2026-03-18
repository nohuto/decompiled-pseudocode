/*
 * XREFs of NormalizationList__Lock @ 0x140592930
 * Callers:
 *     RtlpGetNormalization @ 0x14091E040 (RtlpGetNormalization.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&NormalizationListLock, 0LL);
}

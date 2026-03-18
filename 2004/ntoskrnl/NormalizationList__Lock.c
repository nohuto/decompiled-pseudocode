/*
 * XREFs of NormalizationList__Lock @ 0x14058EE8C
 * Callers:
 *     RtlpGetNormalization @ 0x140918410 (RtlpGetNormalization.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 */

void NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&NormalizationListLock, 0LL);
}

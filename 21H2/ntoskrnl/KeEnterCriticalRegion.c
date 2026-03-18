/*
 * XREFs of KeEnterCriticalRegion @ 0x1403468F0
 * Callers:
 *     NtRenameKey @ 0x14090EF60 (NtRenameKey.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}

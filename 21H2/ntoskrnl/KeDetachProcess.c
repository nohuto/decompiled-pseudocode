/*
 * XREFs of KeDetachProcess @ 0x1402CCAB0
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x140207600 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0);
}

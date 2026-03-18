/*
 * XREFs of KeDetachProcess @ 0x14032B600
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((struct _KTHREAD *)&CurrentThread->600, 0);
}

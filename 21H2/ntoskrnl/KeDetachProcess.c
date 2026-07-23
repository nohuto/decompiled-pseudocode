/*
 * XREFs of KeDetachProcess @ 0x14024B110
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess(&CurrentThread->600, 0LL);
}

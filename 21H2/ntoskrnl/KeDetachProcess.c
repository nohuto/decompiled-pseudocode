/*
 * XREFs of KeDetachProcess @ 0x140259B00
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess(&CurrentThread->600, 0LL);
}

/*
 * XREFs of KeDetachProcess @ 0x14035AA90
 * Callers:
 *     <none>
 * Callees:
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
 */

void KeDetachProcess(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcStateIndex )
    KiDetachProcess((__int64 *)&CurrentThread->600, 0LL);
}

/*
 * XREFs of KiExecuteDpcDelegate @ 0x1403C6DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAttachProcess @ 0x140252530 (KeAttachProcess.c)
 *     KiRetireDpcList @ 0x1402A8980 (KiRetireDpcList.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 */

void __noreturn KiExecuteDpcDelegate()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPRCB *CurrentPrcb; // rbx

  CurrentThread = KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  KeAttachProcess(PsInitialSystemProcess);
  while ( 1 )
  {
    _disable();
    _InterlockedAnd16((volatile signed __int16 *)&CurrentPrcb->13244, 0xFF7Fu);
    KiRetireDpcList((__int64)CurrentPrcb);
    CurrentPrcb->PrcbFlags.PrcbFlags &= ~0x1000u;
    _enable();
    CurrentThread->WaitIrql = 2;
    KiSwapThread((__int64)CurrentThread, (__int64)CurrentPrcb, 0LL);
  }
}

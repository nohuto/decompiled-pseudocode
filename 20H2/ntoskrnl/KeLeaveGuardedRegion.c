/*
 * XREFs of KeLeaveGuardedRegion @ 0x1402ED9F0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 */

void KeLeaveGuardedRegion(void)
{
  __int64 v0; // rcx
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v0);
  }
}

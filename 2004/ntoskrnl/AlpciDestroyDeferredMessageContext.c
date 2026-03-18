/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x1405F8590
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall AlpciDestroyDeferredMessageContext(struct _DMA_ADAPTER **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v3; // rcx
  struct _DMA_ADAPTER *v4; // rcx
  struct _KTHREAD *v5; // rax
  $C774EFD68449142D8271B1EC1EB7FB26 *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *a1;
  if ( v3 )
  {
    HalPutDmaAdapter(v3);
    *a1 = 0LL;
  }
  v4 = a1[1];
  if ( v4 )
  {
    HalPutDmaAdapter(v4);
    a1[1] = 0LL;
  }
  v5 = KeGetCurrentThread();
  if ( v5->KernelApcDisable++ == -1 )
  {
    v7 = &v5->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != v7 && !v5->SpecialApcDisable )
      LOBYTE(v5) = KiCheckForKernelApcDelivery((__int64)v7);
  }
  return (char)v5;
}

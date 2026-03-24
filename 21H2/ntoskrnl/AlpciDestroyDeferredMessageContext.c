/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x1405E4110
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

char __fastcall AlpciDestroyDeferredMessageContext(struct _DMA_ADAPTER **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v3; // rcx
  struct _DMA_ADAPTER *v4; // rcx
  struct _KTHREAD *v5; // rax
  $C459BD0D405E8E46662177FB3D0A143F *v7; // rcx

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
    if ( ($C459BD0D405E8E46662177FB3D0A143F *)v7->ApcState.ApcListHead[0].Flink != v7 && !v5->SpecialApcDisable )
      LOBYTE(v5) = KiCheckForKernelApcDelivery((__int64)v7);
  }
  return (char)v5;
}

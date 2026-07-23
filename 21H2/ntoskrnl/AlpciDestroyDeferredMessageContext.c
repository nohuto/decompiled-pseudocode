/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x1406D3870
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall AlpciDestroyDeferredMessageContext(struct _DMA_ADAPTER **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v3; // rcx
  struct _DMA_ADAPTER *v4; // rcx
  struct _KTHREAD *v5; // rax
  bool v6; // zf

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
  v6 = v5->KernelApcDisable++ == -1;
  if ( v6
    && ($C459BD0D405E8E46662177FB3D0A143F *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    LOBYTE(v5) = KiCheckForKernelApcDelivery();
  }
  return (char)v5;
}

/*
 * XREFs of AlpciDestroyDeferredMessageContext @ 0x14062D5D0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall AlpciDestroyDeferredMessageContext(struct _DMA_ADAPTER **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _DMA_ADAPTER *v6; // rcx
  struct _DMA_ADAPTER *v7; // rcx
  struct _KTHREAD *v8; // rax
  $C774EFD68449142D8271B1EC1EB7FB26 *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = *a1;
  if ( v6 )
  {
    HalPutDmaAdapter(v6);
    *a1 = 0LL;
  }
  v7 = a1[1];
  if ( v7 )
  {
    HalPutDmaAdapter(v7);
    a1[1] = 0LL;
  }
  v8 = KeGetCurrentThread();
  if ( v8->KernelApcDisable++ == -1 )
  {
    v10 = &v8->152;
    if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v10->ApcState.ApcListHead[0].Flink != v10 && !v8->SpecialApcDisable )
      LOBYTE(v8) = KiCheckForKernelApcDelivery((__int64)v10, a2, a3, a4);
  }
  return (char)v8;
}

/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x1406F1DEC
 * Callers:
 *     AlpcpCaptureAttributes @ 0x140686C00 (AlpcpCaptureAttributes.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     PsGetWorkOnBehalfThread @ 0x140296A80 (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x140296B28 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     IoThreadToProcess @ 0x140296BB0 (IoThreadToProcess.c)
 *     PoEnergyEstimationEnabled @ 0x140296BC0 (PoEnergyEstimationEnabled.c)
 */

__int64 __fastcall AlpcpCaptureWorkOnBehalfAttribute(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _DMA_ADAPTER *WorkOnBehalfThread; // rax
  struct _DMA_ADAPTER *v4; // rbx
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v8 = 0LL;
  WorkOnBehalfThread = (struct _DMA_ADAPTER *)PsGetWorkOnBehalfThread(CurrentThread, &v7);
  v4 = WorkOnBehalfThread;
  if ( WorkOnBehalfThread )
  {
    v5 = (__int64)WorkOnBehalfThread;
    goto LABEL_5;
  }
  if ( IoThreadToProcess(CurrentThread)[2].Affinity.Bitmap[18] || PoEnergyEstimationEnabled() )
  {
    v5 = (__int64)CurrentThread;
LABEL_5:
    PsEncodeThreadWorkOnBehalfTicket(v5, &v8);
  }
  if ( v7 )
    HalPutDmaAdapter(v4);
  *(_QWORD *)(a1 + 64) = v8;
  return 0LL;
}

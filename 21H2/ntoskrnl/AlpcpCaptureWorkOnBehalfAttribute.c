/*
 * XREFs of AlpcpCaptureWorkOnBehalfAttribute @ 0x140600D8C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     IoThreadToProcess @ 0x140224230 (IoThreadToProcess.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetWorkOnBehalfThread @ 0x1402A9F0C (PsGetWorkOnBehalfThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1402A9FB4 (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PoEnergyEstimationEnabled @ 0x1402AA040 (PoEnergyEstimationEnabled.c)
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

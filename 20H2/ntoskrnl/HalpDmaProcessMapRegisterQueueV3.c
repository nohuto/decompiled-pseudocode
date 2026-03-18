/*
 * XREFs of HalpDmaProcessMapRegisterQueueV3 @ 0x1404C4988
 * Callers:
 *     IoFreeMapRegistersV3 @ 0x1403A2414 (IoFreeMapRegistersV3.c)
 *     HalpGrowMapBufferWorker @ 0x1404B75A0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaDequeueAdapter @ 0x1404C5A28 (HalpDmaDequeueAdapter.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404C8C0C (HalpAllocateDmaResourcesInternal.c)
 */

struct _DMA_ADAPTER *__fastcall HalpDmaProcessMapRegisterQueueV3(__int64 a1, __int64 a2)
{
  char v2; // bl
  struct _DMA_ADAPTER *result; // rax

  v2 = a2;
  do
  {
    LOBYTE(a2) = v2;
    result = (struct _DMA_ADAPTER *)HalpDmaDequeueAdapter(a1, a2);
    if ( !result )
      break;
    result = (struct _DMA_ADAPTER *)HalpAllocateDmaResourcesInternal(result);
  }
  while ( (_BYTE)result );
  return result;
}

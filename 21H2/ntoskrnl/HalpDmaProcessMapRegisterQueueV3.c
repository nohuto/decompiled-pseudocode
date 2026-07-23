/*
 * XREFs of HalpDmaProcessMapRegisterQueueV3 @ 0x1404C6598
 * Callers:
 *     IoFreeMapRegistersV3 @ 0x1403A2E24 (IoFreeMapRegistersV3.c)
 *     HalpGrowMapBufferWorker @ 0x1404B91A0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaDequeueAdapter @ 0x1404C7638 (HalpDmaDequeueAdapter.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
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

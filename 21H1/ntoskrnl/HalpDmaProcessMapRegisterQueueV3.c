/*
 * XREFs of HalpDmaProcessMapRegisterQueueV3 @ 0x1404C0FF8
 * Callers:
 *     IoFreeMapRegistersV3 @ 0x14039F7B4 (IoFreeMapRegistersV3.c)
 *     HalpGrowMapBufferWorker @ 0x1404B39A0 (HalpGrowMapBufferWorker.c)
 * Callees:
 *     HalpDmaDequeueAdapter @ 0x1404C2098 (HalpDmaDequeueAdapter.c)
 *     HalpAllocateDmaResourcesInternal @ 0x1404C51FC (HalpAllocateDmaResourcesInternal.c)
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

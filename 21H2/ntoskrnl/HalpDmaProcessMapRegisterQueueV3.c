/*
 * XREFs of HalpDmaProcessMapRegisterQueueV3 @ 0x140512444
 * Callers:
 *     HalpGrowMapBufferWorker @ 0x140505810 (HalpGrowMapBufferWorker.c)
 *     IoFreeMapRegistersV3 @ 0x1405129C8 (IoFreeMapRegistersV3.c)
 * Callees:
 *     HalpDmaDequeueAdapter @ 0x140457308 (HalpDmaDequeueAdapter.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140517830 (HalpAllocateDmaResourcesInternal.c)
 */

__int64 *__fastcall HalpDmaProcessMapRegisterQueueV3(__int64 a1, char a2)
{
  __int64 *result; // rax

  do
  {
    result = HalpDmaDequeueAdapter(a1, a2);
    if ( !result )
      break;
    result = (__int64 *)HalpAllocateDmaResourcesInternal((PDMA_ADAPTER)result);
  }
  while ( (_BYTE)result );
  return result;
}

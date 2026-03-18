/*
 * XREFs of ExAllocatePool @ 0x140322560
 * Callers:
 *     VerifierExAllocatePool @ 0x1409D18D0 (VerifierExAllocatePool.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}

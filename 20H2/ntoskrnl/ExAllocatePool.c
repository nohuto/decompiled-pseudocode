/*
 * XREFs of ExAllocatePool @ 0x140330D00
 * Callers:
 *     VerifierExAllocatePool @ 0x1409D7900 (VerifierExAllocatePool.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePool(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}

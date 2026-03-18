/*
 * XREFs of ExAllocatePoolWithQuota @ 0x1405AE080
 * Callers:
 *     VerifierExAllocatePoolWithQuota @ 0x1409D1CF0 (VerifierExAllocatePoolWithQuota.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, 0x656E6F4Eu);
}

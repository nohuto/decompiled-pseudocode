/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x14090B354
 * Callers:
 *     PsCreateVsmEnclave @ 0x14090A4FC (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall PspVsmEnclaveHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x48457350u);
}

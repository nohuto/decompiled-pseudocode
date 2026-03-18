/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x14090A0A4
 * Callers:
 *     PsCreateVsmEnclave @ 0x14090924C (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402421D0 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall PspVsmEnclaveHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x48457350u);
}

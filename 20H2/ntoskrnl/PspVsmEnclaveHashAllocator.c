/*
 * XREFs of PspVsmEnclaveHashAllocator @ 0x140910F90
 * Callers:
 *     PsCreateVsmEnclave @ 0x140910138 (PsCreateVsmEnclave.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall PspVsmEnclaveHashAllocator(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x48457350u);
}

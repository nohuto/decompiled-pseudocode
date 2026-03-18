/*
 * XREFs of AuthzBasepMemAlloc @ 0x140340CAC
 * Callers:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140340B2C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140969240 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepMemAlloc(SIZE_T NumberOfBytes, __int64 a2, ULONG a3)
{
  return ExAllocatePoolWithTag((POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx), NumberOfBytes, a3);
}

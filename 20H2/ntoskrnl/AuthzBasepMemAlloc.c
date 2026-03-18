/*
 * XREFs of AuthzBasepMemAlloc @ 0x140311A5C
 * Callers:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403118DC (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140311928 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x14096F010 (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepMemAlloc(SIZE_T NumberOfBytes, __int64 a2, ULONG a3)
{
  return ExAllocatePoolWithTag((POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx), NumberOfBytes, a3);
}

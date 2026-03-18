/*
 * XREFs of AuthzBasepMemAlloc @ 0x1402199B0
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140218B60 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x14021984C (AuthzBasepUnicodeStringFromOperandValue.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140389ED0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A1A61C (AuthzBasepAllocateClaimCollectionNoLists.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall AuthzBasepMemAlloc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, a1, a3, a4);
}

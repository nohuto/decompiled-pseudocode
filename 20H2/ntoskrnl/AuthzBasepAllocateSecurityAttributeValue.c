/*
 * XREFs of AuthzBasepAllocateSecurityAttributeValue @ 0x1402E2C6C
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x1402E2574 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1402E2770 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AuthzBasepAllocateSecurityAttributeValue(unsigned int a1)
{
  PVOID PoolWithTag; // rax
  PVOID v2; // rbx

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)(KeGetCurrentIrql() < 2u ? PagedPool : NonPagedPoolNx),
                  a1 + 64LL,
                  0x74416553u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0x40uLL);
  return v2;
}

/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140969240
 * Callers:
 *     SepCreateClaimAttributes @ 0x14062F7C8 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140921848 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140340CAC (AuthzBasepMemAlloc.c)
 *     memset @ 0x14040A280 (memset.c)
 */

PVOID __fastcall AuthzBasepAllocateClaimCollectionNoLists(__int64 a1, __int64 a2)
{
  PVOID result; // rax
  PVOID v3; // rbx

  result = AuthzBasepMemAlloc(0x260uLL, a2, 0x74416553u);
  v3 = result;
  if ( result )
  {
    memset(result, 0, 0x260uLL);
    return v3;
  }
  return result;
}

/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x140967EA0
 * Callers:
 *     SepCreateClaimAttributes @ 0x140674008 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140920598 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140303EDC (AuthzBasepMemAlloc.c)
 *     memset @ 0x140408F80 (memset.c)
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

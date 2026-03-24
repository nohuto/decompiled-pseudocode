/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x14096C728
 * Callers:
 *     SepCreateClaimAttributes @ 0x1405DC724 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140925070 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1402B2D5C (AuthzBasepMemAlloc.c)
 *     memset @ 0x140414200 (memset.c)
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

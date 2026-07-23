/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x14096C908
 * Callers:
 *     SepCreateClaimAttributes @ 0x1406CBEA4 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409251D0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140230F0C (AuthzBasepMemAlloc.c)
 *     memset @ 0x140414300 (memset.c)
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

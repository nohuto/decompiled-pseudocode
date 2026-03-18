/*
 * XREFs of AuthzBasepAllocateClaimCollectionNoLists @ 0x14096F010
 * Callers:
 *     SepCreateClaimAttributes @ 0x1406A9F58 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409278A0 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140311A5C (AuthzBasepMemAlloc.c)
 *     memset @ 0x140411300 (memset.c)
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

/*
 * XREFs of SepReferenceLuidToIndexEntry @ 0x14033C660
 * Callers:
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406144FC (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepReferenceLuidToIndexEntry(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}

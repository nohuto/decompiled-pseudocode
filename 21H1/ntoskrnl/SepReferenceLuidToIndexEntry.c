/*
 * XREFs of SepReferenceLuidToIndexEntry @ 0x1402FFD60
 * Callers:
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406F78E8 (SepRefDerefLuidToIndexEntryIfNecessary.c)
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

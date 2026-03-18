/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406144FC
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x140614310 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x1402C4154 (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x14033C660 (SepReferenceLuidToIndexEntry.c)
 */

signed __int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return SepDereferenceLuidToIndexEntry(v2);
    else
      return SepReferenceLuidToIndexEntry(v2);
  }
  return result;
}

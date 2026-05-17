/*
 * XREFs of RtlpStackDbStackComparitor @ 0x180119D38
 * Callers:
 *     RtlStackDbStackAdd @ 0x180118B88 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x18011946C (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}

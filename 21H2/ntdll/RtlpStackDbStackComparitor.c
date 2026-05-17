/*
 * XREFs of RtlpStackDbStackComparitor @ 0x180119C60
 * Callers:
 *     RtlStackDbStackAdd @ 0x180118AB0 (RtlStackDbStackAdd.c)
 * Callees:
 *     RtlpStackDbEntryIsEqual @ 0x180119394 (RtlpStackDbEntryIsEqual.c)
 */

_BOOL8 __fastcall RtlpStackDbStackComparitor(__int64 a1, __int64 a2)
{
  return (unsigned int)RtlpStackDbEntryIsEqual(a1, a2) != 0;
}

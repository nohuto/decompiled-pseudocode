/*
 * XREFs of UserAddAtom @ 0x1C005E7B0
 * Callers:
 *     <none>
 * Callees:
 *     UserAddAtomToAtomTable @ 0x1C005E7CC (UserAddAtomToAtomTable.c)
 */

__int64 __fastcall UserAddAtom(__int64 a1, unsigned int a2)
{
  return UserAddAtomToAtomTable(a1, a1, a2);
}

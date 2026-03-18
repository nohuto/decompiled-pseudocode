/*
 * XREFs of UserDeleteAtom @ 0x1C006B420
 * Callers:
 *     <none>
 * Callees:
 *     UserDeleteAtomFromAtomTable @ 0x1C006B440 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall UserDeleteAtom(unsigned __int16 a1)
{
  return UserDeleteAtomFromAtomTable(UserAtomTableHandle, a1);
}

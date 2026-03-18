/*
 * XREFs of _EditionIsHotKey@8 @ 0x156049
 * Callers:
 *     <none>
 * Callees:
 *     _IsHotKey@8 @ 0xB1CD0 (_IsHotKey@8.c)
 */

BOOL __stdcall EditionIsHotKey(int a1, unsigned int a2)
{
  return IsHotKey(a1, a2) != 0;
}

/*
 * XREFs of _EditionUpdateModifiersForHotkey@8 @ 0xAC1D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall EditionUpdateModifiersForHotkey(int a1, int a2)
{
  int result; // eax

  if ( a1 )
    result = gfsRawModifiersForHotKey & ~a2;
  else
    result = a2 | gfsRawModifiersForHotKey;
  gfsRawModifiersForHotKey = result;
  return result;
}

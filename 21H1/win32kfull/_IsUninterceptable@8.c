/*
 * XREFs of _IsUninterceptable@8 @ 0xB17D0
 * Callers:
 *     _EditionKeyEventLLHook@48 @ 0x1292C (_EditionKeyEventLLHook@48.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     _IsHotKey@8 @ 0xB1CD0 (_IsHotKey@8.c)
 */

int IsUninterceptable()
{
  int result; // eax

  result = IsHotKey(gfsRawModifiersForHotKey);
  if ( !result || (*(_WORD *)(result + 14) & 0x800) == 0 )
    return 0;
  return result;
}

/*
 * XREFs of IsUninterceptable @ 0x1C0054B04
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C0045F20 (EditionKeyEventLLHook.c)
 *     xxxDoHotKeyStuff @ 0x1C0054B90 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsHotKey @ 0x1C0055160 (IsHotKey.c)
 */

__int64 IsUninterceptable()
{
  __int64 result; // rax

  result = IsHotKey((unsigned int)gfsRawModifiersForHotKey);
  if ( !result || (*(_WORD *)(result + 26) & 0x800) == 0 )
    return 0LL;
  return result;
}

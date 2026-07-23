/*
 * XREFs of BgkpAcquireConsole @ 0x1404FF908
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FF724 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1404FF840 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1404FF890 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1409F7340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F7410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F7460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F74F0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_140C113A8) != 0;
}

/*
 * XREFs of BgkpAcquireConsole @ 0x1404FDDE8
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FDC04 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1404FDD20 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1404FDD70 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1409F9340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F9410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F9460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F94F0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140C11258) != 0;
}

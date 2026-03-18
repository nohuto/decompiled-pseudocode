/*
 * XREFs of BgkpAcquireConsole @ 0x1404F9F08
 * Callers:
 *     BgkDisplayStringEx @ 0x1404F9D24 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1404F9E40 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1404F9E90 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1409F3340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F3410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F3460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F34F0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140C11228) != 0;
}

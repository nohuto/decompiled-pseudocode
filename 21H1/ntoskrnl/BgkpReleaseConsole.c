/*
 * XREFs of BgkpReleaseConsole @ 0x1404F9F54
 * Callers:
 *     BgkDisplayCharacter @ 0x1409F3340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F3410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F3460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F34F0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140C11228);
}

/*
 * XREFs of BgkpReleaseConsole @ 0x1404FDE34
 * Callers:
 *     BgkDisplayCharacter @ 0x1409F9340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F9410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F9460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F94F0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140C11258);
}

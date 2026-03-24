/*
 * XREFs of BgkpReleaseConsole @ 0x1404FF9D4
 * Callers:
 *     BgkDisplayCharacter @ 0x1409F6340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F6410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F6460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F64F0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140C113C8);
}

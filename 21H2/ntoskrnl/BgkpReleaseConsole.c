/*
 * XREFs of BgkpReleaseConsole @ 0x1404FF954
 * Callers:
 *     BgkDisplayCharacter @ 0x1409F7340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F7410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F7460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F74F0 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection(&stru_140C113A8);
}

/*
 * XREFs of BgkpAcquireConsole @ 0x1404FF988
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FF7A4 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1404FF8C0 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1404FF910 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1409F6340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F6410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F6460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F64F0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140C113C8) != 0;
}

/*
 * XREFs of BgkpAcquireConsole @ 0x1404FA558
 * Callers:
 *     BgkDisplayStringEx @ 0x1404FA374 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x1404FA490 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x1404FA4E0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x1409F3340 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x1409F3410 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x1409F3460 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x1409F34F0 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140C11238) != 0;
}

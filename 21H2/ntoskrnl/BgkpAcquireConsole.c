/*
 * XREFs of BgkpAcquireConsole @ 0x1405515F8
 * Callers:
 *     BgkDisplayStringEx @ 0x140551414 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x140551530 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x140551580 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140AB0670 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AB0740 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AB0790 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AB0820 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection(&stru_140C0B8C8) != 0;
}
